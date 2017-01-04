static struct list_head unwinder_list;
static struct unwinder stack_reader = ;
static struct unwinder *curr_unwinder = &stack_reader;
static struct list_head unwinder_list = ;
static DEFINE_SPINLOCK(unwinder_lock);
static struct unwinder *select_unwinder(void)
static int unwinder_enqueue(struct unwinder *ops)
int unwinder_register(struct unwinder *u)
int unwinder_faulted = 0;
void unwind_stack(struct task_struct *task, struct pt_regs *regs,
unsigned long *sp, const struct stacktrace_ops *ops,
void *data)
EXPORT_SYMBOL_GPL(unwind_stack);
