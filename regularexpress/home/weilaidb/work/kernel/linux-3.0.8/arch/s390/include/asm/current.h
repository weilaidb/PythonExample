#define _S390_CURRENT_H
struct task_struct;
#define current ((struct task_struct *const)S390_lowcore.current_task)
