`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Cal Barkman
// 
// Create Date:    15:42:10 01/21/2015 
// Design Name: 
// Module Name:    Mux_disp 
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
module Mux_disp(
	 input reset,
	 input clk,
    input dp0,
    input dp1,
    input dp2,
    input dp3,
    input [3:0] Val0,
    input [3:0] Val1,
    input [3:0] Val2,
    input [3:0] Val3,
    output reg a,
    output reg b,
    output reg c,
    output reg d,
    output reg e,
    output reg f,
    output reg g,
    output reg dp,
    output reg an1,
    output reg an2,
    output reg an3,
    output reg an4
    );
	 

	 
	 reg [1:0] sel;
	 
	 reg [4:0] MuxOut;
	 
	 //2 bit counter
	 /*
	 always@(posedge clk)
	 begin
		sel = sel + 1;
	 end
	 */
	 
	 // Increment count on clock
	 always @(posedge clk or posedge reset)
	 begin
    if (reset)
      sel = 0;
    else
      sel = sel + 1;
	end
	
	
	 /*
	 	 //2 bit counter
	 always@(posedge clk)
	 begin
	 if (sel != 3) // this probably needs work
	 sel = sel + 1;
	 else
	 sel = 0;
	 end
	 */
	 


//4:1 5 bit mux
always@(*)
begin
case(sel)
0 : MuxOut = {Val0, dp0};
1 : MuxOut = {Val1, dp1};
2 : MuxOut = {Val2, dp2};
3 : MuxOut = {Val3, dp3};
default : MuxOut = 5'bxxxxx;
endcase
end

//2:4 bit encoder
//active low
always@(*)
begin
case(sel)
0 : {an1,an2,an3,an4} = 4'b0111;
1 : {an1,an2,an3,an4} = 4'b1011;
2 : {an1,an2,an3,an4} = 4'b1101;
3 : {an1,an2,an3,an4} = 4'b1110;
default : {an1,an2,an3,an4} = 4'bxxxx;
endcase
end


//hex to 7 seg decoder
//active low
always@(*)
begin
case(MuxOut[4:1])
0: {a,b,c,d,e,f,g} = 7'b0000001; 
1: {a,b,c,d,e,f,g} = 7'b1001111;
2: {a,b,c,d,e,f,g} = 7'b0010010;
3: {a,b,c,d,e,f,g} = 7'b0000110;
4: {a,b,c,d,e,f,g} = 7'b1001100;
5: {a,b,c,d,e,f,g} = 7'b0100100;
6: {a,b,c,d,e,f,g} = 7'b0100000;
7: {a,b,c,d,e,f,g} = 7'b0001111;
8: {a,b,c,d,e,f,g} = 7'b0000000;
9: {a,b,c,d,e,f,g} = 7'b0001100;
10: {a,b,c,d,e,f,g} = 7'b0001000;
11: {a,b,c,d,e,f,g} = 7'b1100000;
12: {a,b,c,d,e,f,g} = 7'b0110001;
13: {a,b,c,d,e,f,g} = 7'b1000010;
14: {a,b,c,d,e,f,g} = 7'b0110000;
15: {a,b,c,d,e,f,g} = 7'b0111000;
default : {a,b,c,d,e,f,g} = 7'bxxxxxxx;
endcase
end

//assign bit 0 to the decimal point out
always@(*)
begin
dp = MuxOut[0];
end

endmodule
