
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name CST345_Lab02 -dir "C:/Users/cal/Desktop/School/CST345/CST345_Lab02/planAhead_run_2" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Mux_disp.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {Mux_disp.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Flipflop4bit.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Clock_Divider.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Lab02_Toplevel.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top Lab02_Toplevel $srcset
add_files [list {Mux_disp.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
