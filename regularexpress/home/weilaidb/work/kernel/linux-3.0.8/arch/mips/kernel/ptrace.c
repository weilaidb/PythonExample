void ptrace_disable(struct task_struct *child)
int ptrace_getregs(struct task_struct *child, __s64 __user *data)
int ptrace_setregs(struct task_struct *child, __s64 __user *data)
int ptrace_getfpregs(struct task_struct *child, __u32 __user *data)
int ptrace_setfpregs(struct task_struct *child, __u32 __user *data)
int ptrace_get_watch_regs(struct task_struct *child,
struct pt_watch_regs __user *addr)
int ptrace_set_watch_regs(struct task_struct *child,
struct pt_watch_regs __user *addr)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
static inline int audit_arch(void)
asmlinkage void syscall_trace_enter(struct pt_regs *regs)
asmlinkage void syscall_trace_leave(struct pt_regs *regs)
