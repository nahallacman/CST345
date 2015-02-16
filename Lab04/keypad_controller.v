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
//b10 : in_port <= 

// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module keypad_controller(
	input reset,
	input clk,
    //input [3:0] column,
    //output reg [3:0] row,
	 input [3:0] row,
	 output reg [3:0] column,
    output reg interrupt,
    output reg [3:0] keypad_data
    );
	
	reg [1:0] sel;
	
	//reg [1:0] row_decode;
	
	//2 bit counter
	always@(posedge clk or posedge reset)
	begin
	if (reset)
      sel = 0;
	//else if(column == 4'b1111)
	else if(row == 4'b1111)
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
		0 : column = 4'b0111;
		1 : column = 4'b1011;
		2 : column = 4'b1101;
		3 : column = 4'b1110;
		default : column = 4'bxxxx;
		endcase
	end
	//else
	//begin
	//	interrupt = 1;
	//	row = row;
	//end
end

always@(posedge clk)
begin
	if(row == 4'b1111)
	begin
		interrupt = 0;
	end
	else
	begin
		interrupt = 1;
	end
end


//keypad decoder
/*
always@(*)
	begin
	case(row)
	4'b1110: row_decode = 2'b00;
	4'b1101: row_decode = 2'b01;
	4'b1011: row_decode = 2'b10;
	4'b0111: row_decode = 2'b11;
	default: row_decode = 2'bXX;
	endcase
	end


always@(*)
begin
	case({sel,row_decode})
	4'b0000 : keypad_data <= 4'hA; // A
	4'b0001 : keypad_data <= 4'hB; // B
	4'b0010 : keypad_data <= 4'hC; // C
	4'b0011 : keypad_data <= 4'hD; // D
	4'b0100 : keypad_data <= 4'h3; // 3
	4'b0101 : keypad_data <= 4'h6; // 6
	4'b0110 : keypad_data <= 4'h9; // 9
	4'b0111 : keypad_data <= 4'hE; // E
	4'b1000 : keypad_data <= 4'h2; // 2
	4'b1001 : keypad_data <= 4'h5; // 5
	4'b1010 : keypad_data <= 4'h8; // 8
	4'b1011 : keypad_data <= 4'hF; // F
	4'b1100 : keypad_data <= 4'h1; // 1
	4'b1101 : keypad_data <= 4'h4; // 4
	4'b1110 : keypad_data <= 4'h7; // 7
	4'b1111 : keypad_data <= 4'h0; // 0
	default : keypad_data <= 4'bXXXX;
	//default : keypad_data <= keypad_data;
	endcase
	end
*/

always@(*)
	begin
	case({sel,row})
	6'b001110 : keypad_data <= 4'hA; // A
	6'b001101 : keypad_data <= 4'hB; // B
	6'b001011 : keypad_data <= 4'hC; // C
	6'b000111 : keypad_data <= 4'hD; // D
	6'b011110 : keypad_data <= 4'h3; // 3
	6'b011101 : keypad_data <= 4'h6; // 6
	6'b011011 : keypad_data <= 4'h9; // 9
	6'b010111 : keypad_data <= 4'hE; // E
	6'b101110 : keypad_data <= 4'h2; // 2
	6'b101101 : keypad_data <= 4'h5; // 5
	6'b101011 : keypad_data <= 4'h8; // 8
	6'b100111 : keypad_data <= 4'hF; // F
	6'b111110 : keypad_data <= 4'h1; // 1
	6'b111101 : keypad_data <= 4'h4; // 4
	6'b111011 : keypad_data <= 4'h7; // 7
	6'b110111 : keypad_data <= 4'h0; // 0
	default : keypad_data <= 4'bXXXX;
	//default : keypad_data <= keypad_data;
	endcase
	end


/*
always@(*)
	begin
	case({row,column})
	8'b01111110 : keypad_data <= 4'b0000;
	8'b01111101 : keypad_data <= 4'b0001;
	8'b01111011 : keypad_data <= 4'b0010;
	8'b01110111 : keypad_data <= 4'b0011;
	8'b10111110 : keypad_data <= 4'b0100;
	8'b10111101 : keypad_data <= 4'b0101;
	8'b10111011 : keypad_data <= 4'b0110;
	8'b10110111 : keypad_data <= 4'b0111;
	8'b11011110 : keypad_data <= 4'b1000;
	8'b11011101 : keypad_data <= 4'b1001;
	8'b11011011 : keypad_data <= 4'b1010;
	8'b11010111 : keypad_data <= 4'b1011;
	8'b11101110 : keypad_data <= 4'b1100;
	8'b11101101 : keypad_data <= 4'b1101;
	8'b11101011 : keypad_data <= 4'b1110;
	8'b11100111 : keypad_data <= 4'b1111;
	default : keypad_data <= 4'b0000 ;
	endcase
	end
*/





/*
always@(*)
	begin
	case(sel)
	2'b00 :
	begin
		case(row)
		4'b1110 : keypad_data <= 4'b0000;
		4'b1101 : keypad_data <= 4'b0001;
		4'b1011 : keypad_data <= 4'b0010;
		4'b0111 : keypad_data <= 4'b0011;
		default : keypad_data <= 4'b1110;
		endcase
	end
	2'b01 :
	begin
		case(row)
		4'b0111 : keypad_data <= 4'b0100;
		4'b1011 : keypad_data <= 4'b0101;
		4'b1101 : keypad_data <= 4'b0110;
		4'b1110 : keypad_data <= 4'b0111;
		default : keypad_data <= 4'b0010;
		endcase
	end
	2'b10 :
	begin
		case(row)
		4'b0111 : keypad_data <= 4'b1000;
		4'b1011 : keypad_data <= 4'b1001;
		4'b1101 : keypad_data <= 4'b1010;
		4'b1110 : keypad_data <= 4'b1011;
		default : keypad_data <= 4'b0011;
		endcase
	end
	2'b11 :
	begin
		case(row)
		4'b0111 : keypad_data <= 4'b1100;
		4'b1011 : keypad_data <= 4'b1101;
		4'b1101 : keypad_data <= 4'b1110;
		4'b1110 : keypad_data <= 4'b1111;
		default : keypad_data <= 4'b0100;
		endcase
	end
	default: keypad_data <= 4'b0000;
	endcase

end
*/

endmodule
