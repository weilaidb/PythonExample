extern void s3c2412_sleep_enter(void);
static void s3c2412_cpu_suspend(void)
static void s3c2412_pm_prepare(void)
static int s3c2412_pm_add(struct sys_device *sysdev)
static struct sleep_save s3c2412_sleep[] = ;
static struct sysdev_driver s3c2412_pm_driver = ;
static __init int s3c2412_pm_init(void)
arch_initcall(s3c2412_pm_init);
static int s3c2412_pm_suspend(void)
static void s3c2412_pm_resume(void)
struct syscore_ops s3c2412_pm_syscore_ops = ;
