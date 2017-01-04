#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define ASUS_LAPTOP_VERSION	"0.42"
#define ASUS_LAPTOP_NAME	"Asus Laptop Support"
#define ASUS_LAPTOP_CLASS	"hotkey"
#define ASUS_LAPTOP_DEVICE_NAME	"Hotkey"
#define ASUS_LAPTOP_FILE	KBUILD_MODNAME
#define ASUS_LAPTOP_PREFIX	"\\_SB.ATKD."
MODULE_AUTHOR("Julien Lerouge, Karol Kozimor, Corentin Chary");
MODULE_DESCRIPTION(ASUS_LAPTOP_NAME);
MODULE_LICENSE("GPL");
static uint wapf = 1;
module_param(wapf, uint, 0444);
MODULE_PARM_DESC(wapf, "WAPF value");
static int wlan_status = 1;
static int bluetooth_status = 1;
static int wimax_status = -1;
static int wwan_status = -1;
module_param(wlan_status, int, 0444);
MODULE_PARM_DESC(wlan_status, "Set the wireless status on boot "
"(0 = disabled, 1 = enabled, -1 = don't do anything). "
"default is 1");
module_param(bluetooth_status, int, 0444);
MODULE_PARM_DESC(bluetooth_status, "Set the wireless status on boot "
"(0 = disabled, 1 = enabled, -1 = don't do anything). "
"default is 1");
module_param(wimax_status, int, 0444);
MODULE_PARM_DESC(wimax_status, "Set the wireless status on boot "
"(0 = disabled, 1 = enabled, -1 = don't do anything). "
"default is 1");
module_param(wwan_status, int, 0444);
MODULE_PARM_DESC(wwan_status, "Set the wireless status on boot "
"(0 = disabled, 1 = enabled, -1 = don't do anything). "
"default is 1");
#define ATKD_BR_UP	0x10
#define ATKD_BR_DOWN	0x20
#define ATKD_BR_MIN	ATKD_BR_UP
#define ATKD_BR_MAX	(ATKD_BR_DOWN | 0xF)
#define ATKD_LCD_ON	0x33
#define ATKD_LCD_OFF	0x34
#define WL_HWRS		0x80
#define BT_HWRS		0x100
#define WL_RSTS		0x01
#define BT_RSTS		0x02
#define WM_RSTS		0x08
#define WW_RSTS		0x20
#define METHOD_MLED		"MLED"
#define METHOD_TLED		"TLED"
#define METHOD_RLED		"RLED"
#define METHOD_PLED		"PLED"
#define METHOD_GLED		"GLED"
#define METHOD_LEDD		"SLCM"
#define METHOD_WLAN		"WLED"
#define METHOD_BLUETOOTH	"BLED"
#define METHOD_WWAN		"GSMC"
#define METHOD_WIMAX		"WMXC"
#define METHOD_WL_STATUS	"RSTS"
#define METHOD_BRIGHTNESS_SET	"SPLV"
#define METHOD_BRIGHTNESS_GET	"GPLV"
#define METHOD_SWITCH_DISPLAY	"SDSP"
#define METHOD_ALS_CONTROL	"ALSC"
#define METHOD_ALS_LEVEL	"ALSL"
#define METHOD_GPS_ON		"SDON"
#define METHOD_GPS_OFF		"SDOF"
#define METHOD_GPS_STATUS	"GPST"
#define METHOD_KBD_LIGHT_SET	"SLKB"
#define METHOD_KBD_LIGHT_GET	"GLKB"
struct asus_led ;
struct asus_laptop ;
static const struct key_entry asus_keymap[] = ;
static int write_acpi_int_ret(acpi_handle handle, const char *method, int val,
struct acpi_buffer *output)
static int write_acpi_int(acpi_handle handle, const char *method, int val)
static int acpi_check_handle(acpi_handle handle, const char *method,
acpi_handle *ret)
static int asus_led_set(struct asus_laptop *asus, const char *method,
int value)
static void asus_led_cdev_set(struct led_classdev *led_cdev,
enum led_brightness value)
static void asus_led_cdev_update(struct work_struct *work)
static enum led_brightness asus_led_cdev_get(struct led_classdev *led_cdev)
static int asus_kled_lvl(struct asus_laptop *asus)
static int asus_kled_set(struct asus_laptop *asus, int kblv)
static void asus_kled_cdev_set(struct led_classdev *led_cdev,
enum led_brightness value)
static void asus_kled_cdev_update(struct work_struct *work)
static enum led_brightness asus_kled_cdev_get(struct led_classdev *led_cdev)
static void asus_led_exit(struct asus_laptop *asus)
static int asus_led_register(struct asus_laptop *asus,
struct asus_led *led,
const char *name, const char *method)
static int asus_led_init(struct asus_laptop *asus)
static int asus_read_brightness(struct backlight_device *bd)
static int asus_set_brightness(struct backlight_device *bd, int value)
static int update_bl_status(struct backlight_device *bd)
static const struct backlight_ops asusbl_ops = ;
static int asus_backlight_notify(struct asus_laptop *asus)
static int asus_backlight_init(struct asus_laptop *asus)
static void asus_backlight_exit(struct asus_laptop *asus)
static ssize_t show_infos(struct device *dev,
struct device_attribute *attr, char *page)
static int parse_arg(const char *buf, unsigned long count, int *val)
static ssize_t sysfs_acpi_set(struct asus_laptop *asus,
const char *buf, size_t count,
const char *method)
static ssize_t show_ledd(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_ledd(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static int asus_wireless_status(struct asus_laptop *asus, int mask)
static int asus_wlan_set(struct asus_laptop *asus, int status)
static ssize_t show_wlan(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_wlan(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static int asus_bluetooth_set(struct asus_laptop *asus, int status)
static ssize_t show_bluetooth(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_bluetooth(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
static int asus_wimax_set(struct asus_laptop *asus, int status)
static ssize_t show_wimax(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_wimax(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
static int asus_wwan_set(struct asus_laptop *asus, int status)
static ssize_t show_wwan(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_wwan(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
static void asus_set_display(struct asus_laptop *asus, int value)
static ssize_t store_disp(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static void asus_als_switch(struct asus_laptop *asus, int value)
static ssize_t show_lssw(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_lssw(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static void asus_als_level(struct asus_laptop *asus, int value)
static ssize_t show_lslvl(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_lslvl(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static int asus_gps_status(struct asus_laptop *asus)
static int asus_gps_switch(struct asus_laptop *asus, int status)
static ssize_t show_gps(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_gps(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static int asus_gps_rfkill_set(void *data, bool blocked)
static const struct rfkill_ops asus_gps_rfkill_ops = ;
static void asus_rfkill_exit(struct asus_laptop *asus)
static int asus_rfkill_init(struct asus_laptop *asus)
static void asus_input_notify(struct asus_laptop *asus, int event)
static int asus_input_init(struct asus_laptop *asus)
static void asus_input_exit(struct asus_laptop *asus)
static void asus_acpi_notify(struct acpi_device *device, u32 event)
static DEVICE_ATTR(infos, S_IRUGO, show_infos, NULL);
static DEVICE_ATTR(wlan, S_IRUGO | S_IWUSR, show_wlan, store_wlan);
static DEVICE_ATTR(bluetooth, S_IRUGO | S_IWUSR,
show_bluetooth, store_bluetooth);
static DEVICE_ATTR(wimax, S_IRUGO | S_IWUSR, show_wimax, store_wimax);
static DEVICE_ATTR(wwan, S_IRUGO | S_IWUSR, show_wwan, store_wwan);
static DEVICE_ATTR(display, S_IWUSR, NULL, store_disp);
static DEVICE_ATTR(ledd, S_IRUGO | S_IWUSR, show_ledd, store_ledd);
static DEVICE_ATTR(ls_level, S_IRUGO | S_IWUSR, show_lslvl, store_lslvl);
static DEVICE_ATTR(ls_switch, S_IRUGO | S_IWUSR, show_lssw, store_lssw);
static DEVICE_ATTR(gps, S_IRUGO | S_IWUSR, show_gps, store_gps);
static struct attribute *asus_attributes[] = ;
static mode_t asus_sysfs_is_visible(struct kobject *kobj,
struct attribute *attr,
int idx)
static const struct attribute_group asus_attr_group = ;
static int asus_platform_init(struct asus_laptop *asus)
static void asus_platform_exit(struct asus_laptop *asus)
static struct platform_driver platform_driver = ;
static int asus_laptop_get_info(struct asus_laptop *asus)
static int __devinit asus_acpi_init(struct asus_laptop *asus)
static void __devinit asus_dmi_check(void)
static bool asus_device_present;
static int __devinit asus_acpi_add(struct acpi_device *device)
static int asus_acpi_remove(struct acpi_device *device, int type)
static const struct acpi_device_id asus_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, asus_device_ids);
static struct acpi_driver asus_acpi_driver = ;
static int __init asus_laptop_init(void)
static void __exit asus_laptop_exit(void)
module_init(asus_laptop_init);
module_exit(asus_laptop_exit);
