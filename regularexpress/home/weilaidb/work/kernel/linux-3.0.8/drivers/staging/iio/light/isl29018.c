#define CONVERSION_TIME_MS		100
#define ISL29018_REG_ADD_COMMAND1	0x00
#define COMMMAND1_OPMODE_SHIFT		5
#define COMMMAND1_OPMODE_MASK		(7 << COMMMAND1_OPMODE_SHIFT)
#define COMMMAND1_OPMODE_POWER_DOWN	0
#define COMMMAND1_OPMODE_ALS_ONCE	1
#define COMMMAND1_OPMODE_IR_ONCE	2
#define COMMMAND1_OPMODE_PROX_ONCE	3
#define ISL29018_REG_ADD_COMMANDII	0x01
#define COMMANDII_RESOLUTION_SHIFT	2
#define COMMANDII_RESOLUTION_MASK	(0x3 << COMMANDII_RESOLUTION_SHIFT)
#define COMMANDII_RANGE_SHIFT		0
#define COMMANDII_RANGE_MASK		(0x3 << COMMANDII_RANGE_SHIFT)
#define COMMANDII_SCHEME_SHIFT		7
#define COMMANDII_SCHEME_MASK		(0x1 << COMMANDII_SCHEME_SHIFT)
#define ISL29018_REG_ADD_DATA_LSB	0x02
#define ISL29018_REG_ADD_DATA_MSB	0x03
#define ISL29018_MAX_REGS		ISL29018_REG_ADD_DATA_MSB
struct isl29018_chip ;
static int isl29018_write_data(struct i2c_client *client, u8 reg,
u8 val, u8 mask, u8 shift)
static int isl29018_set_range(struct i2c_client *client, unsigned long range,
unsigned int *new_range)
static int isl29018_set_resolution(struct i2c_client *client,
unsigned long adcbit, unsigned int *conf_adc_bit)
static int isl29018_read_sensor_input(struct i2c_client *client, int mode)
static int isl29018_read_lux(struct i2c_client *client, int *lux)
static int isl29018_read_ir(struct i2c_client *client, int *ir)
static int isl29018_read_proximity_ir(struct i2c_client *client, int scheme,
int *near_ir)
static ssize_t get_sensor_data(struct device *dev, char *buf, int mode)
static ssize_t show_range(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_range(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_resolution(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_resolution(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_prox_infrared_supression(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_prox_infrared_supression(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_lux(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_ir(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_proxim_ir(struct device *dev,
struct device_attribute *devattr, char *buf)
static IIO_DEVICE_ATTR(range, S_IRUGO | S_IWUSR, show_range, store_range, 0);
static IIO_CONST_ATTR(range_available, "1000 4000 16000 64000");
static IIO_CONST_ATTR(adc_resolution_available, "4 8 12 16");
static IIO_DEVICE_ATTR(adc_resolution, S_IRUGO | S_IWUSR,
show_resolution, store_resolution, 0);
static IIO_DEVICE_ATTR(proximity_on_chip_ambient_infrared_supression,
S_IRUGO | S_IWUSR,
show_prox_infrared_supression,
store_prox_infrared_supression, 0);
static IIO_DEVICE_ATTR(illuminance0_input, S_IRUGO, show_lux, NULL, 0);
static IIO_DEVICE_ATTR(intensity_infrared_raw, S_IRUGO, show_ir, NULL, 0);
static IIO_DEVICE_ATTR(proximity_raw, S_IRUGO, show_proxim_ir, NULL, 0);
#define ISL29018_DEV_ATTR(name) (&iio_dev_attr_##name.dev_attr.attr)
#define ISL29018_CONST_ATTR(name) (&iio_const_attr_##name.dev_attr.attr)
static struct attribute *isl29018_attributes[] = ;
static const struct attribute_group isl29108_group = ;
static int isl29018_chip_init(struct i2c_client *client)
static const struct iio_info isl29108_info = ;
static int __devinit isl29018_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit isl29018_remove(struct i2c_client *client)
static const struct i2c_device_id isl29018_id[] = ;
MODULE_DEVICE_TABLE(i2c, isl29018_id);
static struct i2c_driver isl29018_driver = ;
static int __init isl29018_init(void)
static void __exit isl29018_exit(void)
module_init(isl29018_init);
module_exit(isl29018_exit);
MODULE_DESCRIPTION("ISL29018 Ambient Light Sensor driver");
MODULE_LICENSE("GPL");
