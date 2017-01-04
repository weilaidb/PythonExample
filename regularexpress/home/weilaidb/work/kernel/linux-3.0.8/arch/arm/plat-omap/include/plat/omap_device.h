#define __ARCH_ARM_PLAT_OMAP_INCLUDE_MACH_OMAP_DEVICE_H
extern struct device omap_device_parent;
#define OMAP_DEVICE_STATE_UNKNOWN	0
#define OMAP_DEVICE_STATE_ENABLED	1
#define OMAP_DEVICE_STATE_IDLE		2
#define OMAP_DEVICE_STATE_SHUTDOWN	3
struct omap_device ;
int omap_device_enable(struct platform_device *pdev);
int omap_device_idle(struct platform_device *pdev);
int omap_device_shutdown(struct platform_device *pdev);
int omap_device_count_resources(struct omap_device *od);
int omap_device_fill_resources(struct omap_device *od, struct resource *res);
struct omap_device *omap_device_build(const char *pdev_name, int pdev_id,
struct omap_hwmod *oh, void *pdata,
int pdata_len,
struct omap_device_pm_latency *pm_lats,
int pm_lats_cnt, int is_early_device);
struct omap_device *omap_device_build_ss(const char *pdev_name, int pdev_id,
struct omap_hwmod **oh, int oh_cnt,
void *pdata, int pdata_len,
struct omap_device_pm_latency *pm_lats,
int pm_lats_cnt, int is_early_device);
int omap_device_register(struct omap_device *od);
int omap_early_device_register(struct omap_device *od);
void __iomem *omap_device_get_rt_va(struct omap_device *od);
int omap_device_align_pm_lat(struct platform_device *pdev,
u32 new_wakeup_lat_limit);
struct powerdomain *omap_device_get_pwrdm(struct omap_device *od);
u32 omap_device_get_context_loss_count(struct platform_device *pdev);
int omap_device_idle_hwmods(struct omap_device *od);
int omap_device_enable_hwmods(struct omap_device *od);
int omap_device_disable_clocks(struct omap_device *od);
int omap_device_enable_clocks(struct omap_device *od);
struct omap_device_pm_latency ;
#define OMAP_DEVICE_LATENCY_AUTO_ADJUST BIT(1)
#define to_omap_device(x) container_of((x), struct omap_device, pdev)
