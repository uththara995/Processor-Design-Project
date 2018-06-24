`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:35:20 06/02/2018
// Design Name:   uart_rx
// Module Name:   C:/Users/DilinDampahalage/Desktop/Processor-Design/UART_Communication/uart_rx_test.v
// Project Name:  UART_Communication
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: uart_rx
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module uart_rx_test;

	// Inputs
	reg CLK;
	reg RX;
	reg RESET;

	// Outputs
	wire RX_DONE;
	wire [7:0] RX_DATA;
	
	parameter c_BIT_PERIOD = 26040;

	// Instantiate the Unit Under Test (UUT)
	uart_rx uut (
		.CLK(CLK), 
		.RX(RX), 
		.RESET(RESET), 
		.RX_DONE(RX_DONE), 
		.RX_DATA(RX_DATA)
	);
	
	always #5 CLK=~CLK;

	
	task UART_WRITE_BYTE;
	  input [7:0] i_Data;
	  integer     ii;
	  begin
		 // Send Start Bit
		 RX <= 1'b0;
		 #(c_BIT_PERIOD);
		 #1000;
		 // Send Data Byte
		 for (ii=0; ii<8; ii=ii+1)
			begin
			  RX <= i_Data[ii];
			  #(c_BIT_PERIOD);
			end
		 // Send Stop Bit
		 RX <= 1'b1;
		 #(c_BIT_PERIOD);
		end
	endtask // UART_WRITE_BYTE

	initial begin
		// Initialize Inputs
		CLK = 0;
		RX = 0;
		RESET = 1;

		// Wait 100 ns for global reset to finish
		#100; RESET = 0;
        
		// Add stimulus here
		UART_WRITE_BYTE(8'd45); #100;
		// Add stimulus here
		UART_WRITE_BYTE(8'd48);
		
		#100;
		
//		$finish;

	end
      
endmodule

