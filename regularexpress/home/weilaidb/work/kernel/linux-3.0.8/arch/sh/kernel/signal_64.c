#define REG_RET 9
#define REG_ARG1 2
#define REG_ARG2 3
#define REG_ARG3 4
#define REG_SP 15
#define REG_PR 18
#define REF_REG_RET regs->regs[REG_RET]
#define REF_REG_SP regs->regs[REG_SP]
#define DEREF_REG_PR regs->regs[REG_PR]
#define DEBUG_SIG 0
#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
static int
handle_signal(unsigned long sig, siginfo_t *info, struct k_sigaction *ka,
sigset_t *oldset, struct pt_regs * regs);
static inline void
handle_syscall_restart(struct pt_regs *regs, struct sigaction *sa)
static int do_signal(struct pt_regs *regs, sigset_t *oldset)
asmlinkage int
sys_sigsuspend(old_sigset_t mask,
unsigned long r3, unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs * regs)
asmlinkage int
sys_rt_sigsuspend(sigset_t *unewset, size_t sigsetsize,
unsigned long r4, unsigned long r5, unsigned long r6,
unsigned long r7,
struct pt_regs * regs)
asmlinkage int
sys_sigaction(int sig, const struct old_sigaction __user *act,
struct old_sigaction __user *oact)
asmlinkage int
sys_sigaltstack(const stack_t __user *uss, stack_t __user *uoss,
unsigned long r4, unsigned long r5, unsigned long r6,
unsigned long r7,
struct pt_regs * regs)
struct sigframe ;
struct rt_sigframe ;
static inline int
restore_sigcontext_fpu(struct pt_regs *regs, struct sigcontext __user *sc)
static inline int
setup_sigcontext_fpu(struct pt_regs *regs, struct sigcontext __user *sc)
static inline int
restore_sigcontext_fpu(struct pt_regs *regs, struct sigcontext __user *sc)
static inline int
setup_sigcontext_fpu(struct pt_regs *regs, struct sigcontext __user *sc)
static int
restore_sigcontext(struct pt_regs *regs, struct sigcontext __user *sc, long long *r2_p)
asmlinkage int sys_sigreturn(unsigned long r2, unsigned long r3,
unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs * regs)
asmlinkage int sys_rt_sigreturn(unsigned long r2, unsigned long r3,
unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs * regs)
static int
setup_sigcontext(struct sigcontext __user *sc, struct pt_regs *regs,
unsigned long mask)
static inline void __user *
get_sigframe(struct k_sigaction *ka, unsigned long sp, size_t frame_size)
void sa_default_restorer(void);
void sa_default_rt_restorer(void);
static int setup_frame(int sig, struct k_sigaction *ka,
sigset_t *set, struct pt_regs *regs)
static int setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs)
static int
handle_signal(unsigned long sig, siginfo_t *info, struct k_sigaction *ka,
sigset_t *oldset, struct pt_regs * regs)
asmlinkage void do_notify_resume(struct pt_regs *regs, unsigned long thread_info_flags)
