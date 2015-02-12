
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name CST345_lab02_laptop -dir "C:/Users/mainuser/Desktop/School/CST345/CST345_lab02_laptop/planAhead_run_1" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Lab02_Toplevel.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {../CST345_Lab02/Mux_disp.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../CST345_Lab02/Flipflop4bit.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../CST345_Lab02/Clock_Divider.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../CST345_Lab02/Lab02_Toplevel.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top Lab02_Toplevel $srcset
add_files [list {Lab02_Toplevel.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
