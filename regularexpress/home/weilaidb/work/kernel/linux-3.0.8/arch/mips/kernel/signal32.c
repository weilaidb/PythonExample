static int (*save_fp_context32)(struct sigcontext32 __user *sc);
static int (*restore_fp_context32)(struct sigcontext32 __user *sc);
extern asmlinkage int _save_fp_context32(struct sigcontext32 __user *sc);
extern asmlinkage int _restore_fp_context32(struct sigcontext32 __user *sc);
extern asmlinkage int fpu_emulator_save_context32(struct sigcontext32 __user *sc);
extern asmlinkage int fpu_emulator_restore_context32(struct sigcontext32 __user *sc);
#define __NR_O32_restart_syscall        4253
typedef unsigned int __sighandler32_t;
typedef void (*vfptr_t)(void);
struct sigaction32 ;
typedef struct sigaltstack32  stack32_t;
struct ucontext32 ;
struct sigframe32 ;
struct rt_sigframe32 ;
static int protected_save_fp_context32(struct sigcontext32 __user *sc)
static int protected_restore_fp_context32(struct sigcontext32 __user *sc)
static int setup_sigcontext32(struct pt_regs *regs,
struct sigcontext32 __user *sc)
static int
check_and_restore_fp_context32(struct sigcontext32 __user *sc)
static int restore_sigcontext32(struct pt_regs *regs,
struct sigcontext32 __user *sc)
extern void __put_sigset_unknown_nsig(void);
extern void __get_sigset_unknown_nsig(void);
static inline int put_sigset(const sigset_t *kbuf, compat_sigset_t __user *ubuf)
static inline int get_sigset(sigset_t *kbuf, const compat_sigset_t __user *ubuf)
asmlinkage int sys32_sigsuspend(nabi_no_regargs struct pt_regs regs)
asmlinkage int sys32_rt_sigsuspend(nabi_no_regargs struct pt_regs regs)
SYSCALL_DEFINE3(32_sigaction, long, sig, const struct sigaction32 __user *, act,
struct sigaction32 __user *, oact)
asmlinkage int sys32_sigaltstack(nabi_no_regargs struct pt_regs regs)
int copy_siginfo_to_user32(compat_siginfo_t __user *to, siginfo_t *from)
int copy_siginfo_from_user32(siginfo_t *to, compat_siginfo_t __user *from)
asmlinkage void sys32_sigreturn(nabi_no_regargs struct pt_regs regs)
asmlinkage void sys32_rt_sigreturn(nabi_no_regargs struct pt_regs regs)
static int setup_frame_32(void *sig_return, struct k_sigaction *ka,
struct pt_regs *regs, int signr, sigset_t *set)
static int setup_rt_frame_32(void *sig_return, struct k_sigaction *ka,
struct pt_regs *regs, int signr, sigset_t *set,
siginfo_t *info)
struct mips_abi mips_abi_32 = ;
SYSCALL_DEFINE4(32_rt_sigaction, int, sig,
const struct sigaction32 __user *, act,
struct sigaction32 __user *, oact, unsigned int, sigsetsize)
SYSCALL_DEFINE4(32_rt_sigprocmask, int, how, compat_sigset_t __user *, set,
compat_sigset_t __user *, oset, unsigned int, sigsetsize)
SYSCALL_DEFINE2(32_rt_sigpending, compat_sigset_t __user *, uset,
unsigned int, sigsetsize)
SYSCALL_DEFINE3(32_rt_sigqueueinfo, int, pid, int, sig,
compat_siginfo_t __user *, uinfo)
SYSCALL_DEFINE5(32_waitid, int, which, compat_pid_t, pid,
compat_siginfo_t __user *, uinfo, int, options,
struct compat_rusage __user *, uru)
static int signal32_init(void)
arch_initcall(signal32_init);
