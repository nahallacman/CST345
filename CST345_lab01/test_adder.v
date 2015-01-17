`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:32:17 01/17/2015
// Design Name:   adder
// Module Name:   C:/Users/cal/Desktop/School/CST345/CST345_lab01/test_adder.v
// Project Name:  CST345_lab01
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_adder;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire [3:0] sum;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	adder uut (
		.a(a), 
		.b(b), 
		.sum(sum), 
		.cout(cout)
	);

	reg test_passed_add;
	reg test_passed_cout;
	
	initial begin
		// Initialize Inputs
		a = 4'b0000;
		b = 4'b0000;
		// Wait 100 ns for global reset to finish
		#100;
		$display("At time %t, a = %a, b = %b, sum = %sum, cout = %cout.",$time,a,b,sum,cout);
		if (sum != 4'b0000)test_passed_add = 1'b0;
		if (cout != 1'b0)test_passed_cout = 1'b0;
		// Test Case #1
		a = 4'b1010;
		b = 4'b0101;
		#100;
		$display("At time %t, a = %a, b = %b, sum = %sum, cout = %cout.",$time,a,b,sum,cout);
		if (sum != 4'b1111)test_passed_add = 1'b0;
		if (cout != 1'b0)test_passed_cout = 1'b0;
		// Test Case #2
		a = 4'b1111;
		b = 4'b1111;
		#100;
		$display("At time %t, a = %a, b = %b, sum = %sum, cout = %cout.",$time,a,b,sum,cout);
		if (sum != 4'b1110)test_passed_add = 1'b0;
		if (cout != 1'b1)test_passed_cout = 1'b0;
	end
endmodule

