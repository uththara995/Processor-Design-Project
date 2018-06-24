`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:16:45 06/16/2018 
// Design Name: 
// Module Name:    ALU_32 
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
module ALU_32(
	input clk,
	input[31:0] B,
	input[7:0] alu_instruction,
	input reset,
	output[31:0] A,
	output z
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
	 
	 reg[31:0] buffer = 0;
	 
	 always@(posedge clk) begin
		if(reset) begin
			buffer <= 0;
		end
		else if(alu_instruction==ALU_CLEAR) begin
			buffer <= 0;
		end
		else if(alu_instruction==ALU_LOAD) begin
			buffer <= B;
		end
		else if(alu_instruction==ALU_INC) begin
			buffer <= buffer + 1;
		end
		else if(alu_instruction==ALU_ADD) begin
			buffer <= buffer + B;
		end
		else if(alu_instruction==ALU_SUB) begin
			buffer <= buffer - B;
		end
		else if(alu_instruction==ALU_MUL2) begin
			buffer <= buffer << 1;
		end
		else if(alu_instruction==ALU_MUL4) begin
			buffer <= buffer << 2;
		end
		else if(alu_instruction==ALU_DIV16) begin
			buffer <= buffer >> 4;
		end
	 end
	 
	 assign A = buffer;
	 assign z = buffer==0 ? 1'b1 : 1'b0;
endmodule
