#define _ASM_CURRENT_H
register struct task_struct *current asm("gr29");
#define get_current() current
#define CURRENT gr29
