static struct omap_device_pm_latency *pm_lats;
static struct device *mpu_dev;
static struct device *iva_dev;
static struct device *l3_dev;
static struct device *dsp_dev;
struct device *omap2_get_mpuss_device(void)
struct device *omap2_get_iva_device(void)
struct device *omap2_get_l3_device(void)
struct device *omap4_get_dsp_device(void)
EXPORT_SYMBOL(omap4_get_dsp_device);
static int _init_omap_device(char *name, struct device **new_dev)
static void omap2_init_processor_devices(void)
#define FORCEWAKEUP_SWITCH	0
#define LOWPOWERSTATE_SWITCH	1
int omap_set_pwrdm_state(struct powerdomain *pwrdm, u32 state)
static int __init omap2_set_init_voltage(char *vdd_name, char *clk_name,
struct device *dev)
static void __init omap3_init_voltages(void)
static void __init omap4_init_voltages(void)
static int __init omap2_common_pm_init(void)
postcore_initcall(omap2_common_pm_init);
static int __init omap2_common_pm_late_init(void)
late_initcall(omap2_common_pm_late_init);
