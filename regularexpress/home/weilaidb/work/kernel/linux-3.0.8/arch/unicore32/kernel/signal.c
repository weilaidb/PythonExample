#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
#define SWI_SYS_SIGRETURN	(0xff000000)
#define SWI_SYS_RT_SIGRETURN	(0xff000000 | (__NR_rt_sigreturn))
#define SWI_SYS_RESTART		(0xff000000 | (__NR_restart_syscall))
#define KERN_SIGRETURN_CODE	(KUSER_VECPAGE_BASE + 0x00000500)
#define KERN_RESTART_CODE	(KERN_SIGRETURN_CODE + sizeof(sigreturn_codes))
const unsigned long sigreturn_codes[3] = ;
const unsigned long syscall_restart_code[2] = ;
struct sigframe ;
struct rt_sigframe ;
static int restore_sigframe(struct pt_regs *regs, struct sigframe __user *sf)
asmlinkage int __sys_rt_sigreturn(struct pt_regs *regs)
static int setup_sigframe(struct sigframe __user *sf, struct pt_regs *regs,
sigset_t *set)
static inline void __user *get_sigframe(struct k_sigaction *ka,
struct pt_regs *regs, int framesize)
static int setup_return(struct pt_regs *regs, struct k_sigaction *ka,
unsigned long __user *rc, void __user *frame, int usig)
static int setup_frame(int usig, struct k_sigaction *ka,
sigset_t *set, struct pt_regs *regs)
static int setup_rt_frame(int usig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs)
static inline void setup_syscall_restart(struct pt_regs *regs)
static int handle_signal(unsigned long sig, struct k_sigaction *ka,
siginfo_t *info, sigset_t *oldset,
struct pt_regs *regs, int syscall)
static void do_signal(struct pt_regs *regs, int syscall)
asmlinkage void do_notify_resume(struct pt_regs *regs,
unsigned int thread_flags, int syscall)
void __init early_signal_init(void)
