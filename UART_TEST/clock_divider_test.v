`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:36:57 05/27/2018
// Design Name:   clock_divider
// Module Name:   D:/verilog/UART_TEST/clock_divider_test.v
// Project Name:  UART_TEST
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clock_divider
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module clock_divider_test;

	// Inputs
	reg clk_in;
	wire clk_out;
	reg reset;
	
	parameter PERIOD = 10;

	// Instantiate the Unit Under Test (UUT)
	clock_divider #(2) uut (
		.clk_in(clk_in), 
		.clk_out(clk_out), 
		.reset(reset)
	);

	// Generate clock signal
	always 
		#(PERIOD) clk_in = ~clk_in;
		
	initial begin
		// Initialize Inputs
		clk_in = 0;
		reset = 1;
		
		#(2*PERIOD);
        
		// Add stimulus here
		reset = 0;
		#(100*PERIOD);

		$finish;
	end
      
endmodule

