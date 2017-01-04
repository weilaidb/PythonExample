#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define EEEPC_LAPTOP_VERSION	"0.1"
#define EEEPC_LAPTOP_NAME	"Eee PC Hotkey Driver"
#define EEEPC_LAPTOP_FILE	"eeepc"
#define EEEPC_ACPI_CLASS	"hotkey"
#define EEEPC_ACPI_DEVICE_NAME	"Hotkey"
#define EEEPC_ACPI_HID		"ASUS010"
MODULE_AUTHOR("Corentin Chary, Eric Cooper");
MODULE_DESCRIPTION(EEEPC_LAPTOP_NAME);
MODULE_LICENSE("GPL");
static bool hotplug_disabled;
module_param(hotplug_disabled, bool, 0444);
MODULE_PARM_DESC(hotplug_disabled,
"Disable hotplug for wireless device. "
"If your laptop need that, please report to "
"acpi4asus-user@lists.sourceforge.net.");
#define NOTIFY_BRN_MIN	0x20
#define NOTIFY_BRN_MAX	0x2f
enum ;
enum ;
static const char *cm_getv[] = ;
static const char *cm_setv[] = ;
static const struct key_entry eeepc_keymap[] = ;
struct eeepc_laptop ;
static int write_acpi_int(acpi_handle handle, const char *method, int val)
static int read_acpi_int(acpi_handle handle, const char *method, int *val)
static int set_acpi(struct eeepc_laptop *eeepc, int cm, int value)
static int get_acpi(struct eeepc_laptop *eeepc, int cm)
static int acpi_setter_handle(struct eeepc_laptop *eeepc, int cm,
acpi_handle *handle)
static int parse_arg(const char *buf, unsigned long count, int *val)
static ssize_t store_sys_acpi(struct device *dev, int cm,
const char *buf, size_t count)
static ssize_t show_sys_acpi(struct device *dev, int cm, char *buf)
#define EEEPC_CREATE_DEVICE_ATTR(_name, _mode, _cm)			\
static ssize_t show_##_name(struct device *dev,			\
struct device_attribute *attr,	\
char *buf)				\
\
static ssize_t store_##_name(struct device *dev,		\
struct device_attribute *attr,	\
const char *buf, size_t count)	\
\
static struct device_attribute dev_attr_##_name =
EEEPC_CREATE_DEVICE_ATTR(camera, 0644, CM_ASL_CAMERA);
EEEPC_CREATE_DEVICE_ATTR(cardr, 0644, CM_ASL_CARDREADER);
EEEPC_CREATE_DEVICE_ATTR(disp, 0200, CM_ASL_DISPLAYSWITCH);
struct eeepc_cpufv ;
static int get_cpufv(struct eeepc_laptop *eeepc, struct eeepc_cpufv *c)
static ssize_t show_available_cpufv(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_cpufv(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_cpufv(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_cpufv_disabled(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_cpufv_disabled(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute dev_attr_cpufv = ;
static struct device_attribute dev_attr_available_cpufv = ;
static struct device_attribute dev_attr_cpufv_disabled = ;
static struct attribute *platform_attributes[] = ;
static struct attribute_group platform_attribute_group = ;
static int eeepc_platform_init(struct eeepc_laptop *eeepc)
static void eeepc_platform_exit(struct eeepc_laptop *eeepc)
static void tpd_led_update(struct work_struct *work)
static void tpd_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static enum led_brightness tpd_led_get(struct led_classdev *led_cdev)
static int eeepc_led_init(struct eeepc_laptop *eeepc)
static void eeepc_led_exit(struct eeepc_laptop *eeepc)
static bool eeepc_wlan_rfkill_blocked(struct eeepc_laptop *eeepc)
static void eeepc_rfkill_hotplug(struct eeepc_laptop *eeepc, acpi_handle handle)
static void eeepc_rfkill_hotplug_update(struct eeepc_laptop *eeepc, char *node)
static void eeepc_rfkill_notify(acpi_handle handle, u32 event, void *data)
static int eeepc_register_rfkill_notifier(struct eeepc_laptop *eeepc,
char *node)
static void eeepc_unregister_rfkill_notifier(struct eeepc_laptop *eeepc,
char *node)
static int eeepc_get_adapter_status(struct hotplug_slot *hotplug_slot,
u8 *value)
static void eeepc_cleanup_pci_hotplug(struct hotplug_slot *hotplug_slot)
static struct hotplug_slot_ops eeepc_hotplug_slot_ops = ;
static int eeepc_setup_pci_hotplug(struct eeepc_laptop *eeepc)
static int eeepc_rfkill_set(void *data, bool blocked)
static const struct rfkill_ops eeepc_rfkill_ops = ;
static int eeepc_new_rfkill(struct eeepc_laptop *eeepc,
struct rfkill **rfkill,
const char *name,
enum rfkill_type type, int cm)
static void eeepc_rfkill_exit(struct eeepc_laptop *eeepc)
static int eeepc_rfkill_init(struct eeepc_laptop *eeepc)
static int eeepc_hotk_thaw(struct device *device)
static int eeepc_hotk_restore(struct device *device)
static const struct dev_pm_ops eeepc_pm_ops = ;
static struct platform_driver platform_driver = ;
#define EEEPC_EC_SC00      0x61
#define EEEPC_EC_FAN_PWM   (EEEPC_EC_SC00 + 2)
#define EEEPC_EC_FAN_HRPM  (EEEPC_EC_SC00 + 5)
#define EEEPC_EC_FAN_LRPM  (EEEPC_EC_SC00 + 6)
#define EEEPC_EC_SFB0      0xD0
#define EEEPC_EC_FAN_CTRL  (EEEPC_EC_SFB0 + 3)
static int eeepc_get_fan_pwm(void)
static void eeepc_set_fan_pwm(int value)
static int eeepc_get_fan_rpm(void)
static int eeepc_get_fan_ctrl(void)
static void eeepc_set_fan_ctrl(int manual)
static ssize_t store_sys_hwmon(void (*set)(int), const char *buf, size_t count)
static ssize_t show_sys_hwmon(int (*get)(void), char *buf)
#define EEEPC_CREATE_SENSOR_ATTR(_name, _mode, _set, _get)		\
static ssize_t show_##_name(struct device *dev,			\
struct device_attribute *attr,	\
char *buf)				\
\
static ssize_t store_##_name(struct device *dev,		\
struct device_attribute *attr,	\
const char *buf, size_t count)	\
\
static SENSOR_DEVICE_ATTR(_name, _mode, show_##_name, store_##_name, 0);
EEEPC_CREATE_SENSOR_ATTR(fan1_input, S_IRUGO, eeepc_get_fan_rpm, NULL);
EEEPC_CREATE_SENSOR_ATTR(pwm1, S_IRUGO | S_IWUSR,
eeepc_get_fan_pwm, eeepc_set_fan_pwm);
EEEPC_CREATE_SENSOR_ATTR(pwm1_enable, S_IRUGO | S_IWUSR,
eeepc_get_fan_ctrl, eeepc_set_fan_ctrl);
static ssize_t
show_name(struct device *dev, struct device_attribute *attr, char *buf)
static SENSOR_DEVICE_ATTR(name, S_IRUGO, show_name, NULL, 0);
static struct attribute *hwmon_attributes[] = ;
static struct attribute_group hwmon_attribute_group = ;
static void eeepc_hwmon_exit(struct eeepc_laptop *eeepc)
static int eeepc_hwmon_init(struct eeepc_laptop *eeepc)
static int read_brightness(struct backlight_device *bd)
static int set_brightness(struct backlight_device *bd, int value)
static int update_bl_status(struct backlight_device *bd)
static const struct backlight_ops eeepcbl_ops = ;
static int eeepc_backlight_notify(struct eeepc_laptop *eeepc)
static int eeepc_backlight_init(struct eeepc_laptop *eeepc)
static void eeepc_backlight_exit(struct eeepc_laptop *eeepc)
static int eeepc_input_init(struct eeepc_laptop *eeepc)
static void eeepc_input_exit(struct eeepc_laptop *eeepc)
static void eeepc_acpi_notify(struct acpi_device *device, u32 event)
static void eeepc_dmi_check(struct eeepc_laptop *eeepc)
static void cmsg_quirk(struct eeepc_laptop *eeepc, int cm, const char *name)
static void cmsg_quirks(struct eeepc_laptop *eeepc)
static int __devinit eeepc_acpi_init(struct eeepc_laptop *eeepc)
static void __devinit eeepc_enable_camera(struct eeepc_laptop *eeepc)
static bool eeepc_device_present;
static int __devinit eeepc_acpi_add(struct acpi_device *device)
static int eeepc_acpi_remove(struct acpi_device *device, int type)
static const struct acpi_device_id eeepc_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, eeepc_device_ids);
static struct acpi_driver eeepc_acpi_driver = ;
static int __init eeepc_laptop_init(void)
static void __exit eeepc_laptop_exit(void)
module_init(eeepc_laptop_init);
module_exit(eeepc_laptop_exit);
