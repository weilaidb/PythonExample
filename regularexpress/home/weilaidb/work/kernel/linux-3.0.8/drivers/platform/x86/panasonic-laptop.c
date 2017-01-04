#define ACPI_HOTKEY_COMPONENT	0x10000000
#define _COMPONENT		ACPI_HOTKEY_COMPONENT
MODULE_AUTHOR("Hiroshi Miura, David Bronaugh and Harald Welte");
MODULE_DESCRIPTION("ACPI HotKey driver for Panasonic Let's Note laptops");
MODULE_LICENSE("GPL");
#define LOGPREFIX "pcc_acpi: "
#define METHOD_HKEY_QUERY	"HINF"
#define METHOD_HKEY_SQTY	"SQTY"
#define METHOD_HKEY_SINF	"SINF"
#define METHOD_HKEY_SSET	"SSET"
#define HKEY_NOTIFY		 0x80
#define ACPI_PCC_DRIVER_NAME	"Panasonic Laptop Support"
#define ACPI_PCC_DEVICE_NAME	"Hotkey"
#define ACPI_PCC_CLASS		"pcc"
#define ACPI_PCC_INPUT_PHYS	"panasonic/hkey0"
enum SINF_BITS ;
static int acpi_pcc_hotkey_add(struct acpi_device *device);
static int acpi_pcc_hotkey_remove(struct acpi_device *device, int type);
static int acpi_pcc_hotkey_resume(struct acpi_device *device);
static void acpi_pcc_hotkey_notify(struct acpi_device *device, u32 event);
static const struct acpi_device_id pcc_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, pcc_device_ids);
static struct acpi_driver acpi_pcc_driver = ;
static const struct key_entry panasonic_keymap[] = ;
struct pcc_acpi ;
struct pcc_keyinput ;
static int acpi_pcc_write_sset(struct pcc_acpi *pcc, int func, int val)
static inline int acpi_pcc_get_sqty(struct acpi_device *device)
static int acpi_pcc_retrieve_biosdata(struct pcc_acpi *pcc)
static int bl_get(struct backlight_device *bd)
static int bl_set_status(struct backlight_device *bd)
static const struct backlight_ops pcc_backlight_ops = ;
static ssize_t show_numbatt(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_lcdtype(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_mute(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_sticky(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_sticky(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(numbatt, S_IRUGO, show_numbatt, NULL);
static DEVICE_ATTR(lcdtype, S_IRUGO, show_lcdtype, NULL);
static DEVICE_ATTR(mute, S_IRUGO, show_mute, NULL);
static DEVICE_ATTR(sticky_key, S_IRUGO | S_IWUSR, show_sticky, set_sticky);
static struct attribute *pcc_sysfs_entries[] = ;
static struct attribute_group pcc_attr_group = ;
static void acpi_pcc_generate_keyinput(struct pcc_acpi *pcc)
static void acpi_pcc_hotkey_notify(struct acpi_device *device, u32 event)
static int acpi_pcc_init_input(struct pcc_acpi *pcc)
static void acpi_pcc_destroy_input(struct pcc_acpi *pcc)
static int acpi_pcc_hotkey_resume(struct acpi_device *device)
static int acpi_pcc_hotkey_add(struct acpi_device *device)
static int __init acpi_pcc_init(void)
static int acpi_pcc_hotkey_remove(struct acpi_device *device, int type)
static void __exit acpi_pcc_exit(void)
module_init(acpi_pcc_init);
module_exit(acpi_pcc_exit);
