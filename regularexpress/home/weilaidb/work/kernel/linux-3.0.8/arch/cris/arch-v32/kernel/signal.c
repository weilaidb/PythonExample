extern unsigned long cris_signal_return_page;
#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
#define RESTART_CRIS_SYS(regs) regs->r10 = regs->orig_r10; regs->erp -= 2;
struct signal_frame ;
struct rt_signal_frame ;
void do_signal(int restart, struct pt_regs *regs);
void keep_debug_flags(unsigned long oldccs, unsigned long oldspc,
struct pt_regs *regs);
int
sys_sigsuspend(old_sigset_t mask, long r11, long r12, long r13, long mof,
long srp, struct pt_regs *regs)
int
sys_sigaction(int signal, const struct old_sigaction *act,
struct old_sigaction *oact)
int
sys_sigaltstack(const stack_t __user *uss, stack_t __user *uoss)
static int
restore_sigcontext(struct pt_regs *regs, struct sigcontext __user *sc)
asmlinkage int
sys_sigreturn(long r10, long r11, long r12, long r13, long mof, long srp,
struct pt_regs *regs)
asmlinkage int
sys_rt_sigreturn(long r10, long r11, long r12, long r13, long mof, long srp,
struct pt_regs *regs)
static int
setup_sigcontext(struct sigcontext __user *sc, struct pt_regs *regs,
unsigned long mask)
static inline void __user *
get_sigframe(struct k_sigaction *ka, struct pt_regs * regs, size_t frame_size)
static int
setup_frame(int sig, struct k_sigaction *ka,  sigset_t *set,
struct pt_regs * regs)
static int
setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs * regs)
static inline int
handle_signal(int canrestart, unsigned long sig,
siginfo_t *info, struct k_sigaction *ka,
sigset_t *oldset, struct pt_regs * regs)
void
do_signal(int canrestart, struct pt_regs *regs)
asmlinkage void
ugdb_trap_user(struct thread_info *ti, int sig)
void
keep_debug_flags(unsigned long oldccs, unsigned long oldspc,
struct pt_regs *regs)
int __init
cris_init_signal(void)
__initcall(cris_init_signal);
