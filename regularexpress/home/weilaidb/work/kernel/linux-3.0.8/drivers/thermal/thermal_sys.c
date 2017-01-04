MODULE_AUTHOR("Zhang Rui");
MODULE_DESCRIPTION("Generic thermal management sysfs support");
MODULE_LICENSE("GPL");
#define PREFIX "Thermal: "
struct thermal_cooling_device_instance ;
static DEFINE_IDR(thermal_tz_idr);
static DEFINE_IDR(thermal_cdev_idr);
static DEFINE_MUTEX(thermal_idr_lock);
static LIST_HEAD(thermal_tz_list);
static LIST_HEAD(thermal_cdev_list);
static DEFINE_MUTEX(thermal_list_lock);
static unsigned int thermal_event_seqnum;
static int get_idr(struct idr *idr, struct mutex *lock, int *id)
static void release_idr(struct idr *idr, struct mutex *lock, int id)
#define to_thermal_zone(_dev) \
container_of(_dev, struct thermal_zone_device, device)
static ssize_t
type_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
temp_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
mode_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
mode_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
trip_point_type_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
trip_point_temp_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
passive_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
passive_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(type, 0444, type_show, NULL);
static DEVICE_ATTR(temp, 0444, temp_show, NULL);
static DEVICE_ATTR(mode, 0644, mode_show, mode_store);
static DEVICE_ATTR(passive, S_IRUGO | S_IWUSR, passive_show, \
passive_store);
static struct device_attribute trip_point_attrs[] = ;
#define TRIP_POINT_ATTR_ADD(_dev, _index, result)     \
do  while (0)
#define TRIP_POINT_ATTR_REMOVE(_dev, _index)	\
do  while (0)
#define to_cooling_device(_dev)	\
container_of(_dev, struct thermal_cooling_device, device)
static ssize_t
thermal_cooling_device_type_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
thermal_cooling_device_max_state_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
thermal_cooling_device_cur_state_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
thermal_cooling_device_cur_state_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute dev_attr_cdev_type =
__ATTR(type, 0444, thermal_cooling_device_type_show, NULL);
static DEVICE_ATTR(max_state, 0444,
thermal_cooling_device_max_state_show, NULL);
static DEVICE_ATTR(cur_state, 0644,
thermal_cooling_device_cur_state_show,
thermal_cooling_device_cur_state_store);
static ssize_t
thermal_cooling_device_trip_point_show(struct device *dev,
struct device_attribute *attr, char *buf)
#if defined(CONFIG_THERMAL_HWMON)
static LIST_HEAD(thermal_hwmon_list);
static ssize_t
name_show(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(name, 0444, name_show, NULL);
static ssize_t
temp_input_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
temp_crit_show(struct device *dev, struct device_attribute *attr,
char *buf)
static int
thermal_add_hwmon_sysfs(struct thermal_zone_device *tz)
static void
thermal_remove_hwmon_sysfs(struct thermal_zone_device *tz)
static int
thermal_add_hwmon_sysfs(struct thermal_zone_device *tz)
static void
thermal_remove_hwmon_sysfs(struct thermal_zone_device *tz)
static void thermal_zone_device_set_polling(struct thermal_zone_device *tz,
int delay)
static void thermal_zone_device_passive(struct thermal_zone_device *tz,
int temp, int trip_temp, int trip)
static void thermal_zone_device_check(struct work_struct *work)
int thermal_zone_bind_cooling_device(struct thermal_zone_device *tz,
int trip,
struct thermal_cooling_device *cdev)
EXPORT_SYMBOL(thermal_zone_bind_cooling_device);
int thermal_zone_unbind_cooling_device(struct thermal_zone_device *tz,
int trip,
struct thermal_cooling_device *cdev)
EXPORT_SYMBOL(thermal_zone_unbind_cooling_device);
static void thermal_release(struct device *dev)
static struct class thermal_class = ;
struct thermal_cooling_device *thermal_cooling_device_register(
char *type, void *devdata, const struct thermal_cooling_device_ops *ops)
EXPORT_SYMBOL(thermal_cooling_device_register);
void thermal_cooling_device_unregister(struct
thermal_cooling_device
*cdev)
EXPORT_SYMBOL(thermal_cooling_device_unregister);
void thermal_zone_device_update(struct thermal_zone_device *tz)
EXPORT_SYMBOL(thermal_zone_device_update);
struct thermal_zone_device *thermal_zone_device_register(char *type,
int trips, void *devdata,
const struct thermal_zone_device_ops *ops,
int tc1, int tc2, int passive_delay, int polling_delay)
EXPORT_SYMBOL(thermal_zone_device_register);
void thermal_zone_device_unregister(struct thermal_zone_device *tz)
EXPORT_SYMBOL(thermal_zone_device_unregister);
static struct genl_family thermal_event_genl_family = ;
static struct genl_multicast_group thermal_event_mcgrp = ;
int generate_netlink_event(u32 orig, enum events event)
EXPORT_SYMBOL(generate_netlink_event);
static int genetlink_init(void)
static void genetlink_exit(void)
static inline int genetlink_init(void)
static inline void genetlink_exit(void)
static int __init thermal_init(void)
static void __exit thermal_exit(void)
fs_initcall(thermal_init);
module_exit(thermal_exit);
