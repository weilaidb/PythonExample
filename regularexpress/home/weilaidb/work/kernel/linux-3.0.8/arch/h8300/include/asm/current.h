#define _H8300_CURRENT_H
struct task_struct;
static inline struct task_struct *get_current(void)
#define	current	get_current()
