#define PREFIX "ACPI: "
#define ACPI_DOCK_DRIVER_DESCRIPTION "ACPI Dock Station Driver"
ACPI_MODULE_NAME("dock");
MODULE_AUTHOR("Kristen Carlson Accardi");
MODULE_DESCRIPTION(ACPI_DOCK_DRIVER_DESCRIPTION);
MODULE_LICENSE("GPL");
static int immediate_undock = 1;
module_param(immediate_undock, bool, 0644);
MODULE_PARM_DESC(immediate_undock, "1 (default) will cause the driver to "
"undock immediately when the undock button is pressed, 0 will cause"
" the driver to wait for userspace to write the undock sysfs file "
" before undocking");
static struct atomic_notifier_head dock_notifier_list;
static const struct acpi_device_id dock_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, dock_device_ids);
struct dock_station ;
static LIST_HEAD(dock_stations);
static int dock_station_count;
struct dock_dependent_device ;
#define DOCK_DOCKING	0x00000001
#define DOCK_UNDOCKING  0x00000002
#define DOCK_IS_DOCK	0x00000010
#define DOCK_IS_ATA	0x00000020
#define DOCK_IS_BAT	0x00000040
#define DOCK_EVENT	3
#define UNDOCK_EVENT	2
static int
add_dock_dependent_device(struct dock_station *ds, acpi_handle handle)
static void
dock_add_hotplug_device(struct dock_station *ds,
struct dock_dependent_device *dd)
static void
dock_del_hotplug_device(struct dock_station *ds,
struct dock_dependent_device *dd)
static struct dock_dependent_device *
find_dock_dependent_device(struct dock_station *ds, acpi_handle handle)
static int is_dock(acpi_handle handle)
static int is_ejectable(acpi_handle handle)
static int is_ata(acpi_handle handle)
static int is_battery(acpi_handle handle)
static int is_ejectable_bay(acpi_handle handle)
int is_dock_device(acpi_handle handle)
EXPORT_SYMBOL_GPL(is_dock_device);
static int dock_present(struct dock_station *ds)
static struct acpi_device * dock_create_acpi_device(acpi_handle handle)
static void dock_remove_acpi_device(acpi_handle handle)
static void hotplug_dock_devices(struct dock_station *ds, u32 event)
static void dock_event(struct dock_station *ds, u32 event, int num)
static void eject_dock(struct dock_station *ds)
static void handle_dock(struct dock_station *ds, int dock)
static inline void dock(struct dock_station *ds)
static inline void undock(struct dock_station *ds)
static inline void begin_dock(struct dock_station *ds)
static inline void complete_dock(struct dock_station *ds)
static inline void begin_undock(struct dock_station *ds)
static inline void complete_undock(struct dock_station *ds)
static void dock_lock(struct dock_station *ds, int lock)
static int dock_in_progress(struct dock_station *ds)
int register_dock_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(register_dock_notifier);
void unregister_dock_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(unregister_dock_notifier);
int
register_hotplug_dock_device(acpi_handle handle, struct acpi_dock_ops *ops,
void *context)
EXPORT_SYMBOL_GPL(register_hotplug_dock_device);
void unregister_hotplug_dock_device(acpi_handle handle)
EXPORT_SYMBOL_GPL(unregister_hotplug_dock_device);
static int handle_eject_request(struct dock_station *ds, u32 event)
static void dock_notify(acpi_handle handle, u32 event, void *data)
struct dock_data ;
static void acpi_dock_deferred_cb(void *context)
static int acpi_dock_notifier_call(struct notifier_block *this,
unsigned long event, void *data)
static struct notifier_block dock_acpi_notifier = ;
static acpi_status
find_dock_devices(acpi_handle handle, u32 lvl, void *context, void **rv)
static ssize_t show_docked(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(docked, S_IRUGO, show_docked, NULL);
static ssize_t show_flags(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(flags, S_IRUGO, show_flags, NULL);
static ssize_t write_undock(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(undock, S_IWUSR, NULL, write_undock);
static ssize_t show_dock_uid(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(uid, S_IRUGO, show_dock_uid, NULL);
static ssize_t show_dock_type(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(type, S_IRUGO, show_dock_type, NULL);
static struct attribute *dock_attributes[] = ;
static struct attribute_group dock_attribute_group = ;
static int __init dock_add(acpi_handle handle)
static int dock_remove(struct dock_station *ds)
static __init acpi_status
find_dock(acpi_handle handle, u32 lvl, void *context, void **rv)
static __init acpi_status
find_bay(acpi_handle handle, u32 lvl, void *context, void **rv)
static int __init dock_init(void)
static void __exit dock_exit(void)
subsys_initcall(dock_init);
module_exit(dock_exit);
