`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:43:00 06/16/2018 
// Design Name: 
// Module Name:    MUX_BUS 
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
module MUX_BUS(
	input[7:0] select,
	input[7:0] data_ram,
	input[31:0] instruction_ram,
	input[31:0] DI,
	input[31:0] RI,
	input[31:0] BI,
	input[31:0] S,
	input[31:0] C1,
	input[31:0] C2,
	input[31:0] AR,
	input[31:0] AC,
	input[31:0] PC,
	input[31:0] IR,
	output reg[31:0] BUS
    );
	 
	 parameter SEL_DRAM = 8'd0;
	 parameter SEL_IRAM = 8'd1;
	 parameter SEL_DI = 8'd2;
	 parameter SEL_RI = 8'd3;
	 parameter SEL_BI = 8'd4;
	 parameter SEL_S = 8'd5;
	 parameter SEL_C1 = 8'd6;
	 parameter SEL_C2 = 8'd7;
	 parameter SEL_AR = 8'd8;
	 parameter SEL_AC = 8'd9;
	 parameter SEL_PC = 8'd10;
	 parameter SEL_IR = 8'd11;
	 
	 
	 
	 always@(select or data_ram or instruction_ram or DI or RI or BI or S or
	 C1 or C2 or AR or AC or PC or IR) begin
		case(select) 
			SEL_DRAM: BUS <= {24'd0, data_ram};
			SEL_IRAM: BUS <= instruction_ram;
			SEL_DI: BUS <= DI;
			SEL_RI: BUS <= RI;
			SEL_BI: BUS <= BI;
			SEL_S: BUS <= S;
			SEL_C1: BUS <= C1;
			SEL_C2: BUS <= C2;
			SEL_AR: BUS <= AR;
			SEL_AC: BUS <= AC;
			SEL_PC: BUS <= PC;
			SEL_IR: BUS <= IR;
			default: BUS <= instruction_ram;
		endcase
	 end


endmodule
