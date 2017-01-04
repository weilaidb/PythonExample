#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
asmlinkage int do_signal(struct pt_regs *regs, sigset_t *oldset);
asmlinkage int do_sigsuspend(struct pt_regs *regs)
asmlinkage int
do_rt_sigsuspend(struct pt_regs *regs)
asmlinkage int
sys_sigaction(int sig, const struct old_sigaction *act,
struct old_sigaction *oact)
asmlinkage int
sys_sigaltstack(const stack_t *uss, stack_t *uoss)
struct sigframe
__attribute__((aligned(2),packed));
struct rt_sigframe
__attribute__((aligned(2),packed));
static inline int
restore_sigcontext(struct pt_regs *regs, struct sigcontext *usc,
int *pd0)
asmlinkage int do_sigreturn(unsigned long __unused,...)
asmlinkage int do_rt_sigreturn(unsigned long __unused,...)
static int setup_sigcontext(struct sigcontext __user *sc, struct pt_regs *regs,
unsigned long mask)
static inline void *
get_sigframe(struct k_sigaction *ka, struct pt_regs *regs, size_t frame_size)
static void setup_frame (int sig, struct k_sigaction *ka,
sigset_t *set, struct pt_regs *regs)
static void setup_rt_frame (int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs)
static void
handle_signal(unsigned long sig, siginfo_t *info, struct k_sigaction *ka,
sigset_t *oldset,	struct pt_regs * regs)
asmlinkage int do_signal(struct pt_regs *regs, sigset_t *oldset)
asmlinkage void do_notify_resume(struct pt_regs *regs, u32 thread_info_flags)
