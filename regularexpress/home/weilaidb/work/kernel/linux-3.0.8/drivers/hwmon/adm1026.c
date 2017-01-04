static const unsigned short normal_i2c[] = ;
static int gpio_input[17] = ;
static int gpio_output[17] = ;
static int gpio_inverted[17] = ;
static int gpio_normal[17] = ;
static int gpio_fan[8] = ;
module_param_array(gpio_input, int, NULL, 0);
MODULE_PARM_DESC(gpio_input, "List of GPIO pins (0-16) to program as inputs");
module_param_array(gpio_output, int, NULL, 0);
MODULE_PARM_DESC(gpio_output, "List of GPIO pins (0-16) to program as "
"outputs");
module_param_array(gpio_inverted, int, NULL, 0);
MODULE_PARM_DESC(gpio_inverted, "List of GPIO pins (0-16) to program as "
"inverted");
module_param_array(gpio_normal, int, NULL, 0);
MODULE_PARM_DESC(gpio_normal, "List of GPIO pins (0-16) to program as "
"normal/non-inverted");
module_param_array(gpio_fan, int, NULL, 0);
MODULE_PARM_DESC(gpio_fan, "List of GPIO pins (0-7) to program as fan tachs");
#define ADM1026_REG_CONFIG1	0x00
#define CFG1_MONITOR		0x01
#define CFG1_INT_ENABLE		0x02
#define CFG1_INT_CLEAR		0x04
#define CFG1_AIN8_9		0x08
#define CFG1_THERM_HOT		0x10
#define CFG1_DAC_AFC		0x20
#define CFG1_PWM_AFC		0x40
#define CFG1_RESET		0x80
#define ADM1026_REG_CONFIG2	0x01
#define ADM1026_REG_CONFIG3	0x07
#define CFG3_GPIO16_ENABLE	0x01
#define CFG3_CI_CLEAR		0x02
#define CFG3_VREF_250		0x04
#define CFG3_GPIO16_DIR		0x40
#define CFG3_GPIO16_POL		0x80
#define ADM1026_REG_E2CONFIG	0x13
#define E2CFG_READ		0x01
#define E2CFG_WRITE		0x02
#define E2CFG_ERASE		0x04
#define E2CFG_ROM		0x08
#define E2CFG_CLK_EXT		0x80
static u16 ADM1026_REG_IN[] = ;
static u16 ADM1026_REG_IN_MIN[] = ;
static u16 ADM1026_REG_IN_MAX[] = ;
static u16 ADM1026_REG_TEMP[] = ;
static u16 ADM1026_REG_TEMP_MIN[] = ;
static u16 ADM1026_REG_TEMP_MAX[] = ;
static u16 ADM1026_REG_TEMP_TMIN[] = ;
static u16 ADM1026_REG_TEMP_THERM[] = ;
static u16 ADM1026_REG_TEMP_OFFSET[] = ;
#define ADM1026_REG_FAN(nr)		(0x38 + (nr))
#define ADM1026_REG_FAN_MIN(nr)		(0x60 + (nr))
#define ADM1026_REG_FAN_DIV_0_3		0x02
#define ADM1026_REG_FAN_DIV_4_7		0x03
#define ADM1026_REG_DAC			0x04
#define ADM1026_REG_PWM			0x05
#define ADM1026_REG_GPIO_CFG_0_3	0x08
#define ADM1026_REG_GPIO_CFG_4_7	0x09
#define ADM1026_REG_GPIO_CFG_8_11	0x0a
#define ADM1026_REG_GPIO_CFG_12_15	0x0b
#define ADM1026_REG_GPIO_STATUS_0_7	0x24
#define ADM1026_REG_GPIO_STATUS_8_15	0x25
#define ADM1026_REG_GPIO_MASK_0_7	0x1c
#define ADM1026_REG_GPIO_MASK_8_15	0x1d
#define ADM1026_REG_COMPANY		0x16
#define ADM1026_REG_VERSTEP		0x17
#define ADM1026_COMPANY_ANALOG_DEV	0x41
#define ADM1026_VERSTEP_GENERIC		0x40
#define ADM1026_VERSTEP_ADM1026		0x44
#define ADM1026_REG_MASK1		0x18
#define ADM1026_REG_MASK2		0x19
#define ADM1026_REG_MASK3		0x1a
#define ADM1026_REG_MASK4		0x1b
#define ADM1026_REG_STATUS1		0x20
#define ADM1026_REG_STATUS2		0x21
#define ADM1026_REG_STATUS3		0x22
#define ADM1026_REG_STATUS4		0x23
#define ADM1026_FAN_ACTIVATION_TEMP_HYST -6
#define ADM1026_FAN_CONTROL_TEMP_RANGE	20
#define ADM1026_PWM_MAX			255
static int adm1026_scaling[] = ;
#define NEG12_OFFSET  16000
#define SCALE(val, from, to) (((val)*(to) + ((from)/2))/(from))
#define INS_TO_REG(n, val)  (SENSORS_LIMIT(SCALE(val, adm1026_scaling[n], 192),\
0, 255))
#define INS_FROM_REG(n, val) (SCALE(val, 192, adm1026_scaling[n]))
#define FAN_TO_REG(val, div)  ((val) <= 0 ? 0xff : \
SENSORS_LIMIT(1350000/((val)*(div)), 1, 254))
#define FAN_FROM_REG(val, div) ((val) == 0 ? -1:(val) == 0xff ? 0 : \
1350000/((val)*(div)))
#define DIV_FROM_REG(val) (1<<(val))
#define DIV_TO_REG(val) ((val) >= 8 ? 3 : (val) >= 4 ? 2 : (val) >= 2 ? 1 : 0)
#define TEMP_TO_REG(val) (SENSORS_LIMIT(((val)+((val)<0 ? -500 : 500))/1000,\
-127, 127))
#define TEMP_FROM_REG(val) ((val) * 1000)
#define OFFSET_TO_REG(val) (SENSORS_LIMIT(((val)+((val)<0 ? -500 : 500))/1000,\
-127, 127))
#define OFFSET_FROM_REG(val) ((val) * 1000)
#define PWM_TO_REG(val) (SENSORS_LIMIT(val, 0, 255))
#define PWM_FROM_REG(val) (val)
#define PWM_MIN_TO_REG(val) ((val) & 0xf0)
#define PWM_MIN_FROM_REG(val) (((val) & 0xf0) + ((val) >> 4))
#define DAC_TO_REG(val) (SENSORS_LIMIT(((((val)*255)+500)/2500), 0, 255))
#define DAC_FROM_REG(val) (((val)*2500)/255)
#define ADM1026_DATA_INTERVAL		(1 * HZ)
#define ADM1026_CONFIG_INTERVAL		(5 * 60 * HZ)
struct pwm_data ;
struct adm1026_data ;
static int adm1026_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int adm1026_detect(struct i2c_client *client,
struct i2c_board_info *info);
static int adm1026_remove(struct i2c_client *client);
static int adm1026_read_value(struct i2c_client *client, u8 reg);
static int adm1026_write_value(struct i2c_client *client, u8 reg, int value);
static void adm1026_print_gpio(struct i2c_client *client);
static void adm1026_fixup_gpio(struct i2c_client *client);
static struct adm1026_data *adm1026_update_device(struct device *dev);
static void adm1026_init_client(struct i2c_client *client);
static const struct i2c_device_id adm1026_id[] = ;
MODULE_DEVICE_TABLE(i2c, adm1026_id);
static struct i2c_driver adm1026_driver = ;
static int adm1026_read_value(struct i2c_client *client, u8 reg)
static int adm1026_write_value(struct i2c_client *client, u8 reg, int value)
static void adm1026_init_client(struct i2c_client *client)
static void adm1026_print_gpio(struct i2c_client *client)
static void adm1026_fixup_gpio(struct i2c_client *client)
static struct adm1026_data *adm1026_update_device(struct device *dev)
static ssize_t show_in(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_in_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_in_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_in_max(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_in_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define in_reg(offset)						\
static SENSOR_DEVICE_ATTR(in##offset##_input, S_IRUGO, show_in,	\
NULL, offset);					\
static SENSOR_DEVICE_ATTR(in##offset##_min, S_IRUGO | S_IWUSR,	\
show_in_min, set_in_min, offset);		\
static SENSOR_DEVICE_ATTR(in##offset##_max, S_IRUGO | S_IWUSR,	\
show_in_max, set_in_max, offset);
in_reg(0);
in_reg(1);
in_reg(2);
in_reg(3);
in_reg(4);
in_reg(5);
in_reg(6);
in_reg(7);
in_reg(8);
in_reg(9);
in_reg(10);
in_reg(11);
in_reg(12);
in_reg(13);
in_reg(14);
in_reg(15);
static ssize_t show_in16(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_in16_min(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_in16_min(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_in16_max(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_in16_max(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(in16_input, S_IRUGO, show_in16, NULL, 16);
static SENSOR_DEVICE_ATTR(in16_min, S_IRUGO | S_IWUSR, show_in16_min, set_in16_min, 16);
static SENSOR_DEVICE_ATTR(in16_max, S_IRUGO | S_IWUSR, show_in16_max, set_in16_max, 16);
static ssize_t show_fan(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_fan_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_fan_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define fan_offset(offset)						\
static SENSOR_DEVICE_ATTR(fan##offset##_input, S_IRUGO, show_fan, NULL,	\
offset - 1);						\
static SENSOR_DEVICE_ATTR(fan##offset##_min, S_IRUGO | S_IWUSR,		\
show_fan_min, set_fan_min, offset - 1);
fan_offset(1);
fan_offset(2);
fan_offset(3);
fan_offset(4);
fan_offset(5);
fan_offset(6);
fan_offset(7);
fan_offset(8);
static void fixup_fan_min(struct device *dev, int fan, int old_div)
static ssize_t show_fan_div(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_fan_div(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define fan_offset_div(offset)						\
static SENSOR_DEVICE_ATTR(fan##offset##_div, S_IRUGO | S_IWUSR,		\
show_fan_div, set_fan_div, offset - 1);
fan_offset_div(1);
fan_offset_div(2);
fan_offset_div(3);
fan_offset_div(4);
fan_offset_div(5);
fan_offset_div(6);
fan_offset_div(7);
fan_offset_div(8);
static ssize_t show_temp(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_temp_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_temp_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_temp_max(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_temp_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define temp_reg(offset)						\
static SENSOR_DEVICE_ATTR(temp##offset##_input, S_IRUGO, show_temp,	\
NULL, offset - 1);					\
static SENSOR_DEVICE_ATTR(temp##offset##_min, S_IRUGO | S_IWUSR,	\
show_temp_min, set_temp_min, offset - 1);		\
static SENSOR_DEVICE_ATTR(temp##offset##_max, S_IRUGO | S_IWUSR,	\
show_temp_max, set_temp_max, offset - 1);
temp_reg(1);
temp_reg(2);
temp_reg(3);
static ssize_t show_temp_offset(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_temp_offset(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
#define temp_offset_reg(offset)							\
static SENSOR_DEVICE_ATTR(temp##offset##_offset, S_IRUGO | S_IWUSR,		\
show_temp_offset, set_temp_offset, offset - 1);
temp_offset_reg(1);
temp_offset_reg(2);
temp_offset_reg(3);
static ssize_t show_temp_auto_point1_temp_hyst(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_temp_auto_point2_temp(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_temp_auto_point1_temp(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_temp_auto_point1_temp(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
#define temp_auto_point(offset)						\
static SENSOR_DEVICE_ATTR(temp##offset##_auto_point1_temp,		\
S_IRUGO | S_IWUSR, show_temp_auto_point1_temp,		\
set_temp_auto_point1_temp, offset - 1);			\
static SENSOR_DEVICE_ATTR(temp##offset##_auto_point1_temp_hyst, S_IRUGO,\
show_temp_auto_point1_temp_hyst, NULL, offset - 1);	\
static SENSOR_DEVICE_ATTR(temp##offset##_auto_point2_temp, S_IRUGO,	\
show_temp_auto_point2_temp, NULL, offset - 1);
temp_auto_point(1);
temp_auto_point(2);
temp_auto_point(3);
static ssize_t show_temp_crit_enable(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_temp_crit_enable(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
#define temp_crit_enable(offset)				\
static DEVICE_ATTR(temp##offset##_crit_enable, S_IRUGO | S_IWUSR, \
show_temp_crit_enable, set_temp_crit_enable);
temp_crit_enable(1);
temp_crit_enable(2);
temp_crit_enable(3);
static ssize_t show_temp_crit(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_temp_crit(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define temp_crit_reg(offset)						\
static SENSOR_DEVICE_ATTR(temp##offset##_crit, S_IRUGO | S_IWUSR,	\
show_temp_crit, set_temp_crit, offset - 1);
temp_crit_reg(1);
temp_crit_reg(2);
temp_crit_reg(3);
static ssize_t show_analog_out_reg(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_analog_out_reg(struct device *dev, struct device_attribute *attr, const char *buf,
size_t count)
static DEVICE_ATTR(analog_out, S_IRUGO | S_IWUSR, show_analog_out_reg,
set_analog_out_reg);
static ssize_t show_vid_reg(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(cpu0_vid, S_IRUGO, show_vid_reg, NULL);
static ssize_t show_vrm_reg(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t store_vrm_reg(struct device *dev, struct device_attribute *attr, const char *buf,
size_t count)
static DEVICE_ATTR(vrm, S_IRUGO | S_IWUSR, show_vrm_reg, store_vrm_reg);
static ssize_t show_alarms_reg(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms_reg, NULL);
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(temp2_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(temp3_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(in9_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(in11_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(in12_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(in13_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(in14_alarm, S_IRUGO, show_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(in15_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(in16_alarm, S_IRUGO, show_alarm, NULL, 7);
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, show_alarm, NULL, 8);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL, 9);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL, 10);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL, 11);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, show_alarm, NULL, 12);
static SENSOR_DEVICE_ATTR(in5_alarm, S_IRUGO, show_alarm, NULL, 13);
static SENSOR_DEVICE_ATTR(in6_alarm, S_IRUGO, show_alarm, NULL, 14);
static SENSOR_DEVICE_ATTR(in7_alarm, S_IRUGO, show_alarm, NULL, 15);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL, 16);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL, 17);
static SENSOR_DEVICE_ATTR(fan3_alarm, S_IRUGO, show_alarm, NULL, 18);
static SENSOR_DEVICE_ATTR(fan4_alarm, S_IRUGO, show_alarm, NULL, 19);
static SENSOR_DEVICE_ATTR(fan5_alarm, S_IRUGO, show_alarm, NULL, 20);
static SENSOR_DEVICE_ATTR(fan6_alarm, S_IRUGO, show_alarm, NULL, 21);
static SENSOR_DEVICE_ATTR(fan7_alarm, S_IRUGO, show_alarm, NULL, 22);
static SENSOR_DEVICE_ATTR(fan8_alarm, S_IRUGO, show_alarm, NULL, 23);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL, 24);
static SENSOR_DEVICE_ATTR(in10_alarm, S_IRUGO, show_alarm, NULL, 25);
static SENSOR_DEVICE_ATTR(in8_alarm, S_IRUGO, show_alarm, NULL, 26);
static ssize_t show_alarm_mask(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_alarm_mask(struct device *dev, struct device_attribute *attr, const char *buf,
size_t count)
static DEVICE_ATTR(alarm_mask, S_IRUGO | S_IWUSR, show_alarm_mask,
set_alarm_mask);
static ssize_t show_gpio(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_gpio(struct device *dev, struct device_attribute *attr, const char *buf,
size_t count)
static DEVICE_ATTR(gpio, S_IRUGO | S_IWUSR, show_gpio, set_gpio);
static ssize_t show_gpio_mask(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_gpio_mask(struct device *dev, struct device_attribute *attr, const char *buf,
size_t count)
static DEVICE_ATTR(gpio_mask, S_IRUGO | S_IWUSR, show_gpio_mask, set_gpio_mask);
static ssize_t show_pwm_reg(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_pwm_reg(struct device *dev, struct device_attribute *attr, const char *buf,
size_t count)
static ssize_t show_auto_pwm_min(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_auto_pwm_min(struct device *dev, struct device_attribute *attr, const char *buf,
size_t count)
static ssize_t show_auto_pwm_max(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_pwm_enable(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_pwm_enable(struct device *dev, struct device_attribute *attr, const char *buf,
size_t count)
static DEVICE_ATTR(pwm1, S_IRUGO | S_IWUSR, show_pwm_reg, set_pwm_reg);
static DEVICE_ATTR(pwm2, S_IRUGO | S_IWUSR, show_pwm_reg, set_pwm_reg);
static DEVICE_ATTR(pwm3, S_IRUGO | S_IWUSR, show_pwm_reg, set_pwm_reg);
static DEVICE_ATTR(pwm1_enable, S_IRUGO | S_IWUSR, show_pwm_enable,
set_pwm_enable);
static DEVICE_ATTR(pwm2_enable, S_IRUGO | S_IWUSR, show_pwm_enable,
set_pwm_enable);
static DEVICE_ATTR(pwm3_enable, S_IRUGO | S_IWUSR, show_pwm_enable,
set_pwm_enable);
static DEVICE_ATTR(temp1_auto_point1_pwm, S_IRUGO | S_IWUSR,
show_auto_pwm_min, set_auto_pwm_min);
static DEVICE_ATTR(temp2_auto_point1_pwm, S_IRUGO | S_IWUSR,
show_auto_pwm_min, set_auto_pwm_min);
static DEVICE_ATTR(temp3_auto_point1_pwm, S_IRUGO | S_IWUSR,
show_auto_pwm_min, set_auto_pwm_min);
static DEVICE_ATTR(temp1_auto_point2_pwm, S_IRUGO, show_auto_pwm_max, NULL);
static DEVICE_ATTR(temp2_auto_point2_pwm, S_IRUGO, show_auto_pwm_max, NULL);
static DEVICE_ATTR(temp3_auto_point2_pwm, S_IRUGO, show_auto_pwm_max, NULL);
static struct attribute *adm1026_attributes[] = ;
static const struct attribute_group adm1026_group = ;
static struct attribute *adm1026_attributes_temp3[] = ;
static const struct attribute_group adm1026_group_temp3 = ;
static struct attribute *adm1026_attributes_in8_9[] = ;
static const struct attribute_group adm1026_group_in8_9 = ;
static int adm1026_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int adm1026_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int adm1026_remove(struct i2c_client *client)
static int __init sm_adm1026_init(void)
static void __exit sm_adm1026_exit(void)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Philip Pokorny <ppokorny@penguincomputing.com>, "
"Justin Thiessen <jthiessen@penguincomputing.com>");
MODULE_DESCRIPTION("ADM1026 driver");
module_init(sm_adm1026_init);
module_exit(sm_adm1026_exit);
