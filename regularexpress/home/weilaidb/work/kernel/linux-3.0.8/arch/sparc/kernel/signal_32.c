#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
extern void fpsave(unsigned long *fpregs, unsigned long *fsr,
void *fpqueue, unsigned long *fpqdepth);
extern void fpload(unsigned long *fpregs, unsigned long *fsr);
struct signal_frame  __attribute__((aligned(8)));
struct rt_signal_frame  __attribute__((aligned(8)));
#define SF_ALIGNEDSZ  (((sizeof(struct signal_frame) + 7) & (~7)))
#define RT_ALIGNEDSZ  (((sizeof(struct rt_signal_frame) + 7) & (~7)))
static int _sigpause_common(old_sigset_t set)
asmlinkage int sys_sigsuspend(old_sigset_t set)
asmlinkage void do_sigreturn(struct pt_regs *regs)
asmlinkage void do_rt_sigreturn(struct pt_regs *regs)
static inline int invalid_frame_pointer(void __user *fp, int fplen)
static inline void __user *get_sigframe(struct sigaction *sa, struct pt_regs *regs, unsigned long framesize)
static int setup_frame(struct k_sigaction *ka, struct pt_regs *regs,
int signo, sigset_t *oldset)
static int setup_rt_frame(struct k_sigaction *ka, struct pt_regs *regs,
int signo, sigset_t *oldset, siginfo_t *info)
static inline int
handle_signal(unsigned long signr, struct k_sigaction *ka,
siginfo_t *info, sigset_t *oldset, struct pt_regs *regs)
static inline void syscall_restart(unsigned long orig_i0, struct pt_regs *regs,
struct sigaction *sa)
static void do_signal(struct pt_regs *regs, unsigned long orig_i0)
void do_notify_resume(struct pt_regs *regs, unsigned long orig_i0,
unsigned long thread_info_flags)
asmlinkage int
do_sys_sigstack(struct sigstack __user *ssptr, struct sigstack __user *ossptr,
unsigned long sp)
