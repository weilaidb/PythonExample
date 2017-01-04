#define PREFIX "ACPI: "
#define ACPI_BUTTON_CLASS		"button"
#define ACPI_BUTTON_FILE_INFO		"info"
#define ACPI_BUTTON_FILE_STATE		"state"
#define ACPI_BUTTON_TYPE_UNKNOWN	0x00
#define ACPI_BUTTON_NOTIFY_STATUS	0x80
#define ACPI_BUTTON_SUBCLASS_POWER	"power"
#define ACPI_BUTTON_HID_POWER		"PNP0C0C"
#define ACPI_BUTTON_DEVICE_NAME_POWER	"Power Button"
#define ACPI_BUTTON_TYPE_POWER		0x01
#define ACPI_BUTTON_SUBCLASS_SLEEP	"sleep"
#define ACPI_BUTTON_HID_SLEEP		"PNP0C0E"
#define ACPI_BUTTON_DEVICE_NAME_SLEEP	"Sleep Button"
#define ACPI_BUTTON_TYPE_SLEEP		0x03
#define ACPI_BUTTON_SUBCLASS_LID	"lid"
#define ACPI_BUTTON_HID_LID		"PNP0C0D"
#define ACPI_BUTTON_DEVICE_NAME_LID	"Lid Switch"
#define ACPI_BUTTON_TYPE_LID		0x05
#define _COMPONENT		ACPI_BUTTON_COMPONENT
ACPI_MODULE_NAME("button");
MODULE_AUTHOR("Paul Diefenbaugh");
MODULE_DESCRIPTION("ACPI Button Driver");
MODULE_LICENSE("GPL");
static const struct acpi_device_id button_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, button_device_ids);
static int acpi_button_add(struct acpi_device *device);
static int acpi_button_remove(struct acpi_device *device, int type);
static int acpi_button_resume(struct acpi_device *device);
static void acpi_button_notify(struct acpi_device *device, u32 event);
static struct acpi_driver acpi_button_driver = ;
struct acpi_button ;
static BLOCKING_NOTIFIER_HEAD(acpi_lid_notifier);
static struct acpi_device *lid_device;
static struct proc_dir_entry *acpi_button_dir;
static struct proc_dir_entry *acpi_lid_dir;
static int acpi_button_state_seq_show(struct seq_file *seq, void *offset)
static int acpi_button_state_open_fs(struct inode *inode, struct file *file)
static const struct file_operations acpi_button_state_fops = ;
static int acpi_button_add_fs(struct acpi_device *device)
static int acpi_button_remove_fs(struct acpi_device *device)
int acpi_lid_notifier_register(struct notifier_block *nb)
EXPORT_SYMBOL(acpi_lid_notifier_register);
int acpi_lid_notifier_unregister(struct notifier_block *nb)
EXPORT_SYMBOL(acpi_lid_notifier_unregister);
int acpi_lid_open(void)
EXPORT_SYMBOL(acpi_lid_open);
static int acpi_lid_send_state(struct acpi_device *device)
static void acpi_button_notify(struct acpi_device *device, u32 event)
static int acpi_button_resume(struct acpi_device *device)
static int acpi_button_add(struct acpi_device *device)
static int acpi_button_remove(struct acpi_device *device, int type)
static int __init acpi_button_init(void)
static void __exit acpi_button_exit(void)
module_init(acpi_button_init);
module_exit(acpi_button_exit);
