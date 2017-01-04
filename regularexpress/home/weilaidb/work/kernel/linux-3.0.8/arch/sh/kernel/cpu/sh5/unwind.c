static u8 regcache[63];
static int lookup_prev_stack_frame(unsigned long fp, unsigned long pc,
unsigned long *pprev_fp, unsigned long *pprev_pc,
struct pt_regs *regs)
static struct pt_regs here_regs;
extern const char syscall_ret;
extern const char ret_from_syscall;
extern const char ret_from_exception;
extern const char ret_from_irq;
static void sh64_unwind_inner(struct pt_regs *regs);
static void unwind_nested (unsigned long pc, unsigned long fp)
static void sh64_unwind_inner(struct pt_regs *regs)
void sh64_unwind(struct pt_regs *regs)
