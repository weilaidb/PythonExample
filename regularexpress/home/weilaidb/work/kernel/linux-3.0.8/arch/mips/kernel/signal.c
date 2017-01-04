static int (*save_fp_context)(struct sigcontext __user *sc);
static int (*restore_fp_context)(struct sigcontext __user *sc);
extern asmlinkage int _save_fp_context(struct sigcontext __user *sc);
extern asmlinkage int _restore_fp_context(struct sigcontext __user *sc);
extern asmlinkage int fpu_emulator_save_context(struct sigcontext __user *sc);
extern asmlinkage int fpu_emulator_restore_context(struct sigcontext __user *sc);
struct sigframe ;
struct rt_sigframe ;
static int protected_save_fp_context(struct sigcontext __user *sc)
static int protected_restore_fp_context(struct sigcontext __user *sc)
int setup_sigcontext(struct pt_regs *regs, struct sigcontext __user *sc)
int fpcsr_pending(unsigned int __user *fpcsr)
static int
check_and_restore_fp_context(struct sigcontext __user *sc)
int restore_sigcontext(struct pt_regs *regs, struct sigcontext __user *sc)
void __user *get_sigframe(struct k_sigaction *ka, struct pt_regs *regs,
size_t frame_size)
asmlinkage int sys_sigsuspend(nabi_no_regargs struct pt_regs regs)
asmlinkage int sys_rt_sigsuspend(nabi_no_regargs struct pt_regs regs)
SYSCALL_DEFINE3(sigaction, int, sig, const struct sigaction __user *, act,
struct sigaction __user *, oact)
asmlinkage int sys_sigaltstack(nabi_no_regargs struct pt_regs regs)
asmlinkage void sys_sigreturn(nabi_no_regargs struct pt_regs regs)
asmlinkage void sys_rt_sigreturn(nabi_no_regargs struct pt_regs regs)
static int setup_frame(void *sig_return, struct k_sigaction *ka,
struct pt_regs *regs, int signr, sigset_t *set)
static int setup_rt_frame(void *sig_return, struct k_sigaction *ka,
struct pt_regs *regs,	int signr, sigset_t *set,
siginfo_t *info)
struct mips_abi mips_abi = ;
static int handle_signal(unsigned long sig, siginfo_t *info,
struct k_sigaction *ka, sigset_t *oldset, struct pt_regs *regs)
static void do_signal(struct pt_regs *regs)
asmlinkage void do_notify_resume(struct pt_regs *regs, void *unused,
__u32 thread_info_flags)
static int smp_save_fp_context(struct sigcontext __user *sc)
static int smp_restore_fp_context(struct sigcontext __user *sc)
static int signal_setup(void)
arch_initcall(signal_setup);
