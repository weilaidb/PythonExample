void printk_address(unsigned long address, int reliable)
static void
print_ftrace_graph_addr(unsigned long addr, void *data,
const struct stacktrace_ops *ops,
struct thread_info *tinfo, int *graph)
static inline void
print_ftrace_graph_addr(unsigned long addr, void *data,
const struct stacktrace_ops *ops,
struct thread_info *tinfo, int *graph)
void
stack_reader_dump(struct task_struct *task, struct pt_regs *regs,
unsigned long *sp, const struct stacktrace_ops *ops,
void *data)
static int print_trace_stack(void *data, char *name)
static void print_trace_address(void *data, unsigned long addr, int reliable)
static const struct stacktrace_ops print_trace_ops = ;
void show_trace(struct task_struct *tsk, unsigned long *sp,
struct pt_regs *regs)
