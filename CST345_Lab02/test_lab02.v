`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:59:14 01/26/2015
// Design Name:   Lab02_Toplevel
// Module Name:   C:/Users/cal/Desktop/School/CST345/CST345_Lab02/test_lab02.v
// Project Name:  CST345_Lab02
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Lab02_Toplevel
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_lab02;

	// Inputs
	reg [4:0] switches;
	reg UpButton;
	reg RightButton;
	reg DownButton;
	reg LeftButton;
	reg MiddleButton;
	reg clk;

	// Outputs
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

	// Instantiate the Unit Under Test (UUT)
	Lab02_Toplevel uut (
		.switches(switches), 
		.UpButton(UpButton), 
		.RightButton(RightButton), 
		.DownButton(DownButton), 
		.LeftButton(LeftButton), 
		.MiddleButton(MiddleButton), 
		.clk(clk), 
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
		switches = 5'b00000;
		UpButton = 0;
		RightButton = 0;
		DownButton = 0;
		LeftButton = 0;
		MiddleButton = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		//force reset
		MiddleButton = 1;
		
		#10;
		
		MiddleButton = 0;
		 
		#10;
		$display("At time %t, a = %b, b = %b, c = %b, d = %b, e = %b, f = %b, g = %b, dp = %b, an1 = %b, an2 = %b, an3 = %b, an4 = %b.",$time,a,b,c,d,e,f,g,dp,an1,an2,an3,an4);

		// Add stimulus here
		switches = 5'b11111;
		
		UpButton = 1'b1;

		
		#128;
		$display("At time %t, a = %b, b = %b, c = %b, d = %b, e = %b, f = %b, g = %b, dp = %b, an1 = %b, an2 = %b, an3 = %b, an4 = %b.",$time,a,b,c,d,e,f,g,dp,an1,an2,an3,an4);
		
		switches = 5'b10001;
		
		UpButton = 1'b0;
		RightButton = 1'b1;
		
		#128;
		$display("At time %t, a = %b, b = %b, c = %b, d = %b, e = %b, f = %b, g = %b, dp = %b, an1 = %b, an2 = %b, an3 = %b, an4 = %b.",$time,a,b,c,d,e,f,g,dp,an1,an2,an3,an4);

		switches = 5'b01001;
		

		RightButton = 1'b0;
		DownButton = 1'b1;
		
		#128;
		$display("At time %t, a = %b, b = %b, c = %b, d = %b, e = %b, f = %b, g = %b, dp = %b, an1 = %b, an2 = %b, an3 = %b, an4 = %b.",$time,a,b,c,d,e,f,g,dp,an1,an2,an3,an4);
	
		switches = 5'b01001;
		
		DownButton = 1'b0;
		LeftButton = 1'b1;
		
		#128;
		$display("At time %t, a = %b, b = %b, c = %b, d = %b, e = %b, f = %b, g = %b, dp = %b, an1 = %b, an2 = %b, an3 = %b, an4 = %b.",$time,a,b,c,d,e,f,g,dp,an1,an2,an3,an4);
		
		switches = 5'b00101;
		
		LeftButton = 1'b0;
		MiddleButton = 1'b1;
		
		#128;
		$display("At time %t, a = %b, b = %b, c = %b, d = %b, e = %b, f = %b, g = %b, dp = %b, an1 = %b, an2 = %b, an3 = %b, an4 = %b.",$time,a,b,c,d,e,f,g,dp,an1,an2,an3,an4);

		switches = 5'b00010;
		
		MiddleButton = 1'b0;
		
		#128;
		$display("At time %t, a = %b, b = %b, c = %b, d = %b, e = %b, f = %b, g = %b, dp = %b, an1 = %b, an2 = %b, an3 = %b, an4 = %b.",$time,a,b,c,d,e,f,g,dp,an1,an2,an3,an4);
	

	end
	
	always 
   #10  clk =  ! clk; 
      
endmodule

