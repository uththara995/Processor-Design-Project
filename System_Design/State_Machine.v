`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:11:52 06/16/2018 
// Design Name: 
// Module Name:    State_Machine 
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
module State_Machine(
	input clk,
	input reset,
	input enable,
	input z, // alu z flag
	input [31:0] IR, // instruction reg
	output reg pc_inc=0,
	output reg finish=0,
	output reg data_ram_we, // data ram write enable
	output reg inst_ram_we, // instruction ram write enable
	output reg [7:0] alu_sel,
	output reg [7:0] bus_sel,
	output reg [8:0] reg_sel
    );
	 
	/** --- BUS prameters --- **/
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
	/** --- BUS prameters end --- **/
	

	/** --- ALU prameters --- **/
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
	/** --- ALU prameters end --- **/
	
	
	/** --- REG prameters --- **/
	parameter REG_NO = 9'd0;
	parameter REG_IR = 9'd1;
	parameter REG_DI = 9'd2;
	parameter REG_RI = 9'd4;
	parameter REG_BI = 9'd8;
	parameter REG_S = 9'd16;
	parameter REG_C1 = 9'd32;
	parameter REG_C2 = 9'd64;
	parameter REG_AR = 9'd128;
	parameter REG_PC = 9'd256;
	/** --- REG prameters end --- **/
	
	/** --- Microinstructions --- **/
	parameter NOP1 = 32'd0;
	
	parameter FETCH1 = 32'd1;
	parameter FETCH2 = 32'd2;
	parameter FETCH3 = 32'd3;
	parameter FETCH4 = 32'd4;
	
	parameter END1 = 32'd5;
	
	parameter LDAC1 = 32'd6;
	parameter LDAC2 = 32'd7;
	
	parameter CLAC1 = 32'd8;
	
	parameter INCAC1 = 32'd9;
	
	parameter DECAC1 = 32'd10;
	
	parameter MVAC_DI1 = 32'd11;
	
	parameter MVAC_RI1 = 32'd12;
	
	parameter MVAC_BI1 = 32'd13;
	
	parameter MVAC_S1 = 32'd14;
	
	parameter MVAC_C11 = 32'd15;
	
	parameter MVAC_C21 = 32'd16;
	
	parameter MVAC_AR1 = 32'd17;
	
	parameter MVDI1 = 32'd18;
	
	parameter MVRI1 = 32'd19;
	
	parameter MVBI1 = 32'd20;
	
	parameter MVS1 = 32'd21;
	
	parameter MVC11 = 32'd22;
	
	parameter MVC21 = 32'd23;
	
	parameter MVAR1 = 32'd24;

	parameter READ1 = 32'd25;
	
	parameter READ2 = 32'd26;
	
	parameter WRITE1 = 32'd27;
	
	parameter WRITE2 = 32'd28;
	
	parameter ADD_DI1 = 32'd29;
	
	parameter ADD_RI1 = 32'd30;
	
	parameter ADD_BI1 = 32'd31;
	
	parameter ADD_S1 = 32'd32;
	
	parameter ADD_C11 = 32'd33;
	
	parameter ADD_C21 = 32'd34;
	
	parameter ADD_AR1 = 32'd35;
	
	parameter SUB_DI1 = 32'd36;
	
	parameter SUB_RI1 = 32'd37;
	
	parameter SUB_BI1 = 32'd38;
	
	parameter SUB_S1 = 32'd39;
	
	parameter SUB_C11 = 32'd40;
	
	parameter SUB_C21 = 32'd41;
	
	parameter SUB_AR1 = 32'd42;

	parameter MUL21 = 32'd43;
	
	parameter MUL41 = 32'd44;
	
	parameter DIV161 = 32'd45;
	
	parameter JMPZ1 = 32'd46;
	
	parameter JMPZY1 = 32'd47;
	
	parameter JMPZN1 = 32'd48;
	
	parameter JMPNZ1 = 32'd49;

	/** --- Microinstructions end --- **/
	
	reg [31:0] prev_state = NOP1;
	reg [31:0] next_state = NOP1;
	
	always @ (negedge clk) begin
		if(reset==0)
			prev_state <= next_state;
		else
			prev_state <= FETCH1;
	end
	
	always @ (IR or prev_state or z or enable) begin
		if(enable) begin
			case(prev_state)
		
				FETCH1: begin // BUS <= IRAM
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH2;
				end
				
				FETCH2: begin // IR <= BUS
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_IR;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH3;
				end
				
				FETCH3: begin // PC <= PC + 1
					pc_inc <= 1;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH4;
				end
				
				FETCH4: begin // next_state <= IR
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= IR;
				end
				
				
				END1: begin // next_state <= END1
					pc_inc <= 0;
					finish <= 1;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= END1;
				end
				
				LDAC1: begin // PC <= PC + 1
					pc_inc <= 1;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= LDAC2;
				end
				
				LDAC2: begin // AC <= IRAM
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_LOAD;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				CLAC1: begin // AC <= 0
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_CLEAR;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				INCAC1: begin // AC <= AC + 1
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_INC;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				DECAC1: begin // AC <= AC - 1
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_DEC;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				MVAC_DI1: begin // DI <= AC
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_AC;
					reg_sel <= REG_DI;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				MVAC_RI1: begin // RI <= AC
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_AC;
					reg_sel <= REG_RI;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				MVAC_BI1: begin // BI <= AC
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_AC;
					reg_sel <= REG_BI;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				MVAC_S1: begin // S <= AC
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_AC;
					reg_sel <= REG_S;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				MVAC_C11: begin // C1 <= AC
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_AC;
					reg_sel <= REG_C1;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				MVAC_C21: begin // C2 <= AC
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_AC;
					reg_sel <= REG_C2;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				MVAC_AR1: begin // AR <= AC
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_AC;
					reg_sel <= REG_AR;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				MVDI1: begin // AC <= DI
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_LOAD;
					bus_sel <= SEL_DI;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				MVRI1: begin // AC <= RI
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_LOAD;
					bus_sel <= SEL_RI;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				MVBI1: begin // AC <= BI
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_LOAD;
					bus_sel <= SEL_BI;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				MVS1: begin // AC <= S
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_LOAD;
					bus_sel <= SEL_S;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				MVC11: begin // AC <= C1
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_LOAD;
					bus_sel <= SEL_C1;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				MVC21: begin // AC <= C2
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_LOAD;
					bus_sel <= SEL_C2;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				MVAR1: begin // AC <= AR
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_LOAD;
					bus_sel <= SEL_AR;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				READ1: begin // BUS <= DRAM; READ
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_DRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= READ2;
				end
				
				READ2: begin // AC <= BUS
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_LOAD;
					bus_sel <= SEL_DRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				WRITE1: begin // BUS <= AC; WRITE
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_AC;
					reg_sel <= REG_NO;
					data_ram_we <= 1;
					inst_ram_we <= 0;
					next_state <= WRITE2;
				end
				
				WRITE2: begin // Wait for 1 cycle
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_DRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				ADD_DI1: begin // AC <= AC + DI
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_ADD;
					bus_sel <= SEL_DI;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				ADD_RI1: begin // AC <= AC + RI
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_ADD;
					bus_sel <= SEL_RI;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				ADD_BI1: begin // AC <= AC + BI
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_ADD;
					bus_sel <= SEL_BI;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				ADD_S1: begin // AC <= AC + S
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_ADD;
					bus_sel <= SEL_S;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				ADD_C11: begin // AC <= AC + C1
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_ADD;
					bus_sel <= SEL_C1;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				ADD_C21: begin // AC <= AC + C2
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_ADD;
					bus_sel <= SEL_C2;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				ADD_AR1: begin // AC <= AC + AR
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_ADD;
					bus_sel <= SEL_AR;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				SUB_DI1: begin // AC <= AC - DI
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_SUB;
					bus_sel <= SEL_DI;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				SUB_RI1: begin // AC <= AC - RI
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_SUB;
					bus_sel <= SEL_RI;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				SUB_BI1: begin // AC <= AC - BI
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_SUB;
					bus_sel <= SEL_BI;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				SUB_S1: begin // AC <= AC - S
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_SUB;
					bus_sel <= SEL_S;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				SUB_C11: begin // AC <= AC - C1
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_SUB;
					bus_sel <= SEL_C1;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				SUB_C21: begin // AC <= AC - C2
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_SUB;
					bus_sel <= SEL_C2;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				SUB_AR1: begin // AC <= AC - AR
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_SUB;
					bus_sel <= SEL_AR;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				MUL21: begin // AC <= AC * 2
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_MUL2;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				MUL41: begin // AC <= AC * 4
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_MUL4;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				DIV161: begin // AC <= AC / 16
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_DIV16;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				MUL21: begin // AC <= AC * 2
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_MUL2;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				JMPZ1: begin // PC <= PC + 1
					pc_inc <= 1;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					if(z)
						next_state <= JMPZY1;
					else
						next_state <= JMPZN1;
				end
				
				JMPZY1: begin // PC <= IRAM[PC]
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_PC;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				JMPZN1: begin // Do nothing
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
				JMPNZ1: begin // PC <= PC + 1
					pc_inc <= 1;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					if(z)
						next_state <= JMPZN1;
					else
						next_state <= JMPZY1;
				end
				
				default: begin // next_state <= FETCH1
					pc_inc <= 0;
					finish <= 0;
					alu_sel <= ALU_NOP;
					bus_sel <= SEL_IRAM;
					reg_sel <= REG_NO;
					data_ram_we <= 0;
					inst_ram_we <= 0;
					next_state <= FETCH1;
				end
				
			endcase
		end
		else begin
			next_state <= NOP1;
		end
	end

endmodule
