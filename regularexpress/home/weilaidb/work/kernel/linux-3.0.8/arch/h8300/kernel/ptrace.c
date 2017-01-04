extern long h8300_get_reg(struct task_struct *task, int regno);
extern int  h8300_put_reg(struct task_struct *task, int regno, unsigned long data);
void user_disable_single_step(struct task_struct *child)
void ptrace_disable(struct task_struct *child)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
asmlinkage void do_syscall_trace(void)
