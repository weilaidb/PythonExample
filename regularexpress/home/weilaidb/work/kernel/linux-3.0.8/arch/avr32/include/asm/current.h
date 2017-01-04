#define __ASM_AVR32_CURRENT_H
struct task_struct;
inline static struct task_struct * get_current(void)
#define current get_current()
