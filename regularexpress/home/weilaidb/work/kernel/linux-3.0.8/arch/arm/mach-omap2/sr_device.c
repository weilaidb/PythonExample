static bool sr_enable_on_init;
static struct omap_device_pm_latency omap_sr_latency[] = ;
static void __init sr_set_nvalues(struct omap_volt_data *volt_data,
struct omap_sr_data *sr_data)
static int sr_dev_init(struct omap_hwmod *oh, void *user)
void __init omap_enable_smartreflex_on_init(void)
int __init omap_devinit_smartreflex(void)
