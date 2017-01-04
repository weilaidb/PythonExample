static DEFINE_SPINLOCK(die_lock);
void __init base_trap_init(void)
void __init trap_init (void)
asmlinkage void set_esp0 (unsigned long ssp)
static void dump(struct pt_regs *fp)
void die(const char *str, struct pt_regs *fp, unsigned long err)
extern char _start, _etext;
#define check_kernel_text(addr) \
((addr >= (unsigned long)(&_start)) && \
(addr <  (unsigned long)(&_etext)))
static int kstack_depth_to_print = 24;
void show_stack(struct task_struct *task, unsigned long *esp)
void show_trace_task(struct task_struct *tsk)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
