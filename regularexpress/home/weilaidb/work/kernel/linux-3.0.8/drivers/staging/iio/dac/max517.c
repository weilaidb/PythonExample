#define MAX517_DRV_NAME	"max517"
#define COMMAND_CHANNEL0	0x00
#define COMMAND_CHANNEL1	0x01
#define COMMAND_PD		0x08
enum max517_device_ids ;
struct max517_data ;
static ssize_t max517_set_value(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count, int channel)
static ssize_t max517_set_value_1(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static IIO_DEV_ATTR_OUT_RAW(1, max517_set_value_1, 0);
static ssize_t max517_set_value_2(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static IIO_DEV_ATTR_OUT_RAW(2, max517_set_value_2, 1);
static ssize_t max517_set_value_both(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static IIO_DEVICE_ATTR_NAMED(out1and2_raw, out1&2_raw, S_IWUSR, NULL,
max517_set_value_both, -1);
static ssize_t max517_show_scale(struct device *dev,
struct device_attribute *attr,
char *buf, int channel)
static ssize_t max517_show_scale1(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(out1_scale, S_IRUGO, max517_show_scale1, NULL, 0);
static ssize_t max517_show_scale2(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(out2_scale, S_IRUGO, max517_show_scale2, NULL, 0);
static struct attribute *max517_attributes[] = ;
static struct attribute_group max517_attribute_group = ;
static struct attribute *max518_attributes[] = ;
static struct attribute_group max518_attribute_group = ;
static int max517_suspend(struct i2c_client *client, pm_message_t mesg)
static int max517_resume(struct i2c_client *client)
static const struct iio_info max517_info = ;
static const struct iio_info max518_info = ;
static int max517_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int max517_remove(struct i2c_client *client)
static const struct i2c_device_id max517_id[] = ;
MODULE_DEVICE_TABLE(i2c, max517_id);
static struct i2c_driver max517_driver = ;
static int __init max517_init(void)
static void __exit max517_exit(void)
MODULE_AUTHOR("Roland Stigge <stigge@antcom.de>");
MODULE_DESCRIPTION("MAX517/MAX518/MAX519 8-bit DAC");
MODULE_LICENSE("GPL");
module_init(max517_init);
module_exit(max517_exit);
