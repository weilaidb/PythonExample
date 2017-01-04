#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
#define SIGINFO_EXTRA_V8PLUS_MAGIC	0x130e269
typedef struct  siginfo_extra_v8plus_t;
struct signal_frame32  __attribute__((aligned(8)));
typedef struct compat_siginfocompat_siginfo_t;
struct rt_signal_frame32  __attribute__((aligned(8)));
int copy_siginfo_to_user32(compat_siginfo_t __user *to, siginfo_t *from)
int copy_siginfo_from_user32(siginfo_t *to, compat_siginfo_t __user *from)
void do_sigreturn32(struct pt_regs *regs)
asmlinkage void do_rt_sigreturn32(struct pt_regs *regs)
static int invalid_frame_pointer(void __user *fp, int fplen)
static void __user *get_sigframe(struct sigaction *sa, struct pt_regs *regs, unsigned long framesize)
static void flush_signal_insns(unsigned long address)
static int setup_frame32(struct k_sigaction *ka, struct pt_regs *regs,
int signo, sigset_t *oldset)
static int setup_rt_frame32(struct k_sigaction *ka, struct pt_regs *regs,
unsigned long signr, sigset_t *oldset,
siginfo_t *info)
static inline int handle_signal32(unsigned long signr, struct k_sigaction *ka,
siginfo_t *info,
sigset_t *oldset, struct pt_regs *regs)
static inline void syscall_restart32(unsigned long orig_i0, struct pt_regs *regs,
struct sigaction *sa)
void do_signal32(sigset_t *oldset, struct pt_regs * regs,
int restart_syscall, unsigned long orig_i0)
struct sigstack32 ;
asmlinkage int do_sys32_sigstack(u32 u_ssptr, u32 u_ossptr, unsigned long sp)
asmlinkage long do_sys32_sigaltstack(u32 ussa, u32 uossa, unsigned long sp)
