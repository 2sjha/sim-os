1. computer.c
- This file has the main function which reads mem_size from config.sys,
  then initializes the CPU and Memory in boot_system function.
- The program expects the user-program-filename and Base address as input.
  If computer.exe is executed without any args, it will prompt for the input.
  If computer.exe is executed with input as CLI arguments, input is read from there.
- Calls the Loader to load the program in memory
- Creates PCB
- Starts CPU Operation
- Calls load_finish to cleanup

2.computer.h
- Contains prototypes of functions which are used accross the project.
- Also contains the struct definitions

3. config.sys
- contains an integer which is the total size of memory

4. cpu.c
- Contains the RegisterFile struct object which contains the state of all 7 registers
- cpu_mem_address function which accepts the mem-address as input, calculates the actual memory address and calls the mem_read function to read from memory, and returns MBR value
- cpu_fetch _instruction reads memory address from PC and PC+1 to IR0 and IR1, also updates PC to PC + 2.
- cpu_execute_instruction reads IR0 and IR1 and does the appropriate data movement
- cpu_operation is an infinite loop of fetching and executing instructions until program end is read at IR0 = 0

5. execute
- executes the make command and calls 2 execution of computer.exe as mentioned in the spec

6. load.c
- load_prog accepts the user-prgram filename and base-address, loads the program and the data into memory word by word.
- load_finish closes the File.

7. makefile
- create object files for each .c file
- link .o files into computer.exe

8. memory.c
- contains the Memory struct object which emulates the memory
- mem_init takes the size of memory, and initializes the memory array
- mem_read and mem_write are used to read from and write to memory using MAR and MBR 

9. shell.c
- shell_print_registers prints the state of all registers
- shell_print_memory prints the state of the memory