static ssize_t show_cidmode(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_cidmode(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(cidmode, S_IRUGO|S_IWUSR, show_cidmode, set_cidmode);
void gigaset_free_dev_sysfs(struct cardstate *cs)
void gigaset_init_dev_sysfs(struct cardstate *cs)
