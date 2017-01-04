#define _PARISC64_KERNEL_SIGNAL32_H
typedef compat_uptr_t compat_sighandler_t;
typedef struct compat_sigaltstack  compat_stack_t;
struct compat_sigaction ;
struct compat_ucontext ;
struct k_sigaction32 ;
typedef struct compat_siginfo  compat_siginfo_t;
int copy_siginfo_to_user32 (compat_siginfo_t __user *to, siginfo_t *from);
int copy_siginfo_from_user32 (siginfo_t *to, compat_siginfo_t __user *from);
struct compat_regfile ;
#define COMPAT_SIGRETURN_TRAMP 4
#define COMPAT_SIGRESTARTBLOCK_TRAMP 5
#define COMPAT_TRAMP_SIZE (COMPAT_SIGRETURN_TRAMP + \
COMPAT_SIGRESTARTBLOCK_TRAMP)
struct compat_rt_sigframe ;
#define SIGFRAME32              64
#define FUNCTIONCALLFRAME32     48
#define PARISC_RT_SIGFRAME_SIZE32 (((sizeof(struct compat_rt_sigframe) + FUNCTIONCALLFRAME32) + SIGFRAME32) & -SIGFRAME32)
void sigset_32to64(sigset_t *s64, compat_sigset_t *s32);
void sigset_64to32(compat_sigset_t *s32, sigset_t *s64);
int do_sigaltstack32 (const compat_stack_t __user *uss32,
compat_stack_t __user *uoss32, unsigned long sp);
long restore_sigcontext32(struct compat_sigcontext __user *sc,
struct compat_regfile __user *rf,
struct pt_regs *regs);
long setup_sigcontext32(struct compat_sigcontext __user *sc,
struct compat_regfile __user *rf,
struct pt_regs *regs, int in_syscall);
