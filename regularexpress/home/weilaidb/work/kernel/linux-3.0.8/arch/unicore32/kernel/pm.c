struct puv3_cpu_pm_fns *puv3_cpu_pm_fns;
static unsigned long *sleep_save;
int puv3_pm_enter(suspend_state_t state)
EXPORT_SYMBOL_GPL(puv3_pm_enter);
unsigned long sleep_phys_sp(void *sp)
static int puv3_pm_valid(suspend_state_t state)
static int puv3_pm_prepare(void)
static void puv3_pm_finish(void)
static struct platform_suspend_ops puv3_pm_ops = ;
static int __init puv3_pm_init(void)
device_initcall(puv3_pm_init);
