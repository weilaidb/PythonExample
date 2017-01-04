#define _ASMARM_TRAP_H
struct undef_hook ;
void register_undef_hook(struct undef_hook *hook);
void unregister_undef_hook(struct undef_hook *hook);
static inline int __in_irqentry_text(unsigned long ptr)
static inline int __in_irqentry_text(unsigned long ptr)
static inline int in_exception_text(unsigned long ptr)
extern void __init early_trap_init(void);
extern void dump_backtrace_entry(unsigned long where, unsigned long from, unsigned long frame);
extern void ptrace_break(struct task_struct *tsk, struct pt_regs *regs);
extern void *vectors_page;
