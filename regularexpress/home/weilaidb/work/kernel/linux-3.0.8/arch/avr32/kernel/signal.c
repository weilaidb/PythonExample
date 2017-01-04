#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
asmlinkage int sys_sigaltstack(const stack_t __user *uss, stack_t __user *uoss,
struct pt_regs *regs)
struct rt_sigframe
;
static int
restore_sigcontext(struct pt_regs *regs, struct sigcontext __user *sc)
asmlinkage int sys_rt_sigreturn(struct pt_regs *regs)
static int
setup_sigcontext(struct sigcontext __user *sc, struct pt_regs *regs)
static inline void __user *
get_sigframe(struct k_sigaction *ka, struct pt_regs *regs, int framesize)
static int
setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs)
static inline void setup_syscall_restart(struct pt_regs *regs)
static inline void
handle_signal(unsigned long sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *oldset, struct pt_regs *regs, int syscall)
int do_signal(struct pt_regs *regs, sigset_t *oldset, int syscall)
asmlinkage void do_notify_resume(struct pt_regs *regs, struct thread_info *ti)
