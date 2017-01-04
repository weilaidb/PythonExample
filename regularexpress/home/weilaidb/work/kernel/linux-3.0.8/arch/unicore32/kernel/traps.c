static void dump_mem(const char *, const char *, unsigned long, unsigned long);
void dump_backtrace_entry(unsigned long where,
unsigned long from, unsigned long frame)
static int verify_stack(unsigned long sp)
static void dump_mem(const char *lvl, const char *str, unsigned long bottom,
unsigned long top)
static void dump_instr(const char *lvl, struct pt_regs *regs)
static void dump_backtrace(struct pt_regs *regs, struct task_struct *tsk)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
void show_stack(struct task_struct *tsk, unsigned long *sp)
static int __die(const char *str, int err, struct thread_info *thread,
struct pt_regs *regs)
DEFINE_SPINLOCK(die_lock);
void die(const char *str, struct pt_regs *regs, int err)
void uc32_notify_die(const char *str, struct pt_regs *regs,
struct siginfo *info, unsigned long err, unsigned long trap)
asmlinkage void bad_mode(struct pt_regs *regs, unsigned int reason)
void __pte_error(const char *file, int line, unsigned long val)
void __pmd_error(const char *file, int line, unsigned long val)
void __pgd_error(const char *file, int line, unsigned long val)
asmlinkage void __div0(void)
EXPORT_SYMBOL(__div0);
void abort(void)
EXPORT_SYMBOL(abort);
void __init trap_init(void)
void __init early_trap_init(void)
