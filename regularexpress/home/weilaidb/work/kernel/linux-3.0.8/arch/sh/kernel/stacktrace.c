static int save_stack_stack(void *data, char *name)
static void save_stack_address(void *data, unsigned long addr, int reliable)
static const struct stacktrace_ops save_stack_ops = ;
void save_stack_trace(struct stack_trace *trace)
EXPORT_SYMBOL_GPL(save_stack_trace);
static void
save_stack_address_nosched(void *data, unsigned long addr, int reliable)
static const struct stacktrace_ops save_stack_ops_nosched = ;
void save_stack_trace_tsk(struct task_struct *tsk, struct stack_trace *trace)
EXPORT_SYMBOL_GPL(save_stack_trace_tsk);
