static const unsigned short normal_i2c[] = ;
#define LM80_REG_IN_MAX(nr)		(0x2a + (nr) * 2)
#define LM80_REG_IN_MIN(nr)		(0x2b + (nr) * 2)
#define LM80_REG_IN(nr)			(0x20 + (nr))
#define LM80_REG_FAN1			0x28
#define LM80_REG_FAN2			0x29
#define LM80_REG_FAN_MIN(nr)		(0x3b + (nr))
#define LM80_REG_TEMP			0x27
#define LM80_REG_TEMP_HOT_MAX		0x38
#define LM80_REG_TEMP_HOT_HYST		0x39
#define LM80_REG_TEMP_OS_MAX		0x3a
#define LM80_REG_TEMP_OS_HYST		0x3b
#define LM80_REG_CONFIG			0x00
#define LM80_REG_ALARM1			0x01
#define LM80_REG_ALARM2			0x02
#define LM80_REG_MASK1			0x03
#define LM80_REG_MASK2			0x04
#define LM80_REG_FANDIV			0x05
#define LM80_REG_RES			0x06
#define IN_TO_REG(val)		(SENSORS_LIMIT(((val)+5)/10,0,255))
#define IN_FROM_REG(val)	((val)*10)
static inline unsigned char FAN_TO_REG(unsigned rpm, unsigned div)
#define FAN_FROM_REG(val,div)	((val)==0?-1:\
(val)==255?0:1350000/((div)*(val)))
static inline long TEMP_FROM_REG(u16 temp)
#define TEMP_LIMIT_FROM_REG(val)	(((val)>0x80?(val)-0x100:(val))*1000)
#define TEMP_LIMIT_TO_REG(val)		SENSORS_LIMIT((val)<0?\
((val)-500)/1000:((val)+500)/1000,0,255)
#define DIV_FROM_REG(val)		(1 << (val))
struct lm80_data ;
static int lm80_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int lm80_detect(struct i2c_client *client, struct i2c_board_info *info);
static void lm80_init_client(struct i2c_client *client);
static int lm80_remove(struct i2c_client *client);
static struct lm80_data *lm80_update_device(struct device *dev);
static int lm80_read_value(struct i2c_client *client, u8 reg);
static int lm80_write_value(struct i2c_client *client, u8 reg, u8 value);
static const struct i2c_device_id lm80_id[] = ;
MODULE_DEVICE_TABLE(i2c, lm80_id);
static struct i2c_driver lm80_driver = ;
#define show_in(suffix, value) \
static ssize_t show_in_##suffix(struct device *dev, struct device_attribute *attr, char *buf) \
show_in(min, in_min)
show_in(max, in_max)
show_in(input, in)
#define set_in(suffix, value, reg) \
static ssize_t set_in_##suffix(struct device *dev, struct device_attribute *attr, const char *buf, \
size_t count) \
set_in(min, in_min, LM80_REG_IN_MIN)
set_in(max, in_max, LM80_REG_IN_MAX)
#define show_fan(suffix, value) \
static ssize_t show_fan_##suffix(struct device *dev, struct device_attribute *attr, char *buf) \
show_fan(min, fan_min)
show_fan(input, fan)
static ssize_t show_fan_div(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_fan_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_fan_div(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_temp_input1(struct device *dev, struct device_attribute *attr, char *buf)
#define show_temp(suffix, value) \
static ssize_t show_temp_##suffix(struct device *dev, struct device_attribute *attr, char *buf) \
show_temp(hot_max, temp_hot_max);
show_temp(hot_hyst, temp_hot_hyst);
show_temp(os_max, temp_os_max);
show_temp(os_hyst, temp_os_hyst);
#define set_temp(suffix, value, reg) \
static ssize_t set_temp_##suffix(struct device *dev, struct device_attribute *attr, const char *buf, \
size_t count) \
set_temp(hot_max, temp_hot_max, LM80_REG_TEMP_HOT_MAX);
set_temp(hot_hyst, temp_hot_hyst, LM80_REG_TEMP_HOT_HYST);
set_temp(os_max, temp_os_max, LM80_REG_TEMP_OS_MAX);
set_temp(os_hyst, temp_os_hyst, LM80_REG_TEMP_OS_HYST);
static ssize_t show_alarms(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(in0_min, S_IWUSR | S_IRUGO,
show_in_min, set_in_min, 0);
static SENSOR_DEVICE_ATTR(in1_min, S_IWUSR | S_IRUGO,
show_in_min, set_in_min, 1);
static SENSOR_DEVICE_ATTR(in2_min, S_IWUSR | S_IRUGO,
show_in_min, set_in_min, 2);
static SENSOR_DEVICE_ATTR(in3_min, S_IWUSR | S_IRUGO,
show_in_min, set_in_min, 3);
static SENSOR_DEVICE_ATTR(in4_min, S_IWUSR | S_IRUGO,
show_in_min, set_in_min, 4);
static SENSOR_DEVICE_ATTR(in5_min, S_IWUSR | S_IRUGO,
show_in_min, set_in_min, 5);
static SENSOR_DEVICE_ATTR(in6_min, S_IWUSR | S_IRUGO,
show_in_min, set_in_min, 6);
static SENSOR_DEVICE_ATTR(in0_max, S_IWUSR | S_IRUGO,
show_in_max, set_in_max, 0);
static SENSOR_DEVICE_ATTR(in1_max, S_IWUSR | S_IRUGO,
show_in_max, set_in_max, 1);
static SENSOR_DEVICE_ATTR(in2_max, S_IWUSR | S_IRUGO,
show_in_max, set_in_max, 2);
static SENSOR_DEVICE_ATTR(in3_max, S_IWUSR | S_IRUGO,
show_in_max, set_in_max, 3);
static SENSOR_DEVICE_ATTR(in4_max, S_IWUSR | S_IRUGO,
show_in_max, set_in_max, 4);
static SENSOR_DEVICE_ATTR(in5_max, S_IWUSR | S_IRUGO,
show_in_max, set_in_max, 5);
static SENSOR_DEVICE_ATTR(in6_max, S_IWUSR | S_IRUGO,
show_in_max, set_in_max, 6);
static SENSOR_DEVICE_ATTR(in0_input, S_IRUGO, show_in_input, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_input, S_IRUGO, show_in_input, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_input, S_IRUGO, show_in_input, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_input, S_IRUGO, show_in_input, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_input, S_IRUGO, show_in_input, NULL, 4);
static SENSOR_DEVICE_ATTR(in5_input, S_IRUGO, show_in_input, NULL, 5);
static SENSOR_DEVICE_ATTR(in6_input, S_IRUGO, show_in_input, NULL, 6);
static SENSOR_DEVICE_ATTR(fan1_min, S_IWUSR | S_IRUGO,
show_fan_min, set_fan_min, 0);
static SENSOR_DEVICE_ATTR(fan2_min, S_IWUSR | S_IRUGO,
show_fan_min, set_fan_min, 1);
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, show_fan_input, NULL, 0);
static SENSOR_DEVICE_ATTR(fan2_input, S_IRUGO, show_fan_input, NULL, 1);
static SENSOR_DEVICE_ATTR(fan1_div, S_IWUSR | S_IRUGO,
show_fan_div, set_fan_div, 0);
static SENSOR_DEVICE_ATTR(fan2_div, S_IWUSR | S_IRUGO,
show_fan_div, set_fan_div, 1);
static DEVICE_ATTR(temp1_input, S_IRUGO, show_temp_input1, NULL);
static DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO, show_temp_hot_max,
set_temp_hot_max);
static DEVICE_ATTR(temp1_max_hyst, S_IWUSR | S_IRUGO, show_temp_hot_hyst,
set_temp_hot_hyst);
static DEVICE_ATTR(temp1_crit, S_IWUSR | S_IRUGO, show_temp_os_max,
set_temp_os_max);
static DEVICE_ATTR(temp1_crit_hyst, S_IWUSR | S_IRUGO, show_temp_os_hyst,
set_temp_os_hyst);
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(in5_alarm, S_IRUGO, show_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(in6_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL, 10);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL, 11);
static SENSOR_DEVICE_ATTR(temp1_max_alarm, S_IRUGO, show_alarm, NULL, 8);
static SENSOR_DEVICE_ATTR(temp1_crit_alarm, S_IRUGO, show_alarm, NULL, 13);
static struct attribute *lm80_attributes[] = ;
static const struct attribute_group lm80_group = ;
static int lm80_detect(struct i2c_client *client, struct i2c_board_info *info)
static int lm80_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int lm80_remove(struct i2c_client *client)
static int lm80_read_value(struct i2c_client *client, u8 reg)
static int lm80_write_value(struct i2c_client *client, u8 reg, u8 value)
static void lm80_init_client(struct i2c_client *client)
static struct lm80_data *lm80_update_device(struct device *dev)
static int __init sensors_lm80_init(void)
static void __exit sensors_lm80_exit(void)
MODULE_AUTHOR("Frodo Looijaard <frodol@dds.nl> and "
"Philip Edelbrock <phil@netroedge.com>");
MODULE_DESCRIPTION("LM80 driver");
MODULE_LICENSE("GPL");
module_init(sensors_lm80_init);
module_exit(sensors_lm80_exit);
