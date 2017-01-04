EXPORT_SYMBOL(block_signals);
EXPORT_SYMBOL(unblock_signals);
#define _S(nr) (1<<((nr)-1))
#define _BLOCKABLE (~(_S(SIGKILL) | _S(SIGSTOP)))
static int handle_signal(struct pt_regs *regs, unsigned long signr,
struct k_sigaction *ka, siginfo_t *info,
sigset_t *oldset)
static int kern_do_signal(struct pt_regs *regs)
int do_signal(void)
long sys_sigsuspend(int history0, int history1, old_sigset_t mask)
long sys_sigaltstack(const stack_t __user *uss, stack_t __user *uoss)
