void copy_sc(struct uml_pt_regs *regs, void *from)
static int copy_sc_from_user(struct pt_regs *regs,
struct sigcontext __user *from,
struct _fpstate __user *fpp)
static int copy_sc_to_user(struct sigcontext __user *to,
struct _fpstate __user *to_fp, struct pt_regs *regs,
unsigned long mask, unsigned long sp)
struct rt_sigframe
;
int setup_signal_stack_si(unsigned long stack_top, int sig,
struct k_sigaction *ka, struct pt_regs * regs,
siginfo_t *info, sigset_t *set)
long sys_rt_sigreturn(struct pt_regs *regs)
