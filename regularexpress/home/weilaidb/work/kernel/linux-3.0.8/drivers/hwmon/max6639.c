static unsigned short normal_i2c[] = ;
#define MAX6639_REG_TEMP(ch)			(0x00 + (ch))
#define MAX6639_REG_STATUS			0x02
#define MAX6639_REG_OUTPUT_MASK			0x03
#define MAX6639_REG_GCONFIG			0x04
#define MAX6639_REG_TEMP_EXT(ch)		(0x05 + (ch))
#define MAX6639_REG_ALERT_LIMIT(ch)		(0x08 + (ch))
#define MAX6639_REG_OT_LIMIT(ch)		(0x0A + (ch))
#define MAX6639_REG_THERM_LIMIT(ch)		(0x0C + (ch))
#define MAX6639_REG_FAN_CONFIG1(ch)		(0x10 + (ch) * 4)
#define MAX6639_REG_FAN_CONFIG2a(ch)		(0x11 + (ch) * 4)
#define MAX6639_REG_FAN_CONFIG2b(ch)		(0x12 + (ch) * 4)
#define MAX6639_REG_FAN_CONFIG3(ch)		(0x13 + (ch) * 4)
#define MAX6639_REG_FAN_CNT(ch)			(0x20 + (ch))
#define MAX6639_REG_TARGET_CNT(ch)		(0x22 + (ch))
#define MAX6639_REG_FAN_PPR(ch)			(0x24 + (ch))
#define MAX6639_REG_TARGTDUTY(ch)		(0x26 + (ch))
#define MAX6639_REG_FAN_START_TEMP(ch)		(0x28 + (ch))
#define MAX6639_REG_DEVID			0x3D
#define MAX6639_REG_MANUID			0x3E
#define MAX6639_REG_DEVREV			0x3F
#define MAX6639_GCONFIG_STANDBY			0x80
#define MAX6639_GCONFIG_POR			0x40
#define MAX6639_GCONFIG_DISABLE_TIMEOUT		0x20
#define MAX6639_GCONFIG_CH2_LOCAL		0x10
#define MAX6639_GCONFIG_PWM_FREQ_HI		0x08
#define MAX6639_FAN_CONFIG1_PWM			0x80
#define MAX6639_FAN_CONFIG3_THERM_FULL_SPEED	0x40
static const int rpm_ranges[] = ;
#define FAN_FROM_REG(val, div, rpm_range)	((val) == 0 ? -1 : \
(val) == 255 ? 0 : (rpm_ranges[rpm_range] * 30) / ((div + 1) * (val)))
#define TEMP_LIMIT_TO_REG(val)	SENSORS_LIMIT((val) / 1000, 0, 255)
struct max6639_data ;
static struct max6639_data *max6639_update_device(struct device *dev)
static ssize_t show_temp_input(struct device *dev,
struct device_attribute *dev_attr, char *buf)
static ssize_t show_temp_fault(struct device *dev,
struct device_attribute *dev_attr, char *buf)
static ssize_t show_temp_max(struct device *dev,
struct device_attribute *dev_attr, char *buf)
static ssize_t set_temp_max(struct device *dev,
struct device_attribute *dev_attr,
const char *buf, size_t count)
static ssize_t show_temp_crit(struct device *dev,
struct device_attribute *dev_attr, char *buf)
static ssize_t set_temp_crit(struct device *dev,
struct device_attribute *dev_attr,
const char *buf, size_t count)
static ssize_t show_temp_emergency(struct device *dev,
struct device_attribute *dev_attr,
char *buf)
static ssize_t set_temp_emergency(struct device *dev,
struct device_attribute *dev_attr,
const char *buf, size_t count)
static ssize_t show_pwm(struct device *dev,
struct device_attribute *dev_attr, char *buf)
static ssize_t set_pwm(struct device *dev,
struct device_attribute *dev_attr,
const char *buf, size_t count)
static ssize_t show_fan_input(struct device *dev,
struct device_attribute *dev_attr, char *buf)
static ssize_t show_alarm(struct device *dev,
struct device_attribute *dev_attr, char *buf)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp_input, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_temp_input, NULL, 1);
static SENSOR_DEVICE_ATTR(temp1_fault, S_IRUGO, show_temp_fault, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_fault, S_IRUGO, show_temp_fault, NULL, 1);
static SENSOR_DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 0);
static SENSOR_DEVICE_ATTR(temp2_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 1);
static SENSOR_DEVICE_ATTR(temp1_crit, S_IWUSR | S_IRUGO, show_temp_crit,
set_temp_crit, 0);
static SENSOR_DEVICE_ATTR(temp2_crit, S_IWUSR | S_IRUGO, show_temp_crit,
set_temp_crit, 1);
static SENSOR_DEVICE_ATTR(temp1_emergency, S_IWUSR | S_IRUGO,
show_temp_emergency, set_temp_emergency, 0);
static SENSOR_DEVICE_ATTR(temp2_emergency, S_IWUSR | S_IRUGO,
show_temp_emergency, set_temp_emergency, 1);
static SENSOR_DEVICE_ATTR(pwm1, S_IWUSR | S_IRUGO, show_pwm, set_pwm, 0);
static SENSOR_DEVICE_ATTR(pwm2, S_IWUSR | S_IRUGO, show_pwm, set_pwm, 1);
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, show_fan_input, NULL, 0);
static SENSOR_DEVICE_ATTR(fan2_input, S_IRUGO, show_fan_input, NULL, 1);
static SENSOR_DEVICE_ATTR(fan1_fault, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(fan2_fault, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(temp1_max_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(temp2_max_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(temp1_crit_alarm, S_IRUGO, show_alarm, NULL, 7);
static SENSOR_DEVICE_ATTR(temp2_crit_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(temp1_emergency_alarm, S_IRUGO, show_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(temp2_emergency_alarm, S_IRUGO, show_alarm, NULL, 4);
static struct attribute *max6639_attributes[] = ;
static const struct attribute_group max6639_group = ;
static int rpm_range_to_reg(int range)
static int max6639_init_client(struct i2c_client *client)
static int max6639_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int max6639_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int max6639_remove(struct i2c_client *client)
static int max6639_suspend(struct i2c_client *client, pm_message_t mesg)
static int max6639_resume(struct i2c_client *client)
static const struct i2c_device_id max6639_id[] = ;
MODULE_DEVICE_TABLE(i2c, max6639_id);
static struct i2c_driver max6639_driver = ;
static int __init max6639_init(void)
static void __exit max6639_exit(void)
MODULE_AUTHOR("Roland Stigge <stigge@antcom.de>");
MODULE_DESCRIPTION("max6639 driver");
MODULE_LICENSE("GPL");
module_init(max6639_init);
module_exit(max6639_exit);
