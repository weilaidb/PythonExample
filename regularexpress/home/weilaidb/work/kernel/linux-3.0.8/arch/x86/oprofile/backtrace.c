static int backtrace_stack(void *data, char *name)
static void backtrace_address(void *data, unsigned long addr, int reliable)
static struct stacktrace_ops backtrace_ops = ;
static unsigned long
copy_from_user_nmi(void *to, const void __user *from, unsigned long n)
static struct stack_frame_ia32 *
dump_user_backtrace_32(struct stack_frame_ia32 *head)
static inline int
x86_backtrace_32(struct pt_regs * const regs, unsigned int depth)
static inline int
x86_backtrace_32(struct pt_regs * const regs, unsigned int depth)
static struct stack_frame *dump_user_backtrace(struct stack_frame *head)
void
x86_backtrace(struct pt_regs * const regs, unsigned int depth)
