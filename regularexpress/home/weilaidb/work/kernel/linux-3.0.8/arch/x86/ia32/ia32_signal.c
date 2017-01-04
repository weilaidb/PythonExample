#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
#define FIX_EFLAGS	(X86_EFLAGS_AC | X86_EFLAGS_OF | \
X86_EFLAGS_DF | X86_EFLAGS_TF | X86_EFLAGS_SF | \
X86_EFLAGS_ZF | X86_EFLAGS_AF | X86_EFLAGS_PF | \
X86_EFLAGS_CF)
void signal_fault(struct pt_regs *regs, void __user *frame, char *where);
int copy_siginfo_to_user32(compat_siginfo_t __user *to, siginfo_t *from)
int copy_siginfo_from_user32(siginfo_t *to, compat_siginfo_t __user *from)
asmlinkage long sys32_sigsuspend(int history0, int history1, old_sigset_t mask)
asmlinkage long sys32_sigaltstack(const stack_ia32_t __user *uss_ptr,
stack_ia32_t __user *uoss_ptr,
struct pt_regs *regs)
#define loadsegment_gs(v)	load_gs_index(v)
#define loadsegment_fs(v)	loadsegment(fs, v)
#define loadsegment_ds(v)	loadsegment(ds, v)
#define loadsegment_es(v)	loadsegment(es, v)
#define get_user_seg(seg)	()
#define set_user_seg(seg, v)	loadsegment_##seg(v)
#define COPY(x)
#define GET_SEG(seg)		()
#define COPY_SEG_CPL3(seg)	do  while (0)
#define RELOAD_SEG(seg)
static int ia32_restore_sigcontext(struct pt_regs *regs,
struct sigcontext_ia32 __user *sc,
unsigned int *pax)
asmlinkage long sys32_sigreturn(struct pt_regs *regs)
asmlinkage long sys32_rt_sigreturn(struct pt_regs *regs)
static int ia32_setup_sigcontext(struct sigcontext_ia32 __user *sc,
void __user *fpstate,
struct pt_regs *regs, unsigned int mask)
static void __user *get_sigframe(struct k_sigaction *ka, struct pt_regs *regs,
size_t frame_size,
void **fpstate)
int ia32_setup_frame(int sig, struct k_sigaction *ka,
compat_sigset_t *set, struct pt_regs *regs)
int ia32_setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
compat_sigset_t *set, struct pt_regs *regs)
