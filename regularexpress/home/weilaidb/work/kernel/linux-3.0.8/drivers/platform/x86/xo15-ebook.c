#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define MODULE_NAME "xo15-ebook"
#define XO15_EBOOK_CLASS		MODULE_NAME
#define XO15_EBOOK_TYPE_UNKNOWN	0x00
#define XO15_EBOOK_NOTIFY_STATUS	0x80
#define XO15_EBOOK_SUBCLASS		"ebook"
#define XO15_EBOOK_HID			"XO15EBK"
#define XO15_EBOOK_DEVICE_NAME		"EBook Switch"
ACPI_MODULE_NAME(MODULE_NAME);
MODULE_DESCRIPTION("OLPC XO-1.5 ebook switch driver");
MODULE_LICENSE("GPL");
static const struct acpi_device_id ebook_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, ebook_device_ids);
struct ebook_switch ;
static int ebook_send_state(struct acpi_device *device)
static void ebook_switch_notify(struct acpi_device *device, u32 event)
static int ebook_switch_resume(struct acpi_device *device)
static int ebook_switch_add(struct acpi_device *device)
static int ebook_switch_remove(struct acpi_device *device, int type)
static struct acpi_driver xo15_ebook_driver = ;
static int __init xo15_ebook_init(void)
static void __exit xo15_ebook_exit(void)
module_init(xo15_ebook_init);
module_exit(xo15_ebook_exit);
