static int default_platform_runtime_idle(struct device *dev)
static struct dev_power_domain default_power_domain = ;
#define DEFAULT_PWR_DOMAIN_PTR	(&default_power_domain)
#define DEFAULT_PWR_DOMAIN_PTR	NULL
static struct pm_clk_notifier_block platform_bus_notifier = ;
static int __init sh_pm_runtime_init(void)
core_initcall(sh_pm_runtime_init);
