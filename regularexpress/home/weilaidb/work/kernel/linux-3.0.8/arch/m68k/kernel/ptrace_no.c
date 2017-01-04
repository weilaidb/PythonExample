#define SR_MASK 0x001f
#define TRACE_BITS 0x8000
#define PT_REG(reg)	((long)&((struct pt_regs *)0)->reg)
#define SW_REG(reg)	((long)&((struct switch_stack *)0)->reg \
- sizeof(struct switch_stack))
static int regoff[] = ;
static inline long get_reg(struct task_struct *task, int regno)
static inline int put_reg(struct task_struct *task, int regno,
unsigned long data)
void user_enable_single_step(struct task_struct *task)
void user_disable_single_step(struct task_struct *task)
void ptrace_disable(struct task_struct *child)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
asmlinkage int syscall_trace_enter(void)
asmlinkage void syscall_trace_leave(void)
