extern void sa1100_cpu_suspend(long);
#define SAVE(x)		sleep_save[SLEEP_SAVE_##x] = x
#define RESTORE(x)	x = sleep_save[SLEEP_SAVE_##x]
enum ;
static int sa11x0_pm_enter(suspend_state_t state)
static const struct platform_suspend_ops sa11x0_pm_ops = ;
static int __init sa11x0_pm_init(void)
late_initcall(sa11x0_pm_init);
