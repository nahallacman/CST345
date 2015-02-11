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
module keypad_controller(
	input reset,
	input clk,
    input [3:0] column,
    output reg [3:0] row,
    output reg interrupt,
    output reg [3:0] keypad_data
    );
	
	reg [1:0] sel;
	
	//2 bit counter
	always@(posedge clk or posedge reset)
	begin
	if (reset)
      sel = 0;
	else if(column == 4'b1111)
		sel = sel + 1;
    else
      sel = sel;
	end
	
//keypad driver
//stops scanning if a key press is detected ( by column returning a 0 anywhere )
always@(*)
begin
	//if(column == 4'b1111)
	begin
		//interrupt = 0;
		case(sel)
		0 : row = 4'b0111;
		1 : row = 4'b1011;
		2 : row = 4'b1101;
		3 : row = 4'b1110;
		default : row = 4'bxxxx;
		endcase
	end
	//else
	//begin
	//	interrupt = 1;
	//	row = row;
	//end
end

always@(*)
begin
	if(column == 4'b1111)
	begin
		interrupt = 0;
	end
	else
	begin
		interrupt = 1;
	end
end


//keypad decoder
always@(*)
begin
case({row, column})
8'b01110111 : keypad_data <= 4'b0000;
8'b01111011 : keypad_data <= 4'b0001;
8'b01111101 : keypad_data <= 4'b0010;
8'b01111110 : keypad_data <= 4'b0011;
8'b10110111 : keypad_data <= 4'b0100;
8'b10111011 : keypad_data <= 4'b0101;
8'b10111101 : keypad_data <= 4'b0110;
8'b10111110 : keypad_data <= 4'b0111;
8'b11010111 : keypad_data <= 4'b1000;
8'b11011011 : keypad_data <= 4'b1001;
8'b11011101 : keypad_data <= 4'b1010;
8'b11011110 : keypad_data <= 4'b1011;
8'b11100111 : keypad_data <= 4'b1100;
8'b11101011 : keypad_data <= 4'b1101;
8'b11101101 : keypad_data <= 4'b1110;
8'b11101110 : keypad_data <= 4'b1111;
default : keypad_data <= 4'b0000 ;
endcase
end
	
endmodule