#define _ASM_POWERPC_CURRENT_H
struct task_struct;
static inline struct task_struct *get_current(void)
#define current	get_current()
register struct task_struct *current asm ("r2");
