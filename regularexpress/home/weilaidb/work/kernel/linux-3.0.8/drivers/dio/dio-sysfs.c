static ssize_t dio_show_id(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(id, S_IRUGO, dio_show_id, NULL);
static ssize_t dio_show_ipl(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(ipl, S_IRUGO, dio_show_ipl, NULL);
static ssize_t dio_show_secid(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(secid, S_IRUGO, dio_show_secid, NULL);
static ssize_t dio_show_name(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, dio_show_name, NULL);
static ssize_t dio_show_resource(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(resource, S_IRUGO, dio_show_resource, NULL);
int dio_create_sysfs_dev_files(struct dio_dev *d)
