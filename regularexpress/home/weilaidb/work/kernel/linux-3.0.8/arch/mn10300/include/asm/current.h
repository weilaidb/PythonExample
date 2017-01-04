#define _ASM_CURRENT_H
register struct task_struct *const current asm("e2") __attribute__((used));
#define get_current() current
extern struct task_struct *__current;
static inline __attribute__((const))
struct task_struct *get_current(void)
#define current get_current()
