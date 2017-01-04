#define N_EXCEPTION_STACKS_END \
(N_EXCEPTION_STACKS + DEBUG_STKSZ/EXCEPTION_STKSZ - 2)
static char x86_stack_ids[][8] = ;
static unsigned long *in_exception_stack(unsigned cpu, unsigned long stack,
unsigned *usedp, char **idp)
static inline int
in_irq_stack(unsigned long *stack, unsigned long *irq_stack,
unsigned long *irq_stack_end)
static inline unsigned long
fixup_bp_irq_link(unsigned long bp, unsigned long *stack,
unsigned long *irq_stack, unsigned long *irq_stack_end)
void dump_trace(struct task_struct *task, struct pt_regs *regs,
unsigned long *stack, unsigned long bp,
const struct stacktrace_ops *ops, void *data)
EXPORT_SYMBOL(dump_trace);
void
show_stack_log_lvl(struct task_struct *task, struct pt_regs *regs,
unsigned long *sp, unsigned long bp, char *log_lvl)
void show_registers(struct pt_regs *regs)
int is_valid_bugaddr(unsigned long ip)
