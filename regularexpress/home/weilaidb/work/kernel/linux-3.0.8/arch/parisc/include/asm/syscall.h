#define _ASM_PARISC_SYSCALL_H_
static inline long syscall_get_nr(struct task_struct *tsk,
struct pt_regs *regs)
static inline void syscall_get_arguments(struct task_struct *tsk,
struct pt_regs *regs, unsigned int i,
unsigned int n, unsigned long *args)
