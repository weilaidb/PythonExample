#define DEBUG_SIG 0
#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
SYSCALL_DEFINE3(sigaltstack, const stack_t __user *, uss,
stack_t __user *, uoss, struct pt_regs *, regs)
int restore_sigcontext(struct pt_regs *regs,
struct sigcontext __user *sc)
void signal_fault(const char *type, struct pt_regs *regs,
void __user *frame, int sig)
SYSCALL_DEFINE1(rt_sigreturn, struct pt_regs *, regs)
int setup_sigcontext(struct sigcontext __user *sc, struct pt_regs *regs)
static inline void __user *get_sigframe(struct k_sigaction *ka,
struct pt_regs *regs,
size_t frame_size)
static int setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs)
static int handle_signal(unsigned long sig, siginfo_t *info,
struct k_sigaction *ka, sigset_t *oldset,
struct pt_regs *regs)
void do_signal(struct pt_regs *regs)
int show_unhandled_signals = 1;
static int __init crashinfo(char *str)
__setup("crashinfo", crashinfo);
static void dump_mem(void __user *address)
void trace_unhandled_signal(const char *type, struct pt_regs *regs,
unsigned long address, int sig)
