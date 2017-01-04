static const unsigned short normal_i2c[] = ;
#define LM63_REG_CONFIG1		0x03
#define LM63_REG_CONFIG2		0xBF
#define LM63_REG_CONFIG_FAN		0x4A
#define LM63_REG_TACH_COUNT_MSB		0x47
#define LM63_REG_TACH_COUNT_LSB		0x46
#define LM63_REG_TACH_LIMIT_MSB		0x49
#define LM63_REG_TACH_LIMIT_LSB		0x48
#define LM63_REG_PWM_VALUE		0x4C
#define LM63_REG_PWM_FREQ		0x4D
#define LM63_REG_LOCAL_TEMP		0x00
#define LM63_REG_LOCAL_HIGH		0x05
#define LM63_REG_REMOTE_TEMP_MSB	0x01
#define LM63_REG_REMOTE_TEMP_LSB	0x10
#define LM63_REG_REMOTE_OFFSET_MSB	0x11
#define LM63_REG_REMOTE_OFFSET_LSB	0x12
#define LM63_REG_REMOTE_HIGH_MSB	0x07
#define LM63_REG_REMOTE_HIGH_LSB	0x13
#define LM63_REG_REMOTE_LOW_MSB		0x08
#define LM63_REG_REMOTE_LOW_LSB		0x14
#define LM63_REG_REMOTE_TCRIT		0x19
#define LM63_REG_REMOTE_TCRIT_HYST	0x21
#define LM63_REG_ALERT_STATUS		0x02
#define LM63_REG_ALERT_MASK		0x16
#define LM63_REG_MAN_ID			0xFE
#define LM63_REG_CHIP_ID		0xFF
#define FAN_FROM_REG(reg)	((reg) == 0xFFFC || (reg) == 0 ? 0 : \
5400000 / (reg))
#define FAN_TO_REG(val)		((val) <= 82 ? 0xFFFC : \
(5400000 / (val)) & 0xFFFC)
#define TEMP8_FROM_REG(reg)	((reg) * 1000)
#define TEMP8_TO_REG(val)	((val) <= -128000 ? -128 : \
(val) >= 127000 ? 127 : \
(val) < 0 ? ((val) - 500) / 1000 : \
((val) + 500) / 1000)
#define TEMP11_FROM_REG(reg)	((reg) / 32 * 125)
#define TEMP11_TO_REG(val)	((val) <= -128000 ? 0x8000 : \
(val) >= 127875 ? 0x7FE0 : \
(val) < 0 ? ((val) - 62) / 125 * 32 : \
((val) + 62) / 125 * 32)
#define HYST_TO_REG(val)	((val) <= 0 ? 0 : \
(val) >= 127000 ? 127 : \
((val) + 500) / 1000)
static int lm63_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int lm63_remove(struct i2c_client *client);
static struct lm63_data *lm63_update_device(struct device *dev);
static int lm63_detect(struct i2c_client *client, struct i2c_board_info *info);
static void lm63_init_client(struct i2c_client *client);
enum chips ;
static const struct i2c_device_id lm63_id[] = ;
MODULE_DEVICE_TABLE(i2c, lm63_id);
static struct i2c_driver lm63_driver = ;
struct lm63_data ;
static ssize_t show_fan(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t set_fan(struct device *dev, struct device_attribute *dummy,
const char *buf, size_t count)
static ssize_t show_pwm1(struct device *dev, struct device_attribute *dummy,
char *buf)
static ssize_t set_pwm1(struct device *dev, struct device_attribute *dummy,
const char *buf, size_t count)
static ssize_t show_pwm1_enable(struct device *dev, struct device_attribute *dummy,
char *buf)
static ssize_t show_local_temp8(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_remote_temp8(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_local_temp8(struct device *dev,
struct device_attribute *dummy,
const char *buf, size_t count)
static ssize_t show_temp11(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t set_temp11(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_temp2_crit_hyst(struct device *dev, struct device_attribute *dummy,
char *buf)
static ssize_t set_temp2_crit_hyst(struct device *dev, struct device_attribute *dummy,
const char *buf, size_t count)
static ssize_t show_alarms(struct device *dev, struct device_attribute *dummy,
char *buf)
static ssize_t show_alarm(struct device *dev, struct device_attribute *devattr,
char *buf)
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, show_fan, NULL, 0);
static SENSOR_DEVICE_ATTR(fan1_min, S_IWUSR | S_IRUGO, show_fan,
set_fan, 1);
static DEVICE_ATTR(pwm1, S_IWUSR | S_IRUGO, show_pwm1, set_pwm1);
static DEVICE_ATTR(pwm1_enable, S_IRUGO, show_pwm1_enable, NULL);
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_local_temp8, NULL, 0);
static SENSOR_DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO, show_local_temp8,
set_local_temp8, 1);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_temp11, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_min, S_IWUSR | S_IRUGO, show_temp11,
set_temp11, 1);
static SENSOR_DEVICE_ATTR(temp2_max, S_IWUSR | S_IRUGO, show_temp11,
set_temp11, 2);
static SENSOR_DEVICE_ATTR(temp2_crit, S_IRUGO, show_remote_temp8,
NULL, 2);
static DEVICE_ATTR(temp2_crit_hyst, S_IWUSR | S_IRUGO, show_temp2_crit_hyst,
set_temp2_crit_hyst);
static SENSOR_DEVICE_ATTR(fan1_min_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_crit_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(temp2_fault, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(temp2_min_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(temp2_max_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(temp1_max_alarm, S_IRUGO, show_alarm, NULL, 6);
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static struct attribute *lm63_attributes[] = ;
static const struct attribute_group lm63_group = ;
static struct attribute *lm63_attributes_fan1[] = ;
static const struct attribute_group lm63_group_fan1 = ;
static int lm63_detect(struct i2c_client *new_client,
struct i2c_board_info *info)
static int lm63_probe(struct i2c_client *new_client,
const struct i2c_device_id *id)
static void lm63_init_client(struct i2c_client *client)
static int lm63_remove(struct i2c_client *client)
static struct lm63_data *lm63_update_device(struct device *dev)
static int __init sensors_lm63_init(void)
static void __exit sensors_lm63_exit(void)
MODULE_AUTHOR("Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("LM63 driver");
MODULE_LICENSE("GPL");
module_init(sensors_lm63_init);
module_exit(sensors_lm63_exit);
