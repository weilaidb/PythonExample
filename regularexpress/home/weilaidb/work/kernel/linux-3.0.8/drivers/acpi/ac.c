#define PREFIX "ACPI: "
#define ACPI_AC_CLASS			"ac_adapter"
#define ACPI_AC_DEVICE_NAME		"AC Adapter"
#define ACPI_AC_FILE_STATE		"state"
#define ACPI_AC_NOTIFY_STATUS		0x80
#define ACPI_AC_STATUS_OFFLINE		0x00
#define ACPI_AC_STATUS_ONLINE		0x01
#define ACPI_AC_STATUS_UNKNOWN		0xFF
#define _COMPONENT		ACPI_AC_COMPONENT
ACPI_MODULE_NAME("ac");
MODULE_AUTHOR("Paul Diefenbaugh");
MODULE_DESCRIPTION("ACPI AC Adapter Driver");
MODULE_LICENSE("GPL");
extern struct proc_dir_entry *acpi_lock_ac_dir(void);
extern void *acpi_unlock_ac_dir(struct proc_dir_entry *acpi_ac_dir);
static int acpi_ac_open_fs(struct inode *inode, struct file *file);
static int acpi_ac_add(struct acpi_device *device);
static int acpi_ac_remove(struct acpi_device *device, int type);
static int acpi_ac_resume(struct acpi_device *device);
static void acpi_ac_notify(struct acpi_device *device, u32 event);
static const struct acpi_device_id ac_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, ac_device_ids);
static struct acpi_driver acpi_ac_driver = ;
struct acpi_ac ;
#define to_acpi_ac(x) container_of(x, struct acpi_ac, charger);
static const struct file_operations acpi_ac_fops = ;
static int acpi_ac_get_state(struct acpi_ac *ac)
static int get_ac_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property ac_props[] = ;
static struct proc_dir_entry *acpi_ac_dir;
static int acpi_ac_seq_show(struct seq_file *seq, void *offset)
static int acpi_ac_open_fs(struct inode *inode, struct file *file)
static int acpi_ac_add_fs(struct acpi_device *device)
static int acpi_ac_remove_fs(struct acpi_device *device)
static void acpi_ac_notify(struct acpi_device *device, u32 event)
static int acpi_ac_add(struct acpi_device *device)
static int acpi_ac_resume(struct acpi_device *device)
static int acpi_ac_remove(struct acpi_device *device, int type)
static int __init acpi_ac_init(void)
static void __exit acpi_ac_exit(void)
module_init(acpi_ac_init);
module_exit(acpi_ac_exit);
