`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:51:24 06/27/2018
// Design Name:   State_Machine
// Module Name:   C:/Users/DilinDampahalage/Desktop/Processor-Design-Project/System_Design/test.v
// Project Name:  System_Design
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: State_Machine
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	reg reset;
	reg enable;
	reg z;
	reg [31:0] IR;

	// Outputs
	wire pc_inc;
	wire finish;
	wire data_ram_we;
	wire inst_ram_we;
	wire [7:0] alu_sel;
	wire [7:0] bus_sel;
	wire [8:0] reg_sel;

	// Instantiate the Unit Under Test (UUT)
	State_Machine uut (
		.clk(clk), 
		.reset(reset), 
		.enable(enable), 
		.z(z), 
		.IR(IR), 
		.pc_inc(pc_inc), 
		.finish(finish), 
		.data_ram_we(data_ram_we), 
		.inst_ram_we(inst_ram_we), 
		.alu_sel(alu_sel), 
		.bus_sel(bus_sel), 
		.reg_sel(reg_sel)
	);

	always #5 clk=~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		enable = 1;
		z = 0;
		IR = 32'd8;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

