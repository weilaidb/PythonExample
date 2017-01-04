#define DEBUG_SIG	0
#define STACK_ALIGN	16
#define _BLOCKABLE	(~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
#if _NSIG_WORDS > 1
# define PUT_SIGSET(k,u)	__copy_to_user((u)->sig, (k)->sig, sizeof(sigset_t))
# define GET_SIGSET(k,u)	__copy_from_user((k)->sig, (u)->sig, sizeof(sigset_t))
# define PUT_SIGSET(k,u)	__put_user((k)->sig[0], &(u)->sig[0])
# define GET_SIGSET(k,u)	__get_user((k)->sig[0], &(u)->sig[0])
asmlinkage long
sys_sigaltstack (const stack_t __user *uss, stack_t __user *uoss, long arg2,
long arg3, long arg4, long arg5, long arg6, long arg7,
struct pt_regs regs)
static long
restore_sigcontext (struct sigcontext __user *sc, struct sigscratch *scr)
int
copy_siginfo_to_user (siginfo_t __user *to, siginfo_t *from)
long
ia64_rt_sigreturn (struct sigscratch *scr)
static long
setup_sigcontext (struct sigcontext __user *sc, sigset_t *mask, struct sigscratch *scr)
static inline int
rbs_on_sig_stack (unsigned long bsp)
static long
force_sigsegv_info (int sig, void __user *addr)
static long
setup_frame (int sig, struct k_sigaction *ka, siginfo_t *info, sigset_t *set,
struct sigscratch *scr)
static long
handle_signal (unsigned long sig, struct k_sigaction *ka, siginfo_t *info, sigset_t *oldset,
struct sigscratch *scr)
void
ia64_do_signal (struct sigscratch *scr, long in_syscall)
