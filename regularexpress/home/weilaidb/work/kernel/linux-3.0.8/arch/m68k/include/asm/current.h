#define _M68K_CURRENT_H
register struct task_struct *current __asm__("%a2");
struct task_struct;
static inline struct task_struct *get_current(void)
#define	current	get_current()
