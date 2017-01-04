static int fan_voltage;
static int prescaler;
static int clock = 254000;
module_param(fan_voltage, int, S_IRUGO);
module_param(prescaler, int, S_IRUGO);
module_param(clock, int, S_IRUGO);
#define MAX6650_REG_SPEED	0x00
#define MAX6650_REG_CONFIG	0x02
#define MAX6650_REG_GPIO_DEF	0x04
#define MAX6650_REG_DAC		0x06
#define MAX6650_REG_ALARM_EN	0x08
#define MAX6650_REG_ALARM	0x0A
#define MAX6650_REG_TACH0	0x0C
#define MAX6650_REG_TACH1	0x0E
#define MAX6650_REG_TACH2	0x10
#define MAX6650_REG_TACH3	0x12
#define MAX6650_REG_GPIO_STAT	0x14
#define MAX6650_REG_COUNT	0x16
#define MAX6650_CFG_V12			0x08
#define MAX6650_CFG_PRESCALER_MASK	0x07
#define MAX6650_CFG_PRESCALER_2		0x01
#define MAX6650_CFG_PRESCALER_4		0x02
#define MAX6650_CFG_PRESCALER_8		0x03
#define MAX6650_CFG_PRESCALER_16	0x04
#define MAX6650_CFG_MODE_MASK		0x30
#define MAX6650_CFG_MODE_ON		0x00
#define MAX6650_CFG_MODE_OFF		0x10
#define MAX6650_CFG_MODE_CLOSED_LOOP	0x20
#define MAX6650_CFG_MODE_OPEN_LOOP	0x30
#define MAX6650_COUNT_MASK		0x03
#define MAX6650_ALRM_MAX	0x01
#define MAX6650_ALRM_MIN	0x02
#define MAX6650_ALRM_TACH	0x04
#define MAX6650_ALRM_GPIO1	0x08
#define MAX6650_ALRM_GPIO2	0x10
#define FAN_RPM_MIN 240
#define FAN_RPM_MAX 30000
#define DIV_FROM_REG(reg) (1 << (reg & 7))
static int max6650_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int max6650_init_client(struct i2c_client *client);
static int max6650_remove(struct i2c_client *client);
static struct max6650_data *max6650_update_device(struct device *dev);
static const struct i2c_device_id max6650_id[] = ;
MODULE_DEVICE_TABLE(i2c, max6650_id);
static struct i2c_driver max6650_driver = ;
struct max6650_data
;
static ssize_t get_fan(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t get_target(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t set_target(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t get_pwm(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t set_pwm(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t get_enable(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t set_enable(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t get_div(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t set_div(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t get_alarm(struct device *dev, struct device_attribute *devattr,
char *buf)
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, get_fan, NULL, 0);
static SENSOR_DEVICE_ATTR(fan2_input, S_IRUGO, get_fan, NULL, 1);
static SENSOR_DEVICE_ATTR(fan3_input, S_IRUGO, get_fan, NULL, 2);
static SENSOR_DEVICE_ATTR(fan4_input, S_IRUGO, get_fan, NULL, 3);
static DEVICE_ATTR(fan1_target, S_IWUSR | S_IRUGO, get_target, set_target);
static DEVICE_ATTR(fan1_div, S_IWUSR | S_IRUGO, get_div, set_div);
static DEVICE_ATTR(pwm1_enable, S_IWUSR | S_IRUGO, get_enable, set_enable);
static DEVICE_ATTR(pwm1, S_IWUSR | S_IRUGO, get_pwm, set_pwm);
static SENSOR_DEVICE_ATTR(fan1_max_alarm, S_IRUGO, get_alarm, NULL,
MAX6650_ALRM_MAX);
static SENSOR_DEVICE_ATTR(fan1_min_alarm, S_IRUGO, get_alarm, NULL,
MAX6650_ALRM_MIN);
static SENSOR_DEVICE_ATTR(fan1_fault, S_IRUGO, get_alarm, NULL,
MAX6650_ALRM_TACH);
static SENSOR_DEVICE_ATTR(gpio1_alarm, S_IRUGO, get_alarm, NULL,
MAX6650_ALRM_GPIO1);
static SENSOR_DEVICE_ATTR(gpio2_alarm, S_IRUGO, get_alarm, NULL,
MAX6650_ALRM_GPIO2);
static mode_t max6650_attrs_visible(struct kobject *kobj, struct attribute *a,
int n)
static struct attribute *max6650_attrs[] = ;
static struct attribute_group max6650_attr_grp = ;
static struct attribute *max6651_attrs[] = ;
static const struct attribute_group max6651_attr_grp = ;
static int max6650_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int max6650_remove(struct i2c_client *client)
static int max6650_init_client(struct i2c_client *client)
static const u8 tach_reg[] = ;
static struct max6650_data *max6650_update_device(struct device *dev)
static int __init sensors_max6650_init(void)
static void __exit sensors_max6650_exit(void)
MODULE_AUTHOR("Hans J. Koch");
MODULE_DESCRIPTION("MAX6650 sensor driver");
MODULE_LICENSE("GPL");
module_init(sensors_max6650_init);
module_exit(sensors_max6650_exit);
