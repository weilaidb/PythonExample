enum ltc4215_cmd ;
struct ltc4215_data ;
static struct ltc4215_data *ltc4215_update_device(struct device *dev)
static int ltc4215_get_voltage(struct device *dev, u8 reg)
static unsigned int ltc4215_get_current(struct device *dev)
static ssize_t ltc4215_show_voltage(struct device *dev,
struct device_attribute *da,
char *buf)
static ssize_t ltc4215_show_current(struct device *dev,
struct device_attribute *da,
char *buf)
static ssize_t ltc4215_show_power(struct device *dev,
struct device_attribute *da,
char *buf)
static ssize_t ltc4215_show_alarm(struct device *dev,
struct device_attribute *da,
char *buf)
#define LTC4215_VOLTAGE(name, ltc4215_cmd_idx) \
static SENSOR_DEVICE_ATTR(name, S_IRUGO, \
ltc4215_show_voltage, NULL, ltc4215_cmd_idx)
#define LTC4215_CURRENT(name) \
static SENSOR_DEVICE_ATTR(name, S_IRUGO, \
ltc4215_show_current, NULL, 0);
#define LTC4215_POWER(name) \
static SENSOR_DEVICE_ATTR(name, S_IRUGO, \
ltc4215_show_power, NULL, 0);
#define LTC4215_ALARM(name, mask, reg) \
static SENSOR_DEVICE_ATTR_2(name, S_IRUGO, \
ltc4215_show_alarm, NULL, (mask), reg)
LTC4215_CURRENT(curr1_input);
LTC4215_ALARM(curr1_max_alarm,	(1 << 2),	LTC4215_STATUS);
LTC4215_POWER(power1_input);
LTC4215_VOLTAGE(in1_input,			LTC4215_ADIN);
LTC4215_ALARM(in1_max_alarm,	(1 << 0),	LTC4215_STATUS);
LTC4215_ALARM(in1_min_alarm,	(1 << 1),	LTC4215_STATUS);
LTC4215_VOLTAGE(in2_input,			LTC4215_SOURCE);
LTC4215_ALARM(in2_min_alarm,	(1 << 3),	LTC4215_STATUS);
static struct attribute *ltc4215_attributes[] = ;
static const struct attribute_group ltc4215_group = ;
static int ltc4215_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int ltc4215_remove(struct i2c_client *client)
static const struct i2c_device_id ltc4215_id[] = ;
MODULE_DEVICE_TABLE(i2c, ltc4215_id);
static struct i2c_driver ltc4215_driver = ;
static int __init ltc4215_init(void)
static void __exit ltc4215_exit(void)
MODULE_AUTHOR("Ira W. Snyder <iws@ovro.caltech.edu>");
MODULE_DESCRIPTION("LTC4215 driver");
MODULE_LICENSE("GPL");
module_init(ltc4215_init);
module_exit(ltc4215_exit);
