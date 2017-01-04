#define PREFIX "ACPI: "
#define ACPI_CONTAINER_DEVICE_NAME	"ACPI container device"
#define ACPI_CONTAINER_CLASS		"container"
#define INSTALL_NOTIFY_HANDLER		1
#define UNINSTALL_NOTIFY_HANDLER	2
#define _COMPONENT			ACPI_CONTAINER_COMPONENT
ACPI_MODULE_NAME("container");
MODULE_AUTHOR("Anil S Keshavamurthy");
MODULE_DESCRIPTION("ACPI container driver");
MODULE_LICENSE("GPL");
static int acpi_container_add(struct acpi_device *device);
static int acpi_container_remove(struct acpi_device *device, int type);
static const struct acpi_device_id container_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, container_device_ids);
static struct acpi_driver acpi_container_driver = ;
static int is_device_present(acpi_handle handle)
static int acpi_container_add(struct acpi_device *device)
static int acpi_container_remove(struct acpi_device *device, int type)
static int container_device_add(struct acpi_device **device, acpi_handle handle)
static void container_notify_cb(acpi_handle handle, u32 type, void *context)
static acpi_status
container_walk_namespace_cb(acpi_handle handle,
u32 lvl, void *context, void **rv)
static int __init acpi_container_init(void)
static void __exit acpi_container_exit(void)
module_init(acpi_container_init);
module_exit(acpi_container_exit);
