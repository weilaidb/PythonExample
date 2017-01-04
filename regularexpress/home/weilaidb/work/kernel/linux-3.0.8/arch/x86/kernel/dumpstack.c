int panic_on_unrecovered_nmi;
int panic_on_io_nmi;
unsigned int code_bytes = 64;
int kstack_depth_to_print = 3 * STACKSLOTS_PER_LINE;
static int die_counter;
void printk_address(unsigned long address, int reliable)
static void
print_ftrace_graph_addr(unsigned long addr, void *data,
const struct stacktrace_ops *ops,
struct thread_info *tinfo, int *graph)
static inline void
print_ftrace_graph_addr(unsigned long addr, void *data,
const struct stacktrace_ops *ops,
struct thread_info *tinfo, int *graph)
static inline int valid_stack_ptr(struct thread_info *tinfo,
void *p, unsigned int size, void *end)
unsigned long
print_context_stack(struct thread_info *tinfo,
unsigned long *stack, unsigned long bp,
const struct stacktrace_ops *ops, void *data,
unsigned long *end, int *graph)
EXPORT_SYMBOL_GPL(print_context_stack);
unsigned long
print_context_stack_bp(struct thread_info *tinfo,
unsigned long *stack, unsigned long bp,
const struct stacktrace_ops *ops, void *data,
unsigned long *end, int *graph)
EXPORT_SYMBOL_GPL(print_context_stack_bp);
static int print_trace_stack(void *data, char *name)
static void print_trace_address(void *data, unsigned long addr, int reliable)
static const struct stacktrace_ops print_trace_ops = ;
void
show_trace_log_lvl(struct task_struct *task, struct pt_regs *regs,
unsigned long *stack, unsigned long bp, char *log_lvl)
void show_trace(struct task_struct *task, struct pt_regs *regs,
unsigned long *stack, unsigned long bp)
void show_stack(struct task_struct *task, unsigned long *sp)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
static arch_spinlock_t die_lock = __ARCH_SPIN_LOCK_UNLOCKED;
static int die_owner = -1;
static unsigned int die_nest_count;
unsigned __kprobes long oops_begin(void)
EXPORT_SYMBOL_GPL(oops_begin);
void __kprobes oops_end(unsigned long flags, struct pt_regs *regs, int signr)
int __kprobes __die(const char *str, struct pt_regs *regs, long err)
void die(const char *str, struct pt_regs *regs, long err)
static int __init kstack_setup(char *s)
early_param("kstack", kstack_setup);
static int __init code_bytes_setup(char *s)
__setup("code_bytes=", code_bytes_setup);
