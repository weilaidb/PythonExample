#define ACPI_GLUE_DEBUG	0
#if ACPI_GLUE_DEBUG
#define DBG(x...) printk(PREFIX x)
#define DBG(x...) do  while(0)
static LIST_HEAD(bus_type_list);
static DECLARE_RWSEM(bus_type_sem);
int register_acpi_bus_type(struct acpi_bus_type *type)
int unregister_acpi_bus_type(struct acpi_bus_type *type)
static struct acpi_bus_type *acpi_get_bus_type(struct bus_type *type)
static int acpi_find_bridge_device(struct device *dev, acpi_handle * handle)
struct acpi_find_child ;
static acpi_status
do_acpi_find_child(acpi_handle handle, u32 lvl, void *context, void **rv)
acpi_handle acpi_get_child(acpi_handle parent, u64 address)
EXPORT_SYMBOL(acpi_get_child);
static void acpi_glue_data_handler(acpi_handle handle,
void *context)
struct device *acpi_get_physical_device(acpi_handle handle)
EXPORT_SYMBOL(acpi_get_physical_device);
static int acpi_bind_one(struct device *dev, acpi_handle handle)
static int acpi_unbind_one(struct device *dev)
static int acpi_platform_notify(struct device *dev)
static int acpi_platform_notify_remove(struct device *dev)
int __init init_acpi_device_notify(void)
