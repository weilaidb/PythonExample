int show_unhandled_signals = 0;
void __user * get_sigframe(struct k_sigaction *ka, struct pt_regs *regs,
size_t frame_size, int is_32)
void restore_sigmask(sigset_t *set)
static void check_syscall_restart(struct pt_regs *regs, struct k_sigaction *ka,
int has_handler)
static int do_signal_pending(sigset_t *oldset, struct pt_regs *regs)
void do_signal(struct pt_regs *regs, unsigned long thread_info_flags)
long sys_sigaltstack(const stack_t __user *uss, stack_t __user *uoss,
unsigned long r5, unsigned long r6, unsigned long r7,
unsigned long r8, struct pt_regs *regs)
