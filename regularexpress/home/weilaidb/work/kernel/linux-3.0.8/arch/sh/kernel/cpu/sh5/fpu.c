void save_fpu(struct task_struct *tsk)
void restore_fpu(struct task_struct *tsk)
asmlinkage void do_fpu_error(unsigned long ex, struct pt_regs *regs)
