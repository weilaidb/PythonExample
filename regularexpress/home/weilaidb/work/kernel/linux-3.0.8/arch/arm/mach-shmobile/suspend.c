static int shmobile_suspend_default_enter(suspend_state_t suspend_state)
static int shmobile_suspend_begin(suspend_state_t state)
static void shmobile_suspend_end(void)
struct platform_suspend_ops shmobile_suspend_ops = ;
static int __init shmobile_suspend_init(void)
late_initcall(shmobile_suspend_init);
