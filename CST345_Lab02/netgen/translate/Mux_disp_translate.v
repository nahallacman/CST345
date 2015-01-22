////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: Mux_disp_translate.v
// /___/   /\     Timestamp: Wed Jan 21 16:42:56 2015
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/translate -ofmt verilog -sim Mux_disp.ngd Mux_disp_translate.v 
// Device	: 6slx16csg324-3
// Input file	: Mux_disp.ngd
// Output file	: C:\Users\cal\Desktop\School\CST345\CST345_Lab02\netgen\translate\Mux_disp_translate.v
// # of Modules	: 1
// Design Name	: Mux_disp
// Xilinx        : C:\Xilinx\Xilinx\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module Mux_disp (
  dp0, dp1, dp2, dp3, a, b, c, d, e, f, g, dp, an1, an2, an3, an4, Val0, Val1, Val2, Val3
);
  input dp0;
  input dp1;
  input dp2;
  input dp3;
  output a;
  output b;
  output c;
  output d;
  output e;
  output f;
  output g;
  output dp;
  output an1;
  output an2;
  output an3;
  output an4;
  input [3 : 0] Val0;
  input [3 : 0] Val1;
  input [3 : 0] Val2;
  input [3 : 0] Val3;
  wire an1_OBUF_0;
  wire an4_OBUF_1;
  X_ONE   XST_VCC (
    .O(an1_OBUF_0)
  );
  X_ZERO   XST_GND (
    .O(an4_OBUF_1)
  );
  X_OPAD   an1_7 (
    .PAD(an1)
  );
  X_OPAD   an2_8 (
    .PAD(an2)
  );
  X_OPAD   an3_9 (
    .PAD(an3)
  );
  X_OPAD   an4_10 (
    .PAD(an4)
  );
  X_OBUF   an1_OBUF (
    .I(an1_OBUF_0),
    .O(an1)
  );
  X_OBUF   an2_OBUF (
    .I(an4_OBUF_1),
    .O(an2)
  );
  X_OBUF   an3_OBUF (
    .I(an4_OBUF_1),
    .O(an3)
  );
  X_OBUF   an4_OBUF (
    .I(an4_OBUF_1),
    .O(an4)
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

