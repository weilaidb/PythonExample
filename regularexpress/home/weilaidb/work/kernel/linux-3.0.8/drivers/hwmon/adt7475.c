#define INPUT		0
#define MIN		1
#define MAX		2
#define CONTROL		3
#define OFFSET		3
#define AUTOMIN		4
#define THERM		5
#define HYSTERSIS	6
#define ALARM		9
#define FAULT		10
#define REG_DEVREV2		0x12
#define REG_VTT			0x1E
#define REG_EXTEND3		0x1F
#define REG_VOLTAGE_BASE	0x20
#define REG_TEMP_BASE		0x25
#define REG_TACH_BASE		0x28
#define REG_PWM_BASE		0x30
#define REG_PWM_MAX_BASE	0x38
#define REG_DEVID		0x3D
#define REG_VENDID		0x3E
#define REG_DEVID2		0x3F
#define REG_STATUS1		0x41
#define REG_STATUS2		0x42
#define REG_VID			0x43
#define REG_VOLTAGE_MIN_BASE	0x44
#define REG_VOLTAGE_MAX_BASE	0x45
#define REG_TEMP_MIN_BASE	0x4E
#define REG_TEMP_MAX_BASE	0x4F
#define REG_TACH_MIN_BASE	0x54
#define REG_PWM_CONFIG_BASE	0x5C
#define REG_TEMP_TRANGE_BASE	0x5F
#define REG_PWM_MIN_BASE	0x64
#define REG_TEMP_TMIN_BASE	0x67
#define REG_TEMP_THERM_BASE	0x6A
#define REG_REMOTE1_HYSTERSIS	0x6D
#define REG_REMOTE2_HYSTERSIS	0x6E
#define REG_TEMP_OFFSET_BASE	0x70
#define REG_CONFIG2		0x73
#define REG_EXTEND1		0x76
#define REG_EXTEND2		0x77
#define REG_CONFIG3		0x78
#define REG_CONFIG5		0x7C
#define REG_CONFIG4		0x7D
#define REG_STATUS4		0x81
#define REG_VTT_MIN		0x84
#define REG_VTT_MAX		0x86
#define VID_VIDSEL		0x80
#define CONFIG2_ATTN		0x20
#define CONFIG3_SMBALERT	0x01
#define CONFIG3_THERM		0x02
#define CONFIG4_PINFUNC		0x03
#define CONFIG4_MAXDUTY		0x08
#define CONFIG4_ATTN_IN10	0x30
#define CONFIG4_ATTN_IN43	0xC0
#define CONFIG5_TWOSCOMP	0x01
#define CONFIG5_TEMPOFFSET	0x02
#define CONFIG5_VIDGPIO		0x10
#define ADT7475_VOLTAGE_COUNT	5
#define ADT7475_TEMP_COUNT	3
#define ADT7475_TACH_COUNT	4
#define ADT7475_PWM_COUNT	3
#define adt7475_read(reg) i2c_smbus_read_byte_data(client, (reg))
#define TACH_REG(idx) (REG_TACH_BASE + ((idx) * 2))
#define TACH_MIN_REG(idx) (REG_TACH_MIN_BASE + ((idx) * 2))
#define PWM_REG(idx) (REG_PWM_BASE + (idx))
#define PWM_MAX_REG(idx) (REG_PWM_MAX_BASE + (idx))
#define PWM_MIN_REG(idx) (REG_PWM_MIN_BASE + (idx))
#define PWM_CONFIG_REG(idx) (REG_PWM_CONFIG_BASE + (idx))
#define VOLTAGE_REG(idx) (REG_VOLTAGE_BASE + (idx))
#define VOLTAGE_MIN_REG(idx) (REG_VOLTAGE_MIN_BASE + ((idx) * 2))
#define VOLTAGE_MAX_REG(idx) (REG_VOLTAGE_MAX_BASE + ((idx) * 2))
#define TEMP_REG(idx) (REG_TEMP_BASE + (idx))
#define TEMP_MIN_REG(idx) (REG_TEMP_MIN_BASE + ((idx) * 2))
#define TEMP_MAX_REG(idx) (REG_TEMP_MAX_BASE + ((idx) * 2))
#define TEMP_TMIN_REG(idx) (REG_TEMP_TMIN_BASE + (idx))
#define TEMP_THERM_REG(idx) (REG_TEMP_THERM_BASE + (idx))
#define TEMP_OFFSET_REG(idx) (REG_TEMP_OFFSET_BASE + (idx))
#define TEMP_TRANGE_REG(idx) (REG_TEMP_TRANGE_BASE + (idx))
static const unsigned short normal_i2c[] = ;
enum chips ;
static const struct i2c_device_id adt7475_id[] = ;
MODULE_DEVICE_TABLE(i2c, adt7475_id);
struct adt7475_data ;
static struct i2c_driver adt7475_driver;
static struct adt7475_data *adt7475_update_device(struct device *dev);
static void adt7475_read_hystersis(struct i2c_client *client);
static void adt7475_read_pwm(struct i2c_client *client, int index);
static inline u16 temp2reg(struct adt7475_data *data, long val)
static inline int reg2temp(struct adt7475_data *data, u16 reg)
static inline int tach2rpm(u16 tach)
static inline u16 rpm2tach(unsigned long rpm)
static const int adt7473_in_scaling[ADT7475_VOLTAGE_COUNT + 1][2] = ;
static inline int reg2volt(int channel, u16 reg, u8 bypass_attn)
static inline u16 volt2reg(int channel, long volt, u8 bypass_attn)
static u16 adt7475_read_word(struct i2c_client *client, int reg)
static void adt7475_write_word(struct i2c_client *client, int reg, u16 val)
static int find_nearest(long val, const int *array, int size)
static ssize_t show_voltage(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_voltage(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_temp(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_temp(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static const int autorange_table[] = ;
static ssize_t show_point2(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_point2(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_tach(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_tach(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_pwm(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_pwmchan(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_pwmctrl(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_pwm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static int hw_set_pwm(struct i2c_client *client, int index,
unsigned int pwmctl, unsigned int pwmchan)
static ssize_t set_pwmchan(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_pwmctrl(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static const int pwmfreq_table[] = ;
static ssize_t show_pwmfreq(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_pwmfreq(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_pwm_at_crit(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t set_pwm_at_crit(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_vrm(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t set_vrm(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_vid(struct device *dev, struct device_attribute *devattr,
char *buf)
static SENSOR_DEVICE_ATTR_2(in0_input, S_IRUGO, show_voltage, NULL, INPUT, 0);
static SENSOR_DEVICE_ATTR_2(in0_max, S_IRUGO | S_IWUSR, show_voltage,
set_voltage, MAX, 0);
static SENSOR_DEVICE_ATTR_2(in0_min, S_IRUGO | S_IWUSR, show_voltage,
set_voltage, MIN, 0);
static SENSOR_DEVICE_ATTR_2(in0_alarm, S_IRUGO, show_voltage, NULL, ALARM, 0);
static SENSOR_DEVICE_ATTR_2(in1_input, S_IRUGO, show_voltage, NULL, INPUT, 1);
static SENSOR_DEVICE_ATTR_2(in1_max, S_IRUGO | S_IWUSR, show_voltage,
set_voltage, MAX, 1);
static SENSOR_DEVICE_ATTR_2(in1_min, S_IRUGO | S_IWUSR, show_voltage,
set_voltage, MIN, 1);
static SENSOR_DEVICE_ATTR_2(in1_alarm, S_IRUGO, show_voltage, NULL, ALARM, 1);
static SENSOR_DEVICE_ATTR_2(in2_input, S_IRUGO, show_voltage, NULL, INPUT, 2);
static SENSOR_DEVICE_ATTR_2(in2_max, S_IRUGO | S_IWUSR, show_voltage,
set_voltage, MAX, 2);
static SENSOR_DEVICE_ATTR_2(in2_min, S_IRUGO | S_IWUSR, show_voltage,
set_voltage, MIN, 2);
static SENSOR_DEVICE_ATTR_2(in2_alarm, S_IRUGO, show_voltage, NULL, ALARM, 2);
static SENSOR_DEVICE_ATTR_2(in3_input, S_IRUGO, show_voltage, NULL, INPUT, 3);
static SENSOR_DEVICE_ATTR_2(in3_max, S_IRUGO | S_IWUSR, show_voltage,
set_voltage, MAX, 3);
static SENSOR_DEVICE_ATTR_2(in3_min, S_IRUGO | S_IWUSR, show_voltage,
set_voltage, MIN, 3);
static SENSOR_DEVICE_ATTR_2(in3_alarm, S_IRUGO, show_voltage, NULL, ALARM, 3);
static SENSOR_DEVICE_ATTR_2(in4_input, S_IRUGO, show_voltage, NULL, INPUT, 4);
static SENSOR_DEVICE_ATTR_2(in4_max, S_IRUGO | S_IWUSR, show_voltage,
set_voltage, MAX, 4);
static SENSOR_DEVICE_ATTR_2(in4_min, S_IRUGO | S_IWUSR, show_voltage,
set_voltage, MIN, 4);
static SENSOR_DEVICE_ATTR_2(in4_alarm, S_IRUGO, show_voltage, NULL, ALARM, 8);
static SENSOR_DEVICE_ATTR_2(in5_input, S_IRUGO, show_voltage, NULL, INPUT, 5);
static SENSOR_DEVICE_ATTR_2(in5_max, S_IRUGO | S_IWUSR, show_voltage,
set_voltage, MAX, 5);
static SENSOR_DEVICE_ATTR_2(in5_min, S_IRUGO | S_IWUSR, show_voltage,
set_voltage, MIN, 5);
static SENSOR_DEVICE_ATTR_2(in5_alarm, S_IRUGO, show_voltage, NULL, ALARM, 31);
static SENSOR_DEVICE_ATTR_2(temp1_input, S_IRUGO, show_temp, NULL, INPUT, 0);
static SENSOR_DEVICE_ATTR_2(temp1_alarm, S_IRUGO, show_temp, NULL, ALARM, 0);
static SENSOR_DEVICE_ATTR_2(temp1_fault, S_IRUGO, show_temp, NULL, FAULT, 0);
static SENSOR_DEVICE_ATTR_2(temp1_max, S_IRUGO | S_IWUSR, show_temp, set_temp,
MAX, 0);
static SENSOR_DEVICE_ATTR_2(temp1_min, S_IRUGO | S_IWUSR, show_temp, set_temp,
MIN, 0);
static SENSOR_DEVICE_ATTR_2(temp1_offset, S_IRUGO | S_IWUSR, show_temp,
set_temp, OFFSET, 0);
static SENSOR_DEVICE_ATTR_2(temp1_auto_point1_temp, S_IRUGO | S_IWUSR,
show_temp, set_temp, AUTOMIN, 0);
static SENSOR_DEVICE_ATTR_2(temp1_auto_point2_temp, S_IRUGO | S_IWUSR,
show_point2, set_point2, 0, 0);
static SENSOR_DEVICE_ATTR_2(temp1_crit, S_IRUGO | S_IWUSR, show_temp, set_temp,
THERM, 0);
static SENSOR_DEVICE_ATTR_2(temp1_crit_hyst, S_IRUGO | S_IWUSR, show_temp,
set_temp, HYSTERSIS, 0);
static SENSOR_DEVICE_ATTR_2(temp2_input, S_IRUGO, show_temp, NULL, INPUT, 1);
static SENSOR_DEVICE_ATTR_2(temp2_alarm, S_IRUGO, show_temp, NULL, ALARM, 1);
static SENSOR_DEVICE_ATTR_2(temp2_max, S_IRUGO | S_IWUSR, show_temp, set_temp,
MAX, 1);
static SENSOR_DEVICE_ATTR_2(temp2_min, S_IRUGO | S_IWUSR, show_temp, set_temp,
MIN, 1);
static SENSOR_DEVICE_ATTR_2(temp2_offset, S_IRUGO | S_IWUSR, show_temp,
set_temp, OFFSET, 1);
static SENSOR_DEVICE_ATTR_2(temp2_auto_point1_temp, S_IRUGO | S_IWUSR,
show_temp, set_temp, AUTOMIN, 1);
static SENSOR_DEVICE_ATTR_2(temp2_auto_point2_temp, S_IRUGO | S_IWUSR,
show_point2, set_point2, 0, 1);
static SENSOR_DEVICE_ATTR_2(temp2_crit, S_IRUGO | S_IWUSR, show_temp, set_temp,
THERM, 1);
static SENSOR_DEVICE_ATTR_2(temp2_crit_hyst, S_IRUGO | S_IWUSR, show_temp,
set_temp, HYSTERSIS, 1);
static SENSOR_DEVICE_ATTR_2(temp3_input, S_IRUGO, show_temp, NULL, INPUT, 2);
static SENSOR_DEVICE_ATTR_2(temp3_alarm, S_IRUGO, show_temp, NULL, ALARM, 2);
static SENSOR_DEVICE_ATTR_2(temp3_fault, S_IRUGO, show_temp, NULL, FAULT, 2);
static SENSOR_DEVICE_ATTR_2(temp3_max, S_IRUGO | S_IWUSR, show_temp, set_temp,
MAX, 2);
static SENSOR_DEVICE_ATTR_2(temp3_min, S_IRUGO | S_IWUSR, show_temp, set_temp,
MIN, 2);
static SENSOR_DEVICE_ATTR_2(temp3_offset, S_IRUGO | S_IWUSR, show_temp,
set_temp, OFFSET, 2);
static SENSOR_DEVICE_ATTR_2(temp3_auto_point1_temp, S_IRUGO | S_IWUSR,
show_temp, set_temp, AUTOMIN, 2);
static SENSOR_DEVICE_ATTR_2(temp3_auto_point2_temp, S_IRUGO | S_IWUSR,
show_point2, set_point2, 0, 2);
static SENSOR_DEVICE_ATTR_2(temp3_crit, S_IRUGO | S_IWUSR, show_temp, set_temp,
THERM, 2);
static SENSOR_DEVICE_ATTR_2(temp3_crit_hyst, S_IRUGO | S_IWUSR, show_temp,
set_temp, HYSTERSIS, 2);
static SENSOR_DEVICE_ATTR_2(fan1_input, S_IRUGO, show_tach, NULL, INPUT, 0);
static SENSOR_DEVICE_ATTR_2(fan1_min, S_IRUGO | S_IWUSR, show_tach, set_tach,
MIN, 0);
static SENSOR_DEVICE_ATTR_2(fan1_alarm, S_IRUGO, show_tach, NULL, ALARM, 0);
static SENSOR_DEVICE_ATTR_2(fan2_input, S_IRUGO, show_tach, NULL, INPUT, 1);
static SENSOR_DEVICE_ATTR_2(fan2_min, S_IRUGO | S_IWUSR, show_tach, set_tach,
MIN, 1);
static SENSOR_DEVICE_ATTR_2(fan2_alarm, S_IRUGO, show_tach, NULL, ALARM, 1);
static SENSOR_DEVICE_ATTR_2(fan3_input, S_IRUGO, show_tach, NULL, INPUT, 2);
static SENSOR_DEVICE_ATTR_2(fan3_min, S_IRUGO | S_IWUSR, show_tach, set_tach,
MIN, 2);
static SENSOR_DEVICE_ATTR_2(fan3_alarm, S_IRUGO, show_tach, NULL, ALARM, 2);
static SENSOR_DEVICE_ATTR_2(fan4_input, S_IRUGO, show_tach, NULL, INPUT, 3);
static SENSOR_DEVICE_ATTR_2(fan4_min, S_IRUGO | S_IWUSR, show_tach, set_tach,
MIN, 3);
static SENSOR_DEVICE_ATTR_2(fan4_alarm, S_IRUGO, show_tach, NULL, ALARM, 3);
static SENSOR_DEVICE_ATTR_2(pwm1, S_IRUGO | S_IWUSR, show_pwm, set_pwm, INPUT,
0);
static SENSOR_DEVICE_ATTR_2(pwm1_freq, S_IRUGO | S_IWUSR, show_pwmfreq,
set_pwmfreq, INPUT, 0);
static SENSOR_DEVICE_ATTR_2(pwm1_enable, S_IRUGO | S_IWUSR, show_pwmctrl,
set_pwmctrl, INPUT, 0);
static SENSOR_DEVICE_ATTR_2(pwm1_auto_channels_temp, S_IRUGO | S_IWUSR,
show_pwmchan, set_pwmchan, INPUT, 0);
static SENSOR_DEVICE_ATTR_2(pwm1_auto_point1_pwm, S_IRUGO | S_IWUSR, show_pwm,
set_pwm, MIN, 0);
static SENSOR_DEVICE_ATTR_2(pwm1_auto_point2_pwm, S_IRUGO | S_IWUSR, show_pwm,
set_pwm, MAX, 0);
static SENSOR_DEVICE_ATTR_2(pwm2, S_IRUGO | S_IWUSR, show_pwm, set_pwm, INPUT,
1);
static SENSOR_DEVICE_ATTR_2(pwm2_freq, S_IRUGO | S_IWUSR, show_pwmfreq,
set_pwmfreq, INPUT, 1);
static SENSOR_DEVICE_ATTR_2(pwm2_enable, S_IRUGO | S_IWUSR, show_pwmctrl,
set_pwmctrl, INPUT, 1);
static SENSOR_DEVICE_ATTR_2(pwm2_auto_channels_temp, S_IRUGO | S_IWUSR,
show_pwmchan, set_pwmchan, INPUT, 1);
static SENSOR_DEVICE_ATTR_2(pwm2_auto_point1_pwm, S_IRUGO | S_IWUSR, show_pwm,
set_pwm, MIN, 1);
static SENSOR_DEVICE_ATTR_2(pwm2_auto_point2_pwm, S_IRUGO | S_IWUSR, show_pwm,
set_pwm, MAX, 1);
static SENSOR_DEVICE_ATTR_2(pwm3, S_IRUGO | S_IWUSR, show_pwm, set_pwm, INPUT,
2);
static SENSOR_DEVICE_ATTR_2(pwm3_freq, S_IRUGO | S_IWUSR, show_pwmfreq,
set_pwmfreq, INPUT, 2);
static SENSOR_DEVICE_ATTR_2(pwm3_enable, S_IRUGO | S_IWUSR, show_pwmctrl,
set_pwmctrl, INPUT, 2);
static SENSOR_DEVICE_ATTR_2(pwm3_auto_channels_temp, S_IRUGO | S_IWUSR,
show_pwmchan, set_pwmchan, INPUT, 2);
static SENSOR_DEVICE_ATTR_2(pwm3_auto_point1_pwm, S_IRUGO | S_IWUSR, show_pwm,
set_pwm, MIN, 2);
static SENSOR_DEVICE_ATTR_2(pwm3_auto_point2_pwm, S_IRUGO | S_IWUSR, show_pwm,
set_pwm, MAX, 2);
static DEVICE_ATTR(pwm_use_point2_pwm_at_crit, S_IWUSR | S_IRUGO,
show_pwm_at_crit, set_pwm_at_crit);
static DEVICE_ATTR(vrm, S_IWUSR | S_IRUGO, show_vrm, set_vrm);
static DEVICE_ATTR(cpu0_vid, S_IRUGO, show_vid, NULL);
static struct attribute *adt7475_attrs[] = ;
static struct attribute *fan4_attrs[] = ;
static struct attribute *pwm2_attrs[] = ;
static struct attribute *in0_attrs[] = ;
static struct attribute *in3_attrs[] = ;
static struct attribute *in4_attrs[] = ;
static struct attribute *in5_attrs[] = ;
static struct attribute *vid_attrs[] = ;
static struct attribute_group adt7475_attr_group = ;
static struct attribute_group fan4_attr_group = ;
static struct attribute_group pwm2_attr_group = ;
static struct attribute_group in0_attr_group = ;
static struct attribute_group in3_attr_group = ;
static struct attribute_group in4_attr_group = ;
static struct attribute_group in5_attr_group = ;
static struct attribute_group vid_attr_group = ;
static int adt7475_detect(struct i2c_client *client,
struct i2c_board_info *info)
static void adt7475_remove_files(struct i2c_client *client,
struct adt7475_data *data)
static int adt7475_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int adt7475_remove(struct i2c_client *client)
static struct i2c_driver adt7475_driver = ;
static void adt7475_read_hystersis(struct i2c_client *client)
static void adt7475_read_pwm(struct i2c_client *client, int index)
static struct adt7475_data *adt7475_update_device(struct device *dev)
static int __init sensors_adt7475_init(void)
static void __exit sensors_adt7475_exit(void)
MODULE_AUTHOR("Advanced Micro Devices, Inc");
MODULE_DESCRIPTION("adt7475 driver");
MODULE_LICENSE("GPL");
module_init(sensors_adt7475_init);
module_exit(sensors_adt7475_exit);
