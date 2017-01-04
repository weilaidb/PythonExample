static const unsigned short normal_i2c[] = ;
enum chips ;
#define	LM85_REG_IN(nr)			(0x20 + (nr))
#define	LM85_REG_IN_MIN(nr)		(0x44 + (nr) * 2)
#define	LM85_REG_IN_MAX(nr)		(0x45 + (nr) * 2)
#define	LM85_REG_TEMP(nr)		(0x25 + (nr))
#define	LM85_REG_TEMP_MIN(nr)		(0x4e + (nr) * 2)
#define	LM85_REG_TEMP_MAX(nr)		(0x4f + (nr) * 2)
#define	LM85_REG_FAN(nr)		(0x28 + (nr) * 2)
#define	LM85_REG_FAN_MIN(nr)		(0x54 + (nr) * 2)
#define	LM85_REG_PWM(nr)		(0x30 + (nr))
#define	LM85_REG_COMPANY		0x3e
#define	LM85_REG_VERSTEP		0x3f
#define	ADT7468_REG_CFG5		0x7c
#define		ADT7468_OFF64		(1 << 0)
#define		ADT7468_HFPWM		(1 << 1)
#define	IS_ADT7468_OFF64(data)		\
((data)->type == adt7468 && !((data)->cfg5 & ADT7468_OFF64))
#define	IS_ADT7468_HFPWM(data)		\
((data)->type == adt7468 && !((data)->cfg5 & ADT7468_HFPWM))
#define	LM85_COMPANY_NATIONAL		0x01
#define	LM85_COMPANY_ANALOG_DEV		0x41
#define	LM85_COMPANY_SMSC		0x5c
#define	LM85_VERSTEP_VMASK              0xf0
#define	LM85_VERSTEP_GENERIC		0x60
#define	LM85_VERSTEP_GENERIC2		0x70
#define	LM85_VERSTEP_LM85C		0x60
#define	LM85_VERSTEP_LM85B		0x62
#define	LM85_VERSTEP_LM96000_1		0x68
#define	LM85_VERSTEP_LM96000_2		0x69
#define	LM85_VERSTEP_ADM1027		0x60
#define	LM85_VERSTEP_ADT7463		0x62
#define	LM85_VERSTEP_ADT7463C		0x6A
#define	LM85_VERSTEP_ADT7468_1		0x71
#define	LM85_VERSTEP_ADT7468_2		0x72
#define	LM85_VERSTEP_EMC6D100_A0        0x60
#define	LM85_VERSTEP_EMC6D100_A1        0x61
#define	LM85_VERSTEP_EMC6D102		0x65
#define	LM85_VERSTEP_EMC6D103_A0	0x68
#define	LM85_VERSTEP_EMC6D103_A1	0x69
#define	LM85_VERSTEP_EMC6D103S		0x6A
#define	LM85_REG_CONFIG			0x40
#define	LM85_REG_ALARM1			0x41
#define	LM85_REG_ALARM2			0x42
#define	LM85_REG_VID			0x43
#define	LM85_REG_AFAN_CONFIG(nr)	(0x5c + (nr))
#define	LM85_REG_AFAN_RANGE(nr)		(0x5f + (nr))
#define	LM85_REG_AFAN_SPIKE1		0x62
#define	LM85_REG_AFAN_MINPWM(nr)	(0x64 + (nr))
#define	LM85_REG_AFAN_LIMIT(nr)		(0x67 + (nr))
#define	LM85_REG_AFAN_CRITICAL(nr)	(0x6a + (nr))
#define	LM85_REG_AFAN_HYST1		0x6d
#define	LM85_REG_AFAN_HYST2		0x6e
#define	ADM1027_REG_EXTEND_ADC1		0x76
#define	ADM1027_REG_EXTEND_ADC2		0x77
#define EMC6D100_REG_ALARM3             0x7d
#define	EMC6D100_REG_IN(nr)             (0x70 + ((nr) - 5))
#define	EMC6D100_REG_IN_MIN(nr)         (0x73 + ((nr) - 5) * 2)
#define	EMC6D100_REG_IN_MAX(nr)         (0x74 + ((nr) - 5) * 2)
#define	EMC6D102_REG_EXTEND_ADC1	0x85
#define	EMC6D102_REG_EXTEND_ADC2	0x86
#define	EMC6D102_REG_EXTEND_ADC3	0x87
#define	EMC6D102_REG_EXTEND_ADC4	0x88
static const int lm85_scaling[] = ;
#define SCALE(val, from, to)	(((val) * (to) + ((from) / 2)) / (from))
#define INS_TO_REG(n, val)	\
SENSORS_LIMIT(SCALE(val, lm85_scaling[n], 192), 0, 255)
#define INSEXT_FROM_REG(n, val, ext)	\
SCALE(((val) << 4) + (ext), 192 << 4, lm85_scaling[n])
#define INS_FROM_REG(n, val)	SCALE((val), 192, lm85_scaling[n])
static inline u16 FAN_TO_REG(unsigned long val)
#define FAN_FROM_REG(val)	((val) == 0 ? -1 : (val) == 0xffff ? 0 : \
5400000 / (val))
#define TEMP_TO_REG(val)	\
SENSORS_LIMIT(SCALE(val, 1000, 1), -127, 127)
#define TEMPEXT_FROM_REG(val, ext)	\
SCALE(((val) << 4) + (ext), 16, 1000)
#define TEMP_FROM_REG(val)	((val) * 1000)
#define PWM_TO_REG(val)			SENSORS_LIMIT(val, 0, 255)
#define PWM_FROM_REG(val)		(val)
static const int lm85_range_map[] = ;
static int RANGE_TO_REG(int range)
#define RANGE_FROM_REG(val)	lm85_range_map[(val) & 0x0f]
static const int lm85_freq_map[8] = ;
static const int adm1027_freq_map[8] = ;
static int FREQ_TO_REG(const int *map, int freq)
static int FREQ_FROM_REG(const int *map, u8 reg)
static const int lm85_zone_map[] = ;
#define ZONE_FROM_REG(val)	lm85_zone_map[(val) >> 5]
static int ZONE_TO_REG(int zone)
#define HYST_TO_REG(val)	SENSORS_LIMIT(((val) + 500) / 1000, 0, 15)
#define HYST_FROM_REG(val)	((val) * 1000)
#define LM85_DATA_INTERVAL  (HZ + HZ / 2)
#define LM85_CONFIG_INTERVAL  (1 * 60 * HZ)
struct lm85_zone ;
struct lm85_autofan ;
struct lm85_data ;
static int lm85_detect(struct i2c_client *client, struct i2c_board_info *info);
static int lm85_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int lm85_remove(struct i2c_client *client);
static int lm85_read_value(struct i2c_client *client, u8 reg);
static void lm85_write_value(struct i2c_client *client, u8 reg, int value);
static struct lm85_data *lm85_update_device(struct device *dev);
static const struct i2c_device_id lm85_id[] = ;
MODULE_DEVICE_TABLE(i2c, lm85_id);
static struct i2c_driver lm85_driver = ;
static ssize_t show_fan(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_fan_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_fan_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define show_fan_offset(offset)						\
static SENSOR_DEVICE_ATTR(fan##offset##_input, S_IRUGO,			\
show_fan, NULL, offset - 1);				\
static SENSOR_DEVICE_ATTR(fan##offset##_min, S_IRUGO | S_IWUSR,		\
show_fan_min, set_fan_min, offset - 1)
show_fan_offset(1);
show_fan_offset(2);
show_fan_offset(3);
show_fan_offset(4);
static ssize_t show_vid_reg(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(cpu0_vid, S_IRUGO, show_vid_reg, NULL);
static ssize_t show_vrm_reg(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_vrm_reg(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(vrm, S_IRUGO | S_IWUSR, show_vrm_reg, store_vrm_reg);
static ssize_t show_alarms_reg(struct device *dev, struct device_attribute
*attr, char *buf)
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms_reg, NULL);
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, show_alarm, NULL, 8);
static SENSOR_DEVICE_ATTR(in5_alarm, S_IRUGO, show_alarm, NULL, 18);
static SENSOR_DEVICE_ATTR(in6_alarm, S_IRUGO, show_alarm, NULL, 16);
static SENSOR_DEVICE_ATTR(in7_alarm, S_IRUGO, show_alarm, NULL, 17);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(temp1_fault, S_IRUGO, show_alarm, NULL, 14);
static SENSOR_DEVICE_ATTR(temp2_alarm, S_IRUGO, show_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(temp3_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(temp3_fault, S_IRUGO, show_alarm, NULL, 15);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL, 10);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL, 11);
static SENSOR_DEVICE_ATTR(fan3_alarm, S_IRUGO, show_alarm, NULL, 12);
static SENSOR_DEVICE_ATTR(fan4_alarm, S_IRUGO, show_alarm, NULL, 13);
static ssize_t show_pwm(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_pwm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_pwm_enable(struct device *dev, struct device_attribute
*attr, char *buf)
static ssize_t set_pwm_enable(struct device *dev, struct device_attribute
*attr, const char *buf, size_t count)
static ssize_t show_pwm_freq(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_pwm_freq(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
#define show_pwm_reg(offset)						\
static SENSOR_DEVICE_ATTR(pwm##offset, S_IRUGO | S_IWUSR,		\
show_pwm, set_pwm, offset - 1);				\
static SENSOR_DEVICE_ATTR(pwm##offset##_enable, S_IRUGO | S_IWUSR,	\
show_pwm_enable, set_pwm_enable, offset - 1);		\
static SENSOR_DEVICE_ATTR(pwm##offset##_freq, S_IRUGO | S_IWUSR,	\
show_pwm_freq, set_pwm_freq, offset - 1)
show_pwm_reg(1);
show_pwm_reg(2);
show_pwm_reg(3);
static ssize_t show_in(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_in_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_in_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_in_max(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_in_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define show_in_reg(offset)						\
static SENSOR_DEVICE_ATTR(in##offset##_input, S_IRUGO,			\
show_in, NULL, offset);					\
static SENSOR_DEVICE_ATTR(in##offset##_min, S_IRUGO | S_IWUSR,		\
show_in_min, set_in_min, offset);			\
static SENSOR_DEVICE_ATTR(in##offset##_max, S_IRUGO | S_IWUSR,		\
show_in_max, set_in_max, offset)
show_in_reg(0);
show_in_reg(1);
show_in_reg(2);
show_in_reg(3);
show_in_reg(4);
show_in_reg(5);
show_in_reg(6);
show_in_reg(7);
static ssize_t show_temp(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_temp_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_temp_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_temp_max(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_temp_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define show_temp_reg(offset)						\
static SENSOR_DEVICE_ATTR(temp##offset##_input, S_IRUGO,		\
show_temp, NULL, offset - 1);				\
static SENSOR_DEVICE_ATTR(temp##offset##_min, S_IRUGO | S_IWUSR,	\
show_temp_min, set_temp_min, offset - 1);		\
static SENSOR_DEVICE_ATTR(temp##offset##_max, S_IRUGO | S_IWUSR,	\
show_temp_max, set_temp_max, offset - 1);
show_temp_reg(1);
show_temp_reg(2);
show_temp_reg(3);
static ssize_t show_pwm_auto_channels(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_pwm_auto_channels(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_pwm_auto_pwm_min(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_pwm_auto_pwm_min(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_pwm_auto_pwm_minctl(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_pwm_auto_pwm_minctl(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
#define pwm_auto(offset)						\
static SENSOR_DEVICE_ATTR(pwm##offset##_auto_channels,			\
S_IRUGO | S_IWUSR, show_pwm_auto_channels,		\
set_pwm_auto_channels, offset - 1);			\
static SENSOR_DEVICE_ATTR(pwm##offset##_auto_pwm_min,			\
S_IRUGO | S_IWUSR, show_pwm_auto_pwm_min,		\
set_pwm_auto_pwm_min, offset - 1);			\
static SENSOR_DEVICE_ATTR(pwm##offset##_auto_pwm_minctl,		\
S_IRUGO | S_IWUSR, show_pwm_auto_pwm_minctl,		\
set_pwm_auto_pwm_minctl, offset - 1)
pwm_auto(1);
pwm_auto(2);
pwm_auto(3);
static ssize_t show_temp_auto_temp_off(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_temp_auto_temp_off(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_temp_auto_temp_min(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_temp_auto_temp_min(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_temp_auto_temp_max(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_temp_auto_temp_max(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_temp_auto_temp_crit(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_temp_auto_temp_crit(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
#define temp_auto(offset)						\
static SENSOR_DEVICE_ATTR(temp##offset##_auto_temp_off,			\
S_IRUGO | S_IWUSR, show_temp_auto_temp_off,		\
set_temp_auto_temp_off, offset - 1);			\
static SENSOR_DEVICE_ATTR(temp##offset##_auto_temp_min,			\
S_IRUGO | S_IWUSR, show_temp_auto_temp_min,		\
set_temp_auto_temp_min, offset - 1);			\
static SENSOR_DEVICE_ATTR(temp##offset##_auto_temp_max,			\
S_IRUGO | S_IWUSR, show_temp_auto_temp_max,		\
set_temp_auto_temp_max, offset - 1);			\
static SENSOR_DEVICE_ATTR(temp##offset##_auto_temp_crit,		\
S_IRUGO | S_IWUSR, show_temp_auto_temp_crit,		\
set_temp_auto_temp_crit, offset - 1);
temp_auto(1);
temp_auto(2);
temp_auto(3);
static struct attribute *lm85_attributes[] = ;
static const struct attribute_group lm85_group = ;
static struct attribute *lm85_attributes_minctl[] = ;
static const struct attribute_group lm85_group_minctl = ;
static struct attribute *lm85_attributes_temp_off[] = ;
static const struct attribute_group lm85_group_temp_off = ;
static struct attribute *lm85_attributes_in4[] = ;
static const struct attribute_group lm85_group_in4 = ;
static struct attribute *lm85_attributes_in567[] = ;
static const struct attribute_group lm85_group_in567 = ;
static void lm85_init_client(struct i2c_client *client)
static int lm85_is_fake(struct i2c_client *client)
static int lm85_detect(struct i2c_client *client, struct i2c_board_info *info)
static void lm85_remove_files(struct i2c_client *client, struct lm85_data *data)
static int lm85_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int lm85_remove(struct i2c_client *client)
static int lm85_read_value(struct i2c_client *client, u8 reg)
static void lm85_write_value(struct i2c_client *client, u8 reg, int value)
static struct lm85_data *lm85_update_device(struct device *dev)
static int __init sm_lm85_init(void)
static void __exit sm_lm85_exit(void)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Philip Pokorny <ppokorny@penguincomputing.com>, "
"Margit Schubert-While <margitsw@t-online.de>, "
"Justin Thiessen <jthiessen@penguincomputing.com>");
MODULE_DESCRIPTION("LM85-B, LM85-C driver");
module_init(sm_lm85_init);
module_exit(sm_lm85_exit);
