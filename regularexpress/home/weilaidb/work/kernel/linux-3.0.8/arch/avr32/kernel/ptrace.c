#undef DEBUG
static struct pt_regs *get_user_regs(struct task_struct *tsk)
void user_enable_single_step(struct task_struct *tsk)
void user_disable_single_step(struct task_struct *child)
void ptrace_disable(struct task_struct *child)
static int ptrace_read_user(struct task_struct *tsk, unsigned long offset,
unsigned long __user *data)
static int ptrace_write_user(struct task_struct *tsk, unsigned long offset,
unsigned long value)
static int ptrace_getregs(struct task_struct *tsk, void __user *uregs)
static int ptrace_setregs(struct task_struct *tsk, const void __user *uregs)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
asmlinkage void syscall_trace(void)
extern void debug_trampoline(void);
asmlinkage struct pt_regs *do_debug(struct pt_regs *regs)
