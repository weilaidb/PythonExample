void trap_init(void)
static unsigned long kstack_depth_to_print;
static int __init kstack_setup(char *s)
__setup("kstack=", kstack_setup);
void show_stack(struct task_struct *task, unsigned long *sp)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
