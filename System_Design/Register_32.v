`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:53:26 06/16/2018 
// Design Name: 
// Module Name:    Register_32 
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
module Register_32(
	input clk,
	input[31:0] din,
	input load,
	input reset,
	output[31:0] dout
    );

	reg [31:0] buffer = 0;
	
	always@(posedge clk) begin
		if (reset) begin
			buffer <= 32'd0;
		end
		else if (load) begin
			buffer <= din;
		end
	end
	
	assign dout = buffer;

endmodule
