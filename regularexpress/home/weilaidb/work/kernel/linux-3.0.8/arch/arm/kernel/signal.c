#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
#define SWI_SYS_SIGRETURN	(0xef000000|(__NR_sigreturn)|(__NR_OABI_SYSCALL_BASE))
#define SWI_SYS_RT_SIGRETURN	(0xef000000|(__NR_rt_sigreturn)|(__NR_OABI_SYSCALL_BASE))
#define SWI_SYS_RESTART		(0xef000000|__NR_restart_syscall|__NR_OABI_SYSCALL_BASE)
#define MOV_R7_NR_SIGRETURN	(0xe3a07000 | (__NR_sigreturn - __NR_SYSCALL_BASE))
#define MOV_R7_NR_RT_SIGRETURN	(0xe3a07000 | (__NR_rt_sigreturn - __NR_SYSCALL_BASE))
#define SWI_THUMB_SIGRETURN	(0xdf00 << 16 | 0x2700 | (__NR_sigreturn - __NR_SYSCALL_BASE))
#define SWI_THUMB_RT_SIGRETURN	(0xdf00 << 16 | 0x2700 | (__NR_rt_sigreturn - __NR_SYSCALL_BASE))
const unsigned long sigreturn_codes[7] = ;
const unsigned long syscall_restart_code[2] = ;
asmlinkage int sys_sigsuspend(int restart, unsigned long oldmask, old_sigset_t mask)
asmlinkage int
sys_sigaction(int sig, const struct old_sigaction __user *act,
struct old_sigaction __user *oact)
static int preserve_crunch_context(struct crunch_sigframe __user *frame)
static int restore_crunch_context(struct crunch_sigframe __user *frame)
static int preserve_iwmmxt_context(struct iwmmxt_sigframe *frame)
static int restore_iwmmxt_context(struct iwmmxt_sigframe *frame)
static int preserve_vfp_context(struct vfp_sigframe __user *frame)
static int restore_vfp_context(struct vfp_sigframe __user *frame)
struct sigframe ;
struct rt_sigframe ;
static int restore_sigframe(struct pt_regs *regs, struct sigframe __user *sf)
asmlinkage int sys_sigreturn(struct pt_regs *regs)
asmlinkage int sys_rt_sigreturn(struct pt_regs *regs)
static int
setup_sigframe(struct sigframe __user *sf, struct pt_regs *regs, sigset_t *set)
static inline void __user *
get_sigframe(struct k_sigaction *ka, struct pt_regs *regs, int framesize)
static int
setup_return(struct pt_regs *regs, struct k_sigaction *ka,
unsigned long __user *rc, void __user *frame, int usig)
static int
setup_frame(int usig, struct k_sigaction *ka, sigset_t *set, struct pt_regs *regs)
static int
setup_rt_frame(int usig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs)
static int
handle_signal(unsigned long sig, struct k_sigaction *ka,
siginfo_t *info, sigset_t *oldset,
struct pt_regs * regs)
static void do_signal(struct pt_regs *regs, int syscall)
asmlinkage void
do_notify_resume(struct pt_regs *regs, unsigned int thread_flags, int syscall)
