static const unsigned short normal_i2c[] = ;
#define ADT7462_REG_DEVICE			0x3D
#define ADT7462_REG_VENDOR			0x3E
#define ADT7462_REG_REVISION			0x3F
#define ADT7462_REG_MIN_TEMP_BASE_ADDR		0x44
#define ADT7462_REG_MIN_TEMP_MAX_ADDR		0x47
#define ADT7462_REG_MAX_TEMP_BASE_ADDR		0x48
#define ADT7462_REG_MAX_TEMP_MAX_ADDR		0x4B
#define ADT7462_REG_TEMP_BASE_ADDR		0x88
#define ADT7462_REG_TEMP_MAX_ADDR		0x8F
#define ADT7462_REG_FAN_BASE_ADDR		0x98
#define ADT7462_REG_FAN_MAX_ADDR		0x9F
#define ADT7462_REG_FAN2_BASE_ADDR		0xA2
#define ADT7462_REG_FAN2_MAX_ADDR		0xA9
#define ADT7462_REG_FAN_ENABLE			0x07
#define ADT7462_REG_FAN_MIN_BASE_ADDR		0x78
#define ADT7462_REG_FAN_MIN_MAX_ADDR		0x7F
#define ADT7462_REG_CFG2			0x02
#define		ADT7462_FSPD_MASK		0x20
#define ADT7462_REG_PWM_BASE_ADDR		0xAA
#define ADT7462_REG_PWM_MAX_ADDR		0xAD
#define	ADT7462_REG_PWM_MIN_BASE_ADDR		0x28
#define ADT7462_REG_PWM_MIN_MAX_ADDR		0x2B
#define ADT7462_REG_PWM_MAX			0x2C
#define ADT7462_REG_PWM_TEMP_MIN_BASE_ADDR	0x5C
#define ADT7462_REG_PWM_TEMP_MIN_MAX_ADDR	0x5F
#define ADT7462_REG_PWM_TEMP_RANGE_BASE_ADDR	0x60
#define ADT7462_REG_PWM_TEMP_RANGE_MAX_ADDR	0x63
#define 	ADT7462_PWM_HYST_MASK		0x0F
#define 	ADT7462_PWM_RANGE_MASK		0xF0
#define		ADT7462_PWM_RANGE_SHIFT		4
#define ADT7462_REG_PWM_CFG_BASE_ADDR		0x21
#define ADT7462_REG_PWM_CFG_MAX_ADDR		0x24
#define		ADT7462_PWM_CHANNEL_MASK	0xE0
#define		ADT7462_PWM_CHANNEL_SHIFT	5
#define ADT7462_REG_PIN_CFG_BASE_ADDR		0x10
#define ADT7462_REG_PIN_CFG_MAX_ADDR		0x13
#define		ADT7462_PIN7_INPUT		0x01
#define		ADT7462_DIODE3_INPUT		0x20
#define		ADT7462_DIODE1_INPUT		0x40
#define		ADT7462_VID_INPUT		0x80
#define		ADT7462_PIN22_INPUT		0x04
#define		ADT7462_PIN21_INPUT		0x08
#define		ADT7462_PIN19_INPUT		0x10
#define		ADT7462_PIN15_INPUT		0x20
#define		ADT7462_PIN13_INPUT		0x40
#define		ADT7462_PIN8_INPUT		0x80
#define 	ADT7462_PIN23_MASK		0x03
#define		ADT7462_PIN23_SHIFT		0
#define		ADT7462_PIN26_MASK		0x0C
#define		ADT7462_PIN26_SHIFT		2
#define		ADT7462_PIN25_MASK		0x30
#define		ADT7462_PIN25_SHIFT		4
#define		ADT7462_PIN24_MASK		0xC0
#define		ADT7462_PIN24_SHIFT		6
#define		ADT7462_PIN26_VOLT_INPUT	0x08
#define		ADT7462_PIN25_VOLT_INPUT	0x20
#define		ADT7462_PIN28_SHIFT		4
#define		ADT7462_PIN28_VOLT		0x5
#define ADT7462_REG_ALARM1			0xB8
#define 	ADT7462_LT_ALARM		0x02
#define		ADT7462_R1T_ALARM		0x04
#define		ADT7462_R2T_ALARM		0x08
#define		ADT7462_R3T_ALARM		0x10
#define ADT7462_REG_ALARM2			0xBB
#define		ADT7462_V0_ALARM		0x01
#define		ADT7462_V1_ALARM		0x02
#define		ADT7462_V2_ALARM		0x04
#define		ADT7462_V3_ALARM		0x08
#define		ADT7462_V4_ALARM		0x10
#define		ADT7462_V5_ALARM		0x20
#define		ADT7462_V6_ALARM		0x40
#define		ADT7462_V7_ALARM		0x80
#define ADT7462_REG_ALARM3			0xBC
#define		ADT7462_V8_ALARM		0x08
#define		ADT7462_V9_ALARM		0x10
#define		ADT7462_V10_ALARM		0x20
#define		ADT7462_V11_ALARM		0x40
#define		ADT7462_V12_ALARM		0x80
#define ADT7462_REG_ALARM4			0xBD
#define		ADT7462_F0_ALARM		0x01
#define		ADT7462_F1_ALARM		0x02
#define		ADT7462_F2_ALARM		0x04
#define		ADT7462_F3_ALARM		0x08
#define		ADT7462_F4_ALARM		0x10
#define		ADT7462_F5_ALARM		0x20
#define		ADT7462_F6_ALARM		0x40
#define		ADT7462_F7_ALARM		0x80
#define ADT7462_ALARM1				0x0000
#define ADT7462_ALARM2				0x0100
#define ADT7462_ALARM3				0x0200
#define ADT7462_ALARM4				0x0300
#define ADT7462_ALARM_REG_SHIFT			8
#define ADT7462_ALARM_FLAG_MASK			0x0F
#define ADT7462_TEMP_COUNT		4
#define ADT7462_TEMP_REG(x)		(ADT7462_REG_TEMP_BASE_ADDR + (x * 2))
#define ADT7462_TEMP_MIN_REG(x) 	(ADT7462_REG_MIN_TEMP_BASE_ADDR + (x))
#define ADT7462_TEMP_MAX_REG(x) 	(ADT7462_REG_MAX_TEMP_BASE_ADDR + (x))
#define TEMP_FRAC_OFFSET		6
#define ADT7462_FAN_COUNT		8
#define ADT7462_REG_FAN_MIN(x)		(ADT7462_REG_FAN_MIN_BASE_ADDR + (x))
#define ADT7462_PWM_COUNT		4
#define ADT7462_REG_PWM(x)		(ADT7462_REG_PWM_BASE_ADDR + (x))
#define ADT7462_REG_PWM_MIN(x)		(ADT7462_REG_PWM_MIN_BASE_ADDR + (x))
#define ADT7462_REG_PWM_TMIN(x)		\
(ADT7462_REG_PWM_TEMP_MIN_BASE_ADDR + (x))
#define ADT7462_REG_PWM_TRANGE(x)	\
(ADT7462_REG_PWM_TEMP_RANGE_BASE_ADDR + (x))
#define ADT7462_PIN_CFG_REG_COUNT	4
#define ADT7462_REG_PIN_CFG(x)		(ADT7462_REG_PIN_CFG_BASE_ADDR + (x))
#define ADT7462_REG_PWM_CFG(x)		(ADT7462_REG_PWM_CFG_BASE_ADDR + (x))
#define ADT7462_ALARM_REG_COUNT		4
#define ADT7462_VOLT_COUNT	13
#define ADT7462_VENDOR		0x41
#define ADT7462_DEVICE		0x62
#define ADT7462_REVISION	0x04
#define SENSOR_REFRESH_INTERVAL	(2 * HZ)
#define LIMIT_REFRESH_INTERVAL	(60 * HZ)
#define FAN_PERIOD_TO_RPM(x)	((90000 * 60) / (x))
#define FAN_RPM_TO_PERIOD	FAN_PERIOD_TO_RPM
#define FAN_PERIOD_INVALID	65535
#define FAN_DATA_VALID(x)	((x) && (x) != FAN_PERIOD_INVALID)
#define MASK_AND_SHIFT(value, prefix)	\
(((value) & prefix##_MASK) >> prefix##_SHIFT)
struct adt7462_data ;
static int adt7462_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int adt7462_detect(struct i2c_client *client,
struct i2c_board_info *info);
static int adt7462_remove(struct i2c_client *client);
static const struct i2c_device_id adt7462_id[] = ;
MODULE_DEVICE_TABLE(i2c, adt7462_id);
static struct i2c_driver adt7462_driver = ;
static inline int adt7462_read_word_data(struct i2c_client *client, u8 reg)
static int ADT7462_REG_FAN(int fan)
static int ADT7462_REG_VOLT_MAX(struct adt7462_data *data, int which)
static int ADT7462_REG_VOLT_MIN(struct adt7462_data *data, int which)
static int ADT7462_REG_VOLT(struct adt7462_data *data, int which)
static const char *voltage_label(struct adt7462_data *data, int which)
static int voltage_multiplier(struct adt7462_data *data, int which)
static int temp_enabled(struct adt7462_data *data, int which)
static const char *temp_label(struct adt7462_data *data, int which)
#define NUM_TRANGE_VALUES	16
static const int trange_values[NUM_TRANGE_VALUES] = ;
static int find_trange_value(int trange)
static struct adt7462_data *adt7462_update_device(struct device *dev)
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
static ssize_t show_temp_label(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_volt_max(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_volt_max(struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
static ssize_t show_volt_min(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_volt_min(struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
static ssize_t show_voltage(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_voltage_label(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_alarm(struct device *dev,
struct device_attribute *devattr,
char *buf)
static int fan_enabled(struct adt7462_data *data, int fan)
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
static ssize_t show_pwm_hyst(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_pwm_hyst(struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
static ssize_t show_pwm_tmax(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_pwm_tmax(struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
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
static void set_pwm_channel(struct i2c_client *client,
struct adt7462_data *data,
int which,
int value)
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
static SENSOR_DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 0);
static SENSOR_DEVICE_ATTR(temp2_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 1);
static SENSOR_DEVICE_ATTR(temp3_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 2);
static SENSOR_DEVICE_ATTR(temp4_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 3);
static SENSOR_DEVICE_ATTR(temp1_min, S_IWUSR | S_IRUGO, show_temp_min,
set_temp_min, 0);
static SENSOR_DEVICE_ATTR(temp2_min, S_IWUSR | S_IRUGO, show_temp_min,
set_temp_min, 1);
static SENSOR_DEVICE_ATTR(temp3_min, S_IWUSR | S_IRUGO, show_temp_min,
set_temp_min, 2);
static SENSOR_DEVICE_ATTR(temp4_min, S_IWUSR | S_IRUGO, show_temp_min,
set_temp_min, 3);
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_temp, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_input, S_IRUGO, show_temp, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_input, S_IRUGO, show_temp, NULL, 3);
static SENSOR_DEVICE_ATTR(temp1_label, S_IRUGO, show_temp_label, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_label, S_IRUGO, show_temp_label, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_label, S_IRUGO, show_temp_label, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_label, S_IRUGO, show_temp_label, NULL, 3);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM1 | ADT7462_LT_ALARM);
static SENSOR_DEVICE_ATTR(temp2_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM1 | ADT7462_R1T_ALARM);
static SENSOR_DEVICE_ATTR(temp3_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM1 | ADT7462_R2T_ALARM);
static SENSOR_DEVICE_ATTR(temp4_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM1 | ADT7462_R3T_ALARM);
static SENSOR_DEVICE_ATTR(in1_max, S_IWUSR | S_IRUGO, show_volt_max,
set_volt_max, 0);
static SENSOR_DEVICE_ATTR(in2_max, S_IWUSR | S_IRUGO, show_volt_max,
set_volt_max, 1);
static SENSOR_DEVICE_ATTR(in3_max, S_IWUSR | S_IRUGO, show_volt_max,
set_volt_max, 2);
static SENSOR_DEVICE_ATTR(in4_max, S_IWUSR | S_IRUGO, show_volt_max,
set_volt_max, 3);
static SENSOR_DEVICE_ATTR(in5_max, S_IWUSR | S_IRUGO, show_volt_max,
set_volt_max, 4);
static SENSOR_DEVICE_ATTR(in6_max, S_IWUSR | S_IRUGO, show_volt_max,
set_volt_max, 5);
static SENSOR_DEVICE_ATTR(in7_max, S_IWUSR | S_IRUGO, show_volt_max,
set_volt_max, 6);
static SENSOR_DEVICE_ATTR(in8_max, S_IWUSR | S_IRUGO, show_volt_max,
set_volt_max, 7);
static SENSOR_DEVICE_ATTR(in9_max, S_IWUSR | S_IRUGO, show_volt_max,
set_volt_max, 8);
static SENSOR_DEVICE_ATTR(in10_max, S_IWUSR | S_IRUGO, show_volt_max,
set_volt_max, 9);
static SENSOR_DEVICE_ATTR(in11_max, S_IWUSR | S_IRUGO, show_volt_max,
set_volt_max, 10);
static SENSOR_DEVICE_ATTR(in12_max, S_IWUSR | S_IRUGO, show_volt_max,
set_volt_max, 11);
static SENSOR_DEVICE_ATTR(in13_max, S_IWUSR | S_IRUGO, show_volt_max,
set_volt_max, 12);
static SENSOR_DEVICE_ATTR(in1_min, S_IWUSR | S_IRUGO, show_volt_min,
set_volt_min, 0);
static SENSOR_DEVICE_ATTR(in2_min, S_IWUSR | S_IRUGO, show_volt_min,
set_volt_min, 1);
static SENSOR_DEVICE_ATTR(in3_min, S_IWUSR | S_IRUGO, show_volt_min,
set_volt_min, 2);
static SENSOR_DEVICE_ATTR(in4_min, S_IWUSR | S_IRUGO, show_volt_min,
set_volt_min, 3);
static SENSOR_DEVICE_ATTR(in5_min, S_IWUSR | S_IRUGO, show_volt_min,
set_volt_min, 4);
static SENSOR_DEVICE_ATTR(in6_min, S_IWUSR | S_IRUGO, show_volt_min,
set_volt_min, 5);
static SENSOR_DEVICE_ATTR(in7_min, S_IWUSR | S_IRUGO, show_volt_min,
set_volt_min, 6);
static SENSOR_DEVICE_ATTR(in8_min, S_IWUSR | S_IRUGO, show_volt_min,
set_volt_min, 7);
static SENSOR_DEVICE_ATTR(in9_min, S_IWUSR | S_IRUGO, show_volt_min,
set_volt_min, 8);
static SENSOR_DEVICE_ATTR(in10_min, S_IWUSR | S_IRUGO, show_volt_min,
set_volt_min, 9);
static SENSOR_DEVICE_ATTR(in11_min, S_IWUSR | S_IRUGO, show_volt_min,
set_volt_min, 10);
static SENSOR_DEVICE_ATTR(in12_min, S_IWUSR | S_IRUGO, show_volt_min,
set_volt_min, 11);
static SENSOR_DEVICE_ATTR(in13_min, S_IWUSR | S_IRUGO, show_volt_min,
set_volt_min, 12);
static SENSOR_DEVICE_ATTR(in1_input, S_IRUGO, show_voltage, NULL, 0);
static SENSOR_DEVICE_ATTR(in2_input, S_IRUGO, show_voltage, NULL, 1);
static SENSOR_DEVICE_ATTR(in3_input, S_IRUGO, show_voltage, NULL, 2);
static SENSOR_DEVICE_ATTR(in4_input, S_IRUGO, show_voltage, NULL, 3);
static SENSOR_DEVICE_ATTR(in5_input, S_IRUGO, show_voltage, NULL, 4);
static SENSOR_DEVICE_ATTR(in6_input, S_IRUGO, show_voltage, NULL, 5);
static SENSOR_DEVICE_ATTR(in7_input, S_IRUGO, show_voltage, NULL, 6);
static SENSOR_DEVICE_ATTR(in8_input, S_IRUGO, show_voltage, NULL, 7);
static SENSOR_DEVICE_ATTR(in9_input, S_IRUGO, show_voltage, NULL, 8);
static SENSOR_DEVICE_ATTR(in10_input, S_IRUGO, show_voltage, NULL, 9);
static SENSOR_DEVICE_ATTR(in11_input, S_IRUGO, show_voltage, NULL, 10);
static SENSOR_DEVICE_ATTR(in12_input, S_IRUGO, show_voltage, NULL, 11);
static SENSOR_DEVICE_ATTR(in13_input, S_IRUGO, show_voltage, NULL, 12);
static SENSOR_DEVICE_ATTR(in1_label, S_IRUGO, show_voltage_label, NULL, 0);
static SENSOR_DEVICE_ATTR(in2_label, S_IRUGO, show_voltage_label, NULL, 1);
static SENSOR_DEVICE_ATTR(in3_label, S_IRUGO, show_voltage_label, NULL, 2);
static SENSOR_DEVICE_ATTR(in4_label, S_IRUGO, show_voltage_label, NULL, 3);
static SENSOR_DEVICE_ATTR(in5_label, S_IRUGO, show_voltage_label, NULL, 4);
static SENSOR_DEVICE_ATTR(in6_label, S_IRUGO, show_voltage_label, NULL, 5);
static SENSOR_DEVICE_ATTR(in7_label, S_IRUGO, show_voltage_label, NULL, 6);
static SENSOR_DEVICE_ATTR(in8_label, S_IRUGO, show_voltage_label, NULL, 7);
static SENSOR_DEVICE_ATTR(in9_label, S_IRUGO, show_voltage_label, NULL, 8);
static SENSOR_DEVICE_ATTR(in10_label, S_IRUGO, show_voltage_label, NULL, 9);
static SENSOR_DEVICE_ATTR(in11_label, S_IRUGO, show_voltage_label, NULL, 10);
static SENSOR_DEVICE_ATTR(in12_label, S_IRUGO, show_voltage_label, NULL, 11);
static SENSOR_DEVICE_ATTR(in13_label, S_IRUGO, show_voltage_label, NULL, 12);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM2 | ADT7462_V0_ALARM);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM2 | ADT7462_V7_ALARM);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM2 | ADT7462_V2_ALARM);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM2 | ADT7462_V6_ALARM);
static SENSOR_DEVICE_ATTR(in5_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM2 | ADT7462_V5_ALARM);
static SENSOR_DEVICE_ATTR(in6_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM2 | ADT7462_V4_ALARM);
static SENSOR_DEVICE_ATTR(in7_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM2 | ADT7462_V3_ALARM);
static SENSOR_DEVICE_ATTR(in8_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM2 | ADT7462_V1_ALARM);
static SENSOR_DEVICE_ATTR(in9_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM3 | ADT7462_V10_ALARM);
static SENSOR_DEVICE_ATTR(in10_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM3 | ADT7462_V9_ALARM);
static SENSOR_DEVICE_ATTR(in11_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM3 | ADT7462_V8_ALARM);
static SENSOR_DEVICE_ATTR(in12_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM3 | ADT7462_V11_ALARM);
static SENSOR_DEVICE_ATTR(in13_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM3 | ADT7462_V12_ALARM);
static SENSOR_DEVICE_ATTR(fan1_min, S_IWUSR | S_IRUGO, show_fan_min,
set_fan_min, 0);
static SENSOR_DEVICE_ATTR(fan2_min, S_IWUSR | S_IRUGO, show_fan_min,
set_fan_min, 1);
static SENSOR_DEVICE_ATTR(fan3_min, S_IWUSR | S_IRUGO, show_fan_min,
set_fan_min, 2);
static SENSOR_DEVICE_ATTR(fan4_min, S_IWUSR | S_IRUGO, show_fan_min,
set_fan_min, 3);
static SENSOR_DEVICE_ATTR(fan5_min, S_IWUSR | S_IRUGO, show_fan_min,
set_fan_min, 4);
static SENSOR_DEVICE_ATTR(fan6_min, S_IWUSR | S_IRUGO, show_fan_min,
set_fan_min, 5);
static SENSOR_DEVICE_ATTR(fan7_min, S_IWUSR | S_IRUGO, show_fan_min,
set_fan_min, 6);
static SENSOR_DEVICE_ATTR(fan8_min, S_IWUSR | S_IRUGO, show_fan_min,
set_fan_min, 7);
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, show_fan, NULL, 0);
static SENSOR_DEVICE_ATTR(fan2_input, S_IRUGO, show_fan, NULL, 1);
static SENSOR_DEVICE_ATTR(fan3_input, S_IRUGO, show_fan, NULL, 2);
static SENSOR_DEVICE_ATTR(fan4_input, S_IRUGO, show_fan, NULL, 3);
static SENSOR_DEVICE_ATTR(fan5_input, S_IRUGO, show_fan, NULL, 4);
static SENSOR_DEVICE_ATTR(fan6_input, S_IRUGO, show_fan, NULL, 5);
static SENSOR_DEVICE_ATTR(fan7_input, S_IRUGO, show_fan, NULL, 6);
static SENSOR_DEVICE_ATTR(fan8_input, S_IRUGO, show_fan, NULL, 7);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM4 | ADT7462_F0_ALARM);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM4 | ADT7462_F1_ALARM);
static SENSOR_DEVICE_ATTR(fan3_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM4 | ADT7462_F2_ALARM);
static SENSOR_DEVICE_ATTR(fan4_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM4 | ADT7462_F3_ALARM);
static SENSOR_DEVICE_ATTR(fan5_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM4 | ADT7462_F4_ALARM);
static SENSOR_DEVICE_ATTR(fan6_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM4 | ADT7462_F5_ALARM);
static SENSOR_DEVICE_ATTR(fan7_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM4 | ADT7462_F6_ALARM);
static SENSOR_DEVICE_ATTR(fan8_alarm, S_IRUGO, show_alarm, NULL,
ADT7462_ALARM4 | ADT7462_F7_ALARM);
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
static SENSOR_DEVICE_ATTR(temp1_auto_point1_hyst, S_IWUSR | S_IRUGO,
show_pwm_hyst, set_pwm_hyst, 0);
static SENSOR_DEVICE_ATTR(temp2_auto_point1_hyst, S_IWUSR | S_IRUGO,
show_pwm_hyst, set_pwm_hyst, 1);
static SENSOR_DEVICE_ATTR(temp3_auto_point1_hyst, S_IWUSR | S_IRUGO,
show_pwm_hyst, set_pwm_hyst, 2);
static SENSOR_DEVICE_ATTR(temp4_auto_point1_hyst, S_IWUSR | S_IRUGO,
show_pwm_hyst, set_pwm_hyst, 3);
static SENSOR_DEVICE_ATTR(temp1_auto_point2_hyst, S_IWUSR | S_IRUGO,
show_pwm_hyst, set_pwm_hyst, 0);
static SENSOR_DEVICE_ATTR(temp2_auto_point2_hyst, S_IWUSR | S_IRUGO,
show_pwm_hyst, set_pwm_hyst, 1);
static SENSOR_DEVICE_ATTR(temp3_auto_point2_hyst, S_IWUSR | S_IRUGO,
show_pwm_hyst, set_pwm_hyst, 2);
static SENSOR_DEVICE_ATTR(temp4_auto_point2_hyst, S_IWUSR | S_IRUGO,
show_pwm_hyst, set_pwm_hyst, 3);
static SENSOR_DEVICE_ATTR(temp1_auto_point1_temp, S_IWUSR | S_IRUGO,
show_pwm_tmin, set_pwm_tmin, 0);
static SENSOR_DEVICE_ATTR(temp2_auto_point1_temp, S_IWUSR | S_IRUGO,
show_pwm_tmin, set_pwm_tmin, 1);
static SENSOR_DEVICE_ATTR(temp3_auto_point1_temp, S_IWUSR | S_IRUGO,
show_pwm_tmin, set_pwm_tmin, 2);
static SENSOR_DEVICE_ATTR(temp4_auto_point1_temp, S_IWUSR | S_IRUGO,
show_pwm_tmin, set_pwm_tmin, 3);
static SENSOR_DEVICE_ATTR(temp1_auto_point2_temp, S_IWUSR | S_IRUGO,
show_pwm_tmax, set_pwm_tmax, 0);
static SENSOR_DEVICE_ATTR(temp2_auto_point2_temp, S_IWUSR | S_IRUGO,
show_pwm_tmax, set_pwm_tmax, 1);
static SENSOR_DEVICE_ATTR(temp3_auto_point2_temp, S_IWUSR | S_IRUGO,
show_pwm_tmax, set_pwm_tmax, 2);
static SENSOR_DEVICE_ATTR(temp4_auto_point2_temp, S_IWUSR | S_IRUGO,
show_pwm_tmax, set_pwm_tmax, 3);
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
static struct attribute *adt7462_attr[] =
;
static int adt7462_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int adt7462_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int adt7462_remove(struct i2c_client *client)
static int __init adt7462_init(void)
static void __exit adt7462_exit(void)
MODULE_AUTHOR("Darrick J. Wong <djwong@us.ibm.com>");
MODULE_DESCRIPTION("ADT7462 driver");
MODULE_LICENSE("GPL");
module_init(adt7462_init);
module_exit(adt7462_exit);
