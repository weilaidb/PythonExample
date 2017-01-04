#define SR_MASK 0x001f
#define TRACE_BITS 0xC000
#define T1_BIT 0x8000
#define T0_BIT 0x4000
#define PT_REG(reg)	((long)&((struct pt_regs *)0)->reg)
#define SW_REG(reg)	((long)&((struct switch_stack *)0)->reg \
- sizeof(struct switch_stack))
static const int regoff[] = ;
static inline long get_reg(struct task_struct *task, int regno)
static inline int put_reg(struct task_struct *task, int regno,
unsigned long data)
static inline void singlestep_disable(struct task_struct *child)
void ptrace_disable(struct task_struct *child)
void user_enable_single_step(struct task_struct *child)
void user_enable_block_step(struct task_struct *child)
void user_disable_single_step(struct task_struct *child)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
asmlinkage void syscall_trace(void)
