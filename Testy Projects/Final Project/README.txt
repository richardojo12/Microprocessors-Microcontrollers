Richard Ojo's readme file

This .zip contains multiple files and directories:
	- 05c_testy_ws is a directory that contains the project's build directory and code. 
 	- maintainer document contains information on how to modify or service the program's 
		different features. 
	- user's manual contains information on how to effectively use all features provided by
		the project contained in 05c_testy_ws.
	- acceptance test script contains commands that will be run to demonstrate the
		H745's different features and I/Os (TIM, GPIO, SPI)

To use:
1. Download and install "System Workbench for stm32" along with stm32 st-link drivers
2. Open the 05c_testy_ws project in "System Workbench for stm32" by double clicking
"Your directory/05c_testy_ws/testy/.project" file
3. Connect the stm32h745zi-q board to the computer 
4. Run the program in debug mode
5. Run both CM4 and CM7
6. Make a note of the COM port number for the STM
7. Navigate to “Your directory/05c_testy_ws/PC_code/testtermv04”
8. Create a new testy script or modify testy script (“testy_script3”) with commands that the H745 will execute 
9. Double click “_mingw-w64-_work”
10. Type appropriate command. For example, “testterm COM5 testy_script3.txt”
11. Press enter to execute commands






Reference "_readme_testterm.pdf" for more information about terstterm and how to use it. 