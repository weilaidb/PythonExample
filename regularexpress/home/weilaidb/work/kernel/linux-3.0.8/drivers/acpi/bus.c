#define _COMPONENT		ACPI_BUS_COMPONENT
ACPI_MODULE_NAME("bus");
struct acpi_device *acpi_root;
struct proc_dir_entry *acpi_root_dir;
EXPORT_SYMBOL(acpi_root_dir);
#define STRUCT_TO_INT(s)	(*((int*)&s))
static int set_copy_dsdt(const struct dmi_system_id *id)
static struct dmi_system_id dsdt_dmi_table[] __initdata = ;
static struct dmi_system_id dsdt_dmi_table[] __initdata = ;
int acpi_bus_get_device(acpi_handle handle, struct acpi_device **device)
EXPORT_SYMBOL(acpi_bus_get_device);
acpi_status acpi_bus_get_status_handle(acpi_handle handle,
unsigned long long *sta)
int acpi_bus_get_status(struct acpi_device *device)
EXPORT_SYMBOL(acpi_bus_get_status);
void acpi_bus_private_data_handler(acpi_handle handle,
void *context)
EXPORT_SYMBOL(acpi_bus_private_data_handler);
int acpi_bus_get_private_data(acpi_handle handle, void **data)
EXPORT_SYMBOL(acpi_bus_get_private_data);
static int __acpi_bus_get_power(struct acpi_device *device, int *state)
static int __acpi_bus_set_power(struct acpi_device *device, int state)
int acpi_bus_set_power(acpi_handle handle, int state)
EXPORT_SYMBOL(acpi_bus_set_power);
int acpi_bus_init_power(struct acpi_device *device)
int acpi_bus_update_power(acpi_handle handle, int *state_p)
EXPORT_SYMBOL_GPL(acpi_bus_update_power);
bool acpi_bus_power_manageable(acpi_handle handle)
EXPORT_SYMBOL(acpi_bus_power_manageable);
bool acpi_bus_can_wakeup(acpi_handle handle)
EXPORT_SYMBOL(acpi_bus_can_wakeup);
static void acpi_print_osc_error(acpi_handle handle,
struct acpi_osc_context *context, char *error)
static acpi_status acpi_str_to_uuid(char *str, u8 *uuid)
acpi_status acpi_run_osc(acpi_handle handle, struct acpi_osc_context *context)
EXPORT_SYMBOL(acpi_run_osc);
static u8 sb_uuid_str[] = "0811B06E-4A27-44F9-8D60-3CBBC22E7B48";
static void acpi_bus_osc_support(void)
static DEFINE_SPINLOCK(acpi_bus_event_lock);
LIST_HEAD(acpi_bus_event_list);
DECLARE_WAIT_QUEUE_HEAD(acpi_bus_event_queue);
extern int event_is_open;
int acpi_bus_generate_proc_event4(const char *device_class, const char *bus_id, u8 type, int data)
EXPORT_SYMBOL_GPL(acpi_bus_generate_proc_event4);
int acpi_bus_generate_proc_event(struct acpi_device *device, u8 type, int data)
EXPORT_SYMBOL(acpi_bus_generate_proc_event);
int acpi_bus_receive_event(struct acpi_bus_event *event)
static void acpi_bus_check_device(acpi_handle handle)
static void acpi_bus_check_scope(acpi_handle handle)
static BLOCKING_NOTIFIER_HEAD(acpi_bus_notify_list);
int register_acpi_bus_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(register_acpi_bus_notifier);
void unregister_acpi_bus_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(unregister_acpi_bus_notifier);
static void acpi_bus_notify(acpi_handle handle, u32 type, void *data)
static int __init acpi_bus_init_irq(void)
u8 acpi_gbl_permanent_mmap;
void __init acpi_early_init(void)
static int __init acpi_bus_init(void)
struct kobject *acpi_kobj;
static int __init acpi_init(void)
subsys_initcall(acpi_init);
