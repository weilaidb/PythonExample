static ssize_t
rtc_sysfs_show_name(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
rtc_sysfs_show_date(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
rtc_sysfs_show_time(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
rtc_sysfs_show_since_epoch(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
rtc_sysfs_show_max_user_freq(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
rtc_sysfs_set_max_user_freq(struct device *dev, struct device_attribute *attr,
const char *buf, size_t n)
static ssize_t
rtc_sysfs_show_hctosys(struct device *dev, struct device_attribute *attr,
char *buf)
static struct device_attribute rtc_attrs[] = ;
static ssize_t
rtc_sysfs_show_wakealarm(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
rtc_sysfs_set_wakealarm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t n)
static DEVICE_ATTR(wakealarm, S_IRUGO | S_IWUSR,
rtc_sysfs_show_wakealarm, rtc_sysfs_set_wakealarm);
static inline int rtc_does_wakealarm(struct rtc_device *rtc)
void rtc_sysfs_add_device(struct rtc_device *rtc)
void rtc_sysfs_del_device(struct rtc_device *rtc)
void __init rtc_sysfs_init(struct class *rtc_class)
