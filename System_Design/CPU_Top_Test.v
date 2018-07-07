`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:49:16 06/18/2018
// Design Name:   CPU_Top
// Module Name:   E:Processor-Design-Project/System_Design/CPU_Top_Test.v
// Project Name:  System_Design
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CPU_Top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CPU_Top_Test;

	// Inputs
	reg clk_in;
	reg enable;
	reg reset;
	reg [7:0] dout_data_ram;
	reg [31:0] dout_inst_ram;

	// Outputs
	wire data_ram_we;
	wire [15:0] addr_data_ram;
	wire [7:0] din_data_ram;
	wire inst_ram_we;
	wire [9:0] addr_inst_ram;
	wire [31:0] din_inst_ram;
	wire finish;

	// Instantiate the Unit Under Test (UUT)
	CPU_Top uut (
		.clk_in(clk_in), 
		.enable(enable), 
		.reset(reset), 
		.data_ram_we(data_ram_we), 
		.addr_data_ram(addr_data_ram), 
		.din_data_ram(din_data_ram), 
		.dout_data_ram(dout_data_ram), 
		.inst_ram_we(inst_ram_we), 
		.addr_inst_ram(addr_inst_ram), 
		.din_inst_ram(din_inst_ram), 
		.dout_inst_ram(dout_inst_ram), 
		.finish(finish)
	);

	initial begin
		// Initialize Inputs
		clk_in = 0;
		enable = 0;
		reset = 0;
		dout_data_ram = 0;
		dout_inst_ram = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

