#define DEBUG_SIG 0
#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
asmlinkage int
sys_sigaltstack(const stack_t __user *uss, stack_t __user *uoss,
unsigned long r2, unsigned long r3, unsigned long r4,
unsigned long r5, unsigned long r6, struct pt_regs *regs)
struct rt_sigframe
;
static int
restore_sigcontext(struct pt_regs *regs, struct sigcontext __user *sc,
int *r0_p)
asmlinkage int
sys_rt_sigreturn(unsigned long r0, unsigned long r1,
unsigned long r2, unsigned long r3, unsigned long r4,
unsigned long r5, unsigned long r6, struct pt_regs *regs)
static int
setup_sigcontext(struct sigcontext __user *sc, struct pt_regs *regs,
unsigned long mask)
static inline void __user *
get_sigframe(struct k_sigaction *ka, unsigned long sp, size_t frame_size)
static int setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs)
static int prev_insn(struct pt_regs *regs)
static int
handle_signal(unsigned long sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *oldset, struct pt_regs *regs)
static void do_signal(struct pt_regs *regs)
void do_notify_resume(struct pt_regs *regs, __u32 thread_info_flags)
