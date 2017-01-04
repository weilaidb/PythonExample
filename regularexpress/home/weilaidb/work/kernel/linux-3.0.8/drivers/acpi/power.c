#define PREFIX "ACPI: "
#define _COMPONENT			ACPI_POWER_COMPONENT
ACPI_MODULE_NAME("power");
#define ACPI_POWER_CLASS		"power_resource"
#define ACPI_POWER_DEVICE_NAME		"Power Resource"
#define ACPI_POWER_FILE_INFO		"info"
#define ACPI_POWER_FILE_STATUS		"state"
#define ACPI_POWER_RESOURCE_STATE_OFF	0x00
#define ACPI_POWER_RESOURCE_STATE_ON	0x01
#define ACPI_POWER_RESOURCE_STATE_UNKNOWN 0xFF
static int acpi_power_add(struct acpi_device *device);
static int acpi_power_remove(struct acpi_device *device, int type);
static int acpi_power_resume(struct acpi_device *device);
static const struct acpi_device_id power_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, power_device_ids);
static struct acpi_driver acpi_power_driver = ;
struct acpi_power_resource ;
static struct list_head acpi_power_resource_list;
static int
acpi_power_get_context(acpi_handle handle,
struct acpi_power_resource **resource)
static int acpi_power_get_state(acpi_handle handle, int *state)
static int acpi_power_get_list_state(struct acpi_handle_list *list, int *state)
static int __acpi_power_on(struct acpi_power_resource *resource)
static int acpi_power_on(acpi_handle handle)
static int acpi_power_off(acpi_handle handle)
static void __acpi_power_off_list(struct acpi_handle_list *list, int num_res)
static void acpi_power_off_list(struct acpi_handle_list *list)
static int acpi_power_on_list(struct acpi_handle_list *list)
int acpi_device_sleep_wake(struct acpi_device *dev,
int enable, int sleep_state, int dev_state)
int acpi_enable_wakeup_device_power(struct acpi_device *dev, int sleep_state)
int acpi_disable_wakeup_device_power(struct acpi_device *dev)
int acpi_power_get_inferred_state(struct acpi_device *device, int *state)
int acpi_power_on_resources(struct acpi_device *device, int state)
int acpi_power_transition(struct acpi_device *device, int state)
static int acpi_power_add(struct acpi_device *device)
static int acpi_power_remove(struct acpi_device *device, int type)
static int acpi_power_resume(struct acpi_device *device)
int __init acpi_power_init(void)
