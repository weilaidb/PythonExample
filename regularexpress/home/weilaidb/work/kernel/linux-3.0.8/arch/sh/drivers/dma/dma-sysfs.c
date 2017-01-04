static struct sysdev_class dma_sysclass = ;
static ssize_t dma_show_devices(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(devices, S_IRUGO, dma_show_devices, NULL);
static int __init dma_sysclass_init(void)
postcore_initcall(dma_sysclass_init);
static ssize_t dma_show_dev_id(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static ssize_t dma_store_dev_id(struct sys_device *dev,
struct sysdev_attribute *attr,
const char *buf, size_t count)
static SYSDEV_ATTR(dev_id, S_IRUGO | S_IWUSR, dma_show_dev_id, dma_store_dev_id);
static ssize_t dma_store_config(struct sys_device *dev,
struct sysdev_attribute *attr,
const char *buf, size_t count)
static SYSDEV_ATTR(config, S_IWUSR, NULL, dma_store_config);
static ssize_t dma_show_mode(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static ssize_t dma_store_mode(struct sys_device *dev,
struct sysdev_attribute *attr,
const char *buf, size_t count)
static SYSDEV_ATTR(mode, S_IRUGO | S_IWUSR, dma_show_mode, dma_store_mode);
#define dma_ro_attr(field, fmt)						\
static ssize_t dma_show_##field(struct sys_device *dev, 		\
struct sysdev_attribute *attr, char *buf)\
\
static SYSDEV_ATTR(field, S_IRUGO, dma_show_##field, NULL);
dma_ro_attr(count, "0x%08x\n");
dma_ro_attr(flags, "0x%08lx\n");
int dma_create_sysfs_files(struct dma_channel *chan, struct dma_info *info)
void dma_remove_sysfs_files(struct dma_channel *chan, struct dma_info *info)
