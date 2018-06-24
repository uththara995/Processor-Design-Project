`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:30:10 05/27/2018 
// Design Name: 
// Module Name:    clock_divider 
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
module clock_divider
	#(parameter DIV = 2)
	(
		input	clk_in,
		output clk_out,
		input reset
    );
	 parameter SUB_DIV = DIV/2;
	 reg [SUB_DIV:0] counter = 0;
	 
	 always@(posedge clk_in)
	 begin
		if(reset)
			counter <= 0;
		else
			counter <= counter + 1;
	 end
	 
	 assign clk_out = counter[SUB_DIV];

endmodule
