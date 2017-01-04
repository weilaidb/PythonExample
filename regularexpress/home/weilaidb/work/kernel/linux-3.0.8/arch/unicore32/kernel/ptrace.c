static inline long get_user_reg(struct task_struct *task, int offset)
static inline int
put_user_reg(struct task_struct *task, int offset, long data)
void ptrace_disable(struct task_struct *child)
static int ptrace_read_user(struct task_struct *tsk, unsigned long off,
unsigned long __user *ret)
static int ptrace_write_user(struct task_struct *tsk, unsigned long off,
unsigned long val)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
asmlinkage int syscall_trace(int why, struct pt_regs *regs, int scno)
