@ECHO OFF
@REM ###########################################
@REM # Script file to run the flow 
@REM # 
@REM ###########################################
@REM #
@REM # Command line for ngdbuild
@REM #
ngdbuild -p xc6slx16csg324-3 -nt timestamp -bm Final.bmm "C:/Users/mainuser/Desktop/School/CST345/FinalTry4/BSB/implementation/Final.ngc" -uc Final.ucf Final.ngd 

@REM #
@REM # Command line for map
@REM #
map -o Final_map.ncd -w -pr b -ol high -timing -detail Final.ngd Final.pcf 

@REM #
@REM # Command line for par
@REM #
par -w -ol high Final_map.ncd Final.ncd Final.pcf 

@REM #
@REM # Command line for post_par_trce
@REM #
trce -e 3 -xml Final.twx Final.ncd Final.pcf 

