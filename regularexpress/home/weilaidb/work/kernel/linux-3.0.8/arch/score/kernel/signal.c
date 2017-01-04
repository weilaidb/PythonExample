#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
struct rt_sigframe ;
static int setup_sigcontext(struct pt_regs *regs, struct sigcontext __user *sc)
static int restore_sigcontext(struct pt_regs *regs, struct sigcontext __user *sc)
static void __user *get_sigframe(struct k_sigaction *ka,
struct pt_regs *regs, size_t frame_size)
asmlinkage long
score_sigaltstack(struct pt_regs *regs)
asmlinkage long
score_rt_sigreturn(struct pt_regs *regs)
static int setup_rt_frame(struct k_sigaction *ka, struct pt_regs *regs,
int signr, sigset_t *set, siginfo_t *info)
static int handle_signal(unsigned long sig, siginfo_t *info,
struct k_sigaction *ka, sigset_t *oldset, struct pt_regs *regs)
static void do_signal(struct pt_regs *regs)
asmlinkage void do_notify_resume(struct pt_regs *regs, void *unused,
__u32 thread_info_flags)
