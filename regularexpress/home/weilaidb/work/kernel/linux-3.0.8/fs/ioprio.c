int set_task_ioprio(struct task_struct *task, int ioprio)
EXPORT_SYMBOL_GPL(set_task_ioprio);
SYSCALL_DEFINE3(ioprio_set, int, which, int, who, int, ioprio)
static int get_task_ioprio(struct task_struct *p)
int ioprio_best(unsigned short aprio, unsigned short bprio)
SYSCALL_DEFINE2(ioprio_get, int, which, int, who)
