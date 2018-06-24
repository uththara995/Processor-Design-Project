`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:28:04 06/03/2018
// Design Name:   io_manager
// Module Name:   C:/Users/DilinDampahalage/Desktop/Processor-Design/UART_Communication/io_manager_test.v
// Project Name:  UART_Communication
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: io_manager
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module io_manager_test;

	// Inputs
	reg clk;
	reg rx;
	reg reset;
	reg tx_start;

	// Outputs
	wire tx;
	wire [7:0] led;

	// Instantiate the Unit Under Test (UUT)
	io_manager uut (
		.clk(clk), 
		.rx(rx), 
		.tx(tx), 
		.reset(reset), 
		.tx_start(tx_start), 
		.led(led)
	);
	
	always #5 clk=~clk;
	
	parameter c_BIT_PERIOD = 100;

	
	task UART_WRITE_BYTE;
	  input [7:0] i_Data;
	  integer     ii;
	  begin
		 // Send Start Bit
		 rx <= 1'b0;
		 #(c_BIT_PERIOD);
		 #1000;
		 // Send Data Byte
		 for (ii=0; ii<8; ii=ii+1)
			begin
			  rx <= i_Data[ii];
			  #(c_BIT_PERIOD);
			end
		 // Send Stop Bit
		 rx <= 1'b1;
		 #(c_BIT_PERIOD);
		end
	endtask // UART_WRITE_BYTE

	initial begin
		// Initialize Inputs
		clk = 0;
		rx = 0;
		reset = 0;
		tx_start = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		UART_WRITE_BYTE(8'd1);#1000;
		UART_WRITE_BYTE(8'd2);#1000;
		UART_WRITE_BYTE(8'd3);#1000;
		UART_WRITE_BYTE(8'd4);#1000;
		
		#20;
		
		tx_start = 1; #20;
		
		tx_start = 0;

	end
      
endmodule

