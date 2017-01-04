void print_stack_trace(struct stack_trace *trace, int spaces)
EXPORT_SYMBOL_GPL(print_stack_trace);
__weak void
save_stack_trace_tsk(struct task_struct *tsk, struct stack_trace *trace)
