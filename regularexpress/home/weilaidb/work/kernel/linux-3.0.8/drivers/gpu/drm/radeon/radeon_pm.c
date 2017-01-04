#define RADEON_IDLE_LOOP_MS 100
#define RADEON_RECLOCK_DELAY_MS 200
#define RADEON_WAIT_VBLANK_TIMEOUT 200
#define RADEON_WAIT_IDLE_TIMEOUT 200
static const char *radeon_pm_state_type_name[5] = ;
static void radeon_dynpm_idle_work_handler(struct work_struct *work);
static int radeon_debugfs_pm_init(struct radeon_device *rdev);
static bool radeon_pm_in_vbl(struct radeon_device *rdev);
static bool radeon_pm_debug_check_in_vbl(struct radeon_device *rdev, bool finish);
static void radeon_pm_update_profile(struct radeon_device *rdev);
static void radeon_pm_set_clocks(struct radeon_device *rdev);
#define ACPI_AC_CLASS           "ac_adapter"
static int radeon_acpi_event(struct notifier_block *nb,
unsigned long val,
void *data)
static void radeon_pm_update_profile(struct radeon_device *rdev)
static void radeon_unmap_vram_bos(struct radeon_device *rdev)
static void radeon_sync_with_vblank(struct radeon_device *rdev)
static void radeon_set_power_state(struct radeon_device *rdev)
static void radeon_pm_set_clocks(struct radeon_device *rdev)
static void radeon_pm_print_states(struct radeon_device *rdev)
static ssize_t radeon_get_pm_profile(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t radeon_set_pm_profile(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t radeon_get_pm_method(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t radeon_set_pm_method(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static DEVICE_ATTR(power_profile, S_IRUGO | S_IWUSR, radeon_get_pm_profile, radeon_set_pm_profile);
static DEVICE_ATTR(power_method, S_IRUGO | S_IWUSR, radeon_get_pm_method, radeon_set_pm_method);
static ssize_t radeon_hwmon_show_temp(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t radeon_hwmon_show_name(struct device *dev,
struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, radeon_hwmon_show_temp, NULL, 0);
static SENSOR_DEVICE_ATTR(name, S_IRUGO, radeon_hwmon_show_name, NULL, 0);
static struct attribute *hwmon_attributes[] = ;
static const struct attribute_group hwmon_attrgroup = ;
static int radeon_hwmon_init(struct radeon_device *rdev)
static void radeon_hwmon_fini(struct radeon_device *rdev)
void radeon_pm_suspend(struct radeon_device *rdev)
void radeon_pm_resume(struct radeon_device *rdev)
int radeon_pm_init(struct radeon_device *rdev)
void radeon_pm_fini(struct radeon_device *rdev)
void radeon_pm_compute_clocks(struct radeon_device *rdev)
static bool radeon_pm_in_vbl(struct radeon_device *rdev)
static bool radeon_pm_debug_check_in_vbl(struct radeon_device *rdev, bool finish)
static void radeon_dynpm_idle_work_handler(struct work_struct *work)
#if defined(CONFIG_DEBUG_FS)
static int radeon_debugfs_pm_info(struct seq_file *m, void *data)
static struct drm_info_list radeon_pm_info_list[] = ;
static int radeon_debugfs_pm_init(struct radeon_device *rdev)
