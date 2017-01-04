static const unsigned short normal_i2c[] = ;
static int reset;
module_param(reset, bool, 0);
MODULE_PARM_DESC(reset, "Set to 1 to reset chip, not recommended");
#define W83L786NG_REG_IN_MIN(nr)	(0x2C + (nr) * 2)
#define W83L786NG_REG_IN_MAX(nr)	(0x2B + (nr) * 2)
#define W83L786NG_REG_IN(nr)		((nr) + 0x20)
#define W83L786NG_REG_FAN(nr)		((nr) + 0x28)
#define W83L786NG_REG_FAN_MIN(nr)	((nr) + 0x3B)
#define W83L786NG_REG_CONFIG		0x40
#define W83L786NG_REG_ALARM1		0x41
#define W83L786NG_REG_ALARM2 		0x42
#define W83L786NG_REG_GPIO_EN		0x47
#define W83L786NG_REG_MAN_ID2		0x4C
#define W83L786NG_REG_MAN_ID1		0x4D
#define W83L786NG_REG_CHIP_ID		0x4E
#define W83L786NG_REG_DIODE		0x53
#define W83L786NG_REG_FAN_DIV		0x54
#define W83L786NG_REG_FAN_CFG		0x80
#define W83L786NG_REG_TOLERANCE		0x8D
static const u8 W83L786NG_REG_TEMP[2][3] = ;
static const u8 W83L786NG_PWM_MODE_SHIFT[] = ;
static const u8 W83L786NG_PWM_ENABLE_SHIFT[] = ;
static const u8 W83L786NG_REG_PWM[] = ;
static inline u8
FAN_TO_REG(long rpm, int div)
#define FAN_FROM_REG(val,div)	((val) == 0   ? -1 : \
((val) == 255 ? 0 : \
1350000 / ((val) * (div))))
#define TEMP_TO_REG(val)	(SENSORS_LIMIT(((val) < 0 ? (val)+0x100*1000 \
: (val)) / 1000, 0, 0xff))
#define TEMP_FROM_REG(val)	(((val) & 0x80 ? (val)-0x100 : (val)) * 1000)
#define IN_TO_REG(val)          (SENSORS_LIMIT((((val) + 4) / 8), 0, 255))
#define IN_FROM_REG(val)	((val) * 8)
#define DIV_FROM_REG(val)	(1 << (val))
static inline u8
DIV_TO_REG(long val)
struct w83l786ng_data ;
static int w83l786ng_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int w83l786ng_detect(struct i2c_client *client,
struct i2c_board_info *info);
static int w83l786ng_remove(struct i2c_client *client);
static void w83l786ng_init_client(struct i2c_client *client);
static struct w83l786ng_data *w83l786ng_update_device(struct device *dev);
static const struct i2c_device_id w83l786ng_id[] = ;
MODULE_DEVICE_TABLE(i2c, w83l786ng_id);
static struct i2c_driver w83l786ng_driver = ;
static u8
w83l786ng_read_value(struct i2c_client *client, u8 reg)
static int
w83l786ng_write_value(struct i2c_client *client, u8 reg, u8 value)
#define show_in_reg(reg) \
static ssize_t \
show_##reg(struct device *dev, struct device_attribute *attr, \
char *buf) \
show_in_reg(in)
show_in_reg(in_min)
show_in_reg(in_max)
#define store_in_reg(REG, reg) \
static ssize_t \
store_in_##reg (struct device *dev, struct device_attribute *attr, \
const char *buf, size_t count) \
store_in_reg(MIN, min)
store_in_reg(MAX, max)
static struct sensor_device_attribute sda_in_input[] = ;
static struct sensor_device_attribute sda_in_min[] = ;
static struct sensor_device_attribute sda_in_max[] = ;
#define show_fan_reg(reg) \
static ssize_t show_##reg(struct device *dev, struct device_attribute *attr, \
char *buf) \
show_fan_reg(fan);
show_fan_reg(fan_min);
static ssize_t
store_fan_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_fan_div(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
store_fan_div(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static struct sensor_device_attribute sda_fan_input[] = ;
static struct sensor_device_attribute sda_fan_min[] = ;
static struct sensor_device_attribute sda_fan_div[] = ;
static ssize_t
show_temp(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_temp(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static struct sensor_device_attribute_2 sda_temp_input[] = ;
static struct sensor_device_attribute_2 sda_temp_max[] = ;
static struct sensor_device_attribute_2 sda_temp_max_hyst[] = ;
#define show_pwm_reg(reg) \
static ssize_t show_##reg (struct device *dev, struct device_attribute *attr, \
char *buf) \
show_pwm_reg(pwm_mode)
show_pwm_reg(pwm_enable)
show_pwm_reg(pwm)
static ssize_t
store_pwm_mode(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
store_pwm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
store_pwm_enable(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static struct sensor_device_attribute sda_pwm[] = ;
static struct sensor_device_attribute sda_pwm_mode[] = ;
static struct sensor_device_attribute sda_pwm_enable[] = ;
static ssize_t
show_tolerance(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_tolerance(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static struct sensor_device_attribute sda_tolerance[] = ;
#define IN_UNIT_ATTRS(X)	\
&sda_in_input[X].dev_attr.attr,		\
&sda_in_min[X].dev_attr.attr,		\
&sda_in_max[X].dev_attr.attr
#define FAN_UNIT_ATTRS(X)	\
&sda_fan_input[X].dev_attr.attr,	\
&sda_fan_min[X].dev_attr.attr,		\
&sda_fan_div[X].dev_attr.attr
#define TEMP_UNIT_ATTRS(X)	\
&sda_temp_input[X].dev_attr.attr,	\
&sda_temp_max[X].dev_attr.attr,		\
&sda_temp_max_hyst[X].dev_attr.attr
#define PWM_UNIT_ATTRS(X)	\
&sda_pwm[X].dev_attr.attr,		\
&sda_pwm_mode[X].dev_attr.attr,		\
&sda_pwm_enable[X].dev_attr.attr
#define TOLERANCE_UNIT_ATTRS(X)	\
&sda_tolerance[X].dev_attr.attr
static struct attribute *w83l786ng_attributes[] = ;
static const struct attribute_group w83l786ng_group = ;
static int
w83l786ng_detect(struct i2c_client *client, struct i2c_board_info *info)
static int
w83l786ng_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int
w83l786ng_remove(struct i2c_client *client)
static void
w83l786ng_init_client(struct i2c_client *client)
static struct w83l786ng_data *w83l786ng_update_device(struct device *dev)
static int __init
sensors_w83l786ng_init(void)
static void __exit
sensors_w83l786ng_exit(void)
MODULE_AUTHOR("Kevin Lo");
MODULE_DESCRIPTION("w83l786ng driver");
MODULE_LICENSE("GPL");
module_init(sensors_w83l786ng_init);
module_exit(sensors_w83l786ng_exit);
