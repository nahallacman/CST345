`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:39:28 02/15/2015 
// Design Name: 
// Module Name:    new_keypad_controller 
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
module new_keypad_controller(
    input reset,
    input clk,
    input [3:0] row,
    output [3:0] column,
    output interrupt,
    output [3:0] keypad_data
    );

always@(posedge clk or posedge rst)
if(


endmodule
