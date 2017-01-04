#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Thomas Sujith");
MODULE_AUTHOR("Zhang Rui");
MODULE_DESCRIPTION("Intel Menlow platform specific driver");
MODULE_LICENSE("GPL");
#define MEMORY_GET_BANDWIDTH "GTHS"
#define MEMORY_SET_BANDWIDTH "STHS"
#define MEMORY_ARG_CUR_BANDWIDTH 1
#define MEMORY_ARG_MAX_BANDWIDTH 0
static void intel_menlow_unregister_sensor(void);
static int memory_get_max_bandwidth(struct thermal_cooling_device *cdev,
unsigned long *max_state)
static int memory_get_cur_bandwidth(struct thermal_cooling_device *cdev,
unsigned long *value)
static int memory_set_cur_bandwidth(struct thermal_cooling_device *cdev,
unsigned long state)
static struct thermal_cooling_device_ops memory_cooling_ops = ;
static int intel_menlow_memory_add(struct acpi_device *device)
static int intel_menlow_memory_remove(struct acpi_device *device, int type)
static const struct acpi_device_id intel_menlow_memory_ids[] = ;
static struct acpi_driver intel_menlow_memory_driver = ;
#define THERMAL_AUX0 0
#define THERMAL_AUX1 1
#define GET_AUX0 "GAX0"
#define GET_AUX1 "GAX1"
#define SET_AUX0 "SAX0"
#define SET_AUX1 "SAX1"
struct intel_menlow_attribute ;
static LIST_HEAD(intel_menlow_attr_list);
static DEFINE_MUTEX(intel_menlow_attr_lock);
static int sensor_get_auxtrip(acpi_handle handle, int index,
unsigned long long *value)
static int sensor_set_auxtrip(acpi_handle handle, int index, int value)
#define to_intel_menlow_attr(_attr)	\
container_of(_attr, struct intel_menlow_attribute, attr)
static ssize_t aux0_show(struct device *dev,
struct device_attribute *dev_attr, char *buf)
static ssize_t aux1_show(struct device *dev,
struct device_attribute *dev_attr, char *buf)
static ssize_t aux0_store(struct device *dev,
struct device_attribute *dev_attr,
const char *buf, size_t count)
static ssize_t aux1_store(struct device *dev,
struct device_attribute *dev_attr,
const char *buf, size_t count)
#define BIOS_ENABLED "\\_TZ.GSTS"
static ssize_t bios_enabled_show(struct device *dev,
struct device_attribute *attr, char *buf)
static int intel_menlow_add_one_attribute(char *name, int mode, void *show,
void *store, struct device *dev,
acpi_handle handle)
static acpi_status intel_menlow_register_sensor(acpi_handle handle, u32 lvl,
void *context, void **rv)
static void intel_menlow_unregister_sensor(void)
static int __init intel_menlow_module_init(void)
static void __exit intel_menlow_module_exit(void)
module_init(intel_menlow_module_init);
module_exit(intel_menlow_module_exit);
