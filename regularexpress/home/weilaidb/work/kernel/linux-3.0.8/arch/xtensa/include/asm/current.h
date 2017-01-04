#define _XTENSA_CURRENT_H
struct task_struct;
static inline struct task_struct *get_current(void)
#define current get_current()
#define CURRENT_SHIFT 13
#define GET_CURRENT(reg,sp)		\
GET_THREAD_INFO(reg,sp);	\
l32i reg, reg, TI_TASK		\
