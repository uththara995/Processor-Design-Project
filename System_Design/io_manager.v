`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:09:01 05/27/2018 
// Design Name: 
// Module Name:    io_manager 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module io_manager(
	input clk,
	input rx,
	output tx,
	input reset,
	output [7:0] led
    );
	
	reg wea=0;
	reg[15:0] addra=0;
	reg z=0;
	reg[7:0] dina=0;
	wire[7:0] douta;
	
	
	wire cpu_finish;
	reg cpu_enable=0;
	wire[15:0] cpu_addra_data_ram;
	wire[7:0] cpu_dina_data_ram;
	wire cpu_wea_data_ram;
	wire[9:0] cpu_addra_inst_ram;
	wire[31:0] cpu_dina_inst_ram;
	wire[31:0] cpu_douta_inst_ram;
	wire cpu_wea_inst_ram;
	
	wire rx_done;
	wire [7:0] rx_byte;
	reg tx_send=0;
	reg [7:0] tx_buffer=0;
	wire tx_ready;
	reg[7:0] led_buffer;
	
	wire[15:0] addra_data_ram;
	wire[7:0] dina_data_ram;
	wire wea_data_ram;
	
	assign addra_data_ram = cpu_enable ? cpu_addra_data_ram : addra;
	assign dina_data_ram = cpu_enable ? cpu_dina_data_ram : dina;
	assign wea_data_ram = cpu_enable ? cpu_wea_data_ram : wea;
	
	parameter RESET=5'd0;
	parameter RX_DONE=5'd1;
	parameter RX_WAIT1=5'd2;
	parameter RX_WAIT2=5'd3;
	parameter RX_WAIT3=5'd4;
	parameter RX_NEXT=5'd5;
	parameter CPU_WAIT=5'd6;
	parameter TX_START=5'd7;
	parameter TX_LOAD1=5'd8;
	parameter TX_LOAD2=5'd9;
	parameter TX_SEND1=5'd10;
	parameter TX_SEND2=5'd11;
	parameter TX_WAIT=5'd12;
	parameter TX_NEXT=5'd13;
	
	reg[4:0] state;
	
	wire clk_out;
	
	
	// Instantiate the clock divider module
	clock_divider clock_div (
    .clk_in(clk), 
    .clk_out(clk_out), 
    .reset(reset)
    );

	
	// data ram
	data_ram dram (
		.clka(clk_out), // input clka
		.wea(wea_data_ram), // input [0 : 0] wea
		.addra(addra_data_ram), // input [15 : 0] addra
		.dina(dina_data_ram), // input [7 : 0] dina
		.douta(douta) // output [7 : 0] douta
	);
		
	
	
	// Instantiate uart rx module
	uart_rx uart_rx_init (
	 .CLK(clk_out), 
	 .RX(rx), 
	 .RESET(reset), 
	 .RX_DONE(rx_done), 
	 .RX_DATA(rx_byte)
	 );
		 
	
  // Instantiate uart tx module
  uart_tx uart_tx_init (
    .SEND(tx_send), 
    .DATA(tx_buffer), 
    .CLK(clk_out), 
    .READY(tx_ready), 
    .TX(tx)
    );
	 
	 
	 // Instruction ram
	 instruction_ram inst_ram (
	  .clka(clk_out), // input clka
	  .wea(cpu_wea_inst_ram), // input [0 : 0] wea
	  .addra(cpu_addra_inst_ram), // input [9 : 0] addra
	  .dina(cpu_dina_inst_ram), // input [31 : 0] dina
	  .douta(cpu_douta_inst_ram) // output [31 : 0] douta
	);
	 
	 
	 // CPU
	CPU_Top cpu (
    .clk(clk_out), 
    .enable(cpu_enable), 
    .reset(reset), 
    .data_ram_we(cpu_wea_data_ram), 
    .addr_data_ram(cpu_addra_data_ram), 
    .din_data_ram(cpu_dina_data_ram), 
    .dout_data_ram(douta), 
    .inst_ram_we(cpu_wea_inst_ram), 
    .addr_inst_ram(cpu_addra_inst_ram), 
    .din_inst_ram(cpu_dina_inst_ram), 
    .dout_inst_ram(cpu_douta_inst_ram), 
    .finish(cpu_finish)
    ); 
	 
	initial begin
		state <= RESET;
	end
	 
	always@(posedge clk_out)
	begin
		case(state)
			RESET:
				begin
					addra <= 16'd0;
					led_buffer <= 8'd0;
					wea <= 0;
					tx_send <= 0;
					state <= RX_DONE;
					cpu_enable <= 1'b0;
					z <= 0;
				end
				
			RX_DONE:
				begin
					if(rx_done)
						begin
							dina <= rx_byte;
							led_buffer <= rx_byte;
							state <= RX_WAIT1;
						end
					else
						state <= RX_DONE;
				end
				
			RX_WAIT1:
				begin
					wea <= 1;
					state <= RX_WAIT2;
				end
				
			RX_WAIT2:
				begin
					wea <= 0;
					state <= RX_WAIT3;
				end
				
			RX_WAIT3:
				begin
					{z,addra} <= addra + 1;
					state <= RX_NEXT;
				end
				
			RX_NEXT:
				begin
					if(z)
						state <= CPU_WAIT;
					else
						state <= RX_DONE;
				end
				
			CPU_WAIT:
				begin
					led_buffer <= 8'd255;
					z <= 0;
					if(cpu_finish) begin
						state <= TX_START;
						cpu_enable <= 1'b0;
					end
					else begin
						state <= CPU_WAIT;
						cpu_enable <= 1'b1;
					end
				end
				
				
			TX_START:
				begin
					addra <= 16'd0;
					led_buffer <= 8'd0;
					state <= TX_LOAD1;
				end
				
			TX_LOAD1:
				begin
					state <= TX_LOAD2;
				end
				
			TX_LOAD2:
				begin
					tx_buffer <= douta;
					led_buffer <= douta;
					state <= TX_SEND1;
				end
				
			TX_SEND1:
				begin
					tx_send <= 1;
					state <= TX_SEND2;
				end
				
			TX_SEND2:
				begin
					tx_send <= 0;
					state <= TX_WAIT;
				end
				
			TX_WAIT:
				begin
					if(tx_ready)
						begin
							state <= TX_NEXT;
							{z,addra} <= addra + 1;
						end
					else
						state <= TX_WAIT;
				end
				
			TX_NEXT:
				begin
					if(z)
						state <= RESET;
					else
						state <= TX_LOAD1;
				end
			
			default: state <= RESET;
		endcase
	end
	
	assign led = led_buffer;
endmodule
