#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define IDEAPAD_RFKILL_DEV_NUM	(3)
struct ideapad_private ;
static acpi_handle ideapad_handle;
static bool no_bt_rfkill;
module_param(no_bt_rfkill, bool, 0444);
MODULE_PARM_DESC(no_bt_rfkill, "No rfkill for bluetooth.");
#define IDEAPAD_EC_TIMEOUT (100)
static int read_method_int(acpi_handle handle, const char *method, int *val)
static int method_vpcr(acpi_handle handle, int cmd, int *ret)
static int method_vpcw(acpi_handle handle, int cmd, int data)
static int read_ec_data(acpi_handle handle, int cmd, unsigned long *data)
static int write_ec_cmd(acpi_handle handle, int cmd, unsigned long data)
static ssize_t show_ideapad_cam(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_ideapad_cam(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(camera_power, 0644, show_ideapad_cam, store_ideapad_cam);
struct ideapad_rfk_data ;
const struct ideapad_rfk_data ideapad_rfk_data[] = ;
static int ideapad_rfk_set(void *data, bool blocked)
static struct rfkill_ops ideapad_rfk_ops = ;
static void ideapad_sync_rfk_state(struct acpi_device *adevice)
static int __devinit ideapad_register_rfkill(struct acpi_device *adevice,
int dev)
static void __devexit ideapad_unregister_rfkill(struct acpi_device *adevice,
int dev)
static struct attribute *ideapad_attributes[] = ;
static struct attribute_group ideapad_attribute_group = ;
static int __devinit ideapad_platform_init(struct ideapad_private *priv)
static void ideapad_platform_exit(struct ideapad_private *priv)
static const struct key_entry ideapad_keymap[] = ;
static int __devinit ideapad_input_init(struct ideapad_private *priv)
static void __devexit ideapad_input_exit(struct ideapad_private *priv)
static void ideapad_input_report(struct ideapad_private *priv,
unsigned long scancode)
static const struct acpi_device_id ideapad_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, ideapad_device_ids);
static int __devinit ideapad_acpi_add(struct acpi_device *adevice)
static int __devexit ideapad_acpi_remove(struct acpi_device *adevice, int type)
static void ideapad_acpi_notify(struct acpi_device *adevice, u32 event)
static struct acpi_driver ideapad_acpi_driver = ;
static int __init ideapad_acpi_module_init(void)
static void __exit ideapad_acpi_module_exit(void)
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("IdeaPad ACPI Extras");
MODULE_LICENSE("GPL");
module_init(ideapad_acpi_module_init);
module_exit(ideapad_acpi_module_exit);
