struct crunch_state *crunch_owner;
void crunch_task_release(struct thread_info *thread)
static int crunch_enabled(u32 devcfg)
static int crunch_do(struct notifier_block *self, unsigned long cmd, void *t)
static struct notifier_block crunch_notifier_block = ;
static int __init crunch_init(void)
late_initcall(crunch_init);
