#define _ASM_MICROBLAZE_CURRENT_H
#define CURRENT_TASK	r31
# ifndef __ASSEMBLY__
register struct task_struct *current asm("r31");
# define get_current()	current
# endif
