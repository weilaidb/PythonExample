#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
struct fdpic_func_descriptor ;
#define UNWINDGUARD 64
asmlinkage int
sys_sigsuspend(old_sigset_t mask,
unsigned long r5, unsigned long r6, unsigned long r7,
struct pt_regs __regs)
asmlinkage int
sys_sigaction(int sig, const struct old_sigaction __user *act,
struct old_sigaction __user *oact)
asmlinkage int
sys_sigaltstack(const stack_t __user *uss, stack_t __user *uoss,
unsigned long r6, unsigned long r7,
struct pt_regs __regs)
#define MOVW(n)	 (0x9300|((n)-2))
#if defined(CONFIG_CPU_SH2)
#define TRAP_NOARG 0xc320
#define TRAP_NOARG 0xc310
#define OR_R0_R0 0x200b
struct sigframe
;
struct rt_sigframe
;
static inline int restore_sigcontext_fpu(struct sigcontext __user *sc)
static inline int save_sigcontext_fpu(struct sigcontext __user *sc,
struct pt_regs *regs)
static int
restore_sigcontext(struct pt_regs *regs, struct sigcontext __user *sc, int *r0_p)
asmlinkage int sys_sigreturn(unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs __regs)
asmlinkage int sys_rt_sigreturn(unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs __regs)
static int
setup_sigcontext(struct sigcontext __user *sc, struct pt_regs *regs,
unsigned long mask)
static inline void __user *
get_sigframe(struct k_sigaction *ka, unsigned long sp, size_t frame_size)
extern void __kernel_sigreturn(void);
extern void __kernel_rt_sigreturn(void);
static int setup_frame(int sig, struct k_sigaction *ka,
sigset_t *set, struct pt_regs *regs)
static int setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs)
static inline void
handle_syscall_restart(unsigned long save_r0, struct pt_regs *regs,
struct sigaction *sa)
static int
handle_signal(unsigned long sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *oldset, struct pt_regs *regs, unsigned int save_r0)
static void do_signal(struct pt_regs *regs, unsigned int save_r0)
asmlinkage void do_notify_resume(struct pt_regs *regs, unsigned int save_r0,
unsigned long thread_info_flags)
