`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:11:59 06/16/2018 
// Design Name: 
// Module Name:    CPU_Top 
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
module CPU_Top(
	input clk,
	input enable,
	input reset,
	output data_ram_we,
	output[15:0] addr_data_ram,
	output[7:0] din_data_ram,
	input[7:0] dout_data_ram,
	output inst_ram_we,
	output[9:0] addr_inst_ram,
	output[31:0] din_inst_ram,
	input[31:0] dout_inst_ram,
	output finish
    );
	 
	 wire z;
	 wire[31:0] BUS;
	 wire[8:0] reg_sel;
	 wire pc_inc;
	 wire[7:0] alu_sel;
	 wire[7:0] bus_sel;
	 wire[31:0] IR_OUT;
	 wire[31:0] PC_OUT;
	 wire[31:0] RI_OUT;
	 wire[31:0] BI_OUT;
	 wire[31:0] DI_OUT;
	 wire[31:0] S_OUT;
	 wire[31:0] C1_OUT;
	 wire[31:0] C2_OUT;
	 wire[31:0] AR_OUT;
	 wire[31:0] AC_OUT;
	 
	 // Instantiate the State_Machine
	State_Machine state_machine (
    .clk(clk), 
	 .enable(enable),
    .reset(reset), 
    .z(z), 
    .IR(IR_OUT), 
    .pc_inc(pc_inc), 
    .finish(finish), 
    .data_ram_we(data_ram_we), 
    .inst_ram_we(inst_ram_we), 
    .alu_sel(alu_sel), 
    .bus_sel(bus_sel), 
    .reg_sel(reg_sel)
    );
	 
	 
	 // IR
	Register_32 IR (
    .clk(clk), 
    .din(BUS), 
    .load(reg_sel[0]), 
    .reset(reset), 
    .dout(IR_OUT)
    );
	 
	  // DI
	Register_32 DI (
    .clk(clk), 
    .din(BUS), 
    .load(reg_sel[1]), 
    .reset(reset), 
    .dout(DI_OUT)
    );
	 
	 
	  // RI
	Register_32 RI (
    .clk(clk), 
    .din(BUS), 
    .load(reg_sel[2]), 
    .reset(reset), 
    .dout(RI_OUT)
    );
	 
	 
	  // BI
	Register_32 BI (
    .clk(clk), 
    .din(BUS), 
    .load(reg_sel[3]), 
    .reset(reset), 
    .dout(BI_OUT)
    );
	 
	 
	 
	  // S
	Register_32 S (
    .clk(clk), 
    .din(BUS), 
    .load(reg_sel[4]), 
    .reset(reset), 
    .dout(S_OUT)
    );
	 
	 
	  // C1
	Register_32 C1 (
    .clk(clk), 
    .din(BUS), 
    .load(reg_sel[5]), 
    .reset(reset), 
    .dout(C1_OUT)
    );
	 
	 
	  // C2
	Register_32 C2 (
    .clk(clk), 
    .din(BUS), 
    .load(reg_sel[6]), 
    .reset(reset), 
    .dout(C2_OUT)
    );
	 
	 
	  // AR
	Register_32 AR (
    .clk(clk), 
    .din(BUS), 
    .load(reg_sel[7]), 
    .reset(reset), 
    .dout(AR_OUT)
    );
	 
	 
	 // PC
	Counter_32 PC (
    .clk(clk), 
    .din(BUS), 
    .load(reg_sel[8]), 
    .reset(reset), 
    .inc(pc_inc), 
    .dout(PC_OUT)
    );
	
	
	 // ALU
	ALU_32 ALU (
    .clk(clk), 
    .B(BUS), 
    .alu_instruction(alu_sel), 
    .reset(reset), 
    .A(AC_OUT), 
    .z(z)
    );

	 
	 
	 // Mux for outpitting registers to BUS
	MUX_BUS Mux_Bus (
    .select(bus_sel), 
    .data_ram(dout_data_ram), 
    .instruction_ram(dout_inst_ram), 
    .DI(DI_OUT), 
    .RI(RI_OUT), 
    .BI(BI_OUT), 
    .S(S_OUT), 
    .C1(C1_OUT), 
    .C2(C2_OUT), 
    .AR(AR_OUT), 
    .AC(AC_OUT), 
	 .PC(PC_OUT),
	 .IR(IR_OUT),
    .BUS(BUS)
    );

	 assign din_data_ram = BUS[7:0];
	 assign din_inst_ram = BUS;
	 
	 assign addr_data_ram = AR_OUT[15:0];
	 assign addr_inst_ram = PC_OUT[9:0];
endmodule
