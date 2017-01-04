static const char enabled[] = "enabled";
static const char disabled[] = "disabled";
const char power_group_name[] = "power";
EXPORT_SYMBOL_GPL(power_group_name);
static const char ctrl_auto[] = "auto";
static const char ctrl_on[] = "on";
static ssize_t control_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t control_store(struct device * dev, struct device_attribute *attr,
const char * buf, size_t n)
static DEVICE_ATTR(control, 0644, control_show, control_store);
static ssize_t rtpm_active_time_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(runtime_active_time, 0444, rtpm_active_time_show, NULL);
static ssize_t rtpm_suspended_time_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(runtime_suspended_time, 0444, rtpm_suspended_time_show, NULL);
static ssize_t rtpm_status_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(runtime_status, 0444, rtpm_status_show, NULL);
static ssize_t autosuspend_delay_ms_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t autosuspend_delay_ms_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t n)
static DEVICE_ATTR(autosuspend_delay_ms, 0644, autosuspend_delay_ms_show,
autosuspend_delay_ms_store);
static ssize_t
wake_show(struct device * dev, struct device_attribute *attr, char * buf)
static ssize_t
wake_store(struct device * dev, struct device_attribute *attr,
const char * buf, size_t n)
static DEVICE_ATTR(wakeup, 0644, wake_show, wake_store);
static ssize_t wakeup_count_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(wakeup_count, 0444, wakeup_count_show, NULL);
static ssize_t wakeup_active_count_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(wakeup_active_count, 0444, wakeup_active_count_show, NULL);
static ssize_t wakeup_hit_count_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(wakeup_hit_count, 0444, wakeup_hit_count_show, NULL);
static ssize_t wakeup_active_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(wakeup_active, 0444, wakeup_active_show, NULL);
static ssize_t wakeup_total_time_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(wakeup_total_time_ms, 0444, wakeup_total_time_show, NULL);
static ssize_t wakeup_max_time_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(wakeup_max_time_ms, 0444, wakeup_max_time_show, NULL);
static ssize_t wakeup_last_time_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(wakeup_last_time_ms, 0444, wakeup_last_time_show, NULL);
static ssize_t rtpm_usagecount_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t rtpm_children_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t rtpm_enabled_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(runtime_usage, 0444, rtpm_usagecount_show, NULL);
static DEVICE_ATTR(runtime_active_kids, 0444, rtpm_children_show, NULL);
static DEVICE_ATTR(runtime_enabled, 0444, rtpm_enabled_show, NULL);
static ssize_t async_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t async_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t n)
static DEVICE_ATTR(async, 0644, async_show, async_store);
static struct attribute *power_attrs[] = ;
static struct attribute_group pm_attr_group = ;
static struct attribute *wakeup_attrs[] = ;
static struct attribute_group pm_wakeup_attr_group = ;
static struct attribute *runtime_attrs[] = ;
static struct attribute_group pm_runtime_attr_group = ;
int dpm_sysfs_add(struct device *dev)
int wakeup_sysfs_add(struct device *dev)
void wakeup_sysfs_remove(struct device *dev)
void rpm_sysfs_remove(struct device *dev)
void dpm_sysfs_remove(struct device *dev)
