#define USER_PSW_BITS	(PSW_N | PSW_V | PSW_CB)
void ptrace_disable(struct task_struct *task)
void user_disable_single_step(struct task_struct *task)
void user_enable_single_step(struct task_struct *task)
void user_enable_block_step(struct task_struct *task)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
static compat_ulong_t translate_usr_offset(compat_ulong_t offset)
long compat_arch_ptrace(struct task_struct *child, compat_long_t request,
compat_ulong_t addr, compat_ulong_t data)
long do_syscall_trace_enter(struct pt_regs *regs)
void do_syscall_trace_exit(struct pt_regs *regs)
