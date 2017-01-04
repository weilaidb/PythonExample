#define _POWERPC_ARCH_SIGNAL_H
#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
extern void do_signal(struct pt_regs *regs, unsigned long thread_info_flags);
extern void __user * get_sigframe(struct k_sigaction *ka, struct pt_regs *regs,
size_t frame_size, int is_32);
extern void restore_sigmask(sigset_t *set);
extern int handle_signal32(unsigned long sig, struct k_sigaction *ka,
siginfo_t *info, sigset_t *oldset,
struct pt_regs *regs);
extern int handle_rt_signal32(unsigned long sig, struct k_sigaction *ka,
siginfo_t *info, sigset_t *oldset,
struct pt_regs *regs);
extern unsigned long copy_fpr_to_user(void __user *to,
struct task_struct *task);
extern unsigned long copy_fpr_from_user(struct task_struct *task,
void __user *from);
extern unsigned long copy_vsx_to_user(void __user *to,
struct task_struct *task);
extern unsigned long copy_vsx_from_user(struct task_struct *task,
void __user *from);
extern int handle_rt_signal64(int signr, struct k_sigaction *ka,
siginfo_t *info, sigset_t *set,
struct pt_regs *regs);
static inline int handle_rt_signal64(int signr, struct k_sigaction *ka,
siginfo_t *info, sigset_t *set,
struct pt_regs *regs)
