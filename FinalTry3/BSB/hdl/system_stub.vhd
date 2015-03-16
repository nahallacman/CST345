-------------------------------------------------------------------------------
-- system_stub.vhd
-------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

library UNISIM;
use UNISIM.VCOMPONENTS.ALL;

entity system_stub is
  port (
    fpga_0_RS232_Uart_1_RX_pin : in std_logic;
    fpga_0_RS232_Uart_1_TX_pin : out std_logic;
    fpga_0_DIP_Switches_8Bits_GPIO_IO_I_pin : in std_logic_vector(0 to 7);
    fpga_0_clk_1_sys_clk_pin : in std_logic;
    fpga_0_rst_1_sys_rst_pin : in std_logic;
    mydemoleds_0_myleds_pin : out std_logic_vector(0 to 7);
    mymuxeddisplay_0_segments_pin : out std_logic_vector(0 to 7);
    mymuxeddisplay_0_anodes_pin : out std_logic_vector(0 to 3);
    mykeyboard_0_row_pin : in std_logic_vector(0 to 3);
    mykeyboard_0_column_pin : out std_logic_vector(0 to 3)
  );
end system_stub;

architecture STRUCTURE of system_stub is

  component system is
    port (
      fpga_0_RS232_Uart_1_RX_pin : in std_logic;
      fpga_0_RS232_Uart_1_TX_pin : out std_logic;
      fpga_0_DIP_Switches_8Bits_GPIO_IO_I_pin : in std_logic_vector(0 to 7);
      fpga_0_clk_1_sys_clk_pin : in std_logic;
      fpga_0_rst_1_sys_rst_pin : in std_logic;
      mydemoleds_0_myleds_pin : out std_logic_vector(0 to 7);
      mymuxeddisplay_0_segments_pin : out std_logic_vector(0 to 7);
      mymuxeddisplay_0_anodes_pin : out std_logic_vector(0 to 3);
      mykeyboard_0_row_pin : in std_logic_vector(0 to 3);
      mykeyboard_0_column_pin : out std_logic_vector(0 to 3)
    );
  end component;

  attribute BOX_TYPE : STRING;
  attribute BOX_TYPE of system : component is "user_black_box";

begin

  system_i : system
    port map (
      fpga_0_RS232_Uart_1_RX_pin => fpga_0_RS232_Uart_1_RX_pin,
      fpga_0_RS232_Uart_1_TX_pin => fpga_0_RS232_Uart_1_TX_pin,
      fpga_0_DIP_Switches_8Bits_GPIO_IO_I_pin => fpga_0_DIP_Switches_8Bits_GPIO_IO_I_pin,
      fpga_0_clk_1_sys_clk_pin => fpga_0_clk_1_sys_clk_pin,
      fpga_0_rst_1_sys_rst_pin => fpga_0_rst_1_sys_rst_pin,
      mydemoleds_0_myleds_pin => mydemoleds_0_myleds_pin,
      mymuxeddisplay_0_segments_pin => mymuxeddisplay_0_segments_pin,
      mymuxeddisplay_0_anodes_pin => mymuxeddisplay_0_anodes_pin,
      mykeyboard_0_row_pin => mykeyboard_0_row_pin,
      mykeyboard_0_column_pin => mykeyboard_0_column_pin
    );

end architecture STRUCTURE;

