static const unsigned short normal_i2c[] = ;
static const u8 REG_TEMP[4] = ;
static const u8 REG_TEMP_MIN[4] = ;
static const u8 REG_TEMP_MAX[4] = ;
#define REG_CONF1		0x20
#define REG_TEMP_MAX_ALARM	0x24
#define REG_TEMP_MIN_ALARM	0x25
#define REG_FAN_CONF1		0x42
#define REG_FAN_TARGET_LO	0x4c
#define REG_FAN_TARGET_HI	0x4d
#define REG_FAN_TACH_HI		0x4e
#define REG_FAN_TACH_LO		0x4f
#define REG_PRODUCT_ID		0xfd
#define REG_MFG_ID		0xfe
#define FAN_RPM_FACTOR		3932160
static int apd = -1;
module_param(apd, bool, 0);
MODULE_PARM_DESC(init, "Set to zero to disable anti-parallel diode mode");
struct temperature ;
struct emc2103_data ;
static int read_u8_from_i2c(struct i2c_client *client, u8 i2c_reg, u8 *output)
static void read_temp_from_i2c(struct i2c_client *client, u8 i2c_reg,
struct temperature *temp)
static void read_fan_from_i2c(struct i2c_client *client, u16 *output,
u8 hi_addr, u8 lo_addr)
static void write_fan_target_to_i2c(struct i2c_client *client, u16 new_target)
static void read_fan_config_from_i2c(struct i2c_client *client)
static struct emc2103_data *emc2103_update_device(struct device *dev)
static ssize_t
show_temp(struct device *dev, struct device_attribute *da, char *buf)
static ssize_t
show_temp_min(struct device *dev, struct device_attribute *da, char *buf)
static ssize_t
show_temp_max(struct device *dev, struct device_attribute *da, char *buf)
static ssize_t
show_temp_fault(struct device *dev, struct device_attribute *da, char *buf)
static ssize_t
show_temp_min_alarm(struct device *dev, struct device_attribute *da, char *buf)
static ssize_t
show_temp_max_alarm(struct device *dev, struct device_attribute *da, char *buf)
static ssize_t set_temp_min(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static ssize_t set_temp_max(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static ssize_t
show_fan(struct device *dev, struct device_attribute *da, char *buf)
static ssize_t
show_fan_div(struct device *dev, struct device_attribute *da, char *buf)
static ssize_t set_fan_div(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static ssize_t
show_fan_target(struct device *dev, struct device_attribute *da, char *buf)
static ssize_t set_fan_target(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static ssize_t
show_fan_fault(struct device *dev, struct device_attribute *da, char *buf)
static ssize_t
show_pwm_enable(struct device *dev, struct device_attribute *da, char *buf)
static ssize_t set_pwm_enable(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL, 0);
static SENSOR_DEVICE_ATTR(temp1_min, S_IRUGO | S_IWUSR, show_temp_min,
set_temp_min, 0);
static SENSOR_DEVICE_ATTR(temp1_max, S_IRUGO | S_IWUSR, show_temp_max,
set_temp_max, 0);
static SENSOR_DEVICE_ATTR(temp1_fault, S_IRUGO, show_temp_fault, NULL, 0);
static SENSOR_DEVICE_ATTR(temp1_min_alarm, S_IRUGO, show_temp_min_alarm,
NULL, 0);
static SENSOR_DEVICE_ATTR(temp1_max_alarm, S_IRUGO, show_temp_max_alarm,
NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_temp, NULL, 1);
static SENSOR_DEVICE_ATTR(temp2_min, S_IRUGO | S_IWUSR, show_temp_min,
set_temp_min, 1);
static SENSOR_DEVICE_ATTR(temp2_max, S_IRUGO | S_IWUSR, show_temp_max,
set_temp_max, 1);
static SENSOR_DEVICE_ATTR(temp2_fault, S_IRUGO, show_temp_fault, NULL, 1);
static SENSOR_DEVICE_ATTR(temp2_min_alarm, S_IRUGO, show_temp_min_alarm,
NULL, 1);
static SENSOR_DEVICE_ATTR(temp2_max_alarm, S_IRUGO, show_temp_max_alarm,
NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_input, S_IRUGO, show_temp, NULL, 2);
static SENSOR_DEVICE_ATTR(temp3_min, S_IRUGO | S_IWUSR, show_temp_min,
set_temp_min, 2);
static SENSOR_DEVICE_ATTR(temp3_max, S_IRUGO | S_IWUSR, show_temp_max,
set_temp_max, 2);
static SENSOR_DEVICE_ATTR(temp3_fault, S_IRUGO, show_temp_fault, NULL, 2);
static SENSOR_DEVICE_ATTR(temp3_min_alarm, S_IRUGO, show_temp_min_alarm,
NULL, 2);
static SENSOR_DEVICE_ATTR(temp3_max_alarm, S_IRUGO, show_temp_max_alarm,
NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_input, S_IRUGO, show_temp, NULL, 3);
static SENSOR_DEVICE_ATTR(temp4_min, S_IRUGO | S_IWUSR, show_temp_min,
set_temp_min, 3);
static SENSOR_DEVICE_ATTR(temp4_max, S_IRUGO | S_IWUSR, show_temp_max,
set_temp_max, 3);
static SENSOR_DEVICE_ATTR(temp4_fault, S_IRUGO, show_temp_fault, NULL, 3);
static SENSOR_DEVICE_ATTR(temp4_min_alarm, S_IRUGO, show_temp_min_alarm,
NULL, 3);
static SENSOR_DEVICE_ATTR(temp4_max_alarm, S_IRUGO, show_temp_max_alarm,
NULL, 3);
static DEVICE_ATTR(fan1_input, S_IRUGO, show_fan, NULL);
static DEVICE_ATTR(fan1_div, S_IRUGO | S_IWUSR, show_fan_div, set_fan_div);
static DEVICE_ATTR(fan1_target, S_IRUGO | S_IWUSR, show_fan_target,
set_fan_target);
static DEVICE_ATTR(fan1_fault, S_IRUGO, show_fan_fault, NULL);
static DEVICE_ATTR(pwm1_enable, S_IRUGO | S_IWUSR, show_pwm_enable,
set_pwm_enable);
static struct attribute *emc2103_attributes[] = ;
static struct attribute *emc2103_attributes_temp3[] = ;
static struct attribute *emc2103_attributes_temp4[] = ;
static const struct attribute_group emc2103_group = ;
static const struct attribute_group emc2103_temp3_group = ;
static const struct attribute_group emc2103_temp4_group = ;
static int
emc2103_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int emc2103_remove(struct i2c_client *client)
static const struct i2c_device_id emc2103_ids[] = ;
MODULE_DEVICE_TABLE(i2c, emc2103_ids);
static int
emc2103_detect(struct i2c_client *new_client, struct i2c_board_info *info)
static struct i2c_driver emc2103_driver = ;
static int __init sensors_emc2103_init(void)
static void __exit sensors_emc2103_exit(void)
MODULE_AUTHOR("Steve Glendinning <steve.glendinning@smsc.com>");
MODULE_DESCRIPTION("SMSC EMC2103 hwmon driver");
MODULE_LICENSE("GPL");
module_init(sensors_emc2103_init);
module_exit(sensors_emc2103_exit);
