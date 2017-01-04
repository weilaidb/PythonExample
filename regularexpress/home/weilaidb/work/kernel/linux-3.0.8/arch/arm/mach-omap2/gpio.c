static struct omap_device_pm_latency omap_gpio_latency[] = ;
static int omap2_gpio_dev_init(struct omap_hwmod *oh, void *unused)
static int __init omap2_gpio_init(void)
postcore_initcall(omap2_gpio_init);
