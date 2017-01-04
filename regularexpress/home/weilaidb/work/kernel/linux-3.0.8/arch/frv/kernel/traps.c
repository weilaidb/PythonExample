void show_backtrace(struct pt_regs *, unsigned long);
extern asmlinkage void __break_hijack_kernel_event(void);
asmlinkage void insn_access_error(unsigned long esfr1, unsigned long epcr0, unsigned long esr0)
asmlinkage void illegal_instruction(unsigned long esfr1, unsigned long epcr0, unsigned long esr0)
asmlinkage void atomic_operation(unsigned long esfr1, unsigned long epcr0,
unsigned long esr0)
asmlinkage void media_exception(unsigned long msr0, unsigned long msr1)
asmlinkage void memory_access_exception(unsigned long esr0,
unsigned long ear0,
unsigned long epcr0)
asmlinkage void data_access_error(unsigned long esfr1, unsigned long esr15, unsigned long ear15)
asmlinkage void data_store_error(unsigned long esfr1, unsigned long esr15)
asmlinkage void division_exception(unsigned long esfr1, unsigned long esr0, unsigned long isr)
asmlinkage void compound_exception(unsigned long esfr1,
unsigned long esr0, unsigned long esr14, unsigned long esr15,
unsigned long msr0, unsigned long msr1)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
void show_stack(struct task_struct *task, unsigned long *sp)
void show_trace_task(struct task_struct *tsk)
static const char *regnames[] = ;
void show_regs(struct pt_regs *regs)
void die_if_kernel(const char *str, ...)
static void show_backtrace_regs(struct pt_regs *frame)
void show_backtrace(struct pt_regs *frame, unsigned long sp)
void __init trap_init (void)
