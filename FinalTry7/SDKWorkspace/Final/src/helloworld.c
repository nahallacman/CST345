/*
 * Copyright (c) 2009-2012 Xilinx, Inc.  All rights reserved.
 *
 * Xilinx, Inc.
 * XILINX IS PROVIDING THIS DESIGN, CODE, OR INFORMATION "AS IS" AS A
 * COURTESY TO YOU.  BY PROVIDING THIS DESIGN, CODE, OR INFORMATION AS
 * ONE POSSIBLE   IMPLEMENTATION OF THIS FEATURE, APPLICATION OR
 * STANDARD, XILINX IS MAKING NO REPRESENTATION THAT THIS IMPLEMENTATION
 * IS FREE FROM ANY CLAIMS OF INFRINGEMENT, AND YOU ARE RESPONSIBLE
 * FOR OBTAINING ANY RIGHTS YOU MAY REQUIRE FOR YOUR IMPLEMENTATION.
 * XILINX EXPRESSLY DISCLAIMS ANY WARRANTY WHATSOEVER WITH RESPECT TO
 * THE ADEQUACY OF THE IMPLEMENTATION, INCLUDING BUT NOT LIMITED TO
 * ANY WARRANTIES OR REPRESENTATIONS THAT THIS IMPLEMENTATION IS FREE
 * FROM CLAIMS OF INFRINGEMENT, IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

/*
 * helloworld.c: simple test application
 *
 * This application configures UART 16550 to baud rate 9600.
 * PS7 UART (Zynq) is not initialized by this application, since
 * bootrom/bsp configures it to baud rate 115200
 *
 * ------------------------------------------------
 * | UART TYPE   BAUD RATE                        |
 * ------------------------------------------------
 *   uartns550   9600
 *   uartlite    Configurable only in HW design
 *   ps7_uart    115200 (configured by bootrom/bsp)
 */
typedef enum {DISPLAY, SHOWHIGH, SHOWLOW, SETHIGH, SETLOW} state_t;

#include <stdio.h>
#include <xparameters.h>
#include "xio.h"
#include "xiic.h"
#include "platform.h"
#include <xgpio.h>

//void print(char *str);

int main()
{
	state_t state = DISPLAY;

	Xuint32 *customip = (Xuint32 *) XPAR_MYDEMOLEDS_0_BASEADDR;
	Xuint32 data = 0x0000;

	Xuint32 *customip2 =  (Xuint32 *) XPAR_MYMUXEDDISPLAY_0_BASEADDR;
	Xuint32 data2 = 0x0000;

	Xuint32 *customip3 =  (Xuint32 *) XPAR_MYKEYBOARD_0_BASEADDR;
	Xuint32 data3 = 0x0000;

	int i = 0;

    init_platform();

    static XIic Iic;
    int test;

    int hightemp = 4000;
    int lowtemp = 3000;
    int h_t = hightemp;
    int l_t = lowtemp;

    u8 temperature_array[2];

    int ReceivedByteCount;
    int RecievedByteCount2;


    //IIC communication
    ReceivedByteCount = XIic_Send(XPAR_XPS_IIC_0_BASEADDR, 0x4B, 0x00, 1, 0);
    ReceivedByteCount = XIic_Recv(XPAR_XPS_IIC_0_BASEADDR, 0x4B, temperature_array, 2, 0);

    if(ReceivedByteCount != 2)
           xil_printf("ad7183_recv_fail: 0x%x %d\r\n",temperature_array[0],ReceivedByteCount);
        else
           xil_printf("ad7183_recv_succ: 0x%x %d\r\n",temperature_array[0],ReceivedByteCount);


    //temperature calculations
    u16 temperature_final;
    u32 temperature;
    u32 temp_to_2_places; // you have to display a decimal point 2 places away from the right hand number, and there may be rounding errors
    float final_temp;
    /*
    temperature_final = temperature_array[0];


    xil_printf("Temp final = %d\r\n", temperature_final);
    temperature_final = temperature_final << 8;
    xil_printf("Temp final shifted = %d\r\n", temperature_final);
    temperature_final |= temperature_array[1];
    xil_printf("Temp final combined = %d\r\n", temperature_final);
    temperature_final = temperature_final >> 3;
    xil_printf("Temp final shift #2 = %d\r\n", temperature_final);
    final_temp = temperature_final * .0625;
    temperature = temperature_final * .0625;
    xil_printf("Temp final float = %a\r\n", final_temp);
    xil_printf("Temp final decimal = %d\r\n", temperature);
    temp_to_2_places = temperature_final * 6.25;
    xil_printf("Temp final decimal to 2 places = %d\r\n", temp_to_2_places);
*/

    unsigned char char0;
    unsigned char char1;
    unsigned char char2;
    unsigned char char3;
    unsigned char dps;
    unsigned char yesdps = 0x0D;
    unsigned char nodps = 0x0F;

    /*

    dps = yesdps;


    xil_printf("printchars\n\r");
    char0 = temp_to_2_places % 10;
    temp_to_2_places /= 10;
    char1 = temp_to_2_places % 10;
    temp_to_2_places /= 10;
    char2 = temp_to_2_places % 10;
    temp_to_2_places /= 10;
    char3 = temp_to_2_places % 10;

	xil_printf("%d\n\r", char0);
	xil_printf("%d\n\r", char1);
	xil_printf("%d\n\r", char2);
	xil_printf("%d\n\r", char3);

    //char0 = temp_to_2_places
*/

    /*
    while(score)
    {
    	xil_printf("%d\n", score % 10);
        score /= 10;
    }
    */

    xil_printf("Hello World");

    xil_printf("temperature = %d %d\r\n", temperature_array[0], temperature_array[1]);

    //data = 0x55555555;
    //data2 = 0xAAAAAAAA;







	//data2 = XIo_In32(customip2);
	//xil_printf("Reading %d from muxed display register 0\r\n", data2);


	XGpio dipsw;
	unsigned char swval = 0;
	unsigned char sw1 = 0;
	unsigned char sw2 = 0;
	unsigned char sw3 = 0;


	XGpio_Initialize (&dipsw, XPAR_DIP_SWITCHES_8BITS_DEVICE_ID);
	//XGpio_Initialize (&leds, XPAR_LEDS_8BITS_DEVICE_ID);

	//XGpio_SetDataDirection(&leds, 1, 0);
	XGpio_SetDataDirection(&dipsw, 1, 0xFFFFFFFF);

	while(1)
	{
	    //IIC communication
	    ReceivedByteCount = XIic_Send(XPAR_XPS_IIC_0_BASEADDR, 0x4B, 0x00, 1, 0);
	    ReceivedByteCount = XIic_Recv(XPAR_XPS_IIC_0_BASEADDR, 0x4B, temperature_array, 2, 0);

	    if(ReceivedByteCount != 2)
	           xil_printf("ad7183_recv_fail: 0x%x %d\r\n",temperature_array[0],ReceivedByteCount);
	        else
	           xil_printf("ad7183_recv_succ: 0x%x %d\r\n",temperature_array[0],ReceivedByteCount);


	    //temperature calculations
	    u16 temperature_final;
	    u32 temperature;
	    u32 temp_to_2_places; // you have to display a decimal point 2 places away from the right hand number, and there may be rounding errors
	    float final_temp;
	    temperature_final = temperature_array[0];

	    xil_printf("Temp final = %d\r\n", temperature_final);
	    temperature_final = temperature_final << 8;
	    xil_printf("Temp final shifted = %d\r\n", temperature_final);
	    temperature_final |= temperature_array[1];
	    xil_printf("Temp final combined = %d\r\n", temperature_final);
	    temperature_final = temperature_final >> 3;
	    xil_printf("Temp final shift #2 = %d\r\n", temperature_final);
	    final_temp = temperature_final * .0625;
	    temperature = temperature_final * .0625;
	    xil_printf("Temp final float = %a\r\n", final_temp);
	    xil_printf("Temp final decimal = %d\r\n", temperature);
	    temp_to_2_places = temperature_final * 6.25;
	    xil_printf("Temp final decimal to 2 places = %d\r\n", temp_to_2_places);

	    data = 0x0;

	    if(temp_to_2_places > hightemp)
	    {
	    	//turn on AC
	    	data = 0x1;
	    }
	    if(temp_to_2_places < lowtemp)
	    {
	    	//turn on heat
	    	data = 0x2;
	    }



		//read in the switches values
		swval = XGpio_DiscreteRead(&dipsw, 1);

		//mask off switch values
		swval = swval & 0x07;
		sw1 = swval & 0x01;
		sw2 = swval & 0x02;
		sw3 = swval & 0x04;

		xil_printf("switches value = %d", swval);
		xil_printf("sw1 = %d", sw1);
		xil_printf("sw2 = %d", sw2);
		xil_printf("sw3 = %d", sw3);

		switch(state)
		{
		case DISPLAY:
			//display current temperature
			if(sw1)
			{
				if(sw2)
				{
					state = SETLOW;
				}
				else
				{
					state = SETHIGH;
				}
			}
			else if(sw3)
			{
				if(sw2)
				{
					state = SHOWLOW;
				}
				else
				{
					state = SHOWHIGH;
				}
			}

		    xil_printf("printchars\n\r");
		    char0 = temp_to_2_places % 10;
		    temp_to_2_places /= 10;
		    char1 = temp_to_2_places % 10;
		    temp_to_2_places /= 10;
		    char2 = temp_to_2_places % 10;
		    temp_to_2_places /= 10;
		    char3 = temp_to_2_places % 10;

			xil_printf("%d\n\r", char0);
			xil_printf("%d\n\r", char1);
			xil_printf("%d\n\r", char2);
			xil_printf("%d\n\r", char3);

			//state stays the same
			//char0 = 0;
			//char1 = 0;
			//char2 = 0;
			//char3 = 1;
			dps = yesdps;
			break;
		case SHOWHIGH:
			//show the current high temperature
			if(sw3)
			{
				if(sw2)
				{
					state = SHOWLOW;
				}
				//else
				//{
					//no state change
				//}
			}
			else
			{
				state = DISPLAY;
			}


			h_t = hightemp;
		    char0 = h_t % 10;
		    h_t /= 10;
		    char1 = h_t % 10;
		    h_t /= 10;
		    char2 = h_t % 10;
		    h_t /= 10;
		    char3 = h_t % 10;

			//char0 = 1;
			//char1 = 0;
			//char2 = 0;
			//char3 = 1;
			dps = yesdps;
			break;
		case SHOWLOW:
			//show the current low temperature
			if(sw3)
			{
				if(sw2)
				{
					//state = SHOWLOW;
				}
				else
				{
					state = SHOWHIGH;
				}
			}
			else
			{
				state = DISPLAY;
			}

			l_t = lowtemp;
		    char0 = l_t % 10;
		    l_t /= 10;
		    char1 = l_t % 10;
		    l_t /= 10;
		    char2 = l_t % 10;
		    l_t /= 10;
		    char3 = l_t % 10;

			//char0 = 1;
			//char1 = 0;
			//char2 = 0;
			//char3 = 2;
			dps = yesdps;
			break;
		case SETHIGH:
			//set the high temperature
			if(sw1)
			{
				if(sw2)
				{
					state = SETLOW;
				}
				//else no state change
			}
			else
			{
				state = DISPLAY;
			}

			char0 = 2;
			char1 = 0;
			char2 = 0;
			char3 = 1;
			dps = nodps;
			break;
		case SETLOW:
			//set the low temperature
			if(sw1)
			{
				if(sw2)
				{
					//no state change
				}
				else
				{
					state = SETHIGH;
				}
			}
			else
			{
				state = DISPLAY;
			}

			char0 = 2;
			char1 = 0;
			char2 = 0;
			char3 = 2;
			dps = nodps;
			break;
		default:
			state = DISPLAY;
		}


		//write values to LEDs
		xil_printf("Writing %d to myleds register\r\n", data);
		XIo_Out32(customip, data);

		//write values to muxed display
		xil_printf("Writing %d to muxed display register 0\r\n", char0);
		XIo_Out32(customip2, char0);

		xil_printf("Writing %d to muxed display register 1\r\n", char1);
		XIo_Out32(customip2 + 0x01, char1);

		xil_printf("Writing %d to muxed display register 1\r\n", char2);
		XIo_Out32(customip2 + 0x02, char2);

		xil_printf("Writing %d to muxed display register 2\r\n", char3);
		XIo_Out32(customip2 + 0x03, char3);

		xil_printf("Writing %d to muxed display register decimal points\r\n", dps);
		XIo_Out32(customip2 + 0x04, dps);
	}




    xil_printf("Begin reading from keyboard\r\n");

    while(1)
    {
    	//xil_printf("Writing %d to muxed display register 0\r\n", data2);
    	    	XIo_Out32(customip3, data2);
    	data3 = XIo_In32(customip3);
    	if(data3 != 0)
    	{
    		xil_printf("Reading %d from keyboard 0\r\n", data3);
    	}
    }

    cleanup_platform();

    return 0;
}
