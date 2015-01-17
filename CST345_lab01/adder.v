//////////////////////////////////////////////////////////////
// Company:  Oregon Institute of Technology
// Engineer:  Troy Scevers
// Create Date:  3:00:00 01/08/2014
// Design Name:  Adder
// Module Name:  adder
// Project Name:  cst345_Lab1
// Target Devices:  XC6SLX16-3csg324
// Tool versions:  14.6
// Description:  Four bit adder
/////////////////////////////////////////////////////////////////
module adder(a,b,sum,cout);
	input [3:0]a;
	input [3:0]b;
	output [3:0]sum;
	output cout;
	
	assign {cout,sum} = a + b;

endmodule
