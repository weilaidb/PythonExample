#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRIVER_NAME	"intel_oaktrail"
#define DRIVER_VERSION	"0.4ac1"
#define OT_EC_DEVICE_STATE_ADDRESS	0xD6
#define OT_EC_CAMERA_MASK	(1 << 0)
#define OT_EC_BT_MASK		(1 << 1)
#define OT_EC_GPS_MASK		(1 << 2)
#define OT_EC_WIFI_MASK		(1 << 3)
#define OT_EC_WWAN_MASK		(1 << 4)
#define OT_EC_TS_MASK		(1 << 5)
#define OT_EC_BL_BRIGHTNESS_ADDRESS	0x44
#define OT_EC_BL_BRIGHTNESS_MAX		100
#define OT_EC_BL_CONTROL_ADDRESS	0x3A
#define OT_EC_BL_CONTROL_ON_DATA	0x1A
static int force;
module_param(force, bool, 0);
MODULE_PARM_DESC(force, "Force driver load, ignore DMI data");
static struct platform_device *oaktrail_device;
static struct backlight_device *oaktrail_bl_device;
static struct rfkill *bt_rfkill;
static struct rfkill *gps_rfkill;
static struct rfkill *wifi_rfkill;
static struct rfkill *wwan_rfkill;
static int oaktrail_rfkill_set(void *data, bool blocked)
static const struct rfkill_ops oaktrail_rfkill_ops = ;
static struct rfkill *oaktrail_rfkill_new(char *name, enum rfkill_type type,
unsigned long mask)
static inline void __oaktrail_rfkill_cleanup(struct rfkill *rf)
static void oaktrail_rfkill_cleanup(void)
static int oaktrail_rfkill_init(void)
static int get_backlight_brightness(struct backlight_device *b)
static int set_backlight_brightness(struct backlight_device *b)
static const struct backlight_ops oaktrail_bl_ops = ;
static int oaktrail_backlight_init(void)
static void oaktrail_backlight_exit(void)
static int __devinit oaktrail_probe(struct platform_device *pdev)
static int __devexit oaktrail_remove(struct platform_device *pdev)
static struct platform_driver oaktrail_driver = ;
static int dmi_check_cb(const struct dmi_system_id *id)
static struct dmi_system_id __initdata oaktrail_dmi_table[] = ;
static int __init oaktrail_init(void)
static void __exit oaktrail_cleanup(void)
module_init(oaktrail_init);
module_exit(oaktrail_cleanup);
MODULE_AUTHOR("Yin Kangkai (kangkai.yin@intel.com)");
MODULE_DESCRIPTION("Intel Oaktrail Platform ACPI Extras");
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS("dmi:*:svnIntelCorporation:pnOakTrailplatform:*");
