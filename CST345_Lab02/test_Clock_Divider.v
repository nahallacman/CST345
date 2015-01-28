`timescale 1ns / 100ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:15:52 01/27/2015
// Design Name:   Clock_Divider
// Module Name:   C:/Users/cal/Desktop/School/CST345/CST345_Lab02/test_Clock_Divider.v
// Project Name:  CST345_Lab02
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Clock_Divider
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////



module test_Clock_Divider;

	// Inputs
	reg clk_in;
	reg reset;

	// Outputs
	wire clk_out;
	wire [15:0] i;

	// Instantiate the Unit Under Test (UUT)
	//clock_divider uut(
	Clock_Divider_Cal uut (
		.i(i),
		.reset(reset),
		.clk_in(clk_in), 
		.clk_out(clk_out)
	);

	initial begin
		// Initialize Inputs
		clk_in = 0;
		reset = 0;


		// Wait 100 ns for global reset to finish

	
		#100;
		reset = 1;
		#200;
		reset = 0;
		

		
		#10000;
		
		$display("At time %t, clk_in = %b, clk_out = %b.",$time,clk_in,clk_out);
				
		#10000;
		
		$display("At time %t, clk_in = %b, clk_out = %b.",$time,clk_in,clk_out);
		
		#10000;
		
		$display("At time %t, clk_in = %b, clk_out = %b.",$time,clk_in,clk_out);
		
		#10000;
		
		$display("At time %t, clk_in = %b, clk_out = %b.",$time,clk_in,clk_out);
		
		#1000;
		
		$display("At time %t, clk_in = %b, clk_out = %b.",$time,clk_in,clk_out);
        
		// Add stimulus here

	end
     
	always
   #1  clk_in =  ! clk_in; 
	  
endmodule

