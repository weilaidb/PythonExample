void show_regs(struct pt_regs *regs)
static inline int valid_stack_ptr(struct thread_info *tinfo, void *p)
static inline unsigned long print_context_stack(struct thread_info *tinfo,
unsigned long *stack, unsigned long ebp)
void show_trace(struct task_struct* task, unsigned long * stack)
