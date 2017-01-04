#if !defined(CONFIG_UML_X86) || defined(CONFIG_64BIT)
void show_trace(struct task_struct *task, unsigned long * stack)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
static const int kstack_depth_to_print = 24;
void show_stack(struct task_struct *task, unsigned long *esp)
