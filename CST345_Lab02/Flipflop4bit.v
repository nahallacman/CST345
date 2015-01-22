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
module latch4bit(
	 input load,
    input [3:0] d,
    output reg [3:0] q
    );

	always@(load)
	begin
		if(load)
			q <= d;
	end

endmodule
