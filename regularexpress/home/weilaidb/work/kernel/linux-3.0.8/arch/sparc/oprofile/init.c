static int profile_timer_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data)
static struct notifier_block profile_timer_exceptions_nb = ;
static int timer_start(void)
static void timer_stop(void)
static int op_nmi_timer_init(struct oprofile_operations *ops)
int __init oprofile_arch_init(struct oprofile_operations *ops)
void oprofile_arch_exit(void)
