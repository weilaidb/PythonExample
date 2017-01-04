struct iio_sysfs_trig ;
static LIST_HEAD(iio_sysfs_trig_list);
static DEFINE_MUTEX(iio_syfs_trig_list_mut);
static int iio_sysfs_trigger_probe(int id);
static ssize_t iio_sysfs_trig_add(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static DEVICE_ATTR(add_trigger, S_IWUSR, NULL, &iio_sysfs_trig_add);
static int iio_sysfs_trigger_remove(int id);
static ssize_t iio_sysfs_trig_remove(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static DEVICE_ATTR(remove_trigger, S_IWUSR, NULL, &iio_sysfs_trig_remove);
static struct attribute *iio_sysfs_trig_attrs[] = ;
static const struct attribute_group iio_sysfs_trig_group = ;
static const struct attribute_group *iio_sysfs_trig_groups[] = ;
static struct device iio_sysfs_trig_dev = ;
static ssize_t iio_sysfs_trigger_poll(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(trigger_now, S_IWUSR, NULL, iio_sysfs_trigger_poll);
static struct attribute *iio_sysfs_trigger_attrs[] = ;
static const struct attribute_group iio_sysfs_trigger_attr_group = ;
static const struct attribute_group *iio_sysfs_trigger_attr_groups[] = ;
static int iio_sysfs_trigger_probe(int id)
static int iio_sysfs_trigger_remove(int id)
static int __init iio_sysfs_trig_init(void)
module_init(iio_sysfs_trig_init);
static void __exit iio_sysfs_trig_exit(void)
module_exit(iio_sysfs_trig_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Sysfs based trigger for the iio subsystem");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:iio-trig-sysfs");
