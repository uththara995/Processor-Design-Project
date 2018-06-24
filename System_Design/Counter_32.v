`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:10:40 06/16/2018 
// Design Name: 
// Module Name:    Counter_32 
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

module Counter_32(
	input clk,
	input[31:0] din,
	input load,
	input reset,
	input inc,
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
		else if (inc) begin
			buffer <= buffer + 1;
		end
	end
	
	assign dout = buffer;

endmodule

