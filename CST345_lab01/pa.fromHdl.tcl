
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name CST345_lab01 -dir "C:/Users/cal/Desktop/School/CST345/CST345_lab01/planAhead_run_3" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "adder.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {adder.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top adder $srcset
add_files [list {adder.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
