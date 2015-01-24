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
	 
	 wire [3:0] memOut0;
	 wire [3:0] memOut1;
	 wire [3:0] memOut2;
	 wire [3:0] memOut3;
	 
	 reg [1:0] sel;
	 
	 reg [3:0] MuxOut;
	 
	 //2 bit counter
	 always@(posedge clk)
	 begin
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
	 
//series of latches
FF4bit lat0(
.clk(clk),
.load(dp0),
.d(Val0),
.q(memOut0)
);

FF4bit lat1(
.clk(clk),
.load(dp1),
.d(Val1),
.q(memOut1)
);

FF4bit lat2(
.clk(clk),
.load(dp2),
.d(Val2),
.q(memOut2)
);

FF4bit lat3(
.clk(clk),
.load(dp3),
.d(Val3),
.q(memOut3)
);

//4:1 4 bit mux
always@(*)
begin
case(sel)
0 : MuxOut <= memOut0;
1 : MuxOut <= memOut1;
2 : MuxOut <= memOut2;
3 : MuxOut <= memOut3;
default : MuxOut <= 4'bxxxx;
endcase
end

//2:4 bit encoder
always@(*)
begin
case(sel)
0 : {an1,an2,an3,an4} <= 4'b1000;
1 : {an1,an2,an3,an4} <= 4'b0100;
2 : {an1,an2,an3,an4} <= 4'b0010;
3 : {an1,an2,an3,an4} <= 4'b0001;
default : {an1,an2,an3,an4} = 4'bxxxx;
endcase
end

//base 10 to 7 seg decoder
//could be a hex to 7 seg decoder
always@(*)
begin
case(MuxOut)
0: {a,b,c,d,e,f,g} = 7'b0000000; // these values have not been calculated yet
1: {a,b,c,d,e,f,g} = 7'b1000000;
2: {a,b,c,d,e,f,g} = 7'b0100000;
3: {a,b,c,d,e,f,g} = 7'b0010000;
4: {a,b,c,d,e,f,g} = 7'b0001000;
5: {a,b,c,d,e,f,g} = 7'b0000100;
6: {a,b,c,d,e,f,g} = 7'b0000010;
7: {a,b,c,d,e,f,g} = 7'b0000001;
8: {a,b,c,d,e,f,g} = 7'b1100000;
9: {a,b,c,d,e,f,g} = 7'b0011000;
default : {a,b,c,d,e,f,g} = 7'b1111111;
endcase
end

endmodule
