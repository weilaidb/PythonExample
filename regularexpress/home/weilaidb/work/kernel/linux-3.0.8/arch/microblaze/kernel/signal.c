#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
asmlinkage int do_signal(struct pt_regs *regs, sigset_t *oldset, int in_sycall);
asmlinkage long
sys_sigaltstack(const stack_t __user *uss, stack_t __user *uoss,
struct pt_regs *regs)
struct sigframe ;
struct rt_sigframe ;
static int restore_sigcontext(struct pt_regs *regs,
struct sigcontext __user *sc, int *rval_p)
asmlinkage long sys_rt_sigreturn(struct pt_regs *regs)
static int
setup_sigcontext(struct sigcontext __user *sc, struct pt_regs *regs,
unsigned long mask)
static inline void __user *
get_sigframe(struct k_sigaction *ka, struct pt_regs *regs, size_t frame_size)
static void setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs)
static inline void
handle_restart(struct pt_regs *regs, struct k_sigaction *ka, int has_handler)
static int
handle_signal(unsigned long sig, struct k_sigaction *ka,
siginfo_t *info, sigset_t *oldset, struct pt_regs *regs)
int do_signal(struct pt_regs *regs, sigset_t *oldset, int in_syscall)
