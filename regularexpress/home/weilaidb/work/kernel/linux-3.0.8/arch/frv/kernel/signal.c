#define DEBUG_SIG 0
#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
struct fdpic_func_descriptor ;
asmlinkage int sys_sigsuspend(int history0, int history1, old_sigset_t mask)
asmlinkage int sys_sigaction(int sig,
const struct old_sigaction __user *act,
struct old_sigaction __user *oact)
asmlinkage
int sys_sigaltstack(const stack_t __user *uss, stack_t __user *uoss)
struct sigframe
;
struct rt_sigframe
;
static int restore_sigcontext(struct sigcontext __user *sc, int *_gr8)
asmlinkage int sys_sigreturn(void)
asmlinkage int sys_rt_sigreturn(void)
static int setup_sigcontext(struct sigcontext __user *sc, unsigned long mask)
static inline void __user *get_sigframe(struct k_sigaction *ka,
size_t frame_size)
static int setup_frame(int sig, struct k_sigaction *ka, sigset_t *set)
static int setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set)
static int handle_signal(unsigned long sig, siginfo_t *info,
struct k_sigaction *ka, sigset_t *oldset)
static void do_signal(void)
asmlinkage void do_notify_resume(__u32 thread_info_flags)
