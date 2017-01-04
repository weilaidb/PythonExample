#define PREFIX "ACPI: "
ACPI_MODULE_NAME("cm_sbs");
#define ACPI_AC_CLASS		"ac_adapter"
#define ACPI_BATTERY_CLASS	"battery"
#define _COMPONENT		ACPI_SBS_COMPONENT
static struct proc_dir_entry *acpi_ac_dir;
static struct proc_dir_entry *acpi_battery_dir;
static DEFINE_MUTEX(cm_sbs_mutex);
static int lock_ac_dir_cnt;
static int lock_battery_dir_cnt;
struct proc_dir_entry *acpi_lock_ac_dir(void)
EXPORT_SYMBOL(acpi_lock_ac_dir);
void acpi_unlock_ac_dir(struct proc_dir_entry *acpi_ac_dir_param)
EXPORT_SYMBOL(acpi_unlock_ac_dir);
struct proc_dir_entry *acpi_lock_battery_dir(void)
EXPORT_SYMBOL(acpi_lock_battery_dir);
void acpi_unlock_battery_dir(struct proc_dir_entry *acpi_battery_dir_param)
EXPORT_SYMBOL(acpi_unlock_battery_dir);
