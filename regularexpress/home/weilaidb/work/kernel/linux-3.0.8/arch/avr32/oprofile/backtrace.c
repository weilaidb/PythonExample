struct frame_head ;
static inline int valid_stack_ptr(struct thread_info *tinfo, unsigned long p)
static struct frame_head *dump_user_backtrace(struct frame_head *head)
void avr32_backtrace(struct pt_regs * const regs, unsigned int depth)
