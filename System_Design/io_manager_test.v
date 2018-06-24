`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   06:20:18 06/23/2018
// Design Name:   io_manager
// Module Name:   C:/Users/DilinDampahalage/Desktop/Processor-Design/System_Design/io_manager_test.v
// Project Name:  System_Design
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: io_manager
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module io_manager_test;

	// Inputs
	reg clk;
	reg rx;
	reg reset;

	// Outputs
	wire tx;
	wire [7:0] led;

	// Instantiate the Unit Under Test (UUT)
	io_manager uut (
		.clk(clk), 
		.rx(rx), 
		.tx(tx), 
		.reset(reset), 
		.led(led)
	);

	always begin
		#5 clk = ~clk;
	end
	
	initial begin
		// Initialize Inputs
		clk = 0;
		rx = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#5000;
		//$finish;
		
	end
      
endmodule

