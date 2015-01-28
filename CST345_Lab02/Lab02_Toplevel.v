`timescale 1ns / 100ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:35:28 01/26/2015 
// Design Name: 
// Module Name:    Lab02_Toplevel 
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
module Lab02_Toplevel(
    input [4:0] switches,
    input UpButton,
    input RightButton,
    input DownButton,
    input LeftButton,
    input MiddleButton,
    input clk,
    output a,
    output b,
    output c,
    output d,
    output e,
    output f,
    output g,
    output dp,
    output an1,
    output an2,
    output an3,
    output an4
    );

	 wire [4:0] memOut0;
	 wire [4:0] memOut1;
	 wire [4:0] memOut2;
	 wire [4:0] memOut3;
	 
	 wire clk2;

/*
clock_divider clkdiv1(
.clk_in(clk),
.clk_out(clk2)
);
*/


//cal's clock divider	 
Clock_Divider_Cal clkdiv0(
.reset(MiddleButton),
.clk_in(clk),
.clk_out(clk2)
);

//series of FlipFlops
FF5bit lat0(
.clk(clk2),
.rst(MiddleButton),
.load(UpButton),
.d( switches ),
.q( memOut0 )
);

FF5bit lat1(
.clk(clk2),
.rst(MiddleButton),
.load(RightButton),
.d( switches ),
.q( memOut1 )
);

FF5bit lat2(
.clk(clk2),
.rst(MiddleButton),
.load(DownButton),
.d( switches ),
.q( memOut2 )
);

FF5bit lat3(
.rst(MiddleButton),
.clk(clk2),
.load(LeftButton),
.d( switches ),
.q( memOut3 )
);

Mux_disp MuxDisplay(
.reset(MiddleButton),
.clk(clk2),
.dp0(memOut0[0]),
.dp1(memOut1[0]),
.dp2(memOut2[0]),
.dp3(memOut3[0]),
.Val0(memOut0[4:1]),
.Val1(memOut1[4:1]),
.Val2(memOut2[4:1]),
.Val3(memOut3[4:1]),
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

endmodule
