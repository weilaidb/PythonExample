#define NTRIG_DUPLICATE_USAGES	0x001
static unsigned int min_width;
module_param(min_width, uint, 0644);
MODULE_PARM_DESC(min_width, "Minimum touch contact width to accept.");
static unsigned int min_height;
module_param(min_height, uint, 0644);
MODULE_PARM_DESC(min_height, "Minimum touch contact height to accept.");
static unsigned int activate_slack = 1;
module_param(activate_slack, uint, 0644);
MODULE_PARM_DESC(activate_slack, "Number of touch frames to ignore at "
"the start of touch input.");
static unsigned int deactivate_slack = 4;
module_param(deactivate_slack, uint, 0644);
MODULE_PARM_DESC(deactivate_slack, "Number of empty frames to ignore before "
"deactivating touch.");
static unsigned int activation_width = 64;
module_param(activation_width, uint, 0644);
MODULE_PARM_DESC(activation_width, "Width threshold to immediately start "
"processing touch events.");
static unsigned int activation_height = 32;
module_param(activation_height, uint, 0644);
MODULE_PARM_DESC(activation_height, "Height threshold to immediately start "
"processing touch events.");
struct ntrig_data ;
static int ntrig_version_string(unsigned char *raw, char *buf)
static inline int ntrig_get_mode(struct hid_device *hdev)
static inline void ntrig_set_mode(struct hid_device *hdev, const int mode)
static void ntrig_report_version(struct hid_device *hdev)
static ssize_t show_phys_width(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(sensor_physical_width, S_IRUGO, show_phys_width, NULL);
static ssize_t show_phys_height(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(sensor_physical_height, S_IRUGO, show_phys_height, NULL);
static ssize_t show_log_width(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(sensor_logical_width, S_IRUGO, show_log_width, NULL);
static ssize_t show_log_height(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(sensor_logical_height, S_IRUGO, show_log_height, NULL);
static ssize_t show_min_width(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t set_min_width(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(min_width, S_IWUSR | S_IRUGO, show_min_width, set_min_width);
static ssize_t show_min_height(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t set_min_height(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(min_height, S_IWUSR | S_IRUGO, show_min_height,
set_min_height);
static ssize_t show_activate_slack(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t set_activate_slack(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(activate_slack, S_IWUSR | S_IRUGO, show_activate_slack,
set_activate_slack);
static ssize_t show_activation_width(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t set_activation_width(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(activation_width, S_IWUSR | S_IRUGO, show_activation_width,
set_activation_width);
static ssize_t show_activation_height(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t set_activation_height(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(activation_height, S_IWUSR | S_IRUGO,
show_activation_height, set_activation_height);
static ssize_t show_deactivate_slack(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t set_deactivate_slack(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(deactivate_slack, S_IWUSR | S_IRUGO, show_deactivate_slack,
set_deactivate_slack);
static struct attribute *sysfs_attrs[] = ;
static struct attribute_group ntrig_attribute_group = ;
static int ntrig_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int ntrig_input_mapped(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int ntrig_event (struct hid_device *hid, struct hid_field *field,
struct hid_usage *usage, __s32 value)
static int ntrig_probe(struct hid_device *hdev, const struct hid_device_id *id)
static void ntrig_remove(struct hid_device *hdev)
static const struct hid_device_id ntrig_devices[] = ;
MODULE_DEVICE_TABLE(hid, ntrig_devices);
static const struct hid_usage_id ntrig_grabbed_usages[] = ;
static struct hid_driver ntrig_driver = ;
static int __init ntrig_init(void)
static void __exit ntrig_exit(void)
module_init(ntrig_init);
module_exit(ntrig_exit);
MODULE_LICENSE("GPL");
