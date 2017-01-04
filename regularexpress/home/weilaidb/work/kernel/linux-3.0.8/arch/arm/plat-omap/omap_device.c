#undef DEBUG
#define USE_WAKEUP_LAT			0
#define IGNORE_WAKEUP_LAT		1
static int _omap_device_activate(struct omap_device *od, u8 ignore_lat)
static int _omap_device_deactivate(struct omap_device *od, u8 ignore_lat)
static inline struct omap_device *_find_by_pdev(struct platform_device *pdev)
static void _add_optional_clock_clkdev(struct omap_device *od,
struct omap_hwmod *oh)
u32 omap_device_get_context_loss_count(struct platform_device *pdev)
int omap_device_count_resources(struct omap_device *od)
int omap_device_fill_resources(struct omap_device *od, struct resource *res)
struct omap_device *omap_device_build(const char *pdev_name, int pdev_id,
struct omap_hwmod *oh, void *pdata,
int pdata_len,
struct omap_device_pm_latency *pm_lats,
int pm_lats_cnt, int is_early_device)
struct omap_device *omap_device_build_ss(const char *pdev_name, int pdev_id,
struct omap_hwmod **ohs, int oh_cnt,
void *pdata, int pdata_len,
struct omap_device_pm_latency *pm_lats,
int pm_lats_cnt, int is_early_device)
int omap_early_device_register(struct omap_device *od)
static int _od_runtime_suspend(struct device *dev)
static int _od_runtime_idle(struct device *dev)
static int _od_runtime_resume(struct device *dev)
static struct dev_power_domain omap_device_power_domain = ;
int omap_device_register(struct omap_device *od)
int omap_device_enable(struct platform_device *pdev)
int omap_device_idle(struct platform_device *pdev)
int omap_device_shutdown(struct platform_device *pdev)
int omap_device_align_pm_lat(struct platform_device *pdev,
u32 new_wakeup_lat_limit)
struct powerdomain *omap_device_get_pwrdm(struct omap_device *od)
void __iomem *omap_device_get_rt_va(struct omap_device *od)
int omap_device_enable_hwmods(struct omap_device *od)
int omap_device_idle_hwmods(struct omap_device *od)
int omap_device_disable_clocks(struct omap_device *od)
int omap_device_enable_clocks(struct omap_device *od)
struct device omap_device_parent = ;
static int __init omap_device_init(void)
core_initcall(omap_device_init);
