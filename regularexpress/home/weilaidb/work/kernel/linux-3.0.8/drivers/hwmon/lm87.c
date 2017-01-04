static const unsigned short normal_i2c[] = ;
enum chips ;
#define LM87_REG_IN(nr)			(0x20 + (nr))
#define LM87_REG_IN_MAX(nr)		(0x2B + (nr) * 2)
#define LM87_REG_IN_MIN(nr)		(0x2C + (nr) * 2)
#define LM87_REG_AIN(nr)		(0x28 + (nr))
#define LM87_REG_AIN_MIN(nr)		(0x1A + (nr))
#define LM87_REG_AIN_MAX(nr)		(0x3B + (nr))
static u8 LM87_REG_TEMP[3] = ;
static u8 LM87_REG_TEMP_HIGH[3] = ;
static u8 LM87_REG_TEMP_LOW[3] = ;
#define LM87_REG_TEMP_HW_INT_LOCK	0x13
#define LM87_REG_TEMP_HW_EXT_LOCK	0x14
#define LM87_REG_TEMP_HW_INT		0x17
#define LM87_REG_TEMP_HW_EXT		0x18
#define LM87_REG_FAN(nr)		(0x28 + (nr))
#define LM87_REG_FAN_MIN(nr)		(0x3B + (nr))
#define LM87_REG_AOUT			0x19
#define LM87_REG_CONFIG			0x40
#define LM87_REG_CHANNEL_MODE		0x16
#define LM87_REG_VID_FAN_DIV		0x47
#define LM87_REG_VID4			0x49
#define LM87_REG_ALARMS1		0x41
#define LM87_REG_ALARMS2		0x42
#define LM87_REG_COMPANY_ID		0x3E
#define LM87_REG_REVISION		0x3F
#define IN_FROM_REG(reg,scale)	(((reg) * (scale) + 96) / 192)
#define IN_TO_REG(val,scale)	((val) <= 0 ? 0 : \
(val) * 192 >= (scale) * 255 ? 255 : \
((val) * 192 + (scale)/2) / (scale))
#define TEMP_FROM_REG(reg)	((reg) * 1000)
#define TEMP_TO_REG(val)	((val) <= -127500 ? -128 : \
(val) >= 126500 ? 127 : \
(((val) < 0 ? (val)-500 : (val)+500) / 1000))
#define FAN_FROM_REG(reg,div)	((reg) == 255 || (reg) == 0 ? 0 : \
(1350000 + (reg)*(div) / 2) / ((reg)*(div)))
#define FAN_TO_REG(val,div)	((val)*(div) * 255 <= 1350000 ? 255 : \
(1350000 + (val)*(div) / 2) / ((val)*(div)))
#define FAN_DIV_FROM_REG(reg)	(1 << (reg))
#define AOUT_FROM_REG(reg)	(((reg) * 98 + 5) / 10)
#define AOUT_TO_REG(val)	((val) <= 0 ? 0 : \
(val) >= 2500 ? 255 : \
((val) * 10 + 49) / 98)
#define CHAN_NO_FAN(nr)		(1 << (nr))
#define CHAN_TEMP3		(1 << 2)
#define CHAN_VCC_5V		(1 << 3)
#define CHAN_NO_VID		(1 << 7)
static int lm87_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int lm87_detect(struct i2c_client *new_client,
struct i2c_board_info *info);
static void lm87_init_client(struct i2c_client *client);
static int lm87_remove(struct i2c_client *client);
static struct lm87_data *lm87_update_device(struct device *dev);
static const struct i2c_device_id lm87_id[] = ;
MODULE_DEVICE_TABLE(i2c, lm87_id);
static struct i2c_driver lm87_driver = ;
struct lm87_data ;
static inline int lm87_read_value(struct i2c_client *client, u8 reg)
static inline int lm87_write_value(struct i2c_client *client, u8 reg, u8 value)
#define show_in(offset) \
static ssize_t show_in##offset##_input(struct device *dev, struct device_attribute *attr, char *buf) \
\
static ssize_t show_in##offset##_min(struct device *dev, struct device_attribute *attr, char *buf) \
\
static ssize_t show_in##offset##_max(struct device *dev, struct device_attribute *attr, char *buf) \
\
static DEVICE_ATTR(in##offset##_input, S_IRUGO, \
show_in##offset##_input, NULL);
show_in(0);
show_in(1);
show_in(2);
show_in(3);
show_in(4);
show_in(5);
show_in(6);
show_in(7);
static void set_in_min(struct device *dev, const char *buf, int nr)
static void set_in_max(struct device *dev, const char *buf, int nr)
#define set_in(offset) \
static ssize_t set_in##offset##_min(struct device *dev, struct device_attribute *attr, \
const char *buf, size_t count) \
\
static ssize_t set_in##offset##_max(struct device *dev, struct device_attribute *attr, \
const char *buf, size_t count) \
\
static DEVICE_ATTR(in##offset##_min, S_IRUGO | S_IWUSR, \
show_in##offset##_min, set_in##offset##_min); \
static DEVICE_ATTR(in##offset##_max, S_IRUGO | S_IWUSR, \
show_in##offset##_max, set_in##offset##_max);
set_in(0);
set_in(1);
set_in(2);
set_in(3);
set_in(4);
set_in(5);
set_in(6);
set_in(7);
#define show_temp(offset) \
static ssize_t show_temp##offset##_input(struct device *dev, struct device_attribute *attr, char *buf) \
\
static ssize_t show_temp##offset##_low(struct device *dev, struct device_attribute *attr, char *buf) \
\
static ssize_t show_temp##offset##_high(struct device *dev, struct device_attribute *attr, char *buf) \
\
static DEVICE_ATTR(temp##offset##_input, S_IRUGO, \
show_temp##offset##_input, NULL);
show_temp(1);
show_temp(2);
show_temp(3);
static void set_temp_low(struct device *dev, const char *buf, int nr)
static void set_temp_high(struct device *dev, const char *buf, int nr)
#define set_temp(offset) \
static ssize_t set_temp##offset##_low(struct device *dev, struct device_attribute *attr, \
const char *buf, size_t count) \
\
static ssize_t set_temp##offset##_high(struct device *dev, struct device_attribute *attr, \
const char *buf, size_t count) \
\
static DEVICE_ATTR(temp##offset##_max, S_IRUGO | S_IWUSR, \
show_temp##offset##_high, set_temp##offset##_high); \
static DEVICE_ATTR(temp##offset##_min, S_IRUGO | S_IWUSR, \
show_temp##offset##_low, set_temp##offset##_low);
set_temp(1);
set_temp(2);
set_temp(3);
static ssize_t show_temp_crit_int(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_temp_crit_ext(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(temp1_crit, S_IRUGO, show_temp_crit_int, NULL);
static DEVICE_ATTR(temp2_crit, S_IRUGO, show_temp_crit_ext, NULL);
static DEVICE_ATTR(temp3_crit, S_IRUGO, show_temp_crit_ext, NULL);
#define show_fan(offset) \
static ssize_t show_fan##offset##_input(struct device *dev, struct device_attribute *attr, char *buf) \
\
static ssize_t show_fan##offset##_min(struct device *dev, struct device_attribute *attr, char *buf) \
\
static ssize_t show_fan##offset##_div(struct device *dev, struct device_attribute *attr, char *buf) \
\
static DEVICE_ATTR(fan##offset##_input, S_IRUGO, \
show_fan##offset##_input, NULL);
show_fan(1);
show_fan(2);
static void set_fan_min(struct device *dev, const char *buf, int nr)
static ssize_t set_fan_div(struct device *dev, const char *buf,
size_t count, int nr)
#define set_fan(offset) \
static ssize_t set_fan##offset##_min(struct device *dev, struct device_attribute *attr, const char *buf, \
size_t count) \
\
static ssize_t set_fan##offset##_div(struct device *dev, struct device_attribute *attr, const char *buf, \
size_t count) \
\
static DEVICE_ATTR(fan##offset##_min, S_IRUGO | S_IWUSR, \
show_fan##offset##_min, set_fan##offset##_min); \
static DEVICE_ATTR(fan##offset##_div, S_IRUGO | S_IWUSR, \
show_fan##offset##_div, set_fan##offset##_div);
set_fan(1);
set_fan(2);
static ssize_t show_alarms(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static ssize_t show_vid(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(cpu0_vid, S_IRUGO, show_vid, NULL);
static ssize_t show_vrm(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_vrm(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(vrm, S_IRUGO | S_IWUSR, show_vrm, set_vrm);
static ssize_t show_aout(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_aout(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(aout_output, S_IRUGO | S_IWUSR, show_aout, set_aout);
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, show_alarm, NULL, 8);
static SENSOR_DEVICE_ATTR(in5_alarm, S_IRUGO, show_alarm, NULL, 9);
static SENSOR_DEVICE_ATTR(in6_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(in7_alarm, S_IRUGO, show_alarm, NULL, 7);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(temp2_alarm, S_IRUGO, show_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(temp3_alarm, S_IRUGO, show_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL, 7);
static SENSOR_DEVICE_ATTR(temp2_fault, S_IRUGO, show_alarm, NULL, 14);
static SENSOR_DEVICE_ATTR(temp3_fault, S_IRUGO, show_alarm, NULL, 15);
static struct attribute *lm87_attributes[] = ;
static const struct attribute_group lm87_group = ;
static struct attribute *lm87_attributes_opt[] = ;
static const struct attribute_group lm87_group_opt = ;
static int lm87_detect(struct i2c_client *new_client,
struct i2c_board_info *info)
static int lm87_probe(struct i2c_client *new_client,
const struct i2c_device_id *id)
static void lm87_init_client(struct i2c_client *client)
static int lm87_remove(struct i2c_client *client)
static struct lm87_data *lm87_update_device(struct device *dev)
static int __init sensors_lm87_init(void)
static void __exit sensors_lm87_exit(void)
MODULE_AUTHOR("Jean Delvare <khali@linux-fr.org> and others");
MODULE_DESCRIPTION("LM87 driver");
MODULE_LICENSE("GPL");
module_init(sensors_lm87_init);
module_exit(sensors_lm87_exit);
