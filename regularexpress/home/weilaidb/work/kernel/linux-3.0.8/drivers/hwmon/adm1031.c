#define ADM1031_REG_FAN_SPEED(nr)	(0x08 + (nr))
#define ADM1031_REG_FAN_DIV(nr)		(0x20 + (nr))
#define ADM1031_REG_PWM			(0x22)
#define ADM1031_REG_FAN_MIN(nr)		(0x10 + (nr))
#define ADM1031_REG_FAN_FILTER		(0x23)
#define ADM1031_REG_TEMP_OFFSET(nr)	(0x0d + (nr))
#define ADM1031_REG_TEMP_MAX(nr)	(0x14 + 4 * (nr))
#define ADM1031_REG_TEMP_MIN(nr)	(0x15 + 4 * (nr))
#define ADM1031_REG_TEMP_CRIT(nr)	(0x16 + 4 * (nr))
#define ADM1031_REG_TEMP(nr)		(0x0a + (nr))
#define ADM1031_REG_AUTO_TEMP(nr)	(0x24 + (nr))
#define ADM1031_REG_STATUS(nr)		(0x2 + (nr))
#define ADM1031_REG_CONF1		0x00
#define ADM1031_REG_CONF2		0x01
#define ADM1031_REG_EXT_TEMP		0x06
#define ADM1031_CONF1_MONITOR_ENABLE	0x01
#define ADM1031_CONF1_PWM_INVERT	0x08
#define ADM1031_CONF1_AUTO_MODE		0x80
#define ADM1031_CONF2_PWM1_ENABLE	0x01
#define ADM1031_CONF2_PWM2_ENABLE	0x02
#define ADM1031_CONF2_TACH1_ENABLE	0x04
#define ADM1031_CONF2_TACH2_ENABLE	0x08
#define ADM1031_CONF2_TEMP_ENABLE(chan)	(0x10 << (chan))
#define ADM1031_UPDATE_RATE_MASK	0x1c
#define ADM1031_UPDATE_RATE_SHIFT	2
static const unsigned short normal_i2c[] = ;
enum chips ;
typedef u8 auto_chan_table_t[8][2];
struct adm1031_data ;
static int adm1031_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int adm1031_detect(struct i2c_client *client,
struct i2c_board_info *info);
static void adm1031_init_client(struct i2c_client *client);
static int adm1031_remove(struct i2c_client *client);
static struct adm1031_data *adm1031_update_device(struct device *dev);
static const struct i2c_device_id adm1031_id[] = ;
MODULE_DEVICE_TABLE(i2c, adm1031_id);
static struct i2c_driver adm1031_driver = ;
static inline u8 adm1031_read_value(struct i2c_client *client, u8 reg)
static inline int
adm1031_write_value(struct i2c_client *client, u8 reg, unsigned int value)
#define TEMP_TO_REG(val)		(((val) < 0 ? ((val - 500) / 1000) : \
((val + 500) / 1000)))
#define TEMP_FROM_REG(val)		((val) * 1000)
#define TEMP_FROM_REG_EXT(val, ext)	(TEMP_FROM_REG(val) + (ext) * 125)
#define TEMP_OFFSET_TO_REG(val)		(TEMP_TO_REG(val) & 0x8f)
#define TEMP_OFFSET_FROM_REG(val)	TEMP_FROM_REG((val) < 0 ? \
(val) | 0x70 : (val))
#define FAN_FROM_REG(reg, div)		((reg) ? (11250 * 60) / ((reg) * (div)) : 0)
static int FAN_TO_REG(int reg, int div)
#define FAN_DIV_FROM_REG(reg)		(1<<(((reg)&0xc0)>>6))
#define PWM_TO_REG(val)			(SENSORS_LIMIT((val), 0, 255) >> 4)
#define PWM_FROM_REG(val)		((val) << 4)
#define FAN_CHAN_FROM_REG(reg)		(((reg) >> 5) & 7)
#define FAN_CHAN_TO_REG(val, reg)	\
(((reg) & 0x1F) | (((val) << 5) & 0xe0))
#define AUTO_TEMP_MIN_TO_REG(val, reg)	\
((((val)/500) & 0xf8)|((reg) & 0x7))
#define AUTO_TEMP_RANGE_FROM_REG(reg)	(5000 * (1<< ((reg)&0x7)))
#define AUTO_TEMP_MIN_FROM_REG(reg)	(1000 * ((((reg) >> 3) & 0x1f) << 2))
#define AUTO_TEMP_MIN_FROM_REG_DEG(reg)	((((reg) >> 3) & 0x1f) << 2)
#define AUTO_TEMP_OFF_FROM_REG(reg)		\
(AUTO_TEMP_MIN_FROM_REG(reg) - 5000)
#define AUTO_TEMP_MAX_FROM_REG(reg)		\
(AUTO_TEMP_RANGE_FROM_REG(reg) +	\
AUTO_TEMP_MIN_FROM_REG(reg))
static int AUTO_TEMP_MAX_TO_REG(int val, int reg, int pwm)
#define GET_FAN_AUTO_BITFIELD(data, idx)	\
(*(data)->chan_select_table)[FAN_CHAN_FROM_REG((data)->conf1)][idx%2]
static const auto_chan_table_t auto_channel_select_table_adm1031 = ;
static const auto_chan_table_t auto_channel_select_table_adm1030 = ;
static int
get_fan_auto_nearest(struct adm1031_data *data,
int chan, u8 val, u8 reg, u8 * new_reg)
static ssize_t show_fan_auto_channel(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
set_fan_auto_channel(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(auto_fan1_channel, S_IRUGO | S_IWUSR,
show_fan_auto_channel, set_fan_auto_channel, 0);
static SENSOR_DEVICE_ATTR(auto_fan2_channel, S_IRUGO | S_IWUSR,
show_fan_auto_channel, set_fan_auto_channel, 1);
static ssize_t show_auto_temp_off(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_auto_temp_min(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
set_auto_temp_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_auto_temp_max(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
set_auto_temp_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define auto_temp_reg(offset)						\
static SENSOR_DEVICE_ATTR(auto_temp##offset##_off, S_IRUGO,		\
show_auto_temp_off, NULL, offset - 1);			\
static SENSOR_DEVICE_ATTR(auto_temp##offset##_min, S_IRUGO | S_IWUSR,	\
show_auto_temp_min, set_auto_temp_min, offset - 1);	\
static SENSOR_DEVICE_ATTR(auto_temp##offset##_max, S_IRUGO | S_IWUSR,	\
show_auto_temp_max, set_auto_temp_max, offset - 1)
auto_temp_reg(1);
auto_temp_reg(2);
auto_temp_reg(3);
static ssize_t show_pwm(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_pwm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(pwm1, S_IRUGO | S_IWUSR, show_pwm, set_pwm, 0);
static SENSOR_DEVICE_ATTR(pwm2, S_IRUGO | S_IWUSR, show_pwm, set_pwm, 1);
static SENSOR_DEVICE_ATTR(auto_fan1_min_pwm, S_IRUGO | S_IWUSR,
show_pwm, set_pwm, 0);
static SENSOR_DEVICE_ATTR(auto_fan2_min_pwm, S_IRUGO | S_IWUSR,
show_pwm, set_pwm, 1);
static int trust_fan_readings(struct adm1031_data *data, int chan)
static ssize_t show_fan(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_fan_div(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_fan_min(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_fan_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_fan_div(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define fan_offset(offset)						\
static SENSOR_DEVICE_ATTR(fan##offset##_input, S_IRUGO,			\
show_fan, NULL, offset - 1);				\
static SENSOR_DEVICE_ATTR(fan##offset##_min, S_IRUGO | S_IWUSR,		\
show_fan_min, set_fan_min, offset - 1);			\
static SENSOR_DEVICE_ATTR(fan##offset##_div, S_IRUGO | S_IWUSR,		\
show_fan_div, set_fan_div, offset - 1)
fan_offset(1);
fan_offset(2);
static ssize_t show_temp(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_temp_offset(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_temp_min(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_temp_max(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_temp_crit(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_temp_offset(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
static ssize_t set_temp_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_temp_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_temp_crit(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define temp_reg(offset)						\
static SENSOR_DEVICE_ATTR(temp##offset##_input, S_IRUGO,		\
show_temp, NULL, offset - 1);				\
static SENSOR_DEVICE_ATTR(temp##offset##_offset, S_IRUGO | S_IWUSR,	\
show_temp_offset, set_temp_offset, offset - 1);		\
static SENSOR_DEVICE_ATTR(temp##offset##_min, S_IRUGO | S_IWUSR,	\
show_temp_min, set_temp_min, offset - 1);		\
static SENSOR_DEVICE_ATTR(temp##offset##_max, S_IRUGO | S_IWUSR,	\
show_temp_max, set_temp_max, offset - 1);		\
static SENSOR_DEVICE_ATTR(temp##offset##_crit, S_IRUGO | S_IWUSR,	\
show_temp_crit, set_temp_crit, offset - 1)
temp_reg(1);
temp_reg(2);
temp_reg(3);
static ssize_t show_alarms(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static ssize_t show_alarm(struct device *dev,
struct device_attribute *attr, char *buf)
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(fan1_fault, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(temp2_max_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(temp2_min_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(temp2_crit_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(temp2_fault, S_IRUGO, show_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(temp1_max_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(temp1_min_alarm, S_IRUGO, show_alarm, NULL, 7);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL, 8);
static SENSOR_DEVICE_ATTR(fan2_fault, S_IRUGO, show_alarm, NULL, 9);
static SENSOR_DEVICE_ATTR(temp3_max_alarm, S_IRUGO, show_alarm, NULL, 10);
static SENSOR_DEVICE_ATTR(temp3_min_alarm, S_IRUGO, show_alarm, NULL, 11);
static SENSOR_DEVICE_ATTR(temp3_crit_alarm, S_IRUGO, show_alarm, NULL, 12);
static SENSOR_DEVICE_ATTR(temp3_fault, S_IRUGO, show_alarm, NULL, 13);
static SENSOR_DEVICE_ATTR(temp1_crit_alarm, S_IRUGO, show_alarm, NULL, 14);
static const unsigned int update_intervals[] = ;
static ssize_t show_update_interval(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_update_interval(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(update_interval, S_IRUGO | S_IWUSR, show_update_interval,
set_update_interval);
static struct attribute *adm1031_attributes[] = ;
static const struct attribute_group adm1031_group = ;
static struct attribute *adm1031_attributes_opt[] = ;
static const struct attribute_group adm1031_group_opt = ;
static int adm1031_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int adm1031_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int adm1031_remove(struct i2c_client *client)
static void adm1031_init_client(struct i2c_client *client)
static struct adm1031_data *adm1031_update_device(struct device *dev)
static int __init sensors_adm1031_init(void)
static void __exit sensors_adm1031_exit(void)
MODULE_AUTHOR("Alexandre d'Alton <alex@alexdalton.org>");
MODULE_DESCRIPTION("ADM1031/ADM1030 driver");
MODULE_LICENSE("GPL");
module_init(sensors_adm1031_init);
module_exit(sensors_adm1031_exit);
