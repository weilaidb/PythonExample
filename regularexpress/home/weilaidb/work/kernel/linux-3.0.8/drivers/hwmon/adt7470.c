#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static const unsigned short normal_i2c[] = ;
#define ADT7470_REG_BASE_ADDR			0x20
#define ADT7470_REG_TEMP_BASE_ADDR		0x20
#define ADT7470_REG_TEMP_MAX_ADDR		0x29
#define ADT7470_REG_FAN_BASE_ADDR		0x2A
#define ADT7470_REG_FAN_MAX_ADDR		0x31
#define ADT7470_REG_PWM_BASE_ADDR		0x32
#define ADT7470_REG_PWM_MAX_ADDR		0x35
#define ADT7470_REG_PWM_MAX_BASE_ADDR		0x38
#define ADT7470_REG_PWM_MAX_MAX_ADDR		0x3B
#define ADT7470_REG_CFG				0x40
#define		ADT7470_FSPD_MASK		0x04
#define ADT7470_REG_ALARM1			0x41
#define		ADT7470_R1T_ALARM		0x01
#define		ADT7470_R2T_ALARM		0x02
#define		ADT7470_R3T_ALARM		0x04
#define		ADT7470_R4T_ALARM		0x08
#define		ADT7470_R5T_ALARM		0x10
#define		ADT7470_R6T_ALARM		0x20
#define		ADT7470_R7T_ALARM		0x40
#define		ADT7470_OOL_ALARM		0x80
#define ADT7470_REG_ALARM2			0x42
#define		ADT7470_R8T_ALARM		0x01
#define		ADT7470_R9T_ALARM		0x02
#define		ADT7470_R10T_ALARM		0x04
#define		ADT7470_FAN1_ALARM		0x10
#define		ADT7470_FAN2_ALARM		0x20
#define		ADT7470_FAN3_ALARM		0x40
#define		ADT7470_FAN4_ALARM		0x80
#define ADT7470_REG_TEMP_LIMITS_BASE_ADDR	0x44
#define ADT7470_REG_TEMP_LIMITS_MAX_ADDR	0x57
#define ADT7470_REG_FAN_MIN_BASE_ADDR		0x58
#define ADT7470_REG_FAN_MIN_MAX_ADDR		0x5F
#define ADT7470_REG_FAN_MAX_BASE_ADDR		0x60
#define ADT7470_REG_FAN_MAX_MAX_ADDR		0x67
#define ADT7470_REG_PWM_CFG_BASE_ADDR		0x68
#define ADT7470_REG_PWM12_CFG			0x68
#define		ADT7470_PWM2_AUTO_MASK		0x40
#define		ADT7470_PWM1_AUTO_MASK		0x80
#define		ADT7470_PWM_AUTO_MASK		0xC0
#define ADT7470_REG_PWM34_CFG			0x69
#define		ADT7470_PWM3_AUTO_MASK		0x40
#define		ADT7470_PWM4_AUTO_MASK		0x80
#define	ADT7470_REG_PWM_MIN_BASE_ADDR		0x6A
#define ADT7470_REG_PWM_MIN_MAX_ADDR		0x6D
#define ADT7470_REG_PWM_TEMP_MIN_BASE_ADDR	0x6E
#define ADT7470_REG_PWM_TEMP_MIN_MAX_ADDR	0x71
#define ADT7470_REG_ACOUSTICS12			0x75
#define ADT7470_REG_ACOUSTICS34			0x76
#define ADT7470_REG_DEVICE			0x3D
#define ADT7470_REG_VENDOR			0x3E
#define ADT7470_REG_REVISION			0x3F
#define ADT7470_REG_ALARM1_MASK			0x72
#define ADT7470_REG_ALARM2_MASK			0x73
#define ADT7470_REG_PWM_AUTO_TEMP_BASE_ADDR	0x7C
#define ADT7470_REG_PWM_AUTO_TEMP_MAX_ADDR	0x7D
#define ADT7470_REG_MAX_ADDR			0x81
#define ADT7470_TEMP_COUNT	10
#define ADT7470_TEMP_REG(x)	(ADT7470_REG_TEMP_BASE_ADDR + (x))
#define ADT7470_TEMP_MIN_REG(x) (ADT7470_REG_TEMP_LIMITS_BASE_ADDR + ((x) * 2))
#define ADT7470_TEMP_MAX_REG(x) (ADT7470_REG_TEMP_LIMITS_BASE_ADDR + \
((x) * 2) + 1)
#define ADT7470_FAN_COUNT	4
#define ADT7470_REG_FAN(x)	(ADT7470_REG_FAN_BASE_ADDR + ((x) * 2))
#define ADT7470_REG_FAN_MIN(x)	(ADT7470_REG_FAN_MIN_BASE_ADDR + ((x) * 2))
#define ADT7470_REG_FAN_MAX(x)	(ADT7470_REG_FAN_MAX_BASE_ADDR + ((x) * 2))
#define ADT7470_PWM_COUNT	4
#define ADT7470_REG_PWM(x)	(ADT7470_REG_PWM_BASE_ADDR + (x))
#define ADT7470_REG_PWM_MAX(x)	(ADT7470_REG_PWM_MAX_BASE_ADDR + (x))
#define ADT7470_REG_PWM_MIN(x)	(ADT7470_REG_PWM_MIN_BASE_ADDR + (x))
#define ADT7470_REG_PWM_TMIN(x)	(ADT7470_REG_PWM_TEMP_MIN_BASE_ADDR + (x))
#define ADT7470_REG_PWM_CFG(x)	(ADT7470_REG_PWM_CFG_BASE_ADDR + ((x) / 2))
#define ADT7470_REG_PWM_AUTO_TEMP(x)	(ADT7470_REG_PWM_AUTO_TEMP_BASE_ADDR + \
((x) / 2))
#define ALARM2(x)		((x) << 8)
#define ADT7470_VENDOR		0x41
#define ADT7470_DEVICE		0x70
#define ADT7470_REVISION	0x02
#define ADT7470_PWM_ALL_TEMPS	0x3FF
#define SENSOR_REFRESH_INTERVAL	(5 * HZ)
#define LIMIT_REFRESH_INTERVAL	(60 * HZ)
#define TEMP_COLLECTION_TIME	2000
#define AUTO_UPDATE_INTERVAL	2000
#define FAN_PERIOD_TO_RPM(x)	((90000 * 60) / (x))
#define FAN_RPM_TO_PERIOD	FAN_PERIOD_TO_RPM
#define FAN_PERIOD_INVALID	65535
#define FAN_DATA_VALID(x)	((x) && (x) != FAN_PERIOD_INVALID)
struct adt7470_data ;
static int adt7470_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int adt7470_detect(struct i2c_client *client,
struct i2c_board_info *info);
static int adt7470_remove(struct i2c_client *client);
static const struct i2c_device_id adt7470_id[] = ;
MODULE_DEVICE_TABLE(i2c, adt7470_id);
static struct i2c_driver adt7470_driver = ;
static inline int adt7470_read_word_data(struct i2c_client *client, u8 reg)
static inline int adt7470_write_word_data(struct i2c_client *client, u8 reg,
u16 value)
static void adt7470_init_client(struct i2c_client *client)
static int adt7470_read_temperatures(struct i2c_client *client,
struct adt7470_data *data)
static int adt7470_update_thread(void *p)
static struct adt7470_data *adt7470_update_device(struct device *dev)
static ssize_t show_auto_update_interval(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_auto_update_interval(struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
static ssize_t show_num_temp_sensors(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_num_temp_sensors(struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
static ssize_t show_temp_min(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_temp_min(struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
static ssize_t show_temp_max(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_temp_max(struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
static ssize_t show_temp(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t show_alarm_mask(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_fan_max(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_fan_max(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_fan_min(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_fan_min(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_fan(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t show_force_pwm_max(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_force_pwm_max(struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
static ssize_t show_pwm(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t set_pwm(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_pwm_max(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_pwm_max(struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
static ssize_t show_pwm_min(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_pwm_min(struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
static ssize_t show_pwm_tmax(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_pwm_tmin(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_pwm_tmin(struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
static ssize_t show_pwm_auto(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_pwm_auto(struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
static ssize_t show_pwm_auto_temp(struct device *dev,
struct device_attribute *devattr,
char *buf)
static int cvt_auto_temp(int input)
static ssize_t set_pwm_auto_temp(struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
static ssize_t show_alarm(struct device *dev,
struct device_attribute *devattr,
char *buf)
static DEVICE_ATTR(alarm_mask, S_IRUGO, show_alarm_mask, NULL);
static DEVICE_ATTR(num_temp_sensors, S_IWUSR | S_IRUGO, show_num_temp_sensors,
set_num_temp_sensors);
static DEVICE_ATTR(auto_update_interval, S_IWUSR | S_IRUGO,
show_auto_update_interval, set_auto_update_interval);
static SENSOR_DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 0);
static SENSOR_DEVICE_ATTR(temp2_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 1);
static SENSOR_DEVICE_ATTR(temp3_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 2);
static SENSOR_DEVICE_ATTR(temp4_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 3);
static SENSOR_DEVICE_ATTR(temp5_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 4);
static SENSOR_DEVICE_ATTR(temp6_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 5);
static SENSOR_DEVICE_ATTR(temp7_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 6);
static SENSOR_DEVICE_ATTR(temp8_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 7);
static SENSOR_DEVICE_ATTR(temp9_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 8);
static SENSOR_DEVICE_ATTR(temp10_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 9);
static SENSOR_DEVICE_ATTR(temp1_min, S_IWUSR | S_IRUGO, show_temp_min,
set_temp_min, 0);
static SENSOR_DEVICE_ATTR(temp2_min, S_IWUSR | S_IRUGO, show_temp_min,
set_temp_min, 1);
static SENSOR_DEVICE_ATTR(temp3_min, S_IWUSR | S_IRUGO, show_temp_min,
set_temp_min, 2);
static SENSOR_DEVICE_ATTR(temp4_min, S_IWUSR | S_IRUGO, show_temp_min,
set_temp_min, 3);
static SENSOR_DEVICE_ATTR(temp5_min, S_IWUSR | S_IRUGO, show_temp_min,
set_temp_min, 4);
static SENSOR_DEVICE_ATTR(temp6_min, S_IWUSR | S_IRUGO, show_temp_min,
set_temp_min, 5);
static SENSOR_DEVICE_ATTR(temp7_min, S_IWUSR | S_IRUGO, show_temp_min,
set_temp_min, 6);
static SENSOR_DEVICE_ATTR(temp8_min, S_IWUSR | S_IRUGO, show_temp_min,
set_temp_min, 7);
static SENSOR_DEVICE_ATTR(temp9_min, S_IWUSR | S_IRUGO, show_temp_min,
set_temp_min, 8);
static SENSOR_DEVICE_ATTR(temp10_min, S_IWUSR | S_IRUGO, show_temp_min,
set_temp_min, 9);
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_temp, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_input, S_IRUGO, show_temp, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_input, S_IRUGO, show_temp, NULL, 3);
static SENSOR_DEVICE_ATTR(temp5_input, S_IRUGO, show_temp, NULL, 4);
static SENSOR_DEVICE_ATTR(temp6_input, S_IRUGO, show_temp, NULL, 5);
static SENSOR_DEVICE_ATTR(temp7_input, S_IRUGO, show_temp, NULL, 6);
static SENSOR_DEVICE_ATTR(temp8_input, S_IRUGO, show_temp, NULL, 7);
static SENSOR_DEVICE_ATTR(temp9_input, S_IRUGO, show_temp, NULL, 8);
static SENSOR_DEVICE_ATTR(temp10_input, S_IRUGO, show_temp, NULL, 9);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL,
ADT7470_R1T_ALARM);
static SENSOR_DEVICE_ATTR(temp2_alarm, S_IRUGO, show_alarm, NULL,
ADT7470_R2T_ALARM);
static SENSOR_DEVICE_ATTR(temp3_alarm, S_IRUGO, show_alarm, NULL,
ADT7470_R3T_ALARM);
static SENSOR_DEVICE_ATTR(temp4_alarm, S_IRUGO, show_alarm, NULL,
ADT7470_R4T_ALARM);
static SENSOR_DEVICE_ATTR(temp5_alarm, S_IRUGO, show_alarm, NULL,
ADT7470_R5T_ALARM);
static SENSOR_DEVICE_ATTR(temp6_alarm, S_IRUGO, show_alarm, NULL,
ADT7470_R6T_ALARM);
static SENSOR_DEVICE_ATTR(temp7_alarm, S_IRUGO, show_alarm, NULL,
ADT7470_R7T_ALARM);
static SENSOR_DEVICE_ATTR(temp8_alarm, S_IRUGO, show_alarm, NULL,
ALARM2(ADT7470_R8T_ALARM));
static SENSOR_DEVICE_ATTR(temp9_alarm, S_IRUGO, show_alarm, NULL,
ALARM2(ADT7470_R9T_ALARM));
static SENSOR_DEVICE_ATTR(temp10_alarm, S_IRUGO, show_alarm, NULL,
ALARM2(ADT7470_R10T_ALARM));
static SENSOR_DEVICE_ATTR(fan1_max, S_IWUSR | S_IRUGO, show_fan_max,
set_fan_max, 0);
static SENSOR_DEVICE_ATTR(fan2_max, S_IWUSR | S_IRUGO, show_fan_max,
set_fan_max, 1);
static SENSOR_DEVICE_ATTR(fan3_max, S_IWUSR | S_IRUGO, show_fan_max,
set_fan_max, 2);
static SENSOR_DEVICE_ATTR(fan4_max, S_IWUSR | S_IRUGO, show_fan_max,
set_fan_max, 3);
static SENSOR_DEVICE_ATTR(fan1_min, S_IWUSR | S_IRUGO, show_fan_min,
set_fan_min, 0);
static SENSOR_DEVICE_ATTR(fan2_min, S_IWUSR | S_IRUGO, show_fan_min,
set_fan_min, 1);
static SENSOR_DEVICE_ATTR(fan3_min, S_IWUSR | S_IRUGO, show_fan_min,
set_fan_min, 2);
static SENSOR_DEVICE_ATTR(fan4_min, S_IWUSR | S_IRUGO, show_fan_min,
set_fan_min, 3);
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, show_fan, NULL, 0);
static SENSOR_DEVICE_ATTR(fan2_input, S_IRUGO, show_fan, NULL, 1);
static SENSOR_DEVICE_ATTR(fan3_input, S_IRUGO, show_fan, NULL, 2);
static SENSOR_DEVICE_ATTR(fan4_input, S_IRUGO, show_fan, NULL, 3);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL,
ALARM2(ADT7470_FAN1_ALARM));
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL,
ALARM2(ADT7470_FAN2_ALARM));
static SENSOR_DEVICE_ATTR(fan3_alarm, S_IRUGO, show_alarm, NULL,
ALARM2(ADT7470_FAN3_ALARM));
static SENSOR_DEVICE_ATTR(fan4_alarm, S_IRUGO, show_alarm, NULL,
ALARM2(ADT7470_FAN4_ALARM));
static SENSOR_DEVICE_ATTR(force_pwm_max, S_IWUSR | S_IRUGO,
show_force_pwm_max, set_force_pwm_max, 0);
static SENSOR_DEVICE_ATTR(pwm1, S_IWUSR | S_IRUGO, show_pwm, set_pwm, 0);
static SENSOR_DEVICE_ATTR(pwm2, S_IWUSR | S_IRUGO, show_pwm, set_pwm, 1);
static SENSOR_DEVICE_ATTR(pwm3, S_IWUSR | S_IRUGO, show_pwm, set_pwm, 2);
static SENSOR_DEVICE_ATTR(pwm4, S_IWUSR | S_IRUGO, show_pwm, set_pwm, 3);
static SENSOR_DEVICE_ATTR(pwm1_auto_point1_pwm, S_IWUSR | S_IRUGO,
show_pwm_min, set_pwm_min, 0);
static SENSOR_DEVICE_ATTR(pwm2_auto_point1_pwm, S_IWUSR | S_IRUGO,
show_pwm_min, set_pwm_min, 1);
static SENSOR_DEVICE_ATTR(pwm3_auto_point1_pwm, S_IWUSR | S_IRUGO,
show_pwm_min, set_pwm_min, 2);
static SENSOR_DEVICE_ATTR(pwm4_auto_point1_pwm, S_IWUSR | S_IRUGO,
show_pwm_min, set_pwm_min, 3);
static SENSOR_DEVICE_ATTR(pwm1_auto_point2_pwm, S_IWUSR | S_IRUGO,
show_pwm_max, set_pwm_max, 0);
static SENSOR_DEVICE_ATTR(pwm2_auto_point2_pwm, S_IWUSR | S_IRUGO,
show_pwm_max, set_pwm_max, 1);
static SENSOR_DEVICE_ATTR(pwm3_auto_point2_pwm, S_IWUSR | S_IRUGO,
show_pwm_max, set_pwm_max, 2);
static SENSOR_DEVICE_ATTR(pwm4_auto_point2_pwm, S_IWUSR | S_IRUGO,
show_pwm_max, set_pwm_max, 3);
static SENSOR_DEVICE_ATTR(pwm1_auto_point1_temp, S_IWUSR | S_IRUGO,
show_pwm_tmin, set_pwm_tmin, 0);
static SENSOR_DEVICE_ATTR(pwm2_auto_point1_temp, S_IWUSR | S_IRUGO,
show_pwm_tmin, set_pwm_tmin, 1);
static SENSOR_DEVICE_ATTR(pwm3_auto_point1_temp, S_IWUSR | S_IRUGO,
show_pwm_tmin, set_pwm_tmin, 2);
static SENSOR_DEVICE_ATTR(pwm4_auto_point1_temp, S_IWUSR | S_IRUGO,
show_pwm_tmin, set_pwm_tmin, 3);
static SENSOR_DEVICE_ATTR(pwm1_auto_point2_temp, S_IRUGO, show_pwm_tmax,
NULL, 0);
static SENSOR_DEVICE_ATTR(pwm2_auto_point2_temp, S_IRUGO, show_pwm_tmax,
NULL, 1);
static SENSOR_DEVICE_ATTR(pwm3_auto_point2_temp, S_IRUGO, show_pwm_tmax,
NULL, 2);
static SENSOR_DEVICE_ATTR(pwm4_auto_point2_temp, S_IRUGO, show_pwm_tmax,
NULL, 3);
static SENSOR_DEVICE_ATTR(pwm1_enable, S_IWUSR | S_IRUGO, show_pwm_auto,
set_pwm_auto, 0);
static SENSOR_DEVICE_ATTR(pwm2_enable, S_IWUSR | S_IRUGO, show_pwm_auto,
set_pwm_auto, 1);
static SENSOR_DEVICE_ATTR(pwm3_enable, S_IWUSR | S_IRUGO, show_pwm_auto,
set_pwm_auto, 2);
static SENSOR_DEVICE_ATTR(pwm4_enable, S_IWUSR | S_IRUGO, show_pwm_auto,
set_pwm_auto, 3);
static SENSOR_DEVICE_ATTR(pwm1_auto_channels_temp, S_IWUSR | S_IRUGO,
show_pwm_auto_temp, set_pwm_auto_temp, 0);
static SENSOR_DEVICE_ATTR(pwm2_auto_channels_temp, S_IWUSR | S_IRUGO,
show_pwm_auto_temp, set_pwm_auto_temp, 1);
static SENSOR_DEVICE_ATTR(pwm3_auto_channels_temp, S_IWUSR | S_IRUGO,
show_pwm_auto_temp, set_pwm_auto_temp, 2);
static SENSOR_DEVICE_ATTR(pwm4_auto_channels_temp, S_IWUSR | S_IRUGO,
show_pwm_auto_temp, set_pwm_auto_temp, 3);
static struct attribute *adt7470_attr[] =
;
static int adt7470_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int adt7470_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int adt7470_remove(struct i2c_client *client)
static int __init adt7470_init(void)
static void __exit adt7470_exit(void)
MODULE_AUTHOR("Darrick J. Wong <djwong@us.ibm.com>");
MODULE_DESCRIPTION("ADT7470 driver");
MODULE_LICENSE("GPL");
module_init(adt7470_init);
module_exit(adt7470_exit);
