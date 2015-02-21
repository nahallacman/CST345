`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:12:04 02/11/2015
// Design Name:   keypad_controller
// Module Name:   C:/Users/cal/Desktop/School/CST345/Lab04/Lab04/test_keypad_controller.v
// Project Name:  Lab04
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: keypad_controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_keypad_controller;

	// Inputs
	reg reset;
	reg clk;
	reg [3:0] row;

	// Outputs
	wire [3:0] column;
	wire interrupt;
	wire [3:0] keypad_data;

	// Instantiate the Unit Under Test (UUT)
	keypad_controller uut (
		.reset(reset), 
		.clk(clk), 
		.column(column), 
		.row(row), 
		.interrupt(interrupt), 
		.keypad_data(keypad_data)
	);
	
	always
		#10 clk = ~clk;
		
	initial begin
		// Initialize Inputs
		reset = 0;
		clk = 0;
		row = 4'b1111;

		// Wait 100 ns for global reset to finish
		#100;
		
		reset = 1;
		#100;
		reset = 0;
		
		#100;
		
		row = 4'b1011;
		#100;
		row = 4'b1111;       
		// Add stimulus here
		
		#100;
		$finish;

	end
      
endmodule

