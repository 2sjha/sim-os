#include <stdio.h>

/* Simulated Register*/
Register
{
    int reg_val;
};

/*Simulated RegisterFile*/
RegisterFile
{
    Register PC;
    Register IR0;
    Register IR1;
    Register AC;
    Register MAR;
    Register MBR;
    Register BASE;
};

/*Simulated Memory*/
Memory
{
    int size;
    int *mem_arr;
};

/*PCB*/
PCB
{
    RegisterFile REG_STATE;
    int PID;
};

/*Memory Functions*/
void mem_init(int M);
void mem_read();
void mem_write();

/*CPU Functions*/
void cpu_operation();

/*Shell Functions*/
void shell_init();
void shell_print_memory();
void shell_print_registers();
void shell_command(int cmd);

/*Loader Functions*/
FILE *load_prog(char *fname, int base);
void load_finish();