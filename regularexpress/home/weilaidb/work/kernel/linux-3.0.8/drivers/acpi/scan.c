#define _COMPONENT		ACPI_BUS_COMPONENT
ACPI_MODULE_NAME("scan");
#define STRUCT_TO_INT(s)	(*((int*)&s))
extern struct acpi_device *acpi_root;
#define ACPI_BUS_CLASS			"system_bus"
#define ACPI_BUS_HID			"LNXSYBUS"
#define ACPI_BUS_DEVICE_NAME		"System Bus"
#define ACPI_IS_ROOT_DEVICE(device)    (!(device)->parent)
static const char *dummy_hid = "device";
static LIST_HEAD(acpi_device_list);
static LIST_HEAD(acpi_bus_id_list);
DEFINE_MUTEX(acpi_device_lock);
LIST_HEAD(acpi_wakeup_device_list);
struct acpi_device_bus_id;
static int create_modalias(struct acpi_device *acpi_dev, char *modalias,
int size)
static ssize_t
acpi_device_modalias_show(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(modalias, 0444, acpi_device_modalias_show, NULL);
static void acpi_bus_hot_remove_device(void *context)
static ssize_t
acpi_eject_store(struct device *d, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(eject, 0200, NULL, acpi_eject_store);
static ssize_t
acpi_device_hid_show(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(hid, 0444, acpi_device_hid_show, NULL);
static ssize_t
acpi_device_path_show(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(path, 0444, acpi_device_path_show, NULL);
static int acpi_device_setup_files(struct acpi_device *dev)
static void acpi_device_remove_files(struct acpi_device *dev)
int acpi_match_device_ids(struct acpi_device *device,
const struct acpi_device_id *ids)
EXPORT_SYMBOL(acpi_match_device_ids);
static void acpi_free_ids(struct acpi_device *device)
static void acpi_device_release(struct device *dev)
static int acpi_device_suspend(struct device *dev, pm_message_t state)
static int acpi_device_resume(struct device *dev)
static int acpi_bus_match(struct device *dev, struct device_driver *drv)
static int acpi_device_uevent(struct device *dev, struct kobj_uevent_env *env)
static void acpi_device_notify(acpi_handle handle, u32 event, void *data)
static acpi_status acpi_device_notify_fixed(void *data)
static int acpi_device_install_notify_handler(struct acpi_device *device)
static void acpi_device_remove_notify_handler(struct acpi_device *device)
static int acpi_bus_driver_init(struct acpi_device *, struct acpi_driver *);
static int acpi_start_single_object(struct acpi_device *);
static int acpi_device_probe(struct device * dev)
static int acpi_device_remove(struct device * dev)
struct bus_type acpi_bus_type = ;
static int acpi_device_register(struct acpi_device *device)
static void acpi_device_unregister(struct acpi_device *device, int type)
static int
acpi_bus_driver_init(struct acpi_device *device, struct acpi_driver *driver)
static int acpi_start_single_object(struct acpi_device *device)
int acpi_bus_register_driver(struct acpi_driver *driver)
EXPORT_SYMBOL(acpi_bus_register_driver);
void acpi_bus_unregister_driver(struct acpi_driver *driver)
EXPORT_SYMBOL(acpi_bus_unregister_driver);
static struct acpi_device *acpi_bus_get_parent(acpi_handle handle)
acpi_status
acpi_bus_get_ejd(acpi_handle handle, acpi_handle *ejd)
EXPORT_SYMBOL_GPL(acpi_bus_get_ejd);
void acpi_bus_data_handler(acpi_handle handle, void *context)
static int acpi_bus_get_perf_flags(struct acpi_device *device)
static acpi_status
acpi_bus_extract_wakeup_device_power_package(acpi_handle handle,
struct acpi_device_wakeup *wakeup)
static void acpi_bus_set_run_wake_flags(struct acpi_device *device)
static void acpi_bus_get_wakeup_device_flags(struct acpi_device *device)
static void acpi_bus_add_power_resource(acpi_handle handle);
static int acpi_bus_get_power_flags(struct acpi_device *device)
static int acpi_bus_get_flags(struct acpi_device *device)
static void acpi_device_get_busid(struct acpi_device *device)
static int acpi_bay_match(struct acpi_device *device)
static int acpi_dock_match(struct acpi_device *device)
const char *acpi_device_hid(struct acpi_device *device)
EXPORT_SYMBOL(acpi_device_hid);
static void acpi_add_id(struct acpi_device *device, const char *dev_id)
static int acpi_ibm_smbus_match(struct acpi_device *device)
static void acpi_device_set_id(struct acpi_device *device)
static int acpi_device_set_context(struct acpi_device *device)
static int acpi_bus_remove(struct acpi_device *dev, int rmdevice)
static int acpi_add_single_object(struct acpi_device **child,
acpi_handle handle, int type,
unsigned long long sta,
struct acpi_bus_ops *ops)
#define ACPI_STA_DEFAULT (ACPI_STA_DEVICE_PRESENT | ACPI_STA_DEVICE_ENABLED | \
ACPI_STA_DEVICE_UI      | ACPI_STA_DEVICE_FUNCTIONING)
static void acpi_bus_add_power_resource(acpi_handle handle)
static int acpi_bus_type_and_status(acpi_handle handle, int *type,
unsigned long long *sta)
static acpi_status acpi_bus_check_add(acpi_handle handle, u32 lvl,
void *context, void **return_value)
static int acpi_bus_scan(acpi_handle handle, struct acpi_bus_ops *ops,
struct acpi_device **child)
int
acpi_bus_add(struct acpi_device **child,
struct acpi_device *parent, acpi_handle handle, int type)
EXPORT_SYMBOL(acpi_bus_add);
int acpi_bus_start(struct acpi_device *device)
EXPORT_SYMBOL(acpi_bus_start);
int acpi_bus_trim(struct acpi_device *start, int rmdevice)
EXPORT_SYMBOL_GPL(acpi_bus_trim);
static int acpi_bus_scan_fixed(void)
int __init acpi_scan_init(void)
