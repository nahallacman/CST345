##############################################################################
## Filename:          C:\Users\mainuser\Desktop\School\CST345\FinalTry3\BSB/drivers/mykeyboard_v1_00_a/data/mykeyboard_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Mon Mar 16 00:27:14 2015 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "mykeyboard" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}
