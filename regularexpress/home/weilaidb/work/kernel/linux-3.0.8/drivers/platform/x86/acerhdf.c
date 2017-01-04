#define pr_fmt(fmt) "acerhdf: " fmt
#undef START_IN_KERNEL_MODE
#define DRV_VER "0.5.24"
#define ACERHDF_TEMP_CRIT 89000
#define ACERHDF_FAN_OFF 0
#define ACERHDF_FAN_AUTO 1
#define ACERHDF_MAX_FANON 80000
#define ACERHDF_MAX_INTERVAL 15
static int kernelmode = 1;
static int kernelmode;
static unsigned int interval = 10;
static unsigned int fanon = 63000;
static unsigned int fanoff = 58000;
static unsigned int verbose;
static unsigned int fanstate = ACERHDF_FAN_AUTO;
static char force_bios[16];
static char force_product[16];
static unsigned int prev_interval;
static struct thermal_zone_device *thz_dev;
static struct thermal_cooling_device *cl_dev;
static struct platform_device *acerhdf_dev;
module_param(kernelmode, uint, 0);
MODULE_PARM_DESC(kernelmode, "Kernel mode fan control on / off");
module_param(interval, uint, 0600);
MODULE_PARM_DESC(interval, "Polling interval of temperature check");
module_param(fanon, uint, 0600);
MODULE_PARM_DESC(fanon, "Turn the fan on above this temperature");
module_param(fanoff, uint, 0600);
MODULE_PARM_DESC(fanoff, "Turn the fan off below this temperature");
module_param(verbose, uint, 0600);
MODULE_PARM_DESC(verbose, "Enable verbose dmesg output");
module_param_string(force_bios, force_bios, 16, 0);
MODULE_PARM_DESC(force_bios, "Force BIOS version and omit BIOS check");
module_param_string(force_product, force_product, 16, 0);
MODULE_PARM_DESC(force_product, "Force BIOS product and omit BIOS check");
struct fancmd ;
struct bios_settings_t ;
static const struct bios_settings_t bios_tbl[] = ;
static const struct bios_settings_t *bios_cfg __read_mostly;
static int acerhdf_get_temp(int *temp)
static int acerhdf_get_fanstate(int *state)
static void acerhdf_change_fanstate(int state)
static void acerhdf_check_param(struct thermal_zone_device *thermal)
static int acerhdf_get_ec_temp(struct thermal_zone_device *thermal,
unsigned long *t)
static int acerhdf_bind(struct thermal_zone_device *thermal,
struct thermal_cooling_device *cdev)
static int acerhdf_unbind(struct thermal_zone_device *thermal,
struct thermal_cooling_device *cdev)
static inline void acerhdf_revert_to_bios_mode(void)
static inline void acerhdf_enable_kernelmode(void)
static int acerhdf_get_mode(struct thermal_zone_device *thermal,
enum thermal_device_mode *mode)
static int acerhdf_set_mode(struct thermal_zone_device *thermal,
enum thermal_device_mode mode)
static int acerhdf_get_trip_type(struct thermal_zone_device *thermal, int trip,
enum thermal_trip_type *type)
static int acerhdf_get_trip_temp(struct thermal_zone_device *thermal, int trip,
unsigned long *temp)
static int acerhdf_get_crit_temp(struct thermal_zone_device *thermal,
unsigned long *temperature)
static struct thermal_zone_device_ops acerhdf_dev_ops = ;
static int acerhdf_get_max_state(struct thermal_cooling_device *cdev,
unsigned long *state)
static int acerhdf_get_cur_state(struct thermal_cooling_device *cdev,
unsigned long *state)
static int acerhdf_set_cur_state(struct thermal_cooling_device *cdev,
unsigned long state)
static struct thermal_cooling_device_ops acerhdf_cooling_ops = ;
static int acerhdf_suspend(struct device *dev)
static int __devinit acerhdf_probe(struct platform_device *device)
static int acerhdf_remove(struct platform_device *device)
static const struct dev_pm_ops acerhdf_pm_ops = ;
static struct platform_driver acerhdf_driver = ;
static int str_starts_with(const char *str, const char *start)
static int acerhdf_check_hardware(void)
static int acerhdf_register_platform(void)
static void acerhdf_unregister_platform(void)
static int acerhdf_register_thermal(void)
static void acerhdf_unregister_thermal(void)
static int __init acerhdf_init(void)
static void __exit acerhdf_exit(void)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Peter Feuerer");
MODULE_DESCRIPTION("Aspire One temperature and fan driver");
MODULE_ALIAS("dmi:*:*Acer*:pnAOA*:");
MODULE_ALIAS("dmi:*:*Acer*:pnAspire 1410*:");
MODULE_ALIAS("dmi:*:*Acer*:pnAspire 1810*:");
MODULE_ALIAS("dmi:*:*Acer*:pnAO531*:");
MODULE_ALIAS("dmi:*:*Gateway*:pnAOA*:");
MODULE_ALIAS("dmi:*:*Gateway*:pnLT31*:");
MODULE_ALIAS("dmi:*:*Packard Bell*:pnAOA*:");
MODULE_ALIAS("dmi:*:*Packard Bell*:pnDOA*:");
MODULE_ALIAS("dmi:*:*Packard Bell*:pnDOTMU*:");
MODULE_ALIAS("dmi:*:*Packard Bell*:pnDOTMA*:");
module_init(acerhdf_init);
module_exit(acerhdf_exit);
