##############################################################################
## Filename:          C:\Users\mainuser\Desktop\School\CST345\Final\BSB/drivers/mymuxeddisplay_v1_00_a/data/mymuxeddisplay_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Fri Mar 13 22:15:31 2015 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "mymuxeddisplay" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}
