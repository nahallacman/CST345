
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Lab04 -dir "C:/Users/cal/Desktop/School/CST345/Lab04/Lab04/planAhead_run_1" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "C:/Users/cal/Desktop/School/CST345/Lab04/picoblazeDemo/PicoBlazeDemo.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {../picoblazeDemo/verilog/kcpsm6.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../picoblazeDemo/asm/simple.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../Mux_disp.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../keypad_controller.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../picoblazeDemo/verilog/exampleVerilog.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top exampleVerilog $srcset
add_files [list {C:/Users/cal/Desktop/School/CST345/Lab04/picoblazeDemo/PicoBlazeDemo.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
