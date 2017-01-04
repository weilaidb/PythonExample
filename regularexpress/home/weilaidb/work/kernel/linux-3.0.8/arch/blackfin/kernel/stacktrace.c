register unsigned long current_frame_pointer asm("FP");
struct stackframe ;
void save_stack_trace(struct stack_trace *trace)
EXPORT_SYMBOL_GPL(save_stack_trace);
