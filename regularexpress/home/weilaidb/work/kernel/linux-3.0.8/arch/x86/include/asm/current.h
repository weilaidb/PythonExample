#define _ASM_X86_CURRENT_H
struct task_struct;
DECLARE_PER_CPU(struct task_struct *, current_task);
static __always_inline struct task_struct *get_current(void)
#define current get_current()
