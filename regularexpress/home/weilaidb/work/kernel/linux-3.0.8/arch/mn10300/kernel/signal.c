#define DEBUG_SIG 0
#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
asmlinkage long sys_sigsuspend(int history0, int history1, old_sigset_t mask)
asmlinkage long sys_sigaction(int sig,
const struct old_sigaction __user *act,
struct old_sigaction __user *oact)
asmlinkage long sys_sigaltstack(const stack_t __user *uss, stack_t *uoss)
static int restore_sigcontext(struct pt_regs *regs,
struct sigcontext __user *sc, long *_d0)
asmlinkage long sys_sigreturn(void)
asmlinkage long sys_rt_sigreturn(void)
static int setup_sigcontext(struct sigcontext __user *sc,
struct fpucontext *fpuctx,
struct pt_regs *regs,
unsigned long mask)
static inline void __user *get_sigframe(struct k_sigaction *ka,
struct pt_regs *regs,
size_t frame_size)
static int setup_frame(int sig, struct k_sigaction *ka, sigset_t *set,
struct pt_regs *regs)
static int setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs)
static inline void stepback(struct pt_regs *regs)
static int handle_signal(int sig,
siginfo_t *info, struct k_sigaction *ka,
sigset_t *oldset, struct pt_regs *regs)
static void do_signal(struct pt_regs *regs)
asmlinkage void do_notify_resume(struct pt_regs *regs, u32 thread_info_flags)
