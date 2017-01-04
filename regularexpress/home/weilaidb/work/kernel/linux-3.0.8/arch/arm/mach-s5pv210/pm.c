static struct sleep_save s5pv210_core_save[] = ;
void s5pv210_cpu_suspend(void)
static void s5pv210_pm_prepare(void)
static int s5pv210_pm_add(struct sys_device *sysdev)
static struct sysdev_driver s5pv210_pm_driver = ;
static __init int s5pv210_pm_drvinit(void)
arch_initcall(s5pv210_pm_drvinit);
static void s5pv210_pm_resume(void)
static struct syscore_ops s5pv210_pm_syscore_ops = ;
static __init int s5pv210_pm_syscore_init(void)
arch_initcall(s5pv210_pm_syscore_init);
