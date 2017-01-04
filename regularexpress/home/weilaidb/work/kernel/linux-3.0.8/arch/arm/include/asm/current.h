#define _ASMARM_CURRENT_H
static inline struct task_struct *get_current(void) __attribute_const__;
static inline struct task_struct *get_current(void)
#define current (get_current())
