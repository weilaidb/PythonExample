#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
typedef struct
sigframe32;
typedef struct
rt_sigframe32;
int copy_siginfo_to_user32(compat_siginfo_t __user *to, siginfo_t *from)
int copy_siginfo_from_user32(siginfo_t *to, compat_siginfo_t __user *from)
asmlinkage long
sys32_sigaction(int sig, const struct old_sigaction32 __user *act,
struct old_sigaction32 __user *oact)
asmlinkage long
sys32_rt_sigaction(int sig, const struct sigaction32 __user *act,
struct sigaction32 __user *oact,  size_t sigsetsize)
asmlinkage long
sys32_sigaltstack(const stack_t32 __user *uss, stack_t32 __user *uoss)
static int save_sigregs32(struct pt_regs *regs, _sigregs32 __user *sregs)
static int restore_sigregs32(struct pt_regs *regs,_sigregs32 __user *sregs)
static int save_sigregs_gprs_high(struct pt_regs *regs, __u32 __user *uregs)
static int restore_sigregs_gprs_high(struct pt_regs *regs, __u32 __user *uregs)
asmlinkage long sys32_sigreturn(void)
asmlinkage long sys32_rt_sigreturn(void)
static inline void __user *
get_sigframe(struct k_sigaction *ka, struct pt_regs * regs, size_t frame_size)
static inline int map_signal(int sig)
static int setup_frame32(int sig, struct k_sigaction *ka,
sigset_t *set, struct pt_regs * regs)
static int setup_rt_frame32(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs * regs)
int
handle_signal32(unsigned long sig, struct k_sigaction *ka,
siginfo_t *info, sigset_t *oldset, struct pt_regs * regs)
