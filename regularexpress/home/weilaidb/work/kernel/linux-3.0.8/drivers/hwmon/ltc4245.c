enum ltc4245_cmd ;
struct ltc4245_data ;
static void ltc4245_update_gpios(struct device *dev)
static struct ltc4245_data *ltc4245_update_device(struct device *dev)
static int ltc4245_get_voltage(struct device *dev, u8 reg)
static unsigned int ltc4245_get_current(struct device *dev, u8 reg)
static ssize_t ltc4245_show_voltage(struct device *dev,
struct device_attribute *da,
char *buf)
static ssize_t ltc4245_show_current(struct device *dev,
struct device_attribute *da,
char *buf)
static ssize_t ltc4245_show_power(struct device *dev,
struct device_attribute *da,
char *buf)
static ssize_t ltc4245_show_alarm(struct device *dev,
struct device_attribute *da,
char *buf)
static ssize_t ltc4245_show_gpio(struct device *dev,
struct device_attribute *da,
char *buf)
#define LTC4245_VOLTAGE(name, ltc4245_cmd_idx) \
static SENSOR_DEVICE_ATTR(name, S_IRUGO, \
ltc4245_show_voltage, NULL, ltc4245_cmd_idx)
#define LTC4245_CURRENT(name, ltc4245_cmd_idx) \
static SENSOR_DEVICE_ATTR(name, S_IRUGO, \
ltc4245_show_current, NULL, ltc4245_cmd_idx)
#define LTC4245_POWER(name, ltc4245_cmd_idx) \
static SENSOR_DEVICE_ATTR(name, S_IRUGO, \
ltc4245_show_power, NULL, ltc4245_cmd_idx)
#define LTC4245_ALARM(name, mask, reg) \
static SENSOR_DEVICE_ATTR_2(name, S_IRUGO, \
ltc4245_show_alarm, NULL, (mask), reg)
#define LTC4245_GPIO_VOLTAGE(name, gpio_num) \
static SENSOR_DEVICE_ATTR(name, S_IRUGO, \
ltc4245_show_gpio, NULL, gpio_num)
LTC4245_VOLTAGE(in1_input,			LTC4245_12VIN);
LTC4245_VOLTAGE(in2_input,			LTC4245_5VIN);
LTC4245_VOLTAGE(in3_input,			LTC4245_3VIN);
LTC4245_VOLTAGE(in4_input,			LTC4245_VEEIN);
LTC4245_ALARM(in1_min_alarm,	(1 << 0),	LTC4245_FAULT1);
LTC4245_ALARM(in2_min_alarm,	(1 << 1),	LTC4245_FAULT1);
LTC4245_ALARM(in3_min_alarm,	(1 << 2),	LTC4245_FAULT1);
LTC4245_ALARM(in4_min_alarm,	(1 << 3),	LTC4245_FAULT1);
LTC4245_CURRENT(curr1_input,			LTC4245_12VSENSE);
LTC4245_CURRENT(curr2_input,			LTC4245_5VSENSE);
LTC4245_CURRENT(curr3_input,			LTC4245_3VSENSE);
LTC4245_CURRENT(curr4_input,			LTC4245_VEESENSE);
LTC4245_ALARM(curr1_max_alarm,	(1 << 4),	LTC4245_FAULT1);
LTC4245_ALARM(curr2_max_alarm,	(1 << 5),	LTC4245_FAULT1);
LTC4245_ALARM(curr3_max_alarm,	(1 << 6),	LTC4245_FAULT1);
LTC4245_ALARM(curr4_max_alarm,	(1 << 7),	LTC4245_FAULT1);
LTC4245_VOLTAGE(in5_input,			LTC4245_12VOUT);
LTC4245_VOLTAGE(in6_input,			LTC4245_5VOUT);
LTC4245_VOLTAGE(in7_input,			LTC4245_3VOUT);
LTC4245_VOLTAGE(in8_input,			LTC4245_VEEOUT);
LTC4245_ALARM(in5_min_alarm,	(1 << 0),	LTC4245_FAULT2);
LTC4245_ALARM(in6_min_alarm,	(1 << 1),	LTC4245_FAULT2);
LTC4245_ALARM(in7_min_alarm,	(1 << 2),	LTC4245_FAULT2);
LTC4245_ALARM(in8_min_alarm,	(1 << 3),	LTC4245_FAULT2);
LTC4245_GPIO_VOLTAGE(in9_input,			0);
LTC4245_GPIO_VOLTAGE(in10_input,		1);
LTC4245_GPIO_VOLTAGE(in11_input,		2);
LTC4245_POWER(power1_input,			LTC4245_12VSENSE);
LTC4245_POWER(power2_input,			LTC4245_5VSENSE);
LTC4245_POWER(power3_input,			LTC4245_3VSENSE);
LTC4245_POWER(power4_input,			LTC4245_VEESENSE);
static struct attribute *ltc4245_std_attributes[] = ;
static struct attribute *ltc4245_gpio_attributes[] = ;
static const struct attribute_group ltc4245_std_group = ;
static const struct attribute_group ltc4245_gpio_group = ;
static int ltc4245_sysfs_create_groups(struct i2c_client *client)
static void ltc4245_sysfs_remove_groups(struct i2c_client *client)
static bool ltc4245_use_extra_gpios(struct i2c_client *client)
static int ltc4245_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int ltc4245_remove(struct i2c_client *client)
static const struct i2c_device_id ltc4245_id[] = ;
MODULE_DEVICE_TABLE(i2c, ltc4245_id);
static struct i2c_driver ltc4245_driver = ;
static int __init ltc4245_init(void)
static void __exit ltc4245_exit(void)
MODULE_AUTHOR("Ira W. Snyder <iws@ovro.caltech.edu>");
MODULE_DESCRIPTION("LTC4245 driver");
MODULE_LICENSE("GPL");
module_init(ltc4245_init);
module_exit(ltc4245_exit);
