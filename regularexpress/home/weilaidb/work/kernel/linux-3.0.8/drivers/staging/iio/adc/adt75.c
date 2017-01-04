#define ADT75_TEMPERATURE		0
#define ADT75_CONFIG			1
#define ADT75_T_HYST			2
#define ADT75_T_OS			3
#define ADT75_ONESHOT			4
#define ADT75_PD			0x1
#define ADT75_OS_INT			0x2
#define ADT75_OS_POLARITY		0x4
#define ADT75_FAULT_QUEUE_MASK		0x18
#define ADT75_FAULT_QUEUE_OFFSET	3
#define ADT75_SMBUS_ALART		0x8
#define ADT75_VALUE_SIGN		0x800
#define ADT75_VALUE_OFFSET		4
#define ADT75_VALUE_FLOAT_OFFSET	4
#define ADT75_VALUE_FLOAT_MASK		0xF
struct adt75_chip_info ;
static int adt75_i2c_read(struct adt75_chip_info *chip, u8 reg, u8 *data)
static int adt75_i2c_write(struct adt75_chip_info *chip, u8 reg, u8 data)
static ssize_t adt75_show_mode(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt75_store_mode(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(mode, S_IRUGO | S_IWUSR,
adt75_show_mode,
adt75_store_mode,
0);
static ssize_t adt75_show_available_modes(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(available_modes, S_IRUGO, adt75_show_available_modes, NULL, 0);
static ssize_t adt75_show_oneshot(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt75_store_oneshot(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(oneshot, S_IRUGO | S_IWUSR,
adt75_show_oneshot,
adt75_store_oneshot,
0);
static ssize_t adt75_show_value(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(value, S_IRUGO, adt75_show_value, NULL, 0);
static struct attribute *adt75_attributes[] = ;
static const struct attribute_group adt75_attribute_group = ;
#define IIO_EVENT_CODE_ADT75_OTI IIO_UNMOD_EVENT_CODE(IIO_EV_CLASS_TEMP, \
0,		\
IIO_EV_TYPE_THRESH, \
IIO_EV_DIR_FALLING)
static irqreturn_t adt75_event_handler(int irq, void *private)
static ssize_t adt75_show_oti_mode(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt75_set_oti_mode(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t adt75_show_available_oti_modes(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt75_show_smbus_alart(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt75_set_smbus_alart(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t adt75_show_fault_queue(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt75_set_fault_queue(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static inline ssize_t adt75_show_t_bound(struct device *dev,
struct device_attribute *attr,
char *buf)
static inline ssize_t adt75_set_t_bound(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(oti_mode,
S_IRUGO | S_IWUSR,
adt75_show_oti_mode, adt75_set_oti_mode, 0);
static IIO_DEVICE_ATTR(available_oti_modes,
S_IRUGO,
adt75_show_available_oti_modes, NULL, 0);
static IIO_DEVICE_ATTR(smbus_alart,
S_IRUGO | S_IWUSR,
adt75_show_smbus_alart, adt75_set_smbus_alart, 0);
static IIO_DEVICE_ATTR(fault_queue,
S_IRUGO | S_IWUSR,
adt75_show_fault_queue, adt75_set_fault_queue, 0);
static IIO_DEVICE_ATTR(t_os_value,
S_IRUGO | S_IWUSR,
adt75_show_t_bound, adt75_set_t_bound,
ADT75_T_OS);
static IIO_DEVICE_ATTR(t_hyst_value,
S_IRUGO | S_IWUSR,
adt75_show_t_bound, adt75_set_t_bound,
ADT75_T_HYST);
static struct attribute *adt75_event_attributes[] = ;
static struct attribute_group adt75_event_attribute_group = ;
static const struct iio_info adt75_info = ;
static int __devinit adt75_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit adt75_remove(struct i2c_client *client)
static const struct i2c_device_id adt75_id[] = ;
MODULE_DEVICE_TABLE(i2c, adt75_id);
static struct i2c_driver adt75_driver = ;
static __init int adt75_init(void)
static __exit void adt75_exit(void)
MODULE_AUTHOR("Sonic Zhang <sonic.zhang@analog.com>");
MODULE_DESCRIPTION("Analog Devices ADT75 digital"
" temperature sensor driver");
MODULE_LICENSE("GPL v2");
module_init(adt75_init);
module_exit(adt75_exit);
