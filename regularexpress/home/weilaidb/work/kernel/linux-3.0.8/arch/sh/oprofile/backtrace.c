static int backtrace_stack(void *data, char *name)
static void backtrace_address(void *data, unsigned long addr, int reliable)
static struct stacktrace_ops backtrace_ops = ;
static int backtrace_limit = 20;
static unsigned long *
user_backtrace(unsigned long *stackaddr, struct pt_regs *regs)
void sh_backtrace(struct pt_regs * const regs, unsigned int depth)
