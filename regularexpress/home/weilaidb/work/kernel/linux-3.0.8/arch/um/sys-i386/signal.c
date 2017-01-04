void copy_sc(struct uml_pt_regs *regs, void *from)
static inline unsigned short twd_i387_to_fxsr(unsigned short twd)
static inline unsigned long twd_fxsr_to_i387(struct user_fxsr_struct *fxsave)
static int convert_fxsr_to_user(struct _fpstate __user *buf,
struct user_fxsr_struct *fxsave)
static int convert_fxsr_from_user(struct user_fxsr_struct *fxsave,
struct _fpstate __user *buf)
extern int have_fpx_regs;
static int copy_sc_from_user(struct pt_regs *regs,
struct sigcontext __user *from)
static int copy_sc_to_user(struct sigcontext __user *to,
struct _fpstate __user *to_fp, struct pt_regs *regs,
unsigned long sp)
static int copy_ucontext_to_user(struct ucontext __user *uc,
struct _fpstate __user *fp, sigset_t *set,
unsigned long sp)
struct sigframe
;
struct rt_sigframe
;
int setup_signal_stack_sc(unsigned long stack_top, int sig,
struct k_sigaction *ka, struct pt_regs *regs,
sigset_t *mask)
int setup_signal_stack_si(unsigned long stack_top, int sig,
struct k_sigaction *ka, struct pt_regs *regs,
siginfo_t *info, sigset_t *mask)
long sys_sigreturn(struct pt_regs regs)
long sys_rt_sigreturn(struct pt_regs regs)
