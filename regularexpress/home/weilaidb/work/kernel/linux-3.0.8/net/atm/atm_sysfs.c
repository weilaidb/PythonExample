#define to_atm_dev(cldev) container_of(cldev, struct atm_dev, class_dev)
static ssize_t show_type(struct device *cdev,
struct device_attribute *attr, char *buf)
static ssize_t show_address(struct device *cdev,
struct device_attribute *attr, char *buf)
static ssize_t show_atmaddress(struct device *cdev,
struct device_attribute *attr, char *buf)
static ssize_t show_atmindex(struct device *cdev,
struct device_attribute *attr, char *buf)
static ssize_t show_carrier(struct device *cdev,
struct device_attribute *attr, char *buf)
static ssize_t show_link_rate(struct device *cdev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(address, S_IRUGO, show_address, NULL);
static DEVICE_ATTR(atmaddress, S_IRUGO, show_atmaddress, NULL);
static DEVICE_ATTR(atmindex, S_IRUGO, show_atmindex, NULL);
static DEVICE_ATTR(carrier, S_IRUGO, show_carrier, NULL);
static DEVICE_ATTR(type, S_IRUGO, show_type, NULL);
static DEVICE_ATTR(link_rate, S_IRUGO, show_link_rate, NULL);
static struct device_attribute *atm_attrs[] = ;
static int atm_uevent(struct device *cdev, struct kobj_uevent_env *env)
static void atm_release(struct device *cdev)
static struct class atm_class = ;
int atm_register_sysfs(struct atm_dev *adev, struct device *parent)
void atm_unregister_sysfs(struct atm_dev *adev)
int __init atm_sysfs_init(void)
void __exit atm_sysfs_exit(void)
