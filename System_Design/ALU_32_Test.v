`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:02:45 06/16/2018
// Design Name:   ALU_32
// Module Name:   C:/Users/DilinDampahalage/Desktop/Processor-Design/System_Design/ALU_32_Test.v
// Project Name:  System_Design
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU_32
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_32_Test;

	// Inputs
	reg clk;
	reg [31:0] B;
	reg [7:0] alu_instruction;
	reg reset;

	// Outputs
	wire [31:0] A;
	wire z;

	// Instantiate the Unit Under Test (UUT)
	ALU_32 uut (
		.clk(clk), 
		.B(B), 
		.alu_instruction(alu_instruction), 
		.reset(reset), 
		.A(A), 
		.z(z)
	);
	
	 parameter ALU_CLEAR = 8'd0;
	 parameter ALU_INC = 8'd1;
	 parameter ALU_DEC = 8'd2;
	 parameter ALU_ADD = 8'd3;
	 parameter ALU_SUB = 8'd4;
	 parameter ALU_MUL2 = 8'd5;
	 parameter ALU_MUL4 = 8'd6;
	 parameter ALU_DIV16 = 8'd7;
	 parameter ALU_LOAD = 8'd8;
	 parameter ALU_NOP = 8'd9;

	always begin
		#5 clk = ~clk;
	end

	initial begin
		// Initialize Inputs
		clk = 0;
		B = 0;
		alu_instruction = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		B = 32'd255;
		alu_instruction = ALU_LOAD;
		#10;
		B = 32'd456;
		alu_instruction = ALU_DIV16;
		#10;
		alu_instruction = ALU_NOP;
		#50;
		$finish;

	end
      
endmodule

