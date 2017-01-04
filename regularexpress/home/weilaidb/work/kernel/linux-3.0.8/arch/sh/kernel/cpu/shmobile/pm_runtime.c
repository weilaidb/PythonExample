static DEFINE_SPINLOCK(hwblk_lock);
static LIST_HEAD(hwblk_idle_list);
static struct work_struct hwblk_work;
extern struct hwblk_info *hwblk_info;
static void platform_pm_runtime_not_idle(struct platform_device *pdev)
static int __platform_pm_runtime_resume(struct platform_device *pdev)
static int __platform_pm_runtime_suspend(struct platform_device *pdev)
static void platform_pm_runtime_work(struct work_struct *work)
void platform_pm_runtime_suspend_idle(void)
static int default_platform_runtime_suspend(struct device *dev)
static int default_platform_runtime_resume(struct device *dev)
static int default_platform_runtime_idle(struct device *dev)
static struct dev_power_domain default_power_domain = ;
static int platform_bus_notify(struct notifier_block *nb,
unsigned long action, void *data)
static struct notifier_block platform_bus_notifier = ;
static int __init sh_pm_runtime_init(void)
core_initcall(sh_pm_runtime_init);
