static int omap1_pm_runtime_suspend(struct device *dev)
static int omap1_pm_runtime_resume(struct device *dev)
static struct dev_power_domain default_power_domain = ;
#define OMAP1_PWR_DOMAIN (&default_power_domain)
#define OMAP1_PWR_DOMAIN NULL
static struct pm_clk_notifier_block platform_bus_notifier = ;
static int __init omap1_pm_runtime_init(void)
core_initcall(omap1_pm_runtime_init);
