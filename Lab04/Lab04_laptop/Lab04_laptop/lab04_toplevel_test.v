`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:50:38 02/11/2015
// Design Name:   exampleVerilog
// Module Name:   C:/Users/mainuser/Desktop/School/CST345/Lab04/Lab04_laptop/Lab04_laptop/lab04_toplevel_test.v
// Project Name:  Lab04_laptop
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: exampleVerilog
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lab04_toplevel_test;

	// Inputs
	reg clk;
	reg rst;
	reg [3:0] row;
	reg [4:0] buttons;

	// Outputs
	wire [7:0] leds;
	wire [3:0] column;
	wire a;
	wire b;
	wire c;
	wire d;
	wire e;
	wire f;
	wire g;
	wire dp;
	wire an1;
	wire an2;
	wire an3;
	wire an4;
	
	always
	#10 clk = ~clk;

	// Instantiate the Unit Under Test (UUT)
	exampleVerilog uut (
		.clk(clk), 
		.rst(rst), 
		.row(row), 
		.buttons(buttons), 
		.leds(leds), 
		.column(column), 
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.e(e), 
		.f(f), 
		.g(g), 
		.dp(dp), 
		.an1(an1), 
		.an2(an2), 
		.an3(an3), 
		.an4(an4)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		row = 4'b1111;
		buttons = 0;
		#1;
		rst = 1;
		#1;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		row = 4'b1011;
        
		// Add stimulus here

	end
      
endmodule

