#if defined(CONFIG_FRAME_POINTER)
int notrace unwind_frame(struct stackframe *frame)
void notrace walk_stackframe(struct stackframe *frame,
int (*fn)(struct stackframe *, void *), void *data)
EXPORT_SYMBOL(walk_stackframe);
struct stack_trace_data ;
static int save_trace(struct stackframe *frame, void *d)
void save_stack_trace_tsk(struct task_struct *tsk, struct stack_trace *trace)
void save_stack_trace(struct stack_trace *trace)
EXPORT_SYMBOL_GPL(save_stack_trace);
