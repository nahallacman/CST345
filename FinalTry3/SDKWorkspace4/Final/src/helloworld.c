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


#include <stdio.h>
#include <xparameters.h>
#include "xio.h"
#include "xiic.h"
#include "platform.h"

//void print(char *str);

int main()
{
	Xuint32 *customip = (Xuint32 *) XPAR_MYDEMOLEDS_0_BASEADDR;
	Xuint32 data = 0x0000;

	Xuint32 *customip2 =  (Xuint32 *) XPAR_MYMUXEDDISPLAY_0_BASEADDR;
	Xuint32 data2 = 0x0000;

	Xuint32 *customip3 =  (Xuint32 *) XPAR_MYKEYBOARD_0_BASEADDR;
	Xuint32 data3 = 0x0000;

	int i = 0;

    init_platform();

    //XIic *InstancePtr = ( XIic * ) XPAR_XPS_IIC_0_BASEADDR ;
    static XIic Iic;
    int test;
    //u16 DeviceId = 0x4B;

    //XIic_Initialize(InstancePtr, XPAR_XPS_IIC_0_DEVICE_ID);
/*
    test = XIic_Initialize(&Iic, XPAR_XPS_IIC_0_DEVICE_ID);
    if(test== XST_SUCCESS)
    printf("initialization successful\n");
    if (test == XST_DEVICE_NOT_FOUND)
    printf("device id isn't found\n");
    if (test == XST_DEVICE_IS_STARTED)
    printf("device is started\n");
*/
    u8 temperature_array[2];

    /*
     * unsigned XIic_Recv(u32 BaseAddress, u8 Address,
		   u8 *BufferPtr, unsigned ByteCount, u8 Option);

		unsigned XIic_Send(u32 BaseAddress, u8 Address,
		   u8 *BufferPtr, unsigned ByteCount, u8 Option);
     *
     *
     */
    //XIic_Send(IIC_BASE_ADDRESS, DECODER_ADDR_W, );
    //XIic_Recv(XPAR_XPS_IIC_0_BASEADDR, 0x46, temperature_array, sizeof(temperature_array), 0 );// which is used in normal mode

    int ReceivedByteCount;
    int RecievedByteCount2;

    //ReceivedByteCount = XIic_Send(IIC_BASE_ADDRESS, DECODER_ADDR_W, ad7183_data, 1, XIIC_REPEATED_START);
    //ReceivedByteCount = XIic_Recv(IIC_BASE_ADDRESS, DECODER_ADDR_W, ad7183_tmp, sizeof(ad7183_tmp), XIIC_REPEATED_START);

    //ReceivedByteCount = XIic_Send(XPAR_XPS_IIC_0_BASEADDR, 0x46, 0x00, 1, XIIC_REPEATED_START);
    //ReceivedByteCount = XIic_Recv(XPAR_XPS_IIC_0_BASEADDR, 0x46, temperature_array, 1, XIIC_REPEATED_START);

    ReceivedByteCount = XIic_Send(XPAR_XPS_IIC_0_BASEADDR, 0x4B, 0x00, 1, 0);
    ReceivedByteCount = XIic_Recv(XPAR_XPS_IIC_0_BASEADDR, 0x4B, temperature_array, 2, 0);

    if(ReceivedByteCount != 1)
           xil_printf("ad7183_recv_fail: 0x%x %d\r\n",temperature_array[0],ReceivedByteCount);
        else
           xil_printf("ad7183_recv_succ: 0x%x %d\r\n",temperature_array[0],ReceivedByteCount);


    u16 temperature_final;
    u32 temperature;
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
    xil_printf("Temp final float = %g\r\n", final_temp);
    xil_printf("Temp final decimal = %d\r\n", temperature);

    //SendSlaveAddr(XIic *InstancePtr);

    //print("Hello World\n\r");
   xil_printf("\c");

    xil_printf("Hello World");

    xil_printf("temperature = %d %d\r\n", temperature_array[0], temperature_array[1]);

    data = 0x55555555;
    data2 = 0xAAAAAAAA;

    //MYMUXEDDISPLAY_mWriteReg(XPAR_MYMUXEDDISPLAY_0_BASEADDR, MYCORE_SLV_REG0_OFFSET, 0x8);

    for( i = 0; i < 1; i++ )
    {
    	//data++;
    	xil_printf("Writing %d to myleds register\r\n", data);
    	XIo_Out32(customip, data);

    	xil_printf("Writing %d to muxed display register 0\r\n", data2);
    	XIo_Out32(customip2, data2);

    	data = XIo_In32(customip);
    	xil_printf("Reading %d from myleds register\r\n", data);

    	data2 = XIo_In32(customip2);
    	xil_printf("Reading %d from muxed display register 0\r\n", data2);


    }

    xil_printf("temperature = %d %d", temperature_array[0], temperature_array[1]);

    xil_printf("Begin reading from keyboard\r\n");

    while(1)
    {
    	data3 = XIo_In32(customip3);
    	if(data3 != 0)
    	{
    		xil_printf("Reading %d from keyboard 0\r\n", data3);
    	}
    }

    cleanup_platform();

    return 0;
}
