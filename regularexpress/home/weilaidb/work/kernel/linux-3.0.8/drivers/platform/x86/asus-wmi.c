#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Corentin Chary <corentincj@iksaif.net>, "
"Yong Wang <yong.y.wang@intel.com>");
MODULE_DESCRIPTION("Asus Generic WMI Driver");
MODULE_LICENSE("GPL");
#define to_platform_driver(drv)					\
(container_of((drv), struct platform_driver, driver))
#define to_asus_wmi_driver(pdrv)					\
(container_of((pdrv), struct asus_wmi_driver, platform_driver))
#define ASUS_WMI_MGMT_GUID	"97845ED0-4E6D-11DE-8A39-0800200C9A66"
#define NOTIFY_BRNUP_MIN		0x11
#define NOTIFY_BRNUP_MAX		0x1f
#define NOTIFY_BRNDOWN_MIN		0x20
#define NOTIFY_BRNDOWN_MAX		0x2e
#define ASUS_WMI_METHODID_SPEC	        0x43455053
#define ASUS_WMI_METHODID_SFBD		0x44424653
#define ASUS_WMI_METHODID_GLCD		0x44434C47
#define ASUS_WMI_METHODID_GPID		0x44495047
#define ASUS_WMI_METHODID_QMOD		0x444F4D51
#define ASUS_WMI_METHODID_SPLV		0x4C425053
#define ASUS_WMI_METHODID_SFUN		0x4E554653
#define ASUS_WMI_METHODID_SDSP		0x50534453
#define ASUS_WMI_METHODID_GDSP		0x50534447
#define ASUS_WMI_METHODID_DEVP		0x50564544
#define ASUS_WMI_METHODID_OSVR		0x5256534F
#define ASUS_WMI_METHODID_DSTS		0x53544344
#define ASUS_WMI_METHODID_DSTS2		0x53545344
#define ASUS_WMI_METHODID_BSTS		0x53545342
#define ASUS_WMI_METHODID_DEVS		0x53564544
#define ASUS_WMI_METHODID_CFVS		0x53564643
#define ASUS_WMI_METHODID_KBFT		0x5446424B
#define ASUS_WMI_METHODID_INIT		0x54494E49
#define ASUS_WMI_METHODID_HKEY		0x59454B48
#define ASUS_WMI_UNSUPPORTED_METHOD	0xFFFFFFFE
#define ASUS_WMI_DEVID_HW_SWITCH	0x00010001
#define ASUS_WMI_DEVID_WIRELESS_LED	0x00010002
#define ASUS_WMI_DEVID_WLAN		0x00010011
#define ASUS_WMI_DEVID_BLUETOOTH	0x00010013
#define ASUS_WMI_DEVID_GPS		0x00010015
#define ASUS_WMI_DEVID_WIMAX		0x00010017
#define ASUS_WMI_DEVID_WWAN3G		0x00010019
#define ASUS_WMI_DEVID_UWB		0x00010021
#define ASUS_WMI_DEVID_BACKLIGHT	0x00050011
#define ASUS_WMI_DEVID_BRIGHTNESS	0x00050012
#define ASUS_WMI_DEVID_KBD_BACKLIGHT	0x00050021
#define ASUS_WMI_DEVID_LIGHT_SENSOR	0x00050022
#define ASUS_WMI_DEVID_CAMERA		0x00060013
#define ASUS_WMI_DEVID_CARDREADER	0x00080013
#define ASUS_WMI_DEVID_TOUCHPAD		0x00100011
#define ASUS_WMI_DEVID_TOUCHPAD_LED	0x00100012
#define ASUS_WMI_DEVID_THERMAL_CTRL	0x00110011
#define ASUS_WMI_DEVID_FAN_CTRL		0x00110012
#define ASUS_WMI_DEVID_PROCESSOR_STATE	0x00120012
#define ASUS_WMI_DSTS_STATUS_BIT	0x00000001
#define ASUS_WMI_DSTS_UNKNOWN_BIT	0x00000002
#define ASUS_WMI_DSTS_PRESENCE_BIT	0x00010000
#define ASUS_WMI_DSTS_USER_BIT		0x00020000
#define ASUS_WMI_DSTS_BIOS_BIT		0x00040000
#define ASUS_WMI_DSTS_BRIGHTNESS_MASK	0x000000FF
#define ASUS_WMI_DSTS_MAX_BRIGTH_MASK	0x0000FF00
struct bios_args  __packed;
struct asus_wmi_debug ;
struct asus_rfkill ;
struct asus_wmi ;
static int asus_wmi_input_init(struct asus_wmi *asus)
static void asus_wmi_input_exit(struct asus_wmi *asus)
static int asus_wmi_evaluate_method(u32 method_id, u32 arg0, u32 arg1,
u32 *retval)
static int asus_wmi_get_devstate(struct asus_wmi *asus, u32 dev_id, u32 *retval)
static int asus_wmi_set_devstate(u32 dev_id, u32 ctrl_param,
u32 *retval)
static int asus_wmi_get_devstate_bits(struct asus_wmi *asus,
u32 dev_id, u32 mask)
static int asus_wmi_get_devstate_simple(struct asus_wmi *asus, u32 dev_id)
static void tpd_led_update(struct work_struct *work)
static void tpd_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static int read_tpd_led_state(struct asus_wmi *asus)
static enum led_brightness tpd_led_get(struct led_classdev *led_cdev)
static int asus_wmi_led_init(struct asus_wmi *asus)
static void asus_wmi_led_exit(struct asus_wmi *asus)
static bool asus_wlan_rfkill_blocked(struct asus_wmi *asus)
static void asus_rfkill_hotplug(struct asus_wmi *asus)
static void asus_rfkill_notify(acpi_handle handle, u32 event, void *data)
static int asus_register_rfkill_notifier(struct asus_wmi *asus, char *node)
static void asus_unregister_rfkill_notifier(struct asus_wmi *asus, char *node)
static int asus_get_adapter_status(struct hotplug_slot *hotplug_slot,
u8 *value)
static void asus_cleanup_pci_hotplug(struct hotplug_slot *hotplug_slot)
static struct hotplug_slot_ops asus_hotplug_slot_ops = ;
static void asus_hotplug_work(struct work_struct *work)
static int asus_setup_pci_hotplug(struct asus_wmi *asus)
static int asus_rfkill_set(void *data, bool blocked)
static void asus_rfkill_query(struct rfkill *rfkill, void *data)
static int asus_rfkill_wlan_set(void *data, bool blocked)
static const struct rfkill_ops asus_rfkill_wlan_ops = ;
static const struct rfkill_ops asus_rfkill_ops = ;
static int asus_new_rfkill(struct asus_wmi *asus,
struct asus_rfkill *arfkill,
const char *name, enum rfkill_type type, int dev_id)
static void asus_wmi_rfkill_exit(struct asus_wmi *asus)
static int asus_wmi_rfkill_init(struct asus_wmi *asus)
static ssize_t asus_hwmon_pwm1(struct device *dev,
struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(pwm1, S_IRUGO, asus_hwmon_pwm1, NULL, 0);
static ssize_t
show_name(struct device *dev, struct device_attribute *attr, char *buf)
static SENSOR_DEVICE_ATTR(name, S_IRUGO, show_name, NULL, 0);
static struct attribute *hwmon_attributes[] = ;
static mode_t asus_hwmon_sysfs_is_visible(struct kobject *kobj,
struct attribute *attr, int idx)
static struct attribute_group hwmon_attribute_group = ;
static void asus_wmi_hwmon_exit(struct asus_wmi *asus)
static int asus_wmi_hwmon_init(struct asus_wmi *asus)
static int read_backlight_power(struct asus_wmi *asus)
static int read_brightness_max(struct asus_wmi *asus)
static int read_brightness(struct backlight_device *bd)
static int update_bl_status(struct backlight_device *bd)
static const struct backlight_ops asus_wmi_bl_ops = ;
static int asus_wmi_backlight_notify(struct asus_wmi *asus, int code)
static int asus_wmi_backlight_init(struct asus_wmi *asus)
static void asus_wmi_backlight_exit(struct asus_wmi *asus)
static void asus_wmi_notify(u32 value, void *context)
static int parse_arg(const char *buf, unsigned long count, int *val)
static ssize_t store_sys_wmi(struct asus_wmi *asus, int devid,
const char *buf, size_t count)
static ssize_t show_sys_wmi(struct asus_wmi *asus, int devid, char *buf)
#define ASUS_WMI_CREATE_DEVICE_ATTR(_name, _mode, _cm)			\
static ssize_t show_##_name(struct device *dev,			\
struct device_attribute *attr,	\
char *buf)				\
\
static ssize_t store_##_name(struct device *dev,		\
struct device_attribute *attr,	\
const char *buf, size_t count)	\
\
static struct device_attribute dev_attr_##_name =
ASUS_WMI_CREATE_DEVICE_ATTR(touchpad, 0644, ASUS_WMI_DEVID_TOUCHPAD);
ASUS_WMI_CREATE_DEVICE_ATTR(camera, 0644, ASUS_WMI_DEVID_CAMERA);
ASUS_WMI_CREATE_DEVICE_ATTR(cardr, 0644, ASUS_WMI_DEVID_CARDREADER);
static ssize_t store_cpufv(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(cpufv, S_IRUGO | S_IWUSR, NULL, store_cpufv);
static struct attribute *platform_attributes[] = ;
static mode_t asus_sysfs_is_visible(struct kobject *kobj,
struct attribute *attr, int idx)
static struct attribute_group platform_attribute_group = ;
static void asus_wmi_sysfs_exit(struct platform_device *device)
static int asus_wmi_sysfs_init(struct platform_device *device)
static int asus_wmi_platform_init(struct asus_wmi *asus)
static void asus_wmi_platform_exit(struct asus_wmi *asus)
struct asus_wmi_debugfs_node ;
static int show_dsts(struct seq_file *m, void *data)
static int show_devs(struct seq_file *m, void *data)
static int show_call(struct seq_file *m, void *data)
static struct asus_wmi_debugfs_node asus_wmi_debug_files[] = ;
static int asus_wmi_debugfs_open(struct inode *inode, struct file *file)
static const struct file_operations asus_wmi_debugfs_io_ops = ;
static void asus_wmi_debugfs_exit(struct asus_wmi *asus)
static int asus_wmi_debugfs_init(struct asus_wmi *asus)
static int asus_wmi_add(struct platform_device *pdev)
static int asus_wmi_remove(struct platform_device *device)
static int asus_hotk_thaw(struct device *device)
static int asus_hotk_restore(struct device *device)
static const struct dev_pm_ops asus_pm_ops = ;
static int asus_wmi_probe(struct platform_device *pdev)
static bool used;
int asus_wmi_register_driver(struct asus_wmi_driver *driver)
EXPORT_SYMBOL_GPL(asus_wmi_register_driver);
void asus_wmi_unregister_driver(struct asus_wmi_driver *driver)
EXPORT_SYMBOL_GPL(asus_wmi_unregister_driver);
static int __init asus_wmi_init(void)
static void __exit asus_wmi_exit(void)
module_init(asus_wmi_init);
module_exit(asus_wmi_exit);
