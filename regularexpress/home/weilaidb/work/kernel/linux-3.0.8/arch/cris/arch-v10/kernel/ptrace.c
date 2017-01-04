#define DCCR_MASK 0x0000001f
inline long get_reg(struct task_struct *task, unsigned int regno)
inline int put_reg(struct task_struct *task, unsigned int regno,
unsigned long data)
void
ptrace_disable(struct task_struct *child)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
void do_syscall_trace(void)
