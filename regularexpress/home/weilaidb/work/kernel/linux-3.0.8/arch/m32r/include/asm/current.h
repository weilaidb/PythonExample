#define _ASM_M32R_CURRENT_H
struct task_struct;
static __inline__ struct task_struct *get_current(void)
#define current	(get_current())
