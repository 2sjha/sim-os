# OS-Project2

## computer.c

- reads config.sys, boots system, initializes components
- Runs Scheduler and Shell Threads(only for the parent process)

## computer.h

- has struct defintions and functions used accross files.

## cpu.c

- executes instructions from memory
- has its reg_state, always executes this register state

## memory.c

- provides functions to access memory

## print.c

- Initalizes Pipe between Printer and itself
- has functions to send commands to printer

## printer.c

- Receives all commands via pipe
- Maintains spool files for all processes.
- Prints spooled output to simulated paper on process-exit or shutdown

## scheduler.c

- Maintails PCBs for all active processes
- Manages CPU execution via a CPU scheduling algorithm with Round Robin ready queue

## shell.c

- Provides shell interface to interact with simulated computer
- Accepts process_submit, dump and terminate commands
- loads programs into memory

## utils.c

- has utility functions to manipulate readyQ
