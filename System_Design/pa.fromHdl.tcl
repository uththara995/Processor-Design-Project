
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name System_Design -dir "C:/Users/DilinDampahalage/Desktop/Processor-Design/System_Design/planAhead_run_1" -part xc6slx45csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "io_manager.ucf" [current_fileset -constrset]
add_files [list {ipcore_dir/data_ram.ngc}]
add_files [list {ipcore_dir/instruction_ram.ngc}]
set hdlfile [add_files [list {State_Machine.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Register_32.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {MUX_BUS.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Counter_32.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ALU_32.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {uart_tx.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {uart_rx.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ipcore_dir/instruction_ram.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ipcore_dir/data_ram.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {CPU_Top.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {clock_divider.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {io_manager.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top io_manager $srcset
add_files [list {io_manager.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/data_ram.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/instruction_ram.ncf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx45csg324-3
