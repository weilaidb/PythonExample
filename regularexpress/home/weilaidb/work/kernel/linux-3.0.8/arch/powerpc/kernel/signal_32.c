#undef DEBUG_SIG
#define sys_sigsuspend	compat_sys_sigsuspend
#define sys_rt_sigsuspend	compat_sys_rt_sigsuspend
#define sys_rt_sigreturn	compat_sys_rt_sigreturn
#define sys_sigaction	compat_sys_sigaction
#define sys_swapcontext	compat_sys_swapcontext
#define sys_sigreturn	compat_sys_sigreturn
#define old_sigaction	old_sigaction32
#define sigcontext	sigcontext32
#define mcontext	mcontext32
#define ucontext	ucontext32
#define UCONTEXTSIZEWITHOUTVSX \
(sizeof(struct ucontext) - sizeof(elf_vsrreghalf_t32))
#define GP_REGS_SIZE	min(sizeof(elf_gregset_t32), sizeof(struct pt_regs32))
#undef __SIGNAL_FRAMESIZE
#define __SIGNAL_FRAMESIZE	__SIGNAL_FRAMESIZE32
#undef ELF_NVRREG
#define ELF_NVRREG	ELF_NVRREG32
static inline int put_sigset_t(compat_sigset_t __user *uset, sigset_t *set)
static inline int get_sigset_t(sigset_t *set,
const compat_sigset_t __user *uset)
static inline int get_old_sigaction(struct k_sigaction *new_ka,
struct old_sigaction __user *act)
#define to_user_ptr(p)		ptr_to_compat(p)
#define from_user_ptr(p)	compat_ptr(p)
static inline int save_general_regs(struct pt_regs *regs,
struct mcontext __user *frame)
static inline int restore_general_regs(struct pt_regs *regs,
struct mcontext __user *sr)
#define GP_REGS_SIZE	min(sizeof(elf_gregset_t), sizeof(struct pt_regs))
static inline int put_sigset_t(sigset_t __user *uset, sigset_t *set)
static inline int get_sigset_t(sigset_t *set, const sigset_t __user *uset)
static inline int get_old_sigaction(struct k_sigaction *new_ka,
struct old_sigaction __user *act)
#define to_user_ptr(p)		((unsigned long)(p))
#define from_user_ptr(p)	((void __user *)(p))
static inline int save_general_regs(struct pt_regs *regs,
struct mcontext __user *frame)
static inline int restore_general_regs(struct pt_regs *regs,
struct mcontext __user *sr)
long sys_sigsuspend(old_sigset_t mask)
long sys_sigaction(int sig, struct old_sigaction __user *act,
struct old_sigaction __user *oact)
struct sigframe ;
#define tramp	mc_pad
struct rt_sigframe ;
unsigned long copy_fpr_to_user(void __user *to,
struct task_struct *task)
unsigned long copy_fpr_from_user(struct task_struct *task,
void __user *from)
unsigned long copy_vsx_to_user(void __user *to,
struct task_struct *task)
unsigned long copy_vsx_from_user(struct task_struct *task,
void __user *from)
inline unsigned long copy_fpr_to_user(void __user *to,
struct task_struct *task)
inline unsigned long copy_fpr_from_user(struct task_struct *task,
void __user *from)
static int save_user_regs(struct pt_regs *regs, struct mcontext __user *frame,
int sigret, int ctx_has_vsx_region)
static long restore_user_regs(struct pt_regs *regs,
struct mcontext __user *sr, int sig)
long compat_sys_rt_sigaction(int sig, const struct sigaction32 __user *act,
struct sigaction32 __user *oact, size_t sigsetsize)
long compat_sys_rt_sigprocmask(u32 how, compat_sigset_t __user *set,
compat_sigset_t __user *oset, size_t sigsetsize)
long compat_sys_rt_sigpending(compat_sigset_t __user *set, compat_size_t sigsetsize)
int copy_siginfo_to_user32(struct compat_siginfo __user *d, siginfo_t *s)
#define copy_siginfo_to_user	copy_siginfo_to_user32
int copy_siginfo_from_user32(siginfo_t *to, struct compat_siginfo __user *from)
long compat_sys_rt_sigqueueinfo(u32 pid, u32 sig, compat_siginfo_t __user *uinfo)
int compat_sys_sigaltstack(u32 __new, u32 __old, int r5,
int r6, int r7, int r8, struct pt_regs *regs)
int handle_rt_signal32(unsigned long sig, struct k_sigaction *ka,
siginfo_t *info, sigset_t *oldset,
struct pt_regs *regs)
static int do_setcontext(struct ucontext __user *ucp, struct pt_regs *regs, int sig)
long sys_swapcontext(struct ucontext __user *old_ctx,
struct ucontext __user *new_ctx,
int ctx_size, int r6, int r7, int r8, struct pt_regs *regs)
long sys_rt_sigreturn(int r3, int r4, int r5, int r6, int r7, int r8,
struct pt_regs *regs)
int sys_debug_setcontext(struct ucontext __user *ctx,
int ndbg, struct sig_dbg_op __user *dbg,
int r6, int r7, int r8,
struct pt_regs *regs)
int handle_signal32(unsigned long sig, struct k_sigaction *ka,
siginfo_t *info, sigset_t *oldset, struct pt_regs *regs)
long sys_sigreturn(int r3, int r4, int r5, int r6, int r7, int r8,
struct pt_regs *regs)
