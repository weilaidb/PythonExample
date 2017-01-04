#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Matthew Garrett <mjg59@srcf.ucam.org>");
MODULE_DESCRIPTION("HP laptop WMI hotkeys driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("wmi:95F24279-4D7B-4334-9387-ACCDC67EF61C");
MODULE_ALIAS("wmi:5FB7F034-2C63-45e9-BE91-3D44E2C707E4");
#define HPWMI_EVENT_GUID "95F24279-4D7B-4334-9387-ACCDC67EF61C"
#define HPWMI_BIOS_GUID "5FB7F034-2C63-45e9-BE91-3D44E2C707E4"
#define HPWMI_DISPLAY_QUERY 0x1
#define HPWMI_HDDTEMP_QUERY 0x2
#define HPWMI_ALS_QUERY 0x3
#define HPWMI_HARDWARE_QUERY 0x4
#define HPWMI_WIRELESS_QUERY 0x5
#define HPWMI_HOTKEY_QUERY 0xc
#define HPWMI_WIRELESS2_QUERY 0x1b
enum hp_wmi_radio ;
enum hp_wmi_event_ids ;
static int __devinit hp_wmi_bios_setup(struct platform_device *device);
static int __exit hp_wmi_bios_remove(struct platform_device *device);
static int hp_wmi_resume_handler(struct device *device);
struct bios_args ;
struct bios_return ;
enum hp_return_value ;
enum hp_wireless2_bits ;
#define IS_HWBLOCKED(x) ((x & (HPWMI_POWER_BIOS | HPWMI_POWER_HARD)) \
!= (HPWMI_POWER_BIOS | HPWMI_POWER_HARD))
#define IS_SWBLOCKED(x) !(x & HPWMI_POWER_SOFT)
struct bios_rfkill2_device_state ;
#define HPWMI_MAX_RFKILL2_DEVICES	7
struct bios_rfkill2_state ;
static const struct key_entry hp_wmi_keymap[] = ;
static struct input_dev *hp_wmi_input_dev;
static struct platform_device *hp_wmi_platform_dev;
static struct rfkill *wifi_rfkill;
static struct rfkill *bluetooth_rfkill;
static struct rfkill *wwan_rfkill;
struct rfkill2_device ;
static int rfkill2_count;
static struct rfkill2_device rfkill2[HPWMI_MAX_RFKILL2_DEVICES];
static const struct dev_pm_ops hp_wmi_pm_ops = ;
static struct platform_driver hp_wmi_driver = ;
static int hp_wmi_perform_query(int query, int write, void *buffer,
int insize, int outsize)
static int hp_wmi_display_state(void)
static int hp_wmi_hddtemp_state(void)
static int hp_wmi_als_state(void)
static int hp_wmi_dock_state(void)
static int hp_wmi_tablet_state(void)
static int hp_wmi_set_block(void *data, bool blocked)
static const struct rfkill_ops hp_wmi_rfkill_ops = ;
static bool hp_wmi_get_sw_state(enum hp_wmi_radio r)
static bool hp_wmi_get_hw_state(enum hp_wmi_radio r)
static int hp_wmi_rfkill2_set_block(void *data, bool blocked)
static const struct rfkill_ops hp_wmi_rfkill2_ops = ;
static int hp_wmi_rfkill2_refresh(void)
static ssize_t show_display(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_hddtemp(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_als(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_dock(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_tablet(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_als(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(display, S_IRUGO, show_display, NULL);
static DEVICE_ATTR(hddtemp, S_IRUGO, show_hddtemp, NULL);
static DEVICE_ATTR(als, S_IRUGO | S_IWUSR, show_als, set_als);
static DEVICE_ATTR(dock, S_IRUGO, show_dock, NULL);
static DEVICE_ATTR(tablet, S_IRUGO, show_tablet, NULL);
static void hp_wmi_notify(u32 value, void *context)
static int __init hp_wmi_input_setup(void)
static void hp_wmi_input_destroy(void)
static void cleanup_sysfs(struct platform_device *device)
static int __devinit hp_wmi_rfkill_setup(struct platform_device *device)
static int __devinit hp_wmi_rfkill2_setup(struct platform_device *device)
static int __devinit hp_wmi_bios_setup(struct platform_device *device)
static int __exit hp_wmi_bios_remove(struct platform_device *device)
static int hp_wmi_resume_handler(struct device *device)
static int __init hp_wmi_init(void)
static void __exit hp_wmi_exit(void)
module_init(hp_wmi_init);
module_exit(hp_wmi_exit);
