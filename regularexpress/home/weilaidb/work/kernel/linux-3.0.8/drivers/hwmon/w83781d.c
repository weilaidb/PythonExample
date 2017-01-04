#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static const unsigned short normal_i2c[] = ;
enum chips ;
static unsigned short force_subclients[4];
module_param_array(force_subclients, short, NULL, 0);
MODULE_PARM_DESC(force_subclients, "List of subclient addresses: "
"");
static int reset;
module_param(reset, bool, 0);
MODULE_PARM_DESC(reset, "Set to one to reset chip on load");
static int init = 1;
module_param(init, bool, 0);
MODULE_PARM_DESC(init, "Set to zero to bypass chip initialization");
#define W83781D_EXTENT			8
#define W83781D_ADDR_REG_OFFSET		5
#define W83781D_DATA_REG_OFFSET		6
#define W83781D_REG_IN_MAX(nr)		((nr < 7) ? (0x2b + (nr) * 2) : \
(0x554 + (((nr) - 7) * 2)))
#define W83781D_REG_IN_MIN(nr)		((nr < 7) ? (0x2c + (nr) * 2) : \
(0x555 + (((nr) - 7) * 2)))
#define W83781D_REG_IN(nr)		((nr < 7) ? (0x20 + (nr)) : \
(0x550 + (nr) - 7))
#define W83781D_REG_FAN_MIN(nr)		(0x3b + (nr))
#define W83781D_REG_FAN(nr)		(0x28 + (nr))
#define W83781D_REG_BANK		0x4E
#define W83781D_REG_TEMP2_CONFIG	0x152
#define W83781D_REG_TEMP3_CONFIG	0x252
#define W83781D_REG_TEMP(nr)		((nr == 3) ? (0x0250) : \
((nr == 2) ? (0x0150) : \
(0x27)))
#define W83781D_REG_TEMP_HYST(nr)	((nr == 3) ? (0x253) : \
((nr == 2) ? (0x153) : \
(0x3A)))
#define W83781D_REG_TEMP_OVER(nr)	((nr == 3) ? (0x255) : \
((nr == 2) ? (0x155) : \
(0x39)))
#define W83781D_REG_CONFIG		0x40
#define W83781D_REG_ALARM1		0x41
#define W83781D_REG_ALARM2		0x42
#define W83782D_REG_ALARM1		0x459
#define W83782D_REG_ALARM2		0x45A
#define W83782D_REG_ALARM3		0x45B
#define W83781D_REG_BEEP_CONFIG		0x4D
#define W83781D_REG_BEEP_INTS1		0x56
#define W83781D_REG_BEEP_INTS2		0x57
#define W83781D_REG_BEEP_INTS3		0x453
#define W83781D_REG_VID_FANDIV		0x47
#define W83781D_REG_CHIPID		0x49
#define W83781D_REG_WCHIPID		0x58
#define W83781D_REG_CHIPMAN		0x4F
#define W83781D_REG_PIN			0x4B
#define W83781D_REG_VBAT		0x5D
static const u8 W83781D_REG_PWM[] = ;
#define W83781D_REG_PWMCLK12		0x5C
#define W83781D_REG_PWMCLK34		0x45C
#define W83781D_REG_I2C_ADDR		0x48
#define W83781D_REG_I2C_SUBADDR		0x4A
#define W83781D_REG_SCFG1		0x5D
static const u8 BIT_SCFG1[] = ;
#define W83781D_REG_SCFG2		0x59
static const u8 BIT_SCFG2[] = ;
#define W83781D_DEFAULT_BETA		3435
#define IN_TO_REG(val)			SENSORS_LIMIT(((val) + 8) / 16, 0, 255)
#define IN_FROM_REG(val)		((val) * 16)
static inline u8
FAN_TO_REG(long rpm, int div)
static inline long
FAN_FROM_REG(u8 val, int div)
#define TEMP_TO_REG(val)		SENSORS_LIMIT((val) / 1000, -127, 128)
#define TEMP_FROM_REG(val)		((val) * 1000)
#define BEEP_MASK_FROM_REG(val,type)	((type) == as99127f ? \
(~(val)) & 0x7fff : (val) & 0xff7fff)
#define BEEP_MASK_TO_REG(val,type)	((type) == as99127f ? \
(~(val)) & 0x7fff : (val) & 0xff7fff)
#define DIV_FROM_REG(val)		(1 << (val))
static inline u8
DIV_TO_REG(long val, enum chips type)
struct w83781d_data ;
static struct w83781d_data *w83781d_data_if_isa(void);
static int w83781d_alias_detect(struct i2c_client *client, u8 chipid);
static int w83781d_read_value(struct w83781d_data *data, u16 reg);
static int w83781d_write_value(struct w83781d_data *data, u16 reg, u16 value);
static struct w83781d_data *w83781d_update_device(struct device *dev);
static void w83781d_init_device(struct device *dev);
#define show_in_reg(reg) \
static ssize_t show_##reg (struct device *dev, struct device_attribute *da, \
char *buf) \
show_in_reg(in);
show_in_reg(in_min);
show_in_reg(in_max);
#define store_in_reg(REG, reg) \
static ssize_t store_in_##reg (struct device *dev, struct device_attribute \
*da, const char *buf, size_t count) \
store_in_reg(MIN, min);
store_in_reg(MAX, max);
#define sysfs_in_offsets(offset) \
static SENSOR_DEVICE_ATTR(in##offset##_input, S_IRUGO, \
show_in, NULL, offset); \
static SENSOR_DEVICE_ATTR(in##offset##_min, S_IRUGO | S_IWUSR, \
show_in_min, store_in_min, offset); \
static SENSOR_DEVICE_ATTR(in##offset##_max, S_IRUGO | S_IWUSR, \
show_in_max, store_in_max, offset)
sysfs_in_offsets(0);
sysfs_in_offsets(1);
sysfs_in_offsets(2);
sysfs_in_offsets(3);
sysfs_in_offsets(4);
sysfs_in_offsets(5);
sysfs_in_offsets(6);
sysfs_in_offsets(7);
sysfs_in_offsets(8);
#define show_fan_reg(reg) \
static ssize_t show_##reg (struct device *dev, struct device_attribute *da, \
char *buf) \
show_fan_reg(fan);
show_fan_reg(fan_min);
static ssize_t
store_fan_min(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, show_fan, NULL, 0);
static SENSOR_DEVICE_ATTR(fan1_min, S_IRUGO | S_IWUSR,
show_fan_min, store_fan_min, 0);
static SENSOR_DEVICE_ATTR(fan2_input, S_IRUGO, show_fan, NULL, 1);
static SENSOR_DEVICE_ATTR(fan2_min, S_IRUGO | S_IWUSR,
show_fan_min, store_fan_min, 1);
static SENSOR_DEVICE_ATTR(fan3_input, S_IRUGO, show_fan, NULL, 2);
static SENSOR_DEVICE_ATTR(fan3_min, S_IRUGO | S_IWUSR,
show_fan_min, store_fan_min, 2);
#define show_temp_reg(reg) \
static ssize_t show_##reg (struct device *dev, struct device_attribute *da, \
char *buf) \
show_temp_reg(temp);
show_temp_reg(temp_max);
show_temp_reg(temp_max_hyst);
#define store_temp_reg(REG, reg) \
static ssize_t store_temp_##reg (struct device *dev, \
struct device_attribute *da, const char *buf, size_t count) \
store_temp_reg(OVER, max);
store_temp_reg(HYST, max_hyst);
#define sysfs_temp_offsets(offset) \
static SENSOR_DEVICE_ATTR(temp##offset##_input, S_IRUGO, \
show_temp, NULL, offset); \
static SENSOR_DEVICE_ATTR(temp##offset##_max, S_IRUGO | S_IWUSR, \
show_temp_max, store_temp_max, offset); \
static SENSOR_DEVICE_ATTR(temp##offset##_max_hyst, S_IRUGO | S_IWUSR, \
show_temp_max_hyst, store_temp_max_hyst, offset);
sysfs_temp_offsets(1);
sysfs_temp_offsets(2);
sysfs_temp_offsets(3);
static ssize_t
show_vid_reg(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(cpu0_vid, S_IRUGO, show_vid_reg, NULL);
static ssize_t
show_vrm_reg(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_vrm_reg(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(vrm, S_IRUGO | S_IWUSR, show_vrm_reg, store_vrm_reg);
static ssize_t
show_alarms_reg(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms_reg, NULL);
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_temp3_alarm(struct device *dev,
struct device_attribute *attr, char *buf)
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, show_alarm, NULL, 8);
static SENSOR_DEVICE_ATTR(in5_alarm, S_IRUGO, show_alarm, NULL, 9);
static SENSOR_DEVICE_ATTR(in6_alarm, S_IRUGO, show_alarm, NULL, 10);
static SENSOR_DEVICE_ATTR(in7_alarm, S_IRUGO, show_alarm, NULL, 16);
static SENSOR_DEVICE_ATTR(in8_alarm, S_IRUGO, show_alarm, NULL, 17);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL, 7);
static SENSOR_DEVICE_ATTR(fan3_alarm, S_IRUGO, show_alarm, NULL, 11);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(temp2_alarm, S_IRUGO, show_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(temp3_alarm, S_IRUGO, show_temp3_alarm, NULL, 0);
static ssize_t show_beep_mask (struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_beep_mask(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(beep_mask, S_IRUGO | S_IWUSR,
show_beep_mask, store_beep_mask);
static ssize_t show_beep(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
store_beep(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_temp3_beep(struct device *dev,
struct device_attribute *attr, char *buf)
static SENSOR_DEVICE_ATTR(in0_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 0);
static SENSOR_DEVICE_ATTR(in1_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 1);
static SENSOR_DEVICE_ATTR(in2_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 2);
static SENSOR_DEVICE_ATTR(in3_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 3);
static SENSOR_DEVICE_ATTR(in4_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 8);
static SENSOR_DEVICE_ATTR(in5_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 9);
static SENSOR_DEVICE_ATTR(in6_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 10);
static SENSOR_DEVICE_ATTR(in7_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 16);
static SENSOR_DEVICE_ATTR(in8_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 17);
static SENSOR_DEVICE_ATTR(fan1_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 6);
static SENSOR_DEVICE_ATTR(fan2_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 7);
static SENSOR_DEVICE_ATTR(fan3_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 11);
static SENSOR_DEVICE_ATTR(temp1_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 4);
static SENSOR_DEVICE_ATTR(temp2_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 5);
static SENSOR_DEVICE_ATTR(temp3_beep, S_IRUGO,
show_temp3_beep, store_beep, 13);
static SENSOR_DEVICE_ATTR(beep_enable, S_IRUGO | S_IWUSR,
show_beep, store_beep, 15);
static ssize_t
show_fan_div(struct device *dev, struct device_attribute *da, char *buf)
static ssize_t
store_fan_div(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(fan1_div, S_IRUGO | S_IWUSR,
show_fan_div, store_fan_div, 0);
static SENSOR_DEVICE_ATTR(fan2_div, S_IRUGO | S_IWUSR,
show_fan_div, store_fan_div, 1);
static SENSOR_DEVICE_ATTR(fan3_div, S_IRUGO | S_IWUSR,
show_fan_div, store_fan_div, 2);
static ssize_t
show_pwm(struct device *dev, struct device_attribute *da, char *buf)
static ssize_t
show_pwm2_enable(struct device *dev, struct device_attribute *da, char *buf)
static ssize_t
store_pwm(struct device *dev, struct device_attribute *da, const char *buf,
size_t count)
static ssize_t
store_pwm2_enable(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(pwm1, S_IRUGO | S_IWUSR, show_pwm, store_pwm, 0);
static SENSOR_DEVICE_ATTR(pwm2, S_IRUGO | S_IWUSR, show_pwm, store_pwm, 1);
static SENSOR_DEVICE_ATTR(pwm3, S_IRUGO | S_IWUSR, show_pwm, store_pwm, 2);
static SENSOR_DEVICE_ATTR(pwm4, S_IRUGO | S_IWUSR, show_pwm, store_pwm, 3);
static DEVICE_ATTR(pwm2_enable, S_IRUGO | S_IWUSR,
show_pwm2_enable, store_pwm2_enable);
static ssize_t
show_sensor(struct device *dev, struct device_attribute *da, char *buf)
static ssize_t
store_sensor(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_type, S_IRUGO | S_IWUSR,
show_sensor, store_sensor, 0);
static SENSOR_DEVICE_ATTR(temp2_type, S_IRUGO | S_IWUSR,
show_sensor, store_sensor, 1);
static SENSOR_DEVICE_ATTR(temp3_type, S_IRUGO | S_IWUSR,
show_sensor, store_sensor, 2);
static int
w83781d_detect_subclients(struct i2c_client *new_client)
#define IN_UNIT_ATTRS(X)					\
&sensor_dev_attr_in##X##_input.dev_attr.attr,		\
&sensor_dev_attr_in##X##_min.dev_attr.attr,		\
&sensor_dev_attr_in##X##_max.dev_attr.attr,		\
&sensor_dev_attr_in##X##_alarm.dev_attr.attr,		\
&sensor_dev_attr_in##X##_beep.dev_attr.attr
#define FAN_UNIT_ATTRS(X)					\
&sensor_dev_attr_fan##X##_input.dev_attr.attr,		\
&sensor_dev_attr_fan##X##_min.dev_attr.attr,		\
&sensor_dev_attr_fan##X##_div.dev_attr.attr,		\
&sensor_dev_attr_fan##X##_alarm.dev_attr.attr,		\
&sensor_dev_attr_fan##X##_beep.dev_attr.attr
#define TEMP_UNIT_ATTRS(X)					\
&sensor_dev_attr_temp##X##_input.dev_attr.attr,		\
&sensor_dev_attr_temp##X##_max.dev_attr.attr,		\
&sensor_dev_attr_temp##X##_max_hyst.dev_attr.attr,	\
&sensor_dev_attr_temp##X##_alarm.dev_attr.attr,		\
&sensor_dev_attr_temp##X##_beep.dev_attr.attr
static struct attribute* w83781d_attributes[] = ;
static const struct attribute_group w83781d_group = ;
static struct attribute *w83781d_attributes_opt[] = ;
static const struct attribute_group w83781d_group_opt = ;
static int
w83781d_create_files(struct device *dev, int kind, int is_isa)
static int
w83781d_detect(struct i2c_client *client, struct i2c_board_info *info)
static int
w83781d_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int
w83781d_remove(struct i2c_client *client)
static int
w83781d_read_value_i2c(struct w83781d_data *data, u16 reg)
static int
w83781d_write_value_i2c(struct w83781d_data *data, u16 reg, u16 value)
static void
w83781d_init_device(struct device *dev)
static struct w83781d_data *w83781d_update_device(struct device *dev)
static const struct i2c_device_id w83781d_ids[] = ;
MODULE_DEVICE_TABLE(i2c, w83781d_ids);
static struct i2c_driver w83781d_driver = ;
static struct platform_device *pdev;
static unsigned short isa_address = 0x290;
static ssize_t
show_name(struct device *dev, struct device_attribute *devattr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static struct w83781d_data *w83781d_data_if_isa(void)
static int w83781d_alias_detect(struct i2c_client *client, u8 chipid)
static int
w83781d_read_value_isa(struct w83781d_data *data, u16 reg)
static void
w83781d_write_value_isa(struct w83781d_data *data, u16 reg, u16 value)
static int
w83781d_read_value(struct w83781d_data *data, u16 reg)
static int
w83781d_write_value(struct w83781d_data *data, u16 reg, u16 value)
static int __devinit
w83781d_isa_probe(struct platform_device *pdev)
static int __devexit
w83781d_isa_remove(struct platform_device *pdev)
static struct platform_driver w83781d_isa_driver = ;
static int __init
w83781d_isa_found(unsigned short address)
static int __init
w83781d_isa_device_add(unsigned short address)
static int __init
w83781d_isa_register(void)
static void
w83781d_isa_unregister(void)
static struct w83781d_data *w83781d_data_if_isa(void)
static int
w83781d_alias_detect(struct i2c_client *client, u8 chipid)
static int
w83781d_read_value(struct w83781d_data *data, u16 reg)
static int
w83781d_write_value(struct w83781d_data *data, u16 reg, u16 value)
static int __init
w83781d_isa_register(void)
static void
w83781d_isa_unregister(void)
static int __init
sensors_w83781d_init(void)
static void __exit
sensors_w83781d_exit(void)
MODULE_AUTHOR("Frodo Looijaard <frodol@dds.nl>, "
"Philip Edelbrock <phil@netroedge.com>, "
"and Mark Studebaker <mdsxyz123@yahoo.com>");
MODULE_DESCRIPTION("W83781D driver");
MODULE_LICENSE("GPL");
module_init(sensors_w83781d_init);
module_exit(sensors_w83781d_exit);
