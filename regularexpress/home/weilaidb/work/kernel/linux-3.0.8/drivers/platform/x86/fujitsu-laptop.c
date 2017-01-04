#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#if defined(CONFIG_LEDS_CLASS) || defined(CONFIG_LEDS_CLASS_MODULE)
#define FUJITSU_DRIVER_VERSION "0.6.0"
#define FUJITSU_LCD_N_LEVELS 8
#define ACPI_FUJITSU_CLASS              "fujitsu"
#define ACPI_FUJITSU_HID                "FUJ02B1"
#define ACPI_FUJITSU_DRIVER_NAME	"Fujitsu laptop FUJ02B1 ACPI brightness driver"
#define ACPI_FUJITSU_DEVICE_NAME        "Fujitsu FUJ02B1"
#define ACPI_FUJITSU_HOTKEY_HID 	"FUJ02E3"
#define ACPI_FUJITSU_HOTKEY_DRIVER_NAME "Fujitsu laptop FUJ02E3 ACPI hotkeys driver"
#define ACPI_FUJITSU_HOTKEY_DEVICE_NAME "Fujitsu FUJ02E3"
#define ACPI_FUJITSU_NOTIFY_CODE1     0x80
#define ACPI_VIDEO_NOTIFY_INC_BRIGHTNESS     0x86
#define ACPI_VIDEO_NOTIFY_DEC_BRIGHTNESS     0x87
#define FUNC_RFKILL	0x1000
#define FUNC_LEDS	0x1001
#define FUNC_BUTTONS	0x1002
#define FUNC_BACKLIGHT  0x1004
#define UNSUPPORTED_CMD 0x80000000
#if defined(CONFIG_LEDS_CLASS) || defined(CONFIG_LEDS_CLASS_MODULE)
#define FUNC_LED_OFF	0x1
#define FUNC_LED_ON	0x30001
#define KEYBOARD_LAMPS	0x100
#define LOGOLAMP_POWERON 0x2000
#define LOGOLAMP_ALWAYS  0x4000
#define KEY1_CODE	0x410
#define KEY2_CODE	0x411
#define KEY3_CODE	0x412
#define KEY4_CODE	0x413
#define MAX_HOTKEY_RINGBUFFER_SIZE 100
#define RINGBUFFERSIZE 40
#define FUJLAPTOP_LOG	   ACPI_FUJITSU_HID ": "
#define FUJLAPTOP_ERR	   KERN_ERR FUJLAPTOP_LOG
#define FUJLAPTOP_NOTICE   KERN_NOTICE FUJLAPTOP_LOG
#define FUJLAPTOP_INFO	   KERN_INFO FUJLAPTOP_LOG
#define FUJLAPTOP_DEBUG    KERN_DEBUG FUJLAPTOP_LOG
#define FUJLAPTOP_DBG_ALL	  0xffff
#define FUJLAPTOP_DBG_ERROR	  0x0001
#define FUJLAPTOP_DBG_WARN	  0x0002
#define FUJLAPTOP_DBG_INFO	  0x0004
#define FUJLAPTOP_DBG_TRACE	  0x0008
#define dbg_printk(a_dbg_level, format, arg...) \
do  while (0)
#define vdbg_printk(a_dbg_level, format, arg...) \
dbg_printk(a_dbg_level, format, ## arg)
#define vdbg_printk(a_dbg_level, format, arg...)
struct fujitsu_t ;
static struct fujitsu_t *fujitsu;
static int use_alt_lcd_levels = -1;
static int disable_brightness_adjust = -1;
struct fujitsu_hotkey_t ;
static struct fujitsu_hotkey_t *fujitsu_hotkey;
static void acpi_fujitsu_hotkey_notify(struct acpi_device *device, u32 event);
#if defined(CONFIG_LEDS_CLASS) || defined(CONFIG_LEDS_CLASS_MODULE)
static enum led_brightness logolamp_get(struct led_classdev *cdev);
static void logolamp_set(struct led_classdev *cdev,
enum led_brightness brightness);
static struct led_classdev logolamp_led = ;
static enum led_brightness kblamps_get(struct led_classdev *cdev);
static void kblamps_set(struct led_classdev *cdev,
enum led_brightness brightness);
static struct led_classdev kblamps_led = ;
static u32 dbg_level = 0x03;
static void acpi_fujitsu_notify(struct acpi_device *device, u32 event);
static int call_fext_func(int cmd, int arg0, int arg1, int arg2)
#if defined(CONFIG_LEDS_CLASS) || defined(CONFIG_LEDS_CLASS_MODULE)
static void logolamp_set(struct led_classdev *cdev,
enum led_brightness brightness)
static void kblamps_set(struct led_classdev *cdev,
enum led_brightness brightness)
static enum led_brightness logolamp_get(struct led_classdev *cdev)
static enum led_brightness kblamps_get(struct led_classdev *cdev)
static int set_lcd_level(int level)
static int set_lcd_level_alt(int level)
static int get_lcd_level(void)
static int get_max_brightness(void)
static int bl_get_brightness(struct backlight_device *b)
static int bl_update_status(struct backlight_device *b)
static const struct backlight_ops fujitsubl_ops = ;
static ssize_t
show_max_brightness(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
show_brightness_changed(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_lcd_level(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_lcd_level(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
static ssize_t
ignore_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t
show_lid_state(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
show_dock_state(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
show_radios_state(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(max_brightness, 0444, show_max_brightness, ignore_store);
static DEVICE_ATTR(brightness_changed, 0444, show_brightness_changed,
ignore_store);
static DEVICE_ATTR(lcd_level, 0644, show_lcd_level, store_lcd_level);
static DEVICE_ATTR(lid, 0444, show_lid_state, ignore_store);
static DEVICE_ATTR(dock, 0444, show_dock_state, ignore_store);
static DEVICE_ATTR(radios, 0444, show_radios_state, ignore_store);
static struct attribute *fujitsupf_attributes[] = ;
static struct attribute_group fujitsupf_attribute_group = ;
static struct platform_driver fujitsupf_driver = ;
static void dmi_check_cb_common(const struct dmi_system_id *id)
static int dmi_check_cb_s6410(const struct dmi_system_id *id)
static int dmi_check_cb_s6420(const struct dmi_system_id *id)
static int dmi_check_cb_p8010(const struct dmi_system_id *id)
static struct dmi_system_id fujitsu_dmi_table[] = ;
static int acpi_fujitsu_add(struct acpi_device *device)
static int acpi_fujitsu_remove(struct acpi_device *device, int type)
static void acpi_fujitsu_notify(struct acpi_device *device, u32 event)
static int acpi_fujitsu_hotkey_add(struct acpi_device *device)
static int acpi_fujitsu_hotkey_remove(struct acpi_device *device, int type)
static void acpi_fujitsu_hotkey_notify(struct acpi_device *device, u32 event)
static const struct acpi_device_id fujitsu_device_ids[] = ;
static struct acpi_driver acpi_fujitsu_driver = ;
static const struct acpi_device_id fujitsu_hotkey_device_ids[] = ;
static struct acpi_driver acpi_fujitsu_hotkey_driver = ;
static int __init fujitsu_init(void)
static void __exit fujitsu_cleanup(void)
module_init(fujitsu_init);
module_exit(fujitsu_cleanup);
module_param(use_alt_lcd_levels, uint, 0644);
MODULE_PARM_DESC(use_alt_lcd_levels,
"Use alternative interface for lcd_levels (needed for Lifebook s6410).");
module_param(disable_brightness_adjust, uint, 0644);
MODULE_PARM_DESC(disable_brightness_adjust, "Disable brightness adjustment .");
module_param_named(debug, dbg_level, uint, 0644);
MODULE_PARM_DESC(debug, "Sets debug level bit-mask");
MODULE_AUTHOR("Jonathan Woithe, Peter Gruber, Tony Vroon");
MODULE_DESCRIPTION("Fujitsu laptop extras support");
MODULE_VERSION(FUJITSU_DRIVER_VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS("dmi:*:svnFUJITSUSIEMENS:*:pvr:rvnFUJITSU:rnFJNB1D3:*:cvrS6410:*");
MODULE_ALIAS("dmi:*:svnFUJITSUSIEMENS:*:pvr:rvnFUJITSU:rnFJNB1E6:*:cvrS6420:*");
MODULE_ALIAS("dmi:*:svnFUJITSU:*:pvr:rvnFUJITSU:rnFJNB19C:*:cvrS7020:*");
static struct pnp_device_id pnp_ids[] __used = ;
MODULE_DEVICE_TABLE(pnp, pnp_ids);
