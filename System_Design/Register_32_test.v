`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:00:26 06/16/2018
// Design Name:   Register_32
// Module Name:   E:Processor-Design-Project/System_Design/Register_32_test.v
// Project Name:  System_Design
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Register_32
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Register_32_test;

	// Inputs
	reg clk;
	reg [31:0] din;
	reg load;
	reg reset;

	// Outputs
	wire [31:0] dout;

	// Instantiate the Unit Under Test (UUT)
	Register_32 uut (
		.clk(clk), 
		.din(din), 
		.load(load), 
		.reset(reset), 
		.dout(dout)
	);
	
	always begin
		#5 clk = ~clk;
	end

	initial begin
		// Initialize Inputs
		clk = 0;
		din = 0;
		load = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		reset = 1;
		#10;
		reset = 0;
		#10;
		din = 32'd12323;
		load = 1;
		#10;
		load = 0;
		#20;
		$finish;
	end
      
endmodule

