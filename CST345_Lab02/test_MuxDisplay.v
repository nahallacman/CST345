`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:13:41 01/26/2015
// Design Name:   Mux_disp
// Module Name:   C:/Users/cal/Desktop/School/CST345/CST345_Lab02/test_MuxDisplay.v
// Project Name:  CST345_Lab02
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Mux_disp
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_MuxDisplay;

	// Inputs
	reg reset;
	reg clk;
	reg dp0;
	reg dp1;
	reg dp2;
	reg dp3;
	reg [3:0] Val0;
	reg [3:0] Val1;
	reg [3:0] Val2;
	reg [3:0] Val3;

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
	Mux_disp uut (
		.reset(reset),
		.clk(clk), 
		.dp0(dp0), 
		.dp1(dp1), 
		.dp2(dp2), 
		.dp3(dp3), 
		.Val0(Val0), 
		.Val1(Val1), 
		.Val2(Val2), 
		.Val3(Val3), 
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
		reset = 0;
		clk = 0;
		dp0 = 0;
		dp1 = 0;
		dp2 = 0;
		dp3 = 0;
		Val0 = 0;
		Val1 = 0;
		Val2 = 0;
		Val3 = 0;

		// Wait 100 ns for global reset to finish
		#100;
		$display("At time %t, a = %b, b = %b, c = %b, d = %b, e = %b, f = %b, g = %b, dp = %b, an1 = %b ,an2 = %b an3 = %b, an4 = %b.",$time,a,b,c,d,e,f,g,dp,an1,an2,an3,an4);
		
		//force reset
		#10;
		reset = 1;
		#10;
		reset = 0;
		#10;
		$display("At time %t, a = %b, b = %b, c = %b, d = %b, e = %b, f = %b, g = %b, dp = %b, an1 = %b ,an2 = %b an3 = %b, an4 = %b.",$time,a,b,c,d,e,f,g,dp,an1,an2,an3,an4);
		
		Val0 = 4'b0001;
		#100;
		$display("At time %t, a = %b, b = %b, c = %b, d = %b, e = %b, f = %b, g = %b, dp = %b, an1 = %b ,an2 = %b an3 = %b, an4 = %b.",$time,a,b,c,d,e,f,g,dp,an1,an2,an3,an4);
        
		// Add stimulus here

	end
	
	always 
   #10  clk =  ! clk; 
      
endmodule

