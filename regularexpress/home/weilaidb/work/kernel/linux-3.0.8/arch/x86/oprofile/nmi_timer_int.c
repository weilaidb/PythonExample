static int profile_timer_exceptions_notify(struct notifier_block *self,
unsigned long val, void *data)
static struct notifier_block profile_timer_exceptions_nb = ;
static int timer_start(void)
static void timer_stop(void)
int __init op_nmi_timer_init(struct oprofile_operations *ops)
