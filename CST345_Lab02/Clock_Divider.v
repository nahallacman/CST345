`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:59:25 01/27/2015 
// Design Name: 
// Module Name:    Clock_Divider 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Clock_Divider_Cal(
	 input reset,
    input clk_in,
    output reg clk_out,
	 output reg [17:0] i
    );
 
	//reg [15:0] i = 0;
	//reg counter[15];
	//going from 100mhz to 1khz, divide by 100,000
	always@(posedge clk_in)
	//for( i = 0 ; i < 100000; i = i + 1)
	begin
	if(reset == 1)
		begin
			i <= 0;
			clk_out <= 0;
		end
	else if(i > 99999)
		begin
			i <= 0;
			clk_out <= ~clk_out;
		end
	else
		begin
			i <= i + 1;
		end
	end
	
	//assign clk_out = (i == 99999);

endmodule
