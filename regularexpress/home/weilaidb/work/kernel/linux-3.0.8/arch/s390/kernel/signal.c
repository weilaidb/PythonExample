#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
typedef struct
sigframe;
typedef struct
rt_sigframe;
SYSCALL_DEFINE3(sigsuspend, int, history0, int, history1, old_sigset_t, mask)
SYSCALL_DEFINE3(sigaction, int, sig, const struct old_sigaction __user *, act,
struct old_sigaction __user *, oact)
SYSCALL_DEFINE2(sigaltstack, const stack_t __user *, uss,
stack_t __user *, uoss)
static int save_sigregs(struct pt_regs *regs, _sigregs __user *sregs)
static int restore_sigregs(struct pt_regs *regs, _sigregs __user *sregs)
SYSCALL_DEFINE0(sigreturn)
SYSCALL_DEFINE0(rt_sigreturn)
static inline void __user *
get_sigframe(struct k_sigaction *ka, struct pt_regs * regs, size_t frame_size)
static inline int map_signal(int sig)
static int setup_frame(int sig, struct k_sigaction *ka,
sigset_t *set, struct pt_regs * regs)
static int setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs * regs)
static int
handle_signal(unsigned long sig, struct k_sigaction *ka,
siginfo_t *info, sigset_t *oldset, struct pt_regs * regs)
void do_signal(struct pt_regs *regs)
void do_notify_resume(struct pt_regs *regs)
