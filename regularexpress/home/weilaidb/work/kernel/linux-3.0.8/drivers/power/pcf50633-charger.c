struct pcf50633_mbc ;
int pcf50633_mbc_usb_curlim_set(struct pcf50633 *pcf, int ma)
EXPORT_SYMBOL_GPL(pcf50633_mbc_usb_curlim_set);
int pcf50633_mbc_get_status(struct pcf50633 *pcf)
EXPORT_SYMBOL_GPL(pcf50633_mbc_get_status);
int pcf50633_mbc_get_usb_online_status(struct pcf50633 *pcf)
EXPORT_SYMBOL_GPL(pcf50633_mbc_get_usb_online_status);
static ssize_t
show_chgmode(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(chgmode, S_IRUGO, show_chgmode, NULL);
static ssize_t
show_usblim(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_usblim(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(usb_curlim, S_IRUGO | S_IWUSR, show_usblim, set_usblim);
static ssize_t
show_chglim(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_chglim(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(chg_curlim, S_IRUGO | S_IWUSR, show_chglim, set_chglim);
static struct attribute *pcf50633_mbc_sysfs_entries[] = ;
static struct attribute_group mbc_attr_group = ;
static void
pcf50633_mbc_irq_handler(int irq, void *data)
static int adapter_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static int usb_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static int ac_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property power_props[] = ;
static const u8 mbc_irq_handlers[] = ;
static int __devinit pcf50633_mbc_probe(struct platform_device *pdev)
static int __devexit pcf50633_mbc_remove(struct platform_device *pdev)
static struct platform_driver pcf50633_mbc_driver = ;
static int __init pcf50633_mbc_init(void)
module_init(pcf50633_mbc_init);
static void __exit pcf50633_mbc_exit(void)
module_exit(pcf50633_mbc_exit);
MODULE_AUTHOR("Balaji Rao <balajirrao@openmoko.org>");
MODULE_DESCRIPTION("PCF50633 mbc driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pcf50633-mbc");
