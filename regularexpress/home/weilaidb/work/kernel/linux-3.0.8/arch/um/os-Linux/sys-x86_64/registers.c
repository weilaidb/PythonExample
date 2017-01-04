#define __FRAME_OFFSETS
int save_fp_registers(int pid, unsigned long *fp_regs)
int restore_fp_registers(int pid, unsigned long *fp_regs)
unsigned long get_thread_reg(int reg, jmp_buf *buf)
int get_fp_registers(int pid, unsigned long *regs)
int put_fp_registers(int pid, unsigned long *regs)
