`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:52:56 05/27/2018 
// Design Name: 
// Module Name:    top 
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
module top(
	input clk,
	input rx,
	output tx,
	input reset,
	output[7:0] led
    );


	parameter TX_IDLE=2'b00;
	parameter TX_SEND=2'b01;
	parameter TX_WAIT=2'b10;
	
	//	wire uart_clk;
	wire rx_done;
	wire [7:0] rx_byte;
	reg [7:0] rx_buffer=8'd255;
	reg tx_send=0;
	reg [7:0] tx_buffer=8'd232;
	reg[1:0] tx_state = TX_IDLE;
	wire tx_ready;
	
	

//	// Instantiate the module
//	clock_divider #(8) clock_div_256 (
//		 .clk_in(clk), 
//		 .clk_out(uart_clk), 
//		 .reset(reset)
//		 );

	// Instantiate uart rx module
	uart_rx uart_rx_init (
		 .CLK(clk), 
		 .RX(rx), 
		 .RESET(reset), 
		 .RX_DONE(rx_done), 
		 .RX_DATA(rx_byte)
		 );
		 
	


  // Instantiate uart tx module
  uart_tx uart_tx_init (
    .SEND(tx_send), 
    .DATA(tx_buffer), 
    .CLK(clk), 
    .READY(tx_ready), 
    .TX(tx)
    );

	 
	always@(posedge clk)
	begin
		if(rx_done)
			rx_buffer <= rx_byte;
	end
	
	always@(posedge clk)
	begin
		case(tx_state)
			TX_IDLE:
				begin
					tx_buffer <= 8'd222;
					tx_send <= 1'b0;
					tx_state <= TX_SEND;
				end
			
			TX_SEND:
				begin
					tx_send <= 1'b1;
					tx_state <= TX_SEND;
				end
				
			TX_WAIT:
				begin
					if(tx_ready)
						begin
							tx_state <= TX_IDLE;
						end
					tx_send <= 1'b0;
				end
		endcase
	end

	assign led = rx_buffer;
endmodule
