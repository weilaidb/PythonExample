void user_enable_single_step(struct task_struct *child)
void user_disable_single_step(struct task_struct *child)
void ptrace_disable(struct task_struct *child)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
long compat_arch_ptrace(struct task_struct *child, compat_long_t request,
compat_ulong_t addr, compat_ulong_t data)
void do_syscall_trace(void)
void send_sigtrap(struct task_struct *tsk, struct pt_regs *regs, int error_code)
void __kprobes do_breakpoint(struct pt_regs* regs, int fault_num)
