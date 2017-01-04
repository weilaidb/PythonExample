#define PREFIX "ACPI: "
#define ACPI_FAN_CLASS			"fan"
#define ACPI_FAN_FILE_STATE		"state"
#define _COMPONENT		ACPI_FAN_COMPONENT
ACPI_MODULE_NAME("fan");
MODULE_AUTHOR("Paul Diefenbaugh");
MODULE_DESCRIPTION("ACPI Fan Driver");
MODULE_LICENSE("GPL");
static int acpi_fan_add(struct acpi_device *device);
static int acpi_fan_remove(struct acpi_device *device, int type);
static int acpi_fan_suspend(struct acpi_device *device, pm_message_t state);
static int acpi_fan_resume(struct acpi_device *device);
static const struct acpi_device_id fan_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, fan_device_ids);
static struct acpi_driver acpi_fan_driver = ;
static int fan_get_max_state(struct thermal_cooling_device *cdev, unsigned long
*state)
static int fan_get_cur_state(struct thermal_cooling_device *cdev, unsigned long
*state)
static int
fan_set_cur_state(struct thermal_cooling_device *cdev, unsigned long state)
static struct thermal_cooling_device_ops fan_cooling_ops = ;
static int acpi_fan_add(struct acpi_device *device)
static int acpi_fan_remove(struct acpi_device *device, int type)
static int acpi_fan_suspend(struct acpi_device *device, pm_message_t state)
static int acpi_fan_resume(struct acpi_device *device)
static int __init acpi_fan_init(void)
static void __exit acpi_fan_exit(void)
module_init(acpi_fan_init);
module_exit(acpi_fan_exit);
