#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
static const int frame_extra_sizes[16] = ;
int handle_kernel_fault(struct pt_regs *regs)
asmlinkage int
sys_sigsuspend(int unused0, int unused1, old_sigset_t mask)
asmlinkage int
sys_sigaction(int sig, const struct old_sigaction __user *act,
struct old_sigaction __user *oact)
asmlinkage int
sys_sigaltstack(const stack_t __user *uss, stack_t __user *uoss)
struct sigframe
;
struct rt_sigframe
;
static unsigned char fpu_version;
static inline int restore_fpu_state(struct sigcontext *sc)
#define FPCONTEXT_SIZE	216
#define uc_fpstate	uc_filler[0]
#define uc_formatvec	uc_filler[FPCONTEXT_SIZE/4]
#define uc_extra	uc_filler[FPCONTEXT_SIZE/4+1]
static inline int rt_restore_fpu_state(struct ucontext __user *uc)
static int mangle_kernel_stack(struct pt_regs *regs, int formatvec,
void __user *fp)
static inline int
restore_sigcontext(struct pt_regs *regs, struct sigcontext __user *usc, void __user *fp)
static inline int
rt_restore_ucontext(struct pt_regs *regs, struct switch_stack *sw,
struct ucontext __user *uc)
asmlinkage int do_sigreturn(unsigned long __unused)
asmlinkage int do_rt_sigreturn(unsigned long __unused)
static inline void save_fpu_state(struct sigcontext *sc, struct pt_regs *regs)
static inline int rt_save_fpu_state(struct ucontext __user *uc, struct pt_regs *regs)
static void setup_sigcontext(struct sigcontext *sc, struct pt_regs *regs,
unsigned long mask)
static inline int rt_setup_ucontext(struct ucontext __user *uc, struct pt_regs *regs)
static inline void push_cache (unsigned long vaddr)
static inline void __user *
get_sigframe(struct k_sigaction *ka, struct pt_regs *regs, size_t frame_size)
static int setup_frame (int sig, struct k_sigaction *ka,
sigset_t *set, struct pt_regs *regs)
static int setup_rt_frame (int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs)
static inline void
handle_restart(struct pt_regs *regs, struct k_sigaction *ka, int has_handler)
void ptrace_signal_deliver(struct pt_regs *regs, void *cookie)
static void
handle_signal(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *oldset, struct pt_regs *regs)
asmlinkage void do_signal(struct pt_regs *regs)
