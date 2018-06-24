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
	input tx_start,
	output [7:0] led
    );
	
	reg wea;
	reg[15:0] addra;
	reg z;
	reg[7:0] dina;
	wire[7:0] douta;
	
	wire rx_done;
	wire [7:0] rx_byte;
	reg tx_send;
	reg [7:0] tx_buffer;
	wire tx_ready;
	reg[7:0] led_buffer;
	
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

	
	parameter ADDR_MAX = 16'd65535;
	
	reg[4:0] state;
	
	wire clk_out;
	
	
	// Instantiate the clock divider module
	clock_divider clock_div (
    .clk_in(clk), 
    .clk_out(clk_out), 
    .reset(reset)
    );

	
	data_ram dram (
	  .clka(clk), // input clka
	  .rsta(reset), // input rsta
	  .wea(wea), // input [0 : 0] wea
	  .addra(addra), // input [15 : 0] addra
	  .dina(dina), // input [7 : 0] dina
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
					if(tx_start)
						state <= TX_START;
					else
						state <= CPU_WAIT;
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
	
	//assign led = led_buffer;
	assign led[4:0] = state;
	assign led[7:5] = addra[2:0];
endmodule
