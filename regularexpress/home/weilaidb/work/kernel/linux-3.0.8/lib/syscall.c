static int collect_syscall(struct task_struct *target, long *callno,
unsigned long args[6], unsigned int maxargs,
unsigned long *sp, unsigned long *pc)
int task_current_syscall(struct task_struct *target, long *callno,
unsigned long args[6], unsigned int maxargs,
unsigned long *sp, unsigned long *pc)
EXPORT_SYMBOL_GPL(task_current_syscall);
