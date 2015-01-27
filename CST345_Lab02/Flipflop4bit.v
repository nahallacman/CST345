`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:59:10 01/21/2015 
// Design Name: 
// Module Name:    latch4bit 
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
module FF5bit(
	 input clk,
	 input rst,
	 input load,
    input [4:0] d,
    output reg [4:0] q
    );

	always@(negedge clk)
	begin
	if(rst)
		q <= 0;
	else if (load)
			q <= d;
	end

endmodule
