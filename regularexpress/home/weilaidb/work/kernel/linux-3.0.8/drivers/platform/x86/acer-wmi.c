#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Carlos Corbacho");
MODULE_DESCRIPTION("Acer Laptop WMI Extras Driver");
MODULE_LICENSE("GPL");
#define ACER_AMW0_WRITE	0x9610
#define ACER_AMW0_WIRELESS_MASK  0x35
#define ACER_AMW0_BLUETOOTH_MASK 0x34
#define ACER_AMW0_MAILLED_MASK   0x31
#define ACER_WMID_GET_WIRELESS_METHODID		1
#define ACER_WMID_GET_BLUETOOTH_METHODID	2
#define ACER_WMID_GET_BRIGHTNESS_METHODID	3
#define ACER_WMID_SET_WIRELESS_METHODID		4
#define ACER_WMID_SET_BLUETOOTH_METHODID	5
#define ACER_WMID_SET_BRIGHTNESS_METHODID	6
#define ACER_WMID_GET_THREEG_METHODID		10
#define ACER_WMID_SET_THREEG_METHODID		11
#define AMW0_GUID1		"67C3371D-95A3-4C37-BB61-DD47B491DAAB"
#define AMW0_GUID2		"431F16ED-0C2B-444C-B267-27DEB140CF9C"
#define WMID_GUID1		"6AF4F258-B401-42FD-BE91-3D4AC2D7C0D3"
#define WMID_GUID2		"95764E09-FB56-4E83-B31A-37761F60994A"
#define WMID_GUID3		"61EF69EA-865C-4BC3-A502-A0DEBA0CB531"
#define ACERWMID_EVENT_GUID "676AA15E-6A47-4D9F-A2CC-1E6D18D14026"
MODULE_ALIAS("wmi:67C3371D-95A3-4C37-BB61-DD47B491DAAB");
MODULE_ALIAS("wmi:6AF4F258-B401-42FD-BE91-3D4AC2D7C0D3");
MODULE_ALIAS("wmi:676AA15E-6A47-4D9F-A2CC-1E6D18D14026");
enum acer_wmi_event_ids ;
static const struct key_entry acer_wmi_keymap[] = ;
static struct input_dev *acer_wmi_input_dev;
struct event_return_value  __attribute__((packed));
#define ACER_WMID3_GDS_WIRELESS		(1<<0)
#define ACER_WMID3_GDS_THREEG		(1<<6)
#define ACER_WMID3_GDS_WIMAX		(1<<7)
#define ACER_WMID3_GDS_BLUETOOTH	(1<<11)
struct lm_input_params  __attribute__((packed));
struct lm_return_value  __attribute__((packed));
struct wmid3_gds_input_param  __attribute__((packed));
struct wmid3_gds_return_value  __attribute__((packed));
struct hotkey_function_type_aa  __attribute__((packed));
#define ACER_CAP_MAILLED		(1<<0)
#define ACER_CAP_WIRELESS		(1<<1)
#define ACER_CAP_BLUETOOTH		(1<<2)
#define ACER_CAP_BRIGHTNESS		(1<<3)
#define ACER_CAP_THREEG			(1<<4)
#define ACER_CAP_ANY			(0xFFFFFFFF)
enum interface_flags ;
#define ACER_DEFAULT_WIRELESS  0
#define ACER_DEFAULT_BLUETOOTH 0
#define ACER_DEFAULT_MAILLED   0
#define ACER_DEFAULT_THREEG    0
static int max_brightness = 0xF;
static int mailled = -1;
static int brightness = -1;
static int threeg = -1;
static int force_series;
static bool ec_raw_mode;
static bool has_type_aa;
module_param(mailled, int, 0444);
module_param(brightness, int, 0444);
module_param(threeg, int, 0444);
module_param(force_series, int, 0444);
module_param(ec_raw_mode, bool, 0444);
MODULE_PARM_DESC(mailled, "Set initial state of Mail LED");
MODULE_PARM_DESC(brightness, "Set initial LCD backlight brightness");
MODULE_PARM_DESC(threeg, "Set initial state of 3G hardware");
MODULE_PARM_DESC(force_series, "Force a different laptop series");
MODULE_PARM_DESC(ec_raw_mode, "Enable EC raw mode");
struct acer_data ;
struct acer_debug ;
static struct rfkill *wireless_rfkill;
static struct rfkill *bluetooth_rfkill;
static struct rfkill *threeg_rfkill;
static bool rfkill_inited;
struct wmi_interface ;
static struct wmi_interface *interface;
struct quirk_entry ;
static struct quirk_entry *quirks;
static void set_quirks(void)
static int dmi_matched(const struct dmi_system_id *dmi)
static struct quirk_entry quirk_unknown = ;
static struct quirk_entry quirk_acer_aspire_1520 = ;
static struct quirk_entry quirk_acer_travelmate_2490 = ;
static struct quirk_entry quirk_medion_md_98300 = ;
static struct quirk_entry quirk_fujitsu_amilo_li_1718 = ;
static struct dmi_system_id __devinitdata acer_blacklist[] = ;
static struct dmi_system_id acer_quirks[] = ;
static void find_quirks(void)
static bool has_cap(u32 cap)
struct wmab_args ;
struct wmab_ret ;
static acpi_status wmab_execute(struct wmab_args *regbuf,
struct acpi_buffer *result)
static acpi_status AMW0_get_u32(u32 *value, u32 cap,
struct wmi_interface *iface)
static acpi_status AMW0_set_u32(u32 value, u32 cap, struct wmi_interface *iface)
static acpi_status AMW0_find_mailled(void)
static acpi_status AMW0_set_capabilities(void)
static struct wmi_interface AMW0_interface = ;
static struct wmi_interface AMW0_V2_interface = ;
static acpi_status
WMI_execute_u32(u32 method_id, u32 in, u32 *out)
static acpi_status WMID_get_u32(u32 *value, u32 cap,
struct wmi_interface *iface)
static acpi_status WMID_set_u32(u32 value, u32 cap, struct wmi_interface *iface)
static void type_aa_dmi_decode(const struct dmi_header *header, void *dummy)
static acpi_status WMID_set_capabilities(void)
static struct wmi_interface wmid_interface = ;
static acpi_status get_u32(u32 *value, u32 cap)
static acpi_status set_u32(u32 value, u32 cap)
static void __init acer_commandline_init(void)
static void mail_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static struct led_classdev mail_led = ;
static int __devinit acer_led_init(struct device *dev)
static void acer_led_exit(void)
static struct backlight_device *acer_backlight_device;
static int read_brightness(struct backlight_device *bd)
static int update_bl_status(struct backlight_device *bd)
static const struct backlight_ops acer_bl_ops = ;
static int __devinit acer_backlight_init(struct device *dev)
static void acer_backlight_exit(void)
static acpi_status wmid3_get_device_status(u32 *value, u16 device)
static acpi_status get_device_status(u32 *value, u32 cap)
static acpi_status wmid3_set_device_status(u32 value, u16 device)
static acpi_status set_device_status(u32 value, u32 cap)
static void acer_rfkill_update(struct work_struct *ignored);
static DECLARE_DELAYED_WORK(acer_rfkill_work, acer_rfkill_update);
static void acer_rfkill_update(struct work_struct *ignored)
static int acer_rfkill_set(void *data, bool blocked)
static const struct rfkill_ops acer_rfkill_ops = ;
static struct rfkill *acer_rfkill_register(struct device *dev,
enum rfkill_type type,
char *name, u32 cap)
static int acer_rfkill_init(struct device *dev)
static void acer_rfkill_exit(void)
static ssize_t show_bool_threeg(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_bool_threeg(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(threeg, S_IRUGO | S_IWUSR, show_bool_threeg,
set_bool_threeg);
static ssize_t show_interface(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(interface, S_IRUGO, show_interface, NULL);
static void acer_wmi_notify(u32 value, void *context)
static acpi_status
wmid3_set_lm_mode(struct lm_input_params *params,
struct lm_return_value *return_value)
static int acer_wmi_enable_ec_raw(void)
static int acer_wmi_enable_lm(void)
static int __init acer_wmi_input_setup(void)
static void acer_wmi_input_destroy(void)
static u32 get_wmid_devices(void)
static int __devinit acer_platform_probe(struct platform_device *device)
static int acer_platform_remove(struct platform_device *device)
static int acer_platform_suspend(struct platform_device *dev,
pm_message_t state)
static int acer_platform_resume(struct platform_device *device)
static void acer_platform_shutdown(struct platform_device *device)
static struct platform_driver acer_platform_driver = ;
static struct platform_device *acer_platform_device;
static int remove_sysfs(struct platform_device *device)
static int create_sysfs(void)
static void remove_debugfs(void)
static int create_debugfs(void)
static int __init acer_wmi_init(void)
static void __exit acer_wmi_exit(void)
module_init(acer_wmi_init);
module_exit(acer_wmi_exit);
