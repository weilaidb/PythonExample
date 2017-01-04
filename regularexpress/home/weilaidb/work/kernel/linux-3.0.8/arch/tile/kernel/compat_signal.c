struct compat_sigaction ;
struct compat_sigaltstack ;
struct compat_ucontext ;
#define COMPAT_SI_PAD_SIZE	((SI_MAX_SIZE - 3 * sizeof(int)) / sizeof(int))
struct compat_siginfo ;
struct compat_rt_sigframe ;
#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
long compat_sys_rt_sigaction(int sig, struct compat_sigaction __user *act,
struct compat_sigaction __user *oact,
size_t sigsetsize)
long compat_sys_rt_sigqueueinfo(int pid, int sig,
struct compat_siginfo __user *uinfo)
int copy_siginfo_to_user32(struct compat_siginfo __user *to, siginfo_t *from)
int copy_siginfo_from_user32(siginfo_t *to, struct compat_siginfo __user *from)
long compat_sys_sigaltstack(const struct compat_sigaltstack __user *uss_ptr,
struct compat_sigaltstack __user *uoss_ptr,
struct pt_regs *regs)
long compat_sys_rt_sigreturn(struct pt_regs *regs)
static inline void __user *compat_get_sigframe(struct k_sigaction *ka,
struct pt_regs *regs,
size_t frame_size)
int compat_setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs)
