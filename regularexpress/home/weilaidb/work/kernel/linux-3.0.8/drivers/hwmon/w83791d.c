#define NUMBER_OF_VIN		10
#define NUMBER_OF_FANIN		5
#define NUMBER_OF_TEMPIN	3
#define NUMBER_OF_PWM		5
static const unsigned short normal_i2c[] = ;
static unsigned short force_subclients[4];
module_param_array(force_subclients, short, NULL, 0);
MODULE_PARM_DESC(force_subclients, "List of subclient addresses: "
"");
static int reset;
module_param(reset, bool, 0);
MODULE_PARM_DESC(reset, "Set to one to force a hardware chip reset");
static int init;
module_param(init, bool, 0);
MODULE_PARM_DESC(init, "Set to one to force extra software initialization");
static const u8 W83791D_REG_IN[NUMBER_OF_VIN] = ;
static const u8 W83791D_REG_IN_MAX[NUMBER_OF_VIN] = ;
static const u8 W83791D_REG_IN_MIN[NUMBER_OF_VIN] = ;
static const u8 W83791D_REG_FAN[NUMBER_OF_FANIN] = ;
static const u8 W83791D_REG_FAN_MIN[NUMBER_OF_FANIN] = ;
static const u8 W83791D_REG_PWM[NUMBER_OF_PWM] = ;
static const u8 W83791D_REG_TEMP_TARGET[3] = ;
static const u8 W83791D_REG_TEMP_TOL[2] = ;
static const u8 W83791D_REG_FAN_CFG[2] = ;
static const u8 W83791D_REG_FAN_DIV[3] = ;
#define W83791D_REG_BANK		0x4E
#define W83791D_REG_TEMP2_CONFIG	0xC2
#define W83791D_REG_TEMP3_CONFIG	0xCA
static const u8 W83791D_REG_TEMP1[3] = ;
static const u8 W83791D_REG_TEMP_ADD[2][6] = ;
#define W83791D_REG_BEEP_CONFIG		0x4D
static const u8 W83791D_REG_BEEP_CTRL[3] = ;
#define W83791D_REG_GPIO		0x15
#define W83791D_REG_CONFIG		0x40
#define W83791D_REG_VID_FANDIV		0x47
#define W83791D_REG_DID_VID4		0x49
#define W83791D_REG_WCHIPID		0x58
#define W83791D_REG_CHIPMAN		0x4F
#define W83791D_REG_PIN			0x4B
#define W83791D_REG_I2C_SUBADDR		0x4A
#define W83791D_REG_ALARM1 0xA9
#define W83791D_REG_ALARM2 0xAA
#define W83791D_REG_ALARM3 0xAB
#define W83791D_REG_VBAT		0x5D
#define W83791D_REG_I2C_ADDR		0x48
static inline int w83791d_read(struct i2c_client *client, u8 reg)
static inline int w83791d_write(struct i2c_client *client, u8 reg, u8 value)
#define IN_TO_REG(val)		(SENSORS_LIMIT((((val) + 8) / 16), 0, 255))
#define IN_FROM_REG(val)	((val) * 16)
static u8 fan_to_reg(long rpm, int div)
#define FAN_FROM_REG(val,div)	((val) == 0   ? -1 : \
((val) == 255 ? 0 : \
1350000 / ((val) * (div))))
#define TEMP1_FROM_REG(val)	((val) * 1000)
#define TEMP1_TO_REG(val)	((val) <= -128000 ? -128 : \
(val) >= 127000 ? 127 : \
(val) < 0 ? ((val) - 500) / 1000 : \
((val) + 500) / 1000)
#define TEMP23_FROM_REG(val)	((val) / 128 * 500)
#define TEMP23_TO_REG(val)	((val) <= -128000 ? 0x8000 : \
(val) >= 127500 ? 0x7F80 : \
(val) < 0 ? ((val) - 250) / 500 * 128 : \
((val) + 250) / 500 * 128)
#define TARGET_TEMP_TO_REG(val)		((val) < 0 ? 0 : \
(val) >= 127000 ? 127 : \
((val) + 500) / 1000)
#define TOL_TEMP_TO_REG(val)		((val) < 0 ? 0 : \
(val) >= 15000 ? 15 : \
((val) + 500) / 1000)
#define BEEP_MASK_TO_REG(val)		((val) & 0xffffff)
#define BEEP_MASK_FROM_REG(val)		((val) & 0xffffff)
#define DIV_FROM_REG(val)		(1 << (val))
static u8 div_to_reg(int nr, long val)
struct w83791d_data ;
static int w83791d_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int w83791d_detect(struct i2c_client *client,
struct i2c_board_info *info);
static int w83791d_remove(struct i2c_client *client);
static int w83791d_read(struct i2c_client *client, u8 register);
static int w83791d_write(struct i2c_client *client, u8 register, u8 value);
static struct w83791d_data *w83791d_update_device(struct device *dev);
static void w83791d_print_debug(struct w83791d_data *data, struct device *dev);
static void w83791d_init_client(struct i2c_client *client);
static const struct i2c_device_id w83791d_id[] = ;
MODULE_DEVICE_TABLE(i2c, w83791d_id);
static struct i2c_driver w83791d_driver = ;
#define show_in_reg(reg) \
static ssize_t show_##reg(struct device *dev, struct device_attribute *attr, \
char *buf) \
show_in_reg(in);
show_in_reg(in_min);
show_in_reg(in_max);
#define store_in_reg(REG, reg) \
static ssize_t store_in_##reg(struct device *dev, \
struct device_attribute *attr, \
const char *buf, size_t count) \
store_in_reg(MIN, min);
store_in_reg(MAX, max);
static struct sensor_device_attribute sda_in_input[] = ;
static struct sensor_device_attribute sda_in_min[] = ;
static struct sensor_device_attribute sda_in_max[] = ;
static ssize_t show_beep(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_beep(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static struct sensor_device_attribute sda_in_beep[] = ;
static struct sensor_device_attribute sda_in_alarm[] = ;
#define show_fan_reg(reg) \
static ssize_t show_##reg(struct device *dev, struct device_attribute *attr, \
char *buf) \
show_fan_reg(fan);
show_fan_reg(fan_min);
static ssize_t store_fan_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_fan_div(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_fan_div(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static struct sensor_device_attribute sda_fan_input[] = ;
static struct sensor_device_attribute sda_fan_min[] = ;
static struct sensor_device_attribute sda_fan_div[] = ;
static struct sensor_device_attribute sda_fan_beep[] = ;
static struct sensor_device_attribute sda_fan_alarm[] = ;
static ssize_t show_pwm(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_pwm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static struct sensor_device_attribute sda_pwm[] = ;
static ssize_t show_pwmenable(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_pwmenable(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static struct sensor_device_attribute sda_pwmenable[] = ;
static ssize_t show_temp_target(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_temp_target(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static struct sensor_device_attribute sda_temp_target[] = ;
static ssize_t show_temp_tolerance(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_temp_tolerance(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static struct sensor_device_attribute sda_temp_tolerance[] = ;
static ssize_t show_temp1(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t store_temp1(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_temp23(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t store_temp23(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
static struct sensor_device_attribute_2 sda_temp_input[] = ;
static struct sensor_device_attribute_2 sda_temp_max[] = ;
static struct sensor_device_attribute_2 sda_temp_max_hyst[] = ;
static struct sensor_device_attribute sda_temp_beep[] = ;
static struct sensor_device_attribute sda_temp_alarm[] = ;
static ssize_t show_alarms_reg(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms_reg, NULL);
#define GLOBAL_BEEP_ENABLE_SHIFT	15
#define GLOBAL_BEEP_ENABLE_MASK		(1 << GLOBAL_BEEP_ENABLE_SHIFT)
static ssize_t show_beep_enable(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_beep_mask(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_beep_mask(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t store_beep_enable(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct sensor_device_attribute sda_beep_ctrl[] = ;
static ssize_t show_vid_reg(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(cpu0_vid, S_IRUGO, show_vid_reg, NULL);
static ssize_t show_vrm_reg(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_vrm_reg(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(vrm, S_IRUGO | S_IWUSR, show_vrm_reg, store_vrm_reg);
#define IN_UNIT_ATTRS(X) \
&sda_in_input[X].dev_attr.attr, \
&sda_in_min[X].dev_attr.attr,   \
&sda_in_max[X].dev_attr.attr,   \
&sda_in_beep[X].dev_attr.attr,  \
&sda_in_alarm[X].dev_attr.attr
#define FAN_UNIT_ATTRS(X) \
&sda_fan_input[X].dev_attr.attr,        \
&sda_fan_min[X].dev_attr.attr,          \
&sda_fan_div[X].dev_attr.attr,          \
&sda_fan_beep[X].dev_attr.attr,         \
&sda_fan_alarm[X].dev_attr.attr
#define TEMP_UNIT_ATTRS(X) \
&sda_temp_input[X].dev_attr.attr,       \
&sda_temp_max[X].dev_attr.attr,         \
&sda_temp_max_hyst[X].dev_attr.attr,    \
&sda_temp_beep[X].dev_attr.attr,        \
&sda_temp_alarm[X].dev_attr.attr
static struct attribute *w83791d_attributes[] = ;
static const struct attribute_group w83791d_group = ;
static struct attribute *w83791d_attributes_fanpwm45[] = ;
static const struct attribute_group w83791d_group_fanpwm45 = ;
static int w83791d_detect_subclients(struct i2c_client *client)
static int w83791d_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int w83791d_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int w83791d_remove(struct i2c_client *client)
static void w83791d_init_client(struct i2c_client *client)
static struct w83791d_data *w83791d_update_device(struct device *dev)
static void w83791d_print_debug(struct w83791d_data *data, struct device *dev)
static int __init sensors_w83791d_init(void)
static void __exit sensors_w83791d_exit(void)
MODULE_AUTHOR("Charles Spirakis <bezaur@gmail.com>");
MODULE_DESCRIPTION("W83791D driver");
MODULE_LICENSE("GPL");
module_init(sensors_w83791d_init);
module_exit(sensors_w83791d_exit);
