#define DEBUG_SIG 0
#define GP_REGS_SIZE	min(sizeof(elf_gregset_t), sizeof(struct pt_regs))
#define FP_REGS_SIZE	sizeof(elf_fpregset_t)
#define TRAMP_TRACEBACK	3
#define TRAMP_SIZE	6
struct rt_sigframe  __attribute__ ((aligned (16)));
static const char fmt32[] = KERN_INFO \
"%s[%d]: bad frame in %s: %08lx nip %08lx lr %08lx\n";
static const char fmt64[] = KERN_INFO \
"%s[%d]: bad frame in %s: %016lx nip %016lx lr %016lx\n";
static long setup_sigcontext(struct sigcontext __user *sc, struct pt_regs *regs,
int signr, sigset_t *set, unsigned long handler,
int ctx_has_vsx_region)
static long restore_sigcontext(struct pt_regs *regs, sigset_t *set, int sig,
struct sigcontext __user *sc)
static long setup_trampoline(unsigned int syscall, unsigned int __user *tramp)
#define UCONTEXTSIZEWITHOUTVSX \
(sizeof(struct ucontext) - 32*sizeof(long))
int sys_swapcontext(struct ucontext __user *old_ctx,
struct ucontext __user *new_ctx,
long ctx_size, long r6, long r7, long r8, struct pt_regs *regs)
int sys_rt_sigreturn(unsigned long r3, unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7, unsigned long r8,
struct pt_regs *regs)
int handle_rt_signal64(int signr, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs)
