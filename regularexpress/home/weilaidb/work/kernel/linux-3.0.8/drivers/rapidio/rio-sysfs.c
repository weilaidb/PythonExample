#define rio_config_attr(field, format_string)					\
static ssize_t								\
field##_show(struct device *dev, struct device_attribute *attr, char *buf)			\
\
rio_config_attr(did, "0x%04x\n");
rio_config_attr(vid, "0x%04x\n");
rio_config_attr(device_rev, "0x%08x\n");
rio_config_attr(asm_did, "0x%04x\n");
rio_config_attr(asm_vid, "0x%04x\n");
rio_config_attr(asm_rev, "0x%04x\n");
rio_config_attr(destid, "0x%04x\n");
rio_config_attr(hopcount, "0x%02x\n");
static ssize_t routes_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t lprev_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t lnext_show(struct device *dev,
struct device_attribute *attr, char *buf)
struct device_attribute rio_dev_attrs[] = ;
static DEVICE_ATTR(routes, S_IRUGO, routes_show, NULL);
static DEVICE_ATTR(lnext, S_IRUGO, lnext_show, NULL);
static DEVICE_ATTR(hopcount, S_IRUGO, hopcount_show, NULL);
static ssize_t
rio_read_config(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t
rio_write_config(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute rio_config_attr = ;
int rio_create_sysfs_dev_files(struct rio_dev *rdev)
void rio_remove_sysfs_dev_files(struct rio_dev *rdev)
