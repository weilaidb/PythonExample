#define DEBUG_SIG  0
#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
asmlinkage int do_signal(struct pt_regs *regs, sigset_t *oldset);
extern struct task_struct *coproc_owners[];
struct rt_sigframe
;
int
flush_window_regs_user(struct pt_regs *regs)
static int
setup_sigcontext(struct rt_sigframe __user *frame, struct pt_regs *regs)
static int
restore_sigcontext(struct pt_regs *regs, struct rt_sigframe __user *frame)
asmlinkage long xtensa_rt_sigreturn(long a0, long a1, long a2, long a3,
long a4, long a5, struct pt_regs *regs)
static int
gen_return_code(unsigned char *codemem)
static void setup_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs)
asmlinkage long xtensa_rt_sigsuspend(sigset_t __user *unewset,
size_t sigsetsize,
long a2, long a3, long a4, long a5,
struct pt_regs *regs)
asmlinkage long xtensa_sigaltstack(const stack_t __user *uss,
stack_t __user *uoss,
long a2, long a3, long a4, long a5,
struct pt_regs *regs)
int do_signal(struct pt_regs *regs, sigset_t *oldset)
