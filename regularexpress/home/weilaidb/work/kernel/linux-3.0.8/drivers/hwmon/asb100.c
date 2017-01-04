#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static const unsigned short normal_i2c[] = ;
static unsigned short force_subclients[4];
module_param_array(force_subclients, short, NULL, 0);
MODULE_PARM_DESC(force_subclients, "List of subclient addresses: "
"");
#define ASB100_REG_IN(nr)	(0x20 + (nr))
#define ASB100_REG_IN_MAX(nr)	(0x2b + (nr * 2))
#define ASB100_REG_IN_MIN(nr)	(0x2c + (nr * 2))
#define ASB100_REG_FAN(nr)	(0x28 + (nr))
#define ASB100_REG_FAN_MIN(nr)	(0x3b + (nr))
static const u16 asb100_reg_temp[]	= ;
static const u16 asb100_reg_temp_max[]	= ;
static const u16 asb100_reg_temp_hyst[]	= ;
#define ASB100_REG_TEMP(nr) (asb100_reg_temp[nr])
#define ASB100_REG_TEMP_MAX(nr) (asb100_reg_temp_max[nr])
#define ASB100_REG_TEMP_HYST(nr) (asb100_reg_temp_hyst[nr])
#define ASB100_REG_TEMP2_CONFIG	0x0152
#define ASB100_REG_TEMP3_CONFIG	0x0252
#define ASB100_REG_CONFIG	0x40
#define ASB100_REG_ALARM1	0x41
#define ASB100_REG_ALARM2	0x42
#define ASB100_REG_SMIM1	0x43
#define ASB100_REG_SMIM2	0x44
#define ASB100_REG_VID_FANDIV	0x47
#define ASB100_REG_I2C_ADDR	0x48
#define ASB100_REG_CHIPID	0x49
#define ASB100_REG_I2C_SUBADDR	0x4a
#define ASB100_REG_PIN		0x4b
#define ASB100_REG_IRQ		0x4c
#define ASB100_REG_BANK		0x4e
#define ASB100_REG_CHIPMAN	0x4f
#define ASB100_REG_WCHIPID	0x58
#define ASB100_REG_PWM1		0x59
#define ASB100_IN_MIN (   0)
#define ASB100_IN_MAX (4080)
static u8 IN_TO_REG(unsigned val)
static unsigned IN_FROM_REG(u8 reg)
static u8 FAN_TO_REG(long rpm, int div)
static int FAN_FROM_REG(u8 val, int div)
#define ASB100_TEMP_MIN (-128000)
#define ASB100_TEMP_MAX ( 127000)
static u8 TEMP_TO_REG(long temp)
static int TEMP_FROM_REG(u8 reg)
static u8 ASB100_PWM_TO_REG(int pwm)
static int ASB100_PWM_FROM_REG(u8 reg)
#define DIV_FROM_REG(val) (1 << (val))
static u8 DIV_TO_REG(long val)
struct asb100_data ;
static int asb100_read_value(struct i2c_client *client, u16 reg);
static void asb100_write_value(struct i2c_client *client, u16 reg, u16 val);
static int asb100_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int asb100_detect(struct i2c_client *client,
struct i2c_board_info *info);
static int asb100_remove(struct i2c_client *client);
static struct asb100_data *asb100_update_device(struct device *dev);
static void asb100_init_client(struct i2c_client *client);
static const struct i2c_device_id asb100_id[] = ;
MODULE_DEVICE_TABLE(i2c, asb100_id);
static struct i2c_driver asb100_driver = ;
#define show_in_reg(reg) \
static ssize_t show_##reg(struct device *dev, struct device_attribute *attr, \
char *buf) \
show_in_reg(in)
show_in_reg(in_min)
show_in_reg(in_max)
#define set_in_reg(REG, reg) \
static ssize_t set_in_##reg(struct device *dev, struct device_attribute *attr, \
const char *buf, size_t count) \
set_in_reg(MIN, min)
set_in_reg(MAX, max)
#define sysfs_in(offset) \
static SENSOR_DEVICE_ATTR(in##offset##_input, S_IRUGO, \
show_in, NULL, offset); \
static SENSOR_DEVICE_ATTR(in##offset##_min, S_IRUGO | S_IWUSR, \
show_in_min, set_in_min, offset); \
static SENSOR_DEVICE_ATTR(in##offset##_max, S_IRUGO | S_IWUSR, \
show_in_max, set_in_max, offset)
sysfs_in(0);
sysfs_in(1);
sysfs_in(2);
sysfs_in(3);
sysfs_in(4);
sysfs_in(5);
sysfs_in(6);
static ssize_t show_fan(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_fan_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_fan_div(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_fan_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_fan_div(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define sysfs_fan(offset) \
static SENSOR_DEVICE_ATTR(fan##offset##_input, S_IRUGO, \
show_fan, NULL, offset - 1); \
static SENSOR_DEVICE_ATTR(fan##offset##_min, S_IRUGO | S_IWUSR, \
show_fan_min, set_fan_min, offset - 1); \
static SENSOR_DEVICE_ATTR(fan##offset##_div, S_IRUGO | S_IWUSR, \
show_fan_div, set_fan_div, offset - 1)
sysfs_fan(1);
sysfs_fan(2);
sysfs_fan(3);
static int sprintf_temp_from_reg(u16 reg, char *buf, int nr)
#define show_temp_reg(reg) \
static ssize_t show_##reg(struct device *dev, struct device_attribute *attr, \
char *buf) \
show_temp_reg(temp);
show_temp_reg(temp_max);
show_temp_reg(temp_hyst);
#define set_temp_reg(REG, reg) \
static ssize_t set_##reg(struct device *dev, struct device_attribute *attr, \
const char *buf, size_t count) \
set_temp_reg(MAX, temp_max);
set_temp_reg(HYST, temp_hyst);
#define sysfs_temp(num) \
static SENSOR_DEVICE_ATTR(temp##num##_input, S_IRUGO, \
show_temp, NULL, num - 1); \
static SENSOR_DEVICE_ATTR(temp##num##_max, S_IRUGO | S_IWUSR, \
show_temp_max, set_temp_max, num - 1); \
static SENSOR_DEVICE_ATTR(temp##num##_max_hyst, S_IRUGO | S_IWUSR, \
show_temp_hyst, set_temp_hyst, num - 1)
sysfs_temp(1);
sysfs_temp(2);
sysfs_temp(3);
sysfs_temp(4);
static ssize_t show_vid(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(cpu0_vid, S_IRUGO, show_vid, NULL);
static ssize_t show_vrm(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_vrm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(vrm, S_IRUGO | S_IWUSR, show_vrm, set_vrm);
static ssize_t show_alarms(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, show_alarm, NULL, 8);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL, 7);
static SENSOR_DEVICE_ATTR(fan3_alarm, S_IRUGO, show_alarm, NULL, 11);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(temp2_alarm, S_IRUGO, show_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(temp3_alarm, S_IRUGO, show_alarm, NULL, 13);
static ssize_t show_pwm1(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_pwm1(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_pwm_enable1(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_pwm_enable1(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(pwm1, S_IRUGO | S_IWUSR, show_pwm1, set_pwm1);
static DEVICE_ATTR(pwm1_enable, S_IRUGO | S_IWUSR,
show_pwm_enable1, set_pwm_enable1);
static struct attribute *asb100_attributes[] = ;
static const struct attribute_group asb100_group = ;
static int asb100_detect_subclients(struct i2c_client *client)
static int asb100_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int asb100_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int asb100_remove(struct i2c_client *client)
static int asb100_read_value(struct i2c_client *client, u16 reg)
static void asb100_write_value(struct i2c_client *client, u16 reg, u16 value)
static void asb100_init_client(struct i2c_client *client)
static struct asb100_data *asb100_update_device(struct device *dev)
static int __init asb100_init(void)
static void __exit asb100_exit(void)
MODULE_AUTHOR("Mark M. Hoffman <mhoffman@lightlink.com>");
MODULE_DESCRIPTION("ASB100 Bach driver");
MODULE_LICENSE("GPL");
module_init(asb100_init);
module_exit(asb100_exit);
