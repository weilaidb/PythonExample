#define _SPARC_CURRENT_H
register struct task_struct *current asm("g4");
struct task_struct;
static inline struct task_struct *__get_current(void)
#define current __get_current()
