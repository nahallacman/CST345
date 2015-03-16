##############################################################################
## Filename:          C:\Users\mainuser\Desktop\School\CST345\FinalTry3\BSB/drivers/mydemoleds_v1_00_a/data/mydemoleds_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Sun Mar 15 20:31:27 2015 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "mydemoleds" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}
