#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
#define __FIX_EFLAGS	(X86_EFLAGS_AC | X86_EFLAGS_OF | \
X86_EFLAGS_DF | X86_EFLAGS_TF | X86_EFLAGS_SF | \
X86_EFLAGS_ZF | X86_EFLAGS_AF | X86_EFLAGS_PF | \
X86_EFLAGS_CF)
# define FIX_EFLAGS	(__FIX_EFLAGS | X86_EFLAGS_RF)
# define FIX_EFLAGS	__FIX_EFLAGS
#define COPY(x)			do  while (0)
#define GET_SEG(seg)		()
#define COPY_SEG(seg)		do  while (0)
#define COPY_SEG_CPL3(seg)	do  while (0)
static int
restore_sigcontext(struct pt_regs *regs, struct sigcontext __user *sc,
unsigned long *pax)
static int
setup_sigcontext(struct sigcontext __user *sc, void __user *fpstate,
struct pt_regs *regs, unsigned long mask)
static unsigned long align_sigframe(unsigned long sp)
static inline void __user *
get_sigframe(struct k_sigaction *ka, struct pt_regs *regs, size_t frame_size,
void __user **fpstate)
static const struct  __attribute__((packed)) retcode = ;
static const struct  __attribute__((packed)) rt_retcode = ;
static int
__setup_frame(int sig, struct k_sigaction *ka, sigset_t *set,
struct pt_regs *regs)
static int __setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs)
static int __setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs)
asmlinkage int
sys_sigsuspend(int history0, int history1, old_sigset_t mask)
asmlinkage int
sys_sigaction(int sig, const struct old_sigaction __user *act,
struct old_sigaction __user *oact)
long
sys_sigaltstack(const stack_t __user *uss, stack_t __user *uoss,
struct pt_regs *regs)
unsigned long sys_sigreturn(struct pt_regs *regs)
long sys_rt_sigreturn(struct pt_regs *regs)
static int signr_convert(int sig)
#define is_ia32	1
#define ia32_setup_frame	__setup_frame
#define ia32_setup_rt_frame	__setup_rt_frame
#define is_ia32	test_thread_flag(TIF_IA32)
#define is_ia32	0
int ia32_setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs);
int ia32_setup_frame(int sig, struct k_sigaction *ka,
sigset_t *set, struct pt_regs *regs);
static int
setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs)
static int
handle_signal(unsigned long sig, siginfo_t *info, struct k_sigaction *ka,
sigset_t *oldset, struct pt_regs *regs)
#define NR_restart_syscall	__NR_restart_syscall
#define NR_restart_syscall	\
test_thread_flag(TIF_IA32) ? __NR_ia32_restart_syscall : __NR_restart_syscall
static void do_signal(struct pt_regs *regs)
void
do_notify_resume(struct pt_regs *regs, void *unused, __u32 thread_info_flags)
void signal_fault(struct pt_regs *regs, void __user *frame, char *where)
