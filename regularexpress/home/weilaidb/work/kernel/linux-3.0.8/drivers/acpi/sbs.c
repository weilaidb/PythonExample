#define PREFIX "ACPI: "
#define ACPI_SBS_CLASS			"sbs"
#define ACPI_AC_CLASS			"ac_adapter"
#define ACPI_BATTERY_CLASS		"battery"
#define ACPI_SBS_DEVICE_NAME		"Smart Battery System"
#define ACPI_SBS_FILE_INFO		"info"
#define ACPI_SBS_FILE_STATE		"state"
#define ACPI_SBS_FILE_ALARM		"alarm"
#define ACPI_BATTERY_DIR_NAME		"BAT%i"
#define ACPI_AC_DIR_NAME		"AC0"
#define ACPI_SBS_NOTIFY_STATUS		0x80
#define ACPI_SBS_NOTIFY_INFO		0x81
MODULE_AUTHOR("Alexey Starikovskiy <astarikovskiy@suse.de>");
MODULE_DESCRIPTION("Smart Battery System ACPI interface driver");
MODULE_LICENSE("GPL");
static unsigned int cache_time = 1000;
module_param(cache_time, uint, 0644);
MODULE_PARM_DESC(cache_time, "cache time in milliseconds");
extern struct proc_dir_entry *acpi_lock_ac_dir(void);
extern struct proc_dir_entry *acpi_lock_battery_dir(void);
extern void acpi_unlock_ac_dir(struct proc_dir_entry *acpi_ac_dir);
extern void acpi_unlock_battery_dir(struct proc_dir_entry *acpi_battery_dir);
#define MAX_SBS_BAT			4
#define ACPI_SBS_BLOCK_MAX		32
static const struct acpi_device_id sbs_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, sbs_device_ids);
struct acpi_battery ;
#define to_acpi_battery(x) container_of(x, struct acpi_battery, bat);
struct acpi_sbs ;
#define to_acpi_sbs(x) container_of(x, struct acpi_sbs, charger)
static inline int battery_scale(int log)
static inline int acpi_battery_vscale(struct acpi_battery *battery)
static inline int acpi_battery_ipscale(struct acpi_battery *battery)
static inline int acpi_battery_mode(struct acpi_battery *battery)
static inline int acpi_battery_scale(struct acpi_battery *battery)
static int sbs_get_ac_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static int acpi_battery_technology(struct acpi_battery *battery)
static int acpi_sbs_battery_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property sbs_ac_props[] = ;
static enum power_supply_property sbs_charge_battery_props[] = ;
static enum power_supply_property sbs_energy_battery_props[] = ;
struct acpi_battery_reader ;
static struct acpi_battery_reader info_readers[] = ;
static struct acpi_battery_reader state_readers[] = ;
static int acpi_manager_get_info(struct acpi_sbs *sbs)
static int acpi_battery_get_info(struct acpi_battery *battery)
static int acpi_battery_get_state(struct acpi_battery *battery)
static int acpi_battery_get_alarm(struct acpi_battery *battery)
static int acpi_battery_set_alarm(struct acpi_battery *battery)
static int acpi_ac_get_present(struct acpi_sbs *sbs)
static ssize_t acpi_battery_alarm_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t acpi_battery_alarm_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute alarm_attr = ;
static int
acpi_sbs_add_fs(struct proc_dir_entry **dir,
struct proc_dir_entry *parent_dir,
char *dir_name,
const struct file_operations *info_fops,
const struct file_operations *state_fops,
const struct file_operations *alarm_fops, void *data)
static void
acpi_sbs_remove_fs(struct proc_dir_entry **dir,
struct proc_dir_entry *parent_dir)
static struct proc_dir_entry *acpi_battery_dir = NULL;
static inline char *acpi_battery_units(struct acpi_battery *battery)
static int acpi_battery_read_info(struct seq_file *seq, void *offset)
static int acpi_battery_info_open_fs(struct inode *inode, struct file *file)
static int acpi_battery_read_state(struct seq_file *seq, void *offset)
static int acpi_battery_state_open_fs(struct inode *inode, struct file *file)
static int acpi_battery_read_alarm(struct seq_file *seq, void *offset)
static ssize_t
acpi_battery_write_alarm(struct file *file, const char __user * buffer,
size_t count, loff_t * ppos)
static int acpi_battery_alarm_open_fs(struct inode *inode, struct file *file)
static const struct file_operations acpi_battery_info_fops = ;
static const struct file_operations acpi_battery_state_fops = ;
static const struct file_operations acpi_battery_alarm_fops = ;
static struct proc_dir_entry *acpi_ac_dir = NULL;
static int acpi_ac_read_state(struct seq_file *seq, void *offset)
static int acpi_ac_state_open_fs(struct inode *inode, struct file *file)
static const struct file_operations acpi_ac_state_fops = ;
static int acpi_battery_read(struct acpi_battery *battery)
static int acpi_battery_add(struct acpi_sbs *sbs, int id)
static void acpi_battery_remove(struct acpi_sbs *sbs, int id)
static int acpi_charger_add(struct acpi_sbs *sbs)
static void acpi_charger_remove(struct acpi_sbs *sbs)
static void acpi_sbs_callback(void *context)
static int acpi_sbs_remove(struct acpi_device *device, int type);
static int acpi_sbs_add(struct acpi_device *device)
static int acpi_sbs_remove(struct acpi_device *device, int type)
static void acpi_sbs_rmdirs(void)
static int acpi_sbs_resume(struct acpi_device *device)
static struct acpi_driver acpi_sbs_driver = ;
static int __init acpi_sbs_init(void)
static void __exit acpi_sbs_exit(void)
module_init(acpi_sbs_init);
module_exit(acpi_sbs_exit);
