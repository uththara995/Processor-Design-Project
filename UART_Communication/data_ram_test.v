`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:52:46 06/02/2018
// Design Name:   data_ram
// Module Name:   C:/Users/DilinDampahalage/Desktop/Processor-Design/UART_Communication/data_ram_test.v
// Project Name:  UART_Communication
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: data_ram
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module data_ram_test;

	// Inputs
	reg clka;
	reg rsta;
	reg [0:0] wea;
	reg [15:0] addra;
	reg [7:0] dina;

	// Outputs
	wire [7:0] douta;

	// Instantiate the Unit Under Test (UUT)
	data_ram uut (
		.clka(clka), 
		.rsta(rsta), 
		.wea(wea), 
		.addra(addra), 
		.dina(dina), 
		.douta(douta)
	);
	
	always #5 clka = ~clka;

	initial begin
		// Initialize Inputs
		clka = 0;
		rsta = 0;
		wea = 0;
		addra = 0;
		dina = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		addra = 16'd65535;
		dina = 8'd223;
		wea = 1;
		#10;
		wea = 0;
		#50;
		$finish;
	end
      
endmodule

