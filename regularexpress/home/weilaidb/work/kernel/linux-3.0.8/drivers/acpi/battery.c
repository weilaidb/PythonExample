#define PREFIX "ACPI: "
#define ACPI_BATTERY_VALUE_UNKNOWN 0xFFFFFFFF
#define ACPI_BATTERY_CLASS		"battery"
#define ACPI_BATTERY_DEVICE_NAME	"Battery"
#define ACPI_BATTERY_NOTIFY_STATUS	0x80
#define ACPI_BATTERY_NOTIFY_INFO	0x81
#define ACPI_BATTERY_NOTIFY_THRESHOLD   0x82
#define _COMPONENT		ACPI_BATTERY_COMPONENT
ACPI_MODULE_NAME("battery");
MODULE_AUTHOR("Paul Diefenbaugh");
MODULE_AUTHOR("Alexey Starikovskiy <astarikovskiy@suse.de>");
MODULE_DESCRIPTION("ACPI Battery Driver");
MODULE_LICENSE("GPL");
static unsigned int cache_time = 1000;
module_param(cache_time, uint, 0644);
MODULE_PARM_DESC(cache_time, "cache time in milliseconds");
extern struct proc_dir_entry *acpi_lock_battery_dir(void);
extern void *acpi_unlock_battery_dir(struct proc_dir_entry *acpi_battery_dir);
enum acpi_battery_files ;
static const struct acpi_device_id battery_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, battery_device_ids);
enum ;
struct acpi_battery ;
#define to_acpi_battery(x) container_of(x, struct acpi_battery, bat);
inline int acpi_battery_present(struct acpi_battery *battery)
static int acpi_battery_technology(struct acpi_battery *battery)
static int acpi_battery_get_state(struct acpi_battery *battery);
static int acpi_battery_is_charged(struct acpi_battery *battery)
static int acpi_battery_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property charge_battery_props[] = ;
static enum power_supply_property energy_battery_props[] = ;
inline char *acpi_battery_units(struct acpi_battery *battery)
struct acpi_offsets ;
static struct acpi_offsets state_offsets[] = ;
static struct acpi_offsets info_offsets[] = ;
static struct acpi_offsets extended_info_offsets[] = ;
static int extract_package(struct acpi_battery *battery,
union acpi_object *package,
struct acpi_offsets *offsets, int num)
static int acpi_battery_get_status(struct acpi_battery *battery)
static int acpi_battery_get_info(struct acpi_battery *battery)
static int acpi_battery_get_state(struct acpi_battery *battery)
static int acpi_battery_set_alarm(struct acpi_battery *battery)
static int acpi_battery_init_alarm(struct acpi_battery *battery)
static ssize_t acpi_battery_alarm_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t acpi_battery_alarm_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute alarm_attr = ;
static int sysfs_add_battery(struct acpi_battery *battery)
static void sysfs_remove_battery(struct acpi_battery *battery)
static void acpi_battery_quirks(struct acpi_battery *battery)
static void acpi_battery_quirks2(struct acpi_battery *battery)
static int acpi_battery_update(struct acpi_battery *battery)
static void acpi_battery_refresh(struct acpi_battery *battery)
static struct proc_dir_entry *acpi_battery_dir;
static int acpi_battery_print_info(struct seq_file *seq, int result)
static int acpi_battery_print_state(struct seq_file *seq, int result)
static int acpi_battery_print_alarm(struct seq_file *seq, int result)
static ssize_t acpi_battery_write_alarm(struct file *file,
const char __user * buffer,
size_t count, loff_t * ppos)
typedef int(*print_func)(struct seq_file *seq, int result);
static print_func acpi_print_funcs[ACPI_BATTERY_NUMFILES] = ;
static int acpi_battery_read(int fid, struct seq_file *seq)
#define DECLARE_FILE_FUNCTIONS(_name) \
static int acpi_battery_read_##_name(struct seq_file *seq, void *offset) \
\
static int acpi_battery_##_name##_open_fs(struct inode *inode, struct file *file) \
DECLARE_FILE_FUNCTIONS(info);
DECLARE_FILE_FUNCTIONS(state);
DECLARE_FILE_FUNCTIONS(alarm);
#undef DECLARE_FILE_FUNCTIONS
#define FILE_DESCRIPTION_RO(_name) \
#define FILE_DESCRIPTION_RW(_name) \
static struct battery_file  acpi_battery_file[] = ;
#undef FILE_DESCRIPTION_RO
#undef FILE_DESCRIPTION_RW
static int acpi_battery_add_fs(struct acpi_device *device)
static void acpi_battery_remove_fs(struct acpi_device *device)
static void acpi_battery_notify(struct acpi_device *device, u32 event)
static int battery_notify(struct notifier_block *nb,
unsigned long mode, void *_unused)
static int acpi_battery_add(struct acpi_device *device)
static int acpi_battery_remove(struct acpi_device *device, int type)
static int acpi_battery_resume(struct acpi_device *device)
static struct acpi_driver acpi_battery_driver = ;
static void __init acpi_battery_init_async(void *unused, async_cookie_t cookie)
static int __init acpi_battery_init(void)
static void __exit acpi_battery_exit(void)
module_init(acpi_battery_init);
module_exit(acpi_battery_exit);
