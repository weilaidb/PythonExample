int save_fp_registers(int pid, unsigned long *fp_regs)
int restore_fp_registers(int pid, unsigned long *fp_regs)
int save_fpx_registers(int pid, unsigned long *fp_regs)
int restore_fpx_registers(int pid, unsigned long *fp_regs)
unsigned long get_thread_reg(int reg, jmp_buf *buf)
int have_fpx_regs = 1;
int get_fp_registers(int pid, unsigned long *regs)
int put_fp_registers(int pid, unsigned long *regs)
void arch_init_registers(int pid)
