#define AD7414_REG_TEMP		0x00
#define AD7414_REG_CONF		0x01
#define AD7414_REG_T_HIGH	0x02
#define AD7414_REG_T_LOW	0x03
static u8 AD7414_REG_LIMIT[] = ;
struct ad7414_data ;
static inline int ad7414_temp_from_reg(s16 reg)
static inline int ad7414_read(struct i2c_client *client, u8 reg)
static inline int ad7414_write(struct i2c_client *client, u8 reg, u8 value)
static struct ad7414_data *ad7414_update_device(struct device *dev)
static ssize_t show_temp_input(struct device *dev,
struct device_attribute *attr, char *buf)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp_input, NULL, 0);
static ssize_t show_max_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_max_min(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO,
show_max_min, set_max_min, 0);
static SENSOR_DEVICE_ATTR(temp1_min, S_IWUSR | S_IRUGO,
show_max_min, set_max_min, 1);
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(temp1_min_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(temp1_max_alarm, S_IRUGO, show_alarm, NULL, 4);
static struct attribute *ad7414_attributes[] = ;
static const struct attribute_group ad7414_group = ;
static int ad7414_probe(struct i2c_client *client,
const struct i2c_device_id *dev_id)
static int __devexit ad7414_remove(struct i2c_client *client)
static const struct i2c_device_id ad7414_id[] = ;
MODULE_DEVICE_TABLE(i2c, ad7414_id);
static struct i2c_driver ad7414_driver = ;
static int __init ad7414_init(void)
module_init(ad7414_init);
static void __exit ad7414_exit(void)
module_exit(ad7414_exit);
MODULE_AUTHOR("Stefan Roese <sr at denx.de>, "
"Frank Edelhaeuser <frank.edelhaeuser at spansion.com>");
MODULE_DESCRIPTION("AD7414 driver");
MODULE_LICENSE("GPL");
