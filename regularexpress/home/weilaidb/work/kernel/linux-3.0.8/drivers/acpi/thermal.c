#define PREFIX "ACPI: "
#define ACPI_THERMAL_CLASS		"thermal_zone"
#define ACPI_THERMAL_DEVICE_NAME	"Thermal Zone"
#define ACPI_THERMAL_FILE_STATE		"state"
#define ACPI_THERMAL_FILE_TEMPERATURE	"temperature"
#define ACPI_THERMAL_FILE_TRIP_POINTS	"trip_points"
#define ACPI_THERMAL_FILE_COOLING_MODE	"cooling_mode"
#define ACPI_THERMAL_FILE_POLLING_FREQ	"polling_frequency"
#define ACPI_THERMAL_NOTIFY_TEMPERATURE	0x80
#define ACPI_THERMAL_NOTIFY_THRESHOLDS	0x81
#define ACPI_THERMAL_NOTIFY_DEVICES	0x82
#define ACPI_THERMAL_NOTIFY_CRITICAL	0xF0
#define ACPI_THERMAL_NOTIFY_HOT		0xF1
#define ACPI_THERMAL_MODE_ACTIVE	0x00
#define ACPI_THERMAL_MAX_ACTIVE	10
#define ACPI_THERMAL_MAX_LIMIT_STR_LEN 65
#define _COMPONENT		ACPI_THERMAL_COMPONENT
ACPI_MODULE_NAME("thermal");
MODULE_AUTHOR("Paul Diefenbaugh");
MODULE_DESCRIPTION("ACPI Thermal Zone Driver");
MODULE_LICENSE("GPL");
static int act;
module_param(act, int, 0644);
MODULE_PARM_DESC(act, "Disable or override all lowest active trip points.");
static int crt;
module_param(crt, int, 0644);
MODULE_PARM_DESC(crt, "Disable or lower all critical trip points.");
static int tzp;
module_param(tzp, int, 0444);
MODULE_PARM_DESC(tzp, "Thermal zone polling frequency, in 1/10 seconds.");
static int nocrt;
module_param(nocrt, int, 0);
MODULE_PARM_DESC(nocrt, "Set to take no action upon ACPI thermal zone critical trips points.");
static int off;
module_param(off, int, 0);
MODULE_PARM_DESC(off, "Set to disable ACPI thermal support.");
static int psv;
module_param(psv, int, 0644);
MODULE_PARM_DESC(psv, "Disable or override all passive trip points.");
static int acpi_thermal_add(struct acpi_device *device);
static int acpi_thermal_remove(struct acpi_device *device, int type);
static int acpi_thermal_resume(struct acpi_device *device);
static void acpi_thermal_notify(struct acpi_device *device, u32 event);
static const struct acpi_device_id  thermal_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, thermal_device_ids);
static struct acpi_driver acpi_thermal_driver = ;
struct acpi_thermal_state ;
struct acpi_thermal_state_flags ;
struct acpi_thermal_critical ;
struct acpi_thermal_hot ;
struct acpi_thermal_passive ;
struct acpi_thermal_active ;
struct acpi_thermal_trips ;
struct acpi_thermal_flags ;
struct acpi_thermal ;
static int acpi_thermal_get_temperature(struct acpi_thermal *tz)
static int acpi_thermal_get_polling_frequency(struct acpi_thermal *tz)
static int acpi_thermal_set_cooling_mode(struct acpi_thermal *tz, int mode)
#define ACPI_TRIPS_CRITICAL	0x01
#define ACPI_TRIPS_HOT		0x02
#define ACPI_TRIPS_PASSIVE	0x04
#define ACPI_TRIPS_ACTIVE	0x08
#define ACPI_TRIPS_DEVICES	0x10
#define ACPI_TRIPS_REFRESH_THRESHOLDS	(ACPI_TRIPS_PASSIVE | ACPI_TRIPS_ACTIVE)
#define ACPI_TRIPS_REFRESH_DEVICES	ACPI_TRIPS_DEVICES
#define ACPI_TRIPS_INIT      (ACPI_TRIPS_CRITICAL | ACPI_TRIPS_HOT |	\
ACPI_TRIPS_PASSIVE | ACPI_TRIPS_ACTIVE |	\
ACPI_TRIPS_DEVICES)
#define ACPI_THERMAL_TRIPS_EXCEPTION(flags, str)	\
do  while (0)
static int acpi_thermal_trips_update(struct acpi_thermal *tz, int flag)
static int acpi_thermal_get_trip_points(struct acpi_thermal *tz)
static void acpi_thermal_check(void *data)
#define KELVIN_TO_MILLICELSIUS(t, off) (((t) - (off)) * 100)
static int thermal_get_temp(struct thermal_zone_device *thermal,
unsigned long *temp)
static const char enabled[] = "kernel";
static const char disabled[] = "user";
static int thermal_get_mode(struct thermal_zone_device *thermal,
enum thermal_device_mode *mode)
static int thermal_set_mode(struct thermal_zone_device *thermal,
enum thermal_device_mode mode)
static int thermal_get_trip_type(struct thermal_zone_device *thermal,
int trip, enum thermal_trip_type *type)
static int thermal_get_trip_temp(struct thermal_zone_device *thermal,
int trip, unsigned long *temp)
static int thermal_get_crit_temp(struct thermal_zone_device *thermal,
unsigned long *temperature)
static int thermal_notify(struct thermal_zone_device *thermal, int trip,
enum thermal_trip_type trip_type)
typedef int (*cb)(struct thermal_zone_device *, int,
struct thermal_cooling_device *);
static int acpi_thermal_cooling_device_cb(struct thermal_zone_device *thermal,
struct thermal_cooling_device *cdev,
cb action)
static int
acpi_thermal_bind_cooling_device(struct thermal_zone_device *thermal,
struct thermal_cooling_device *cdev)
static int
acpi_thermal_unbind_cooling_device(struct thermal_zone_device *thermal,
struct thermal_cooling_device *cdev)
static struct thermal_zone_device_ops acpi_thermal_zone_ops = ;
static int acpi_thermal_register_thermal_zone(struct acpi_thermal *tz)
static void acpi_thermal_unregister_thermal_zone(struct acpi_thermal *tz)
static void acpi_thermal_notify(struct acpi_device *device, u32 event)
static int acpi_thermal_get_info(struct acpi_thermal *tz)
static void acpi_thermal_guess_offset(struct acpi_thermal *tz)
static int acpi_thermal_add(struct acpi_device *device)
static int acpi_thermal_remove(struct acpi_device *device, int type)
static int acpi_thermal_resume(struct acpi_device *device)
static int thermal_act(const struct dmi_system_id *d)
static int thermal_nocrt(const struct dmi_system_id *d)
static int thermal_tzp(const struct dmi_system_id *d)
static int thermal_psv(const struct dmi_system_id *d)
static struct dmi_system_id thermal_dmi_table[] __initdata = ;
static int __init acpi_thermal_init(void)
static void __exit acpi_thermal_exit(void)
module_init(acpi_thermal_init);
module_exit(acpi_thermal_exit);
