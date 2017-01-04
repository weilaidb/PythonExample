#define DEBUG	DBG_MEM
#undef DEBUG
enum ;
#define DBG(fac,args)
#define DBG(fac,args)
#define BREAKINST	0x00000080
enum ;
#define PT_REG(reg) \
(PAGE_SIZE*2 - sizeof(struct pt_regs) + offsetof(struct pt_regs, reg))
#define SW_REG(reg) \
(PAGE_SIZE*2 - sizeof(struct pt_regs) - sizeof(struct switch_stack) \
+ offsetof(struct switch_stack, reg))
static int regoff[] = ;
static unsigned long zero;
static unsigned long *
get_reg_addr(struct task_struct * task, unsigned long regno)
static unsigned long
get_reg(struct task_struct * task, unsigned long regno)
static int
put_reg(struct task_struct *task, unsigned long regno, unsigned long data)
static inline int
read_int(struct task_struct *task, unsigned long addr, int * data)
static inline int
write_int(struct task_struct *task, unsigned long addr, int data)
int
ptrace_set_bpt(struct task_struct * child)
int
ptrace_cancel_bpt(struct task_struct * child)
void user_enable_single_step(struct task_struct *child)
void user_disable_single_step(struct task_struct *child)
void ptrace_disable(struct task_struct *child)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
asmlinkage void
syscall_trace(void)
