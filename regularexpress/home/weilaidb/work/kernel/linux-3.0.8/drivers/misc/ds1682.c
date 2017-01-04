#define DS1682_REG_CONFIG		0x00
#define DS1682_REG_ALARM		0x01
#define DS1682_REG_ELAPSED		0x05
#define DS1682_REG_EVT_CNTR		0x09
#define DS1682_REG_EEPROM		0x0b
#define DS1682_REG_RESET		0x1d
#define DS1682_REG_WRITE_DISABLE	0x1e
#define DS1682_REG_WRITE_MEM_DISABLE	0x1f
#define DS1682_EEPROM_SIZE		10
static ssize_t ds1682_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t ds1682_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR_2(elapsed_time, S_IRUGO | S_IWUSR, ds1682_show,
ds1682_store, 4, DS1682_REG_ELAPSED);
static SENSOR_DEVICE_ATTR_2(alarm_time, S_IRUGO | S_IWUSR, ds1682_show,
ds1682_store, 4, DS1682_REG_ALARM);
static SENSOR_DEVICE_ATTR_2(event_count, S_IRUGO | S_IWUSR, ds1682_show,
ds1682_store, 2, DS1682_REG_EVT_CNTR);
static const struct attribute_group ds1682_group = ;
static ssize_t ds1682_eeprom_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t off, size_t count)
static ssize_t ds1682_eeprom_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute ds1682_eeprom_attr = ;
static int ds1682_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int ds1682_remove(struct i2c_client *client)
static const struct i2c_device_id ds1682_id[] = ;
MODULE_DEVICE_TABLE(i2c, ds1682_id);
static struct i2c_driver ds1682_driver = ;
static int __init ds1682_init(void)
static void __exit ds1682_exit(void)
MODULE_AUTHOR("Grant Likely <grant.likely@secretlab.ca>");
MODULE_DESCRIPTION("DS1682 Elapsed Time Indicator driver");
MODULE_LICENSE("GPL");
module_init(ds1682_init);
module_exit(ds1682_exit);
