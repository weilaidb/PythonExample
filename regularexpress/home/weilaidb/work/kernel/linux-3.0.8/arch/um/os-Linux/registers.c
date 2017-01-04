int save_registers(int pid, struct uml_pt_regs *regs)
int restore_registers(int pid, struct uml_pt_regs *regs)
static unsigned long exec_regs[MAX_REG_NR];
int init_registers(int pid)
void get_safe_registers(unsigned long *regs)
