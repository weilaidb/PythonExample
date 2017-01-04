#define DEBUG_SIG 0
#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
asmlinkage void ret_from_sys_call(void);
static void do_signal(struct pt_regs *, struct switch_stack *,
unsigned long, unsigned long);
SYSCALL_DEFINE2(osf_sigprocmask, int, how, unsigned long, newmask)
SYSCALL_DEFINE3(osf_sigaction, int, sig,
const struct osf_sigaction __user *, act,
struct osf_sigaction __user *, oact)
SYSCALL_DEFINE5(rt_sigaction, int, sig, const struct sigaction __user *, act,
struct sigaction __user *, oact,
size_t, sigsetsize, void __user *, restorer)
SYSCALL_DEFINE1(sigsuspend, old_sigset_t, mask)
asmlinkage int
sys_sigaltstack(const stack_t __user *uss, stack_t __user *uoss)
#if _NSIG_WORDS > 1
# error "Non SA_SIGINFO frame needs rearranging"
struct sigframe
;
struct rt_sigframe
;
extern char compile_time_assert
[offsetof(struct rt_sigframe, uc.uc_mcontext) == 176 ? 1 : -1];
#define INSN_MOV_R30_R16	0x47fe0410
#define INSN_LDI_R0		0x201f0000
#define INSN_CALLSYS		0x00000083
static long
restore_sigcontext(struct sigcontext __user *sc, struct pt_regs *regs,
struct switch_stack *sw)
asmlinkage void
do_sigreturn(struct sigcontext __user *sc, struct pt_regs *regs,
struct switch_stack *sw)
asmlinkage void
do_rt_sigreturn(struct rt_sigframe __user *frame, struct pt_regs *regs,
struct switch_stack *sw)
static inline void __user *
get_sigframe(struct k_sigaction *ka, unsigned long sp, size_t frame_size)
static long
setup_sigcontext(struct sigcontext __user *sc, struct pt_regs *regs,
struct switch_stack *sw, unsigned long mask, unsigned long sp)
static int
setup_frame(int sig, struct k_sigaction *ka, sigset_t *set,
struct pt_regs *regs, struct switch_stack * sw)
static int
setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs, struct switch_stack * sw)
static inline int
handle_signal(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *oldset, struct pt_regs * regs, struct switch_stack *sw)
static inline void
syscall_restart(unsigned long r0, unsigned long r19,
struct pt_regs *regs, struct k_sigaction *ka)
static void
do_signal(struct pt_regs * regs, struct switch_stack * sw,
unsigned long r0, unsigned long r19)
void
do_notify_resume(struct pt_regs *regs, struct switch_stack *sw,
unsigned long thread_info_flags,
unsigned long r0, unsigned long r19)
