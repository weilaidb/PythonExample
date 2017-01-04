static microblaze_reg_t *reg_save_addr(unsigned reg_offs,
struct task_struct *t)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
asmlinkage long do_syscall_trace_enter(struct pt_regs *regs)
asmlinkage void do_syscall_trace_leave(struct pt_regs *regs)
void ptrace_disable(struct task_struct *child)
