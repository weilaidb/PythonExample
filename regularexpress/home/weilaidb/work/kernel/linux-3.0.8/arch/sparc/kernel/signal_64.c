#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
asmlinkage void sparc64_set_context(struct pt_regs *regs)
asmlinkage void sparc64_get_context(struct pt_regs *regs)
struct rt_signal_frame ;
static long _sigpause_common(old_sigset_t set)
asmlinkage long sys_sigpause(unsigned int set)
asmlinkage long sys_sigsuspend(old_sigset_t set)
void do_rt_sigreturn(struct pt_regs *regs)
static int invalid_frame_pointer(void __user *fp)
static inline void __user *get_sigframe(struct k_sigaction *ka, struct pt_regs *regs, unsigned long framesize)
static inline int
setup_rt_frame(struct k_sigaction *ka, struct pt_regs *regs,
int signo, sigset_t *oldset, siginfo_t *info)
static inline int handle_signal(unsigned long signr, struct k_sigaction *ka,
siginfo_t *info,
sigset_t *oldset, struct pt_regs *regs)
static inline void syscall_restart(unsigned long orig_i0, struct pt_regs *regs,
struct sigaction *sa)
static void do_signal(struct pt_regs *regs, unsigned long orig_i0)
void do_notify_resume(struct pt_regs *regs, unsigned long orig_i0, unsigned long thread_info_flags)
