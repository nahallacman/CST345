`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:48:14 01/26/2015
// Design Name:   FF5bit
// Module Name:   C:/Users/cal/Desktop/School/CST345/CST345_Lab02/test_FF5bit.v
// Project Name:  CST345_Lab02
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FF5bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_FF5bit;

	// Inputs
	reg clk;
	reg rst;
	reg load;
	reg [4:0] d;

	// Outputs
	wire [4:0] q;

	// Instantiate the Unit Under Test (UUT)
	FF5bit uut (
		.clk(clk), 
		.rst(rst), 
		.load(load), 
		.d(d), 
		.q(q)
	);
	
	reg test_fail;

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		load = 0;
		d = 0;
		test_fail = 0;

		// Wait 100 ns for global reset to finish
		#100;
		$display("time = %t, q = %b.", $time, q);
		
		clk = 1;
		#1;
		clk = 0;
		#1
		$display("time = %t, q = %b.", $time, q);
		d = 5'b11111;
		load = 1'b1;
		#1;
		clk = 1;
		#1;
		clk = 0;
		if(q != 5'b11111) test_fail = 1'b1;
		
		
		$display("time = %t, q = %b.", $time, q);
		
		#100;
		$display("time = %t, q = %b.", $time, q);
		
		#100;
		$display("time = %t, q = %b.", $time, q);
		
        
		// Add stimulus here

	end
      
endmodule

