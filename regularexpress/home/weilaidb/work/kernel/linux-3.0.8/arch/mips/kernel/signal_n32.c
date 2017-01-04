#define __NR_N32_restart_syscall	6214
extern int setup_sigcontext(struct pt_regs *, struct sigcontext __user *);
extern int restore_sigcontext(struct pt_regs *, struct sigcontext __user *);
typedef struct sigaltstack32  stack32_t;
struct ucontextn32 ;
struct rt_sigframe_n32 ;
extern void sigset_from_compat(sigset_t *set, compat_sigset_t *compat);
asmlinkage int sysn32_rt_sigsuspend(nabi_no_regargs struct pt_regs regs)
asmlinkage void sysn32_rt_sigreturn(nabi_no_regargs struct pt_regs regs)
static int setup_rt_frame_n32(void *sig_return, struct k_sigaction *ka,
struct pt_regs *regs, int signr, sigset_t *set, siginfo_t *info)
struct mips_abi mips_abi_n32 = ;
