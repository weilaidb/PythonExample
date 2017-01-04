#define DEBUG_COMPAT_SIG 0
#define DEBUG_COMPAT_SIG_LEVEL 2
#if DEBUG_COMPAT_SIG
#define DBG(LEVEL, ...) \
((DEBUG_COMPAT_SIG_LEVEL >= LEVEL) \
? printk(__VA_ARGS__) : (void) 0)
#define DBG(LEVEL, ...)
#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
inline void
sigset_32to64(sigset_t *s64, compat_sigset_t *s32)
inline void
sigset_64to32(compat_sigset_t *s32, sigset_t *s64)
static int
put_sigset32(compat_sigset_t __user *up, sigset_t *set, size_t sz)
static int
get_sigset32(compat_sigset_t __user *up, sigset_t *set, size_t sz)
int sys32_rt_sigprocmask(int how, compat_sigset_t __user *set, compat_sigset_t __user *oset,
unsigned int sigsetsize)
int sys32_rt_sigpending(compat_sigset_t __user *uset, unsigned int sigsetsize)
long
sys32_rt_sigaction(int sig, const struct sigaction32 __user *act, struct sigaction32 __user *oact,
size_t sigsetsize)
int
do_sigaltstack32 (const compat_stack_t __user *uss32, compat_stack_t __user *uoss32, unsigned long sp)
long
restore_sigcontext32(struct compat_sigcontext __user *sc, struct compat_regfile __user * rf,
struct pt_regs *regs)
long
setup_sigcontext32(struct compat_sigcontext __user *sc, struct compat_regfile __user * rf,
struct pt_regs *regs, int in_syscall)
int
copy_siginfo_from_user32 (siginfo_t *to, compat_siginfo_t __user *from)
int
copy_siginfo_to_user32 (compat_siginfo_t __user *to, siginfo_t *from)
asmlinkage long compat_sys_rt_sigqueueinfo(int pid, int sig,
struct compat_siginfo __user *uinfo)
