long arch_prctl(struct task_struct *task, int code, unsigned long __user *addr)
long sys_arch_prctl(int code, unsigned long addr)
long sys_clone(unsigned long clone_flags, unsigned long newsp,
void __user *parent_tid, void __user *child_tid)
void arch_switch_to(struct task_struct *to)
