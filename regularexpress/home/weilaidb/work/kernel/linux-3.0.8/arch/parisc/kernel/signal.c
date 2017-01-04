#define DEBUG_SIG 0
#define DEBUG_SIG_LEVEL 2
#if DEBUG_SIG
#define DBG(LEVEL, ...) \
((DEBUG_SIG_LEVEL >= LEVEL) \
? printk(__VA_ARGS__) : (void) 0)
#define DBG(LEVEL, ...)
#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
#define A(__x)	((unsigned long)(__x))
#define INSN_LDI_R25_0	 0x34190000
#define INSN_LDI_R25_1	 0x34190002
#define INSN_LDI_R20	 0x3414015a
#define INSN_BLE_SR2_R0  0xe4008200
#define INSN_NOP	 0x08000240
#define INSN_DIE_HORRIBLY 0x68000ccc
static long
restore_sigcontext(struct sigcontext __user *sc, struct pt_regs *regs)
void
sys_rt_sigreturn(struct pt_regs *regs, int in_syscall)
static inline void __user *
get_sigframe(struct k_sigaction *ka, unsigned long sp, size_t frame_size)
static long
setup_sigcontext(struct sigcontext __user *sc, struct pt_regs *regs, int in_syscall)
static long
setup_rt_frame(int sig, struct k_sigaction *ka, siginfo_t *info,
sigset_t *set, struct pt_regs *regs, int in_syscall)
static long
handle_signal(unsigned long sig, siginfo_t *info, struct k_sigaction *ka,
sigset_t *oldset, struct pt_regs *regs, int in_syscall)
static inline void
syscall_restart(struct pt_regs *regs, struct k_sigaction *ka)
static inline void
insert_restart_trampoline(struct pt_regs *regs)
asmlinkage void
do_signal(struct pt_regs *regs, long in_syscall)
void do_notify_resume(struct pt_regs *regs, long in_syscall)
