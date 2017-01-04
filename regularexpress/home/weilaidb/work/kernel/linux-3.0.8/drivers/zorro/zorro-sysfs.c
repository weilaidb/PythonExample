#define zorro_config_attr(name, field, format_string)			\
static ssize_t								\
show_##name(struct device *dev, struct device_attribute *attr, char *buf)				\
\
static DEVICE_ATTR(name, S_IRUGO, show_##name, NULL);
zorro_config_attr(id, id, "0x%08x\n");
zorro_config_attr(type, rom.er_Type, "0x%02x\n");
zorro_config_attr(serial, rom.er_SerialNumber, "0x%08x\n");
zorro_config_attr(slotaddr, slotaddr, "0x%04x\n");
zorro_config_attr(slotsize, slotsize, "0x%04x\n");
static ssize_t zorro_show_resource(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(resource, S_IRUGO, zorro_show_resource, NULL);
static ssize_t zorro_read_config(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute zorro_config_attr = ;
static ssize_t modalias_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(modalias, S_IRUGO, modalias_show, NULL);
int zorro_create_sysfs_dev_files(struct zorro_dev *z)
