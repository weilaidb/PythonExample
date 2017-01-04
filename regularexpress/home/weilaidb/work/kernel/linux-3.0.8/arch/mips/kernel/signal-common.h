#define __SIGNAL_COMMON_H
#  define DEBUGP(fmt, args...) printk("%s: " fmt, __func__, ##args)
#  define DEBUGP(fmt, args...)
#define _BLOCKABLE (~(sigmask(SIGKILL) | sigmask(SIGSTOP)))
extern void __user *get_sigframe(struct k_sigaction *ka, struct pt_regs *regs,
size_t frame_size);
extern int fpcsr_pending(unsigned int __user *fpcsr);
#define lock_fpu_owner()	preempt_disable()
#define unlock_fpu_owner()	preempt_enable()
#define lock_fpu_owner()	pagefault_disable()
#define unlock_fpu_owner()	pagefault_enable()
