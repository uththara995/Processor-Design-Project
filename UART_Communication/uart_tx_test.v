`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:01:25 06/02/2018
// Design Name:   uart_tx
// Module Name:   C:/Users/DilinDampahalage/Desktop/Processor-Design/UART_Communication/uart_tx_test.v
// Project Name:  UART_Communication
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: uart_tx
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module uart_tx_test;

	// Inputs
	reg SEND;
	reg [7:0] DATA;
	reg CLK;

	// Outputs
	wire READY;
	wire TX;

	// Instantiate the Unit Under Test (UUT)
	uart_tx uut (
		.SEND(SEND), 
		.DATA(DATA), 
		.CLK(CLK), 
		.READY(READY), 
		.TX(TX)
	);
	
	always #5 CLK=~CLK;

	initial begin
		// Initialize Inputs
		SEND = 0;
		DATA = 0;
		CLK = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		DATA <= 8;
		SEND = 1;
		#10;
		SEND=0;
		#10;
		#100000;
		//$finish;

	end
      
endmodule

