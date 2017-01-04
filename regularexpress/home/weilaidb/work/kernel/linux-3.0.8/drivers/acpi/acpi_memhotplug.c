#define ACPI_MEMORY_DEVICE_CLASS		"memory"
#define ACPI_MEMORY_DEVICE_HID			"PNP0C80"
#define ACPI_MEMORY_DEVICE_NAME			"Hotplug Mem Device"
#define _COMPONENT		ACPI_MEMORY_DEVICE_COMPONENT
#undef PREFIX
#define 	PREFIX		"ACPI:memory_hp:"
ACPI_MODULE_NAME("acpi_memhotplug");
MODULE_AUTHOR("Naveen B S <naveen.b.s@intel.com>");
MODULE_DESCRIPTION("Hotplug Mem Driver");
MODULE_LICENSE("GPL");
#define MEMORY_INVALID_STATE	0
#define MEMORY_POWER_ON_STATE	1
#define MEMORY_POWER_OFF_STATE	2
static int acpi_memory_device_add(struct acpi_device *device);
static int acpi_memory_device_remove(struct acpi_device *device, int type);
static const struct acpi_device_id memory_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, memory_device_ids);
static struct acpi_driver acpi_memory_device_driver = ;
struct acpi_memory_info ;
struct acpi_memory_device ;
static int acpi_hotmem_initialized;
static acpi_status
acpi_memory_get_resource(struct acpi_resource *resource, void *context)
static int
acpi_memory_get_device_resources(struct acpi_memory_device *mem_device)
static int
acpi_memory_get_device(acpi_handle handle,
struct acpi_memory_device **mem_device)
static int acpi_memory_check_device(struct acpi_memory_device *mem_device)
static int acpi_memory_enable_device(struct acpi_memory_device *mem_device)
static int acpi_memory_powerdown_device(struct acpi_memory_device *mem_device)
static int acpi_memory_disable_device(struct acpi_memory_device *mem_device)
static void acpi_memory_device_notify(acpi_handle handle, u32 event, void *data)
static int acpi_memory_device_add(struct acpi_device *device)
static int acpi_memory_device_remove(struct acpi_device *device, int type)
static acpi_status is_memory_device(acpi_handle handle)
static acpi_status
acpi_memory_register_notify_handler(acpi_handle handle,
u32 level, void *ctxt, void **retv)
static acpi_status
acpi_memory_deregister_notify_handler(acpi_handle handle,
u32 level, void *ctxt, void **retv)
static int __init acpi_memory_device_init(void)
static void __exit acpi_memory_device_exit(void)
module_init(acpi_memory_device_init);
module_exit(acpi_memory_device_exit);
