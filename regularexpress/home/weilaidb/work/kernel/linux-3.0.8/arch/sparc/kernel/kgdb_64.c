void pt_regs_to_gdb_regs(unsigned long *gdb_regs, struct pt_regs *regs)
void sleeping_thread_to_gdb_regs(unsigned long *gdb_regs, struct task_struct *p)
void gdb_regs_to_pt_regs(unsigned long *gdb_regs, struct pt_regs *regs)
void __irq_entry smp_kgdb_capture_client(int irq, struct pt_regs *regs)
int kgdb_arch_handle_exception(int e_vector, int signo, int err_code,
char *remcomInBuffer, char *remcomOutBuffer,
struct pt_regs *linux_regs)
asmlinkage void kgdb_trap(unsigned long trap_level, struct pt_regs *regs)
int kgdb_arch_init(void)
void kgdb_arch_exit(void)
void kgdb_arch_set_pc(struct pt_regs *regs, unsigned long ip)
struct kgdb_arch arch_kgdb_ops = ;
