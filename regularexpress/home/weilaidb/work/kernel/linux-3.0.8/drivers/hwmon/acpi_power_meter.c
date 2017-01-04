#define ACPI_POWER_METER_NAME		"power_meter"
ACPI_MODULE_NAME(ACPI_POWER_METER_NAME);
#define ACPI_POWER_METER_DEVICE_NAME	"Power Meter"
#define ACPI_POWER_METER_CLASS		"pwr_meter_resource"
#define NUM_SENSORS			17
#define POWER_METER_CAN_MEASURE	(1 << 0)
#define POWER_METER_CAN_TRIP	(1 << 1)
#define POWER_METER_CAN_CAP	(1 << 2)
#define POWER_METER_CAN_NOTIFY	(1 << 3)
#define POWER_METER_IS_BATTERY	(1 << 8)
#define UNKNOWN_HYSTERESIS	0xFFFFFFFF
#define METER_NOTIFY_CONFIG	0x80
#define METER_NOTIFY_TRIP	0x81
#define METER_NOTIFY_CAP	0x82
#define METER_NOTIFY_CAPPING	0x83
#define METER_NOTIFY_INTERVAL	0x84
#define POWER_AVERAGE_NAME	"power1_average"
#define POWER_CAP_NAME		"power1_cap"
#define POWER_AVG_INTERVAL_NAME	"power1_average_interval"
#define POWER_ALARM_NAME	"power1_alarm"
static int cap_in_hardware;
static int force_cap_on;
static int can_cap_in_hardware(void)
static const struct acpi_device_id power_meter_ids[] = ;
MODULE_DEVICE_TABLE(acpi, power_meter_ids);
struct acpi_power_meter_capabilities ;
struct acpi_power_meter_resource ;
struct ro_sensor_template ;
struct rw_sensor_template ;
static int update_avg_interval(struct acpi_power_meter_resource *resource)
static ssize_t show_avg_interval(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_avg_interval(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
static int update_cap(struct acpi_power_meter_resource *resource)
static ssize_t show_cap(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_cap(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static int set_acpi_trip(struct acpi_power_meter_resource *resource)
static ssize_t set_trip(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static int update_meter(struct acpi_power_meter_resource *resource)
static ssize_t show_power(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_str(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_val(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_accuracy(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_name(struct device *dev,
struct device_attribute *devattr,
char *buf)
static struct ro_sensor_template meter_ro_attrs[] = ;
static struct rw_sensor_template meter_rw_attrs[] = ;
static struct ro_sensor_template misc_cap_attrs[] = ;
static struct ro_sensor_template ro_cap_attrs[] = ;
static struct rw_sensor_template rw_cap_attrs[] = ;
static struct rw_sensor_template trip_attrs[] = ;
static struct ro_sensor_template misc_attrs[] = ;
static void remove_domain_devices(struct acpi_power_meter_resource *resource)
static int read_domain_devices(struct acpi_power_meter_resource *resource)
static int register_ro_attrs(struct acpi_power_meter_resource *resource,
struct ro_sensor_template *ro)
static int register_rw_attrs(struct acpi_power_meter_resource *resource,
struct rw_sensor_template *rw)
static void remove_attrs(struct acpi_power_meter_resource *resource)
static int setup_attrs(struct acpi_power_meter_resource *resource)
static void free_capabilities(struct acpi_power_meter_resource *resource)
static int read_capabilities(struct acpi_power_meter_resource *resource)
static void acpi_power_meter_notify(struct acpi_device *device, u32 event)
static int acpi_power_meter_add(struct acpi_device *device)
static int acpi_power_meter_remove(struct acpi_device *device, int type)
static int acpi_power_meter_resume(struct acpi_device *device)
static struct acpi_driver acpi_power_meter_driver = ;
static int __init enable_cap_knobs(const struct dmi_system_id *d)
static struct dmi_system_id __initdata pm_dmi_table[] = ;
static int __init acpi_power_meter_init(void)
static void __exit acpi_power_meter_exit(void)
MODULE_AUTHOR("Darrick J. Wong <djwong@us.ibm.com>");
MODULE_DESCRIPTION("ACPI 4.0 power meter driver");
MODULE_LICENSE("GPL");
module_param(force_cap_on, bool, 0644);
MODULE_PARM_DESC(force_cap_on, "Enable power cap even it is unsafe to do so.");
module_init(acpi_power_meter_init);
module_exit(acpi_power_meter_exit);
