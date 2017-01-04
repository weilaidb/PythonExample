#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
#define TRACE_BITS 0x0001
struct fdpic_func_descriptor ;
struct rt_sigframe ;
asmlinkage int sys_sigaltstack(const stack_t __user *uss, stack_t __user *uoss)
static inline int
rt_restore_sigcontext(struct pt_regs *regs, struct sigcontext __user *sc, int *pr0)
asmlinkage int do_rt_sigreturn(unsigned long __unused)
static inline int rt_setup_sigcontext(struct sigcontext *sc, struct pt_regs *regs)
static inline void *get_sigframe(struct k_sigaction *ka, struct pt_regs *regs,
size_t frame_size)
static int
setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t * info,
sigset_t * set, struct pt_regs *regs)
static inline void
handle_restart(struct pt_regs *regs, struct k_sigaction *ka, int has_handler)
static int
handle_signal(int sig, siginfo_t *info, struct k_sigaction *ka,
sigset_t *oldset, struct pt_regs *regs)
asmlinkage void do_signal(struct pt_regs *regs)
asmlinkage void do_notify_resume(struct pt_regs *regs)
