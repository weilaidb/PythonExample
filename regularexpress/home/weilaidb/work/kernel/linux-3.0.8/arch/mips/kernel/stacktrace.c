static void save_raw_context_stack(struct stack_trace *trace,
unsigned long reg29)
static void save_context_stack(struct stack_trace *trace,
struct task_struct *tsk, struct pt_regs *regs)
void save_stack_trace(struct stack_trace *trace)
EXPORT_SYMBOL_GPL(save_stack_trace);
void save_stack_trace_tsk(struct task_struct *tsk, struct stack_trace *trace)
EXPORT_SYMBOL_GPL(save_stack_trace_tsk);
