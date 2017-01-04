#define _ASM_TILE_CURRENT_H
struct task_struct;
static inline struct task_struct *get_current(void)
#define current get_current()
struct task_struct *validate_current(void);
