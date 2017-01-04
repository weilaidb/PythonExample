static const unsigned short normal_i2c[] = ;
static int pwminv = 0;
module_param(pwminv, int, S_IRUGO);
static int init = 1;
module_param(init, int, S_IRUGO);
enum chips ;
#define AMC6821_REG_DEV_ID 0x3D
#define AMC6821_REG_COMP_ID 0x3E
#define AMC6821_REG_CONF1 0x00
#define AMC6821_REG_CONF2 0x01
#define AMC6821_REG_CONF3 0x3F
#define AMC6821_REG_CONF4 0x04
#define AMC6821_REG_STAT1 0x02
#define AMC6821_REG_STAT2 0x03
#define AMC6821_REG_TDATA_LOW 0x08
#define AMC6821_REG_TDATA_HI 0x09
#define AMC6821_REG_LTEMP_HI 0x0A
#define AMC6821_REG_RTEMP_HI 0x0B
#define AMC6821_REG_LTEMP_LIMIT_MIN 0x15
#define AMC6821_REG_LTEMP_LIMIT_MAX 0x14
#define AMC6821_REG_RTEMP_LIMIT_MIN 0x19
#define AMC6821_REG_RTEMP_LIMIT_MAX 0x18
#define AMC6821_REG_LTEMP_CRIT 0x1B
#define AMC6821_REG_RTEMP_CRIT 0x1D
#define AMC6821_REG_PSV_TEMP 0x1C
#define AMC6821_REG_DCY 0x22
#define AMC6821_REG_LTEMP_FAN_CTRL 0x24
#define AMC6821_REG_RTEMP_FAN_CTRL 0x25
#define AMC6821_REG_DCY_LOW_TEMP 0x21
#define AMC6821_REG_TACH_LLIMITL 0x10
#define AMC6821_REG_TACH_LLIMITH 0x11
#define AMC6821_REG_TACH_HLIMITL 0x12
#define AMC6821_REG_TACH_HLIMITH 0x13
#define AMC6821_CONF1_START 0x01
#define AMC6821_CONF1_FAN_INT_EN 0x02
#define AMC6821_CONF1_FANIE 0x04
#define AMC6821_CONF1_PWMINV 0x08
#define AMC6821_CONF1_FAN_FAULT_EN 0x10
#define AMC6821_CONF1_FDRC0 0x20
#define AMC6821_CONF1_FDRC1 0x40
#define AMC6821_CONF1_THERMOVIE 0x80
#define AMC6821_CONF2_PWM_EN 0x01
#define AMC6821_CONF2_TACH_MODE 0x02
#define AMC6821_CONF2_TACH_EN 0x04
#define AMC6821_CONF2_RTFIE 0x08
#define AMC6821_CONF2_LTOIE 0x10
#define AMC6821_CONF2_RTOIE 0x20
#define AMC6821_CONF2_PSVIE 0x40
#define AMC6821_CONF2_RST 0x80
#define AMC6821_CONF3_THERM_FAN_EN 0x80
#define AMC6821_CONF3_REV_MASK 0x0F
#define AMC6821_CONF4_OVREN 0x10
#define AMC6821_CONF4_TACH_FAST 0x20
#define AMC6821_CONF4_PSPR 0x40
#define AMC6821_CONF4_MODE 0x80
#define AMC6821_STAT1_RPM_ALARM 0x01
#define AMC6821_STAT1_FANS 0x02
#define AMC6821_STAT1_RTH 0x04
#define AMC6821_STAT1_RTL 0x08
#define AMC6821_STAT1_R_THERM 0x10
#define AMC6821_STAT1_RTF 0x20
#define AMC6821_STAT1_LTH 0x40
#define AMC6821_STAT1_LTL 0x80
#define AMC6821_STAT2_RTC 0x08
#define AMC6821_STAT2_LTC 0x10
#define AMC6821_STAT2_LPSV 0x20
#define AMC6821_STAT2_L_THERM 0x40
#define AMC6821_STAT2_THERM_IN 0x80
enum ;
static const u8 temp_reg[] = ;
enum ;
static const u8 fan_reg_low[] = ;
static const u8 fan_reg_hi[] = ;
static int amc6821_probe(
struct i2c_client *client,
const struct i2c_device_id *id);
static int amc6821_detect(
struct i2c_client *client,
struct i2c_board_info *info);
static int amc6821_init_client(struct i2c_client *client);
static int amc6821_remove(struct i2c_client *client);
static struct amc6821_data *amc6821_update_device(struct device *dev);
static const struct i2c_device_id amc6821_id[] = ;
MODULE_DEVICE_TABLE(i2c, amc6821_id);
static struct i2c_driver amc6821_driver = ;
struct amc6821_data ;
static ssize_t get_temp(
struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_temp(
struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t get_temp_alarm(
struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t get_temp2_fault(
struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t get_pwm1(
struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_pwm1(
struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
static ssize_t get_pwm1_enable(
struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_pwm1_enable(
struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t get_pwm1_auto_channels_temp(
struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t get_temp_auto_point_temp(
struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t get_pwm1_auto_point_pwm(
struct device *dev,
struct device_attribute *devattr,
char *buf)
static inline ssize_t set_slope_register(struct i2c_client *client,
u8 reg,
u8 dpwm,
u8 *ptemp)
static ssize_t set_temp_auto_point_temp(
struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t set_pwm1_auto_point_pwm(
struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t get_fan(
struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t get_fan1_fault(
struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_fan(
struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t get_fan1_div(
struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_fan1_div(
struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO,
get_temp, NULL, IDX_TEMP1_INPUT);
static SENSOR_DEVICE_ATTR(temp1_min, S_IRUGO | S_IWUSR, get_temp,
set_temp, IDX_TEMP1_MIN);
static SENSOR_DEVICE_ATTR(temp1_max, S_IRUGO | S_IWUSR, get_temp,
set_temp, IDX_TEMP1_MAX);
static SENSOR_DEVICE_ATTR(temp1_crit, S_IRUGO | S_IWUSR, get_temp,
set_temp, IDX_TEMP1_CRIT);
static SENSOR_DEVICE_ATTR(temp1_min_alarm, S_IRUGO,
get_temp_alarm, NULL, IDX_TEMP1_MIN);
static SENSOR_DEVICE_ATTR(temp1_max_alarm, S_IRUGO,
get_temp_alarm, NULL, IDX_TEMP1_MAX);
static SENSOR_DEVICE_ATTR(temp1_crit_alarm, S_IRUGO,
get_temp_alarm, NULL, IDX_TEMP1_CRIT);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO | S_IWUSR,
get_temp, NULL, IDX_TEMP2_INPUT);
static SENSOR_DEVICE_ATTR(temp2_min, S_IRUGO | S_IWUSR, get_temp,
set_temp, IDX_TEMP2_MIN);
static SENSOR_DEVICE_ATTR(temp2_max, S_IRUGO | S_IWUSR, get_temp,
set_temp, IDX_TEMP2_MAX);
static SENSOR_DEVICE_ATTR(temp2_crit, S_IRUGO | S_IWUSR, get_temp,
set_temp, IDX_TEMP2_CRIT);
static SENSOR_DEVICE_ATTR(temp2_fault, S_IRUGO,
get_temp2_fault, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_min_alarm, S_IRUGO,
get_temp_alarm, NULL, IDX_TEMP2_MIN);
static SENSOR_DEVICE_ATTR(temp2_max_alarm, S_IRUGO,
get_temp_alarm, NULL, IDX_TEMP2_MAX);
static SENSOR_DEVICE_ATTR(temp2_crit_alarm, S_IRUGO,
get_temp_alarm, NULL, IDX_TEMP2_CRIT);
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, get_fan, NULL, IDX_FAN1_INPUT);
static SENSOR_DEVICE_ATTR(fan1_min, S_IRUGO | S_IWUSR,
get_fan, set_fan, IDX_FAN1_MIN);
static SENSOR_DEVICE_ATTR(fan1_max, S_IRUGO | S_IWUSR,
get_fan, set_fan, IDX_FAN1_MAX);
static SENSOR_DEVICE_ATTR(fan1_fault, S_IRUGO, get_fan1_fault, NULL, 0);
static SENSOR_DEVICE_ATTR(fan1_div, S_IRUGO | S_IWUSR,
get_fan1_div, set_fan1_div, 0);
static SENSOR_DEVICE_ATTR(pwm1, S_IWUSR | S_IRUGO, get_pwm1, set_pwm1, 0);
static SENSOR_DEVICE_ATTR(pwm1_enable, S_IWUSR | S_IRUGO,
get_pwm1_enable, set_pwm1_enable, 0);
static SENSOR_DEVICE_ATTR(pwm1_auto_point1_pwm, S_IRUGO,
get_pwm1_auto_point_pwm, NULL, 0);
static SENSOR_DEVICE_ATTR(pwm1_auto_point2_pwm, S_IWUSR | S_IRUGO,
get_pwm1_auto_point_pwm, set_pwm1_auto_point_pwm, 1);
static SENSOR_DEVICE_ATTR(pwm1_auto_point3_pwm, S_IRUGO,
get_pwm1_auto_point_pwm, NULL, 2);
static SENSOR_DEVICE_ATTR(pwm1_auto_channels_temp, S_IRUGO,
get_pwm1_auto_channels_temp, NULL, 0);
static SENSOR_DEVICE_ATTR_2(temp1_auto_point1_temp, S_IRUGO,
get_temp_auto_point_temp, NULL, 1, 0);
static SENSOR_DEVICE_ATTR_2(temp1_auto_point2_temp, S_IWUSR | S_IRUGO,
get_temp_auto_point_temp, set_temp_auto_point_temp, 1, 1);
static SENSOR_DEVICE_ATTR_2(temp1_auto_point3_temp, S_IWUSR | S_IRUGO,
get_temp_auto_point_temp, set_temp_auto_point_temp, 1, 2);
static SENSOR_DEVICE_ATTR_2(temp2_auto_point1_temp, S_IWUSR | S_IRUGO,
get_temp_auto_point_temp, set_temp_auto_point_temp, 2, 0);
static SENSOR_DEVICE_ATTR_2(temp2_auto_point2_temp, S_IWUSR | S_IRUGO,
get_temp_auto_point_temp, set_temp_auto_point_temp, 2, 1);
static SENSOR_DEVICE_ATTR_2(temp2_auto_point3_temp, S_IWUSR | S_IRUGO,
get_temp_auto_point_temp, set_temp_auto_point_temp, 2, 2);
static struct attribute *amc6821_attrs[] = ;
static struct attribute_group amc6821_attr_grp = ;
static int amc6821_detect(
struct i2c_client *client,
struct i2c_board_info *info)
static int amc6821_probe(
struct i2c_client *client,
const struct i2c_device_id *id)
static int amc6821_remove(struct i2c_client *client)
static int amc6821_init_client(struct i2c_client *client)
static struct amc6821_data *amc6821_update_device(struct device *dev)
static int __init amc6821_init(void)
static void __exit amc6821_exit(void)
module_init(amc6821_init);
module_exit(amc6821_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("T. Mertelj <tomaz.mertelj@guest.arnes.si>");
MODULE_DESCRIPTION("Texas Instruments amc6821 hwmon driver");
