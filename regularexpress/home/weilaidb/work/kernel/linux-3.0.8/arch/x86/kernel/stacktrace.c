static int save_stack_stack(void *data, char *name)
static void
__save_stack_address(void *data, unsigned long addr, bool reliable, bool nosched)
static void save_stack_address(void *data, unsigned long addr, int reliable)
static void
save_stack_address_nosched(void *data, unsigned long addr, int reliable)
static const struct stacktrace_ops save_stack_ops = ;
static const struct stacktrace_ops save_stack_ops_nosched = ;
void save_stack_trace(struct stack_trace *trace)
EXPORT_SYMBOL_GPL(save_stack_trace);
void save_stack_trace_regs(struct stack_trace *trace, struct pt_regs *regs)
void save_stack_trace_tsk(struct task_struct *tsk, struct stack_trace *trace)
EXPORT_SYMBOL_GPL(save_stack_trace_tsk);
struct stack_frame_user ;
static int
copy_stack_frame(const void __user *fp, struct stack_frame_user *frame)
static inline void __save_stack_trace_user(struct stack_trace *trace)
void save_stack_trace_user(struct stack_trace *trace)
