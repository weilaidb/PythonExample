static const unsigned short normal_i2c[] = ;
enum chips ;
#define GL518_REG_CHIP_ID	0x00
#define GL518_REG_REVISION	0x01
#define GL518_REG_VENDOR_ID	0x02
#define GL518_REG_CONF		0x03
#define GL518_REG_TEMP_IN	0x04
#define GL518_REG_TEMP_MAX	0x05
#define GL518_REG_TEMP_HYST	0x06
#define GL518_REG_FAN_COUNT	0x07
#define GL518_REG_FAN_LIMIT	0x08
#define GL518_REG_VIN1_LIMIT	0x09
#define GL518_REG_VIN2_LIMIT	0x0a
#define GL518_REG_VIN3_LIMIT	0x0b
#define GL518_REG_VDD_LIMIT	0x0c
#define GL518_REG_VIN3		0x0d
#define GL518_REG_MISC		0x0f
#define GL518_REG_ALARM		0x10
#define GL518_REG_MASK		0x11
#define GL518_REG_INT		0x12
#define GL518_REG_VIN2		0x13
#define GL518_REG_VIN1		0x14
#define GL518_REG_VDD		0x15
#define RAW_FROM_REG(val)	val
#define BOOL_FROM_REG(val)	((val)?0:1)
#define BOOL_TO_REG(val)	((val)?0:1)
#define TEMP_TO_REG(val)	(SENSORS_LIMIT(((((val)<0? \
(val)-500:(val)+500)/1000)+119),0,255))
#define TEMP_FROM_REG(val)	(((val) - 119) * 1000)
static inline u8 FAN_TO_REG(long rpm, int div)
#define FAN_FROM_REG(val,div)	((val)==0 ? 0 : (480000/((val)*(div))))
#define IN_TO_REG(val)		(SENSORS_LIMIT((((val)+9)/19),0,255))
#define IN_FROM_REG(val)	((val)*19)
#define VDD_TO_REG(val)		(SENSORS_LIMIT((((val)*4+47)/95),0,255))
#define VDD_FROM_REG(val)	(((val)*95+2)/4)
#define DIV_FROM_REG(val)	(1 << (val))
#define BEEP_MASK_TO_REG(val)	((val) & 0x7f & data->alarm_mask)
#define BEEP_MASK_FROM_REG(val)	((val) & 0x7f)
struct gl518_data ;
static int gl518_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int gl518_detect(struct i2c_client *client, struct i2c_board_info *info);
static void gl518_init_client(struct i2c_client *client);
static int gl518_remove(struct i2c_client *client);
static int gl518_read_value(struct i2c_client *client, u8 reg);
static int gl518_write_value(struct i2c_client *client, u8 reg, u16 value);
static struct gl518_data *gl518_update_device(struct device *dev);
static const struct i2c_device_id gl518_id[] = ;
MODULE_DEVICE_TABLE(i2c, gl518_id);
static struct i2c_driver gl518_driver = ;
#define show(type, suffix, value)					\
static ssize_t show_##suffix(struct device *dev, struct device_attribute *attr, char *buf)		\
show(TEMP, temp_input1, temp_in);
show(TEMP, temp_max1, temp_max);
show(TEMP, temp_hyst1, temp_hyst);
show(BOOL, fan_auto1, fan_auto1);
show(VDD, in_input0, voltage_in[0]);
show(IN, in_input1, voltage_in[1]);
show(IN, in_input2, voltage_in[2]);
show(IN, in_input3, voltage_in[3]);
show(VDD, in_min0, voltage_min[0]);
show(IN, in_min1, voltage_min[1]);
show(IN, in_min2, voltage_min[2]);
show(IN, in_min3, voltage_min[3]);
show(VDD, in_max0, voltage_max[0]);
show(IN, in_max1, voltage_max[1]);
show(IN, in_max2, voltage_max[2]);
show(IN, in_max3, voltage_max[3]);
show(RAW, alarms, alarms);
show(BOOL, beep_enable, beep_enable);
show(BEEP_MASK, beep_mask, beep_mask);
static ssize_t show_fan_input(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_fan_min(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_fan_div(struct device *dev,
struct device_attribute *attr, char *buf)
#define set(type, suffix, value, reg)					\
static ssize_t set_##suffix(struct device *dev, struct device_attribute *attr, const char *buf,	\
size_t count)							\
#define set_bits(type, suffix, value, reg, mask, shift)			\
static ssize_t set_##suffix(struct device *dev, struct device_attribute *attr, const char *buf,	\
size_t count)							\
#define set_low(type, suffix, value, reg)				\
set_bits(type, suffix, value, reg, 0x00ff, 0)
#define set_high(type, suffix, value, reg)				\
set_bits(type, suffix, value, reg, 0xff00, 8)
set(TEMP, temp_max1, temp_max, GL518_REG_TEMP_MAX);
set(TEMP, temp_hyst1, temp_hyst, GL518_REG_TEMP_HYST);
set_bits(BOOL, fan_auto1, fan_auto1, GL518_REG_MISC, 0x08, 3);
set_low(VDD, in_min0, voltage_min[0], GL518_REG_VDD_LIMIT);
set_low(IN, in_min1, voltage_min[1], GL518_REG_VIN1_LIMIT);
set_low(IN, in_min2, voltage_min[2], GL518_REG_VIN2_LIMIT);
set_low(IN, in_min3, voltage_min[3], GL518_REG_VIN3_LIMIT);
set_high(VDD, in_max0, voltage_max[0], GL518_REG_VDD_LIMIT);
set_high(IN, in_max1, voltage_max[1], GL518_REG_VIN1_LIMIT);
set_high(IN, in_max2, voltage_max[2], GL518_REG_VIN2_LIMIT);
set_high(IN, in_max3, voltage_max[3], GL518_REG_VIN3_LIMIT);
set_bits(BOOL, beep_enable, beep_enable, GL518_REG_CONF, 0x04, 2);
set(BEEP_MASK, beep_mask, beep_mask, GL518_REG_ALARM);
static ssize_t set_fan_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_fan_div(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(temp1_input, S_IRUGO, show_temp_input1, NULL);
static DEVICE_ATTR(temp1_max, S_IWUSR|S_IRUGO, show_temp_max1, set_temp_max1);
static DEVICE_ATTR(temp1_max_hyst, S_IWUSR|S_IRUGO,
show_temp_hyst1, set_temp_hyst1);
static DEVICE_ATTR(fan1_auto, S_IWUSR|S_IRUGO, show_fan_auto1, set_fan_auto1);
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, show_fan_input, NULL, 0);
static SENSOR_DEVICE_ATTR(fan2_input, S_IRUGO, show_fan_input, NULL, 1);
static SENSOR_DEVICE_ATTR(fan1_min, S_IWUSR|S_IRUGO,
show_fan_min, set_fan_min, 0);
static SENSOR_DEVICE_ATTR(fan2_min, S_IWUSR|S_IRUGO,
show_fan_min, set_fan_min, 1);
static SENSOR_DEVICE_ATTR(fan1_div, S_IWUSR|S_IRUGO,
show_fan_div, set_fan_div, 0);
static SENSOR_DEVICE_ATTR(fan2_div, S_IWUSR|S_IRUGO,
show_fan_div, set_fan_div, 1);
static DEVICE_ATTR(in0_input, S_IRUGO, show_in_input0, NULL);
static DEVICE_ATTR(in1_input, S_IRUGO, show_in_input1, NULL);
static DEVICE_ATTR(in2_input, S_IRUGO, show_in_input2, NULL);
static DEVICE_ATTR(in3_input, S_IRUGO, show_in_input3, NULL);
static DEVICE_ATTR(in0_min, S_IWUSR|S_IRUGO, show_in_min0, set_in_min0);
static DEVICE_ATTR(in1_min, S_IWUSR|S_IRUGO, show_in_min1, set_in_min1);
static DEVICE_ATTR(in2_min, S_IWUSR|S_IRUGO, show_in_min2, set_in_min2);
static DEVICE_ATTR(in3_min, S_IWUSR|S_IRUGO, show_in_min3, set_in_min3);
static DEVICE_ATTR(in0_max, S_IWUSR|S_IRUGO, show_in_max0, set_in_max0);
static DEVICE_ATTR(in1_max, S_IWUSR|S_IRUGO, show_in_max1, set_in_max1);
static DEVICE_ATTR(in2_max, S_IWUSR|S_IRUGO, show_in_max2, set_in_max2);
static DEVICE_ATTR(in3_max, S_IWUSR|S_IRUGO, show_in_max3, set_in_max3);
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static DEVICE_ATTR(beep_enable, S_IWUSR|S_IRUGO,
show_beep_enable, set_beep_enable);
static DEVICE_ATTR(beep_mask, S_IWUSR|S_IRUGO,
show_beep_mask, set_beep_mask);
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL, 6);
static ssize_t show_beep(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_beep(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(in0_beep, S_IRUGO|S_IWUSR, show_beep, set_beep, 0);
static SENSOR_DEVICE_ATTR(in1_beep, S_IRUGO|S_IWUSR, show_beep, set_beep, 1);
static SENSOR_DEVICE_ATTR(in2_beep, S_IRUGO|S_IWUSR, show_beep, set_beep, 2);
static SENSOR_DEVICE_ATTR(in3_beep, S_IRUGO|S_IWUSR, show_beep, set_beep, 3);
static SENSOR_DEVICE_ATTR(temp1_beep, S_IRUGO|S_IWUSR, show_beep, set_beep, 4);
static SENSOR_DEVICE_ATTR(fan1_beep, S_IRUGO|S_IWUSR, show_beep, set_beep, 5);
static SENSOR_DEVICE_ATTR(fan2_beep, S_IRUGO|S_IWUSR, show_beep, set_beep, 6);
static struct attribute *gl518_attributes[] = ;
static const struct attribute_group gl518_group = ;
static struct attribute *gl518_attributes_r80[] = ;
static const struct attribute_group gl518_group_r80 = ;
static int gl518_detect(struct i2c_client *client, struct i2c_board_info *info)
static int gl518_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static void gl518_init_client(struct i2c_client *client)
static int gl518_remove(struct i2c_client *client)
static int gl518_read_value(struct i2c_client *client, u8 reg)
static int gl518_write_value(struct i2c_client *client, u8 reg, u16 value)
static struct gl518_data *gl518_update_device(struct device *dev)
static int __init sensors_gl518sm_init(void)
static void __exit sensors_gl518sm_exit(void)
MODULE_AUTHOR("Frodo Looijaard <frodol@dds.nl>, "
"Kyosti Malkki <kmalkki@cc.hut.fi> and "
"Hong-Gunn Chew <hglinux@gunnet.org>");
MODULE_DESCRIPTION("GL518SM driver");
MODULE_LICENSE("GPL");
module_init(sensors_gl518sm_init);
module_exit(sensors_gl518sm_exit);
