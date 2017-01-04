static int
nouveau_pm_clock_set(struct drm_device *dev, struct nouveau_pm_level *perflvl,
u8 id, u32 khz)
static int
nouveau_pm_perflvl_set(struct drm_device *dev, struct nouveau_pm_level *perflvl)
static int
nouveau_pm_profile_set(struct drm_device *dev, const char *profile)
static int
nouveau_pm_perflvl_get(struct drm_device *dev, struct nouveau_pm_level *perflvl)
static void
nouveau_pm_perflvl_info(struct nouveau_pm_level *perflvl, char *ptr, int len)
static ssize_t
nouveau_pm_get_perflvl_info(struct device *d,
struct device_attribute *a, char *buf)
static ssize_t
nouveau_pm_get_perflvl(struct device *d, struct device_attribute *a, char *buf)
static ssize_t
nouveau_pm_set_perflvl(struct device *d, struct device_attribute *a,
const char *buf, size_t count)
static DEVICE_ATTR(performance_level, S_IRUGO | S_IWUSR,
nouveau_pm_get_perflvl, nouveau_pm_set_perflvl);
static int
nouveau_sysfs_init(struct drm_device *dev)
static void
nouveau_sysfs_fini(struct drm_device *dev)
static ssize_t
nouveau_hwmon_show_temp(struct device *d, struct device_attribute *a, char *buf)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, nouveau_hwmon_show_temp,
NULL, 0);
static ssize_t
nouveau_hwmon_max_temp(struct device *d, struct device_attribute *a, char *buf)
static ssize_t
nouveau_hwmon_set_max_temp(struct device *d, struct device_attribute *a,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_max, S_IRUGO | S_IWUSR, nouveau_hwmon_max_temp,
nouveau_hwmon_set_max_temp,
0);
static ssize_t
nouveau_hwmon_critical_temp(struct device *d, struct device_attribute *a,
char *buf)
static ssize_t
nouveau_hwmon_set_critical_temp(struct device *d, struct device_attribute *a,
const char *buf,
size_t count)
static SENSOR_DEVICE_ATTR(temp1_crit, S_IRUGO | S_IWUSR,
nouveau_hwmon_critical_temp,
nouveau_hwmon_set_critical_temp,
0);
static ssize_t nouveau_hwmon_show_name(struct device *dev,
struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(name, S_IRUGO, nouveau_hwmon_show_name, NULL, 0);
static ssize_t nouveau_hwmon_show_update_rate(struct device *dev,
struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(update_rate, S_IRUGO,
nouveau_hwmon_show_update_rate,
NULL, 0);
static struct attribute *hwmon_attributes[] = ;
static const struct attribute_group hwmon_attrgroup = ;
static int
nouveau_hwmon_init(struct drm_device *dev)
static void
nouveau_hwmon_fini(struct drm_device *dev)
#if defined(CONFIG_ACPI) && defined(CONFIG_POWER_SUPPLY)
static int
nouveau_pm_acpi_event(struct notifier_block *nb, unsigned long val, void *data)
int
nouveau_pm_init(struct drm_device *dev)
void
nouveau_pm_fini(struct drm_device *dev)
void
nouveau_pm_resume(struct drm_device *dev)
