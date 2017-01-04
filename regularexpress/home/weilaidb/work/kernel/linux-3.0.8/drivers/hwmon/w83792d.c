static const unsigned short normal_i2c[] = ;
static unsigned short force_subclients[4];
module_param_array(force_subclients, short, NULL, 0);
MODULE_PARM_DESC(force_subclients, "List of subclient addresses: "
"");
static int init;
module_param(init, bool, 0);
MODULE_PARM_DESC(init, "Set to one to force chip initialization");
static const u8 W83792D_REG_IN[9] = ;
#define W83792D_REG_LOW_BITS1 0x3E
#define W83792D_REG_LOW_BITS2 0x3F
static const u8 W83792D_REG_IN_MAX[9] = ;
static const u8 W83792D_REG_IN_MIN[9] = ;
static const u8 W83792D_REG_FAN[7] = ;
static const u8 W83792D_REG_FAN_MIN[7] = ;
#define W83792D_REG_FAN_CFG 0x84
static const u8 W83792D_REG_FAN_DIV[4] = ;
static const u8 W83792D_REG_PWM[7] = ;
#define W83792D_REG_BANK		0x4E
#define W83792D_REG_TEMP2_CONFIG	0xC2
#define W83792D_REG_TEMP3_CONFIG	0xCA
static const u8 W83792D_REG_TEMP1[3] = ;
static const u8 W83792D_REG_TEMP_ADD[2][6] = ;
static const u8 W83792D_REG_THERMAL[3] = ;
static const u8 W83792D_REG_TOLERANCE[3] = ;
static const u8 W83792D_REG_POINTS[3][4] = ;
static const u8 W83792D_REG_LEVELS[3][4] = ;
#define W83792D_REG_GPIO_EN		0x1A
#define W83792D_REG_CONFIG		0x40
#define W83792D_REG_VID_FANDIV		0x47
#define W83792D_REG_CHIPID		0x49
#define W83792D_REG_WCHIPID		0x58
#define W83792D_REG_CHIPMAN		0x4F
#define W83792D_REG_PIN			0x4B
#define W83792D_REG_I2C_SUBADDR		0x4A
#define W83792D_REG_ALARM1 0xA9
#define W83792D_REG_ALARM2 0xAA
#define W83792D_REG_ALARM3 0xAB
#define W83792D_REG_CHASSIS 0x42
#define W83792D_REG_CHASSIS_CLR 0x44
#define W83792D_REG_VID_IN_B		0x17
#define W83792D_REG_VBAT		0x5D
#define W83792D_REG_I2C_ADDR		0x48
#define IN_FROM_REG(nr,val) (((nr)<=1)?(val*2): \
((((nr)==6)||((nr)==7))?(val*6):(val*4)))
#define IN_TO_REG(nr,val) (((nr)<=1)?(val/2): \
((((nr)==6)||((nr)==7))?(val/6):(val/4)))
static inline u8
FAN_TO_REG(long rpm, int div)
#define FAN_FROM_REG(val,div)	((val) == 0   ? -1 : \
((val) == 255 ? 0 : \
1350000 / ((val) * (div))))
#define TEMP1_TO_REG(val)	(SENSORS_LIMIT(((val) < 0 ? (val)+0x100*1000 \
: (val)) / 1000, 0, 0xff))
#define TEMP1_FROM_REG(val)	(((val) & 0x80 ? (val)-0x100 : (val)) * 1000)
#define TEMP_ADD_FROM_REG(val1, val2) \
((((val1) & 0x80 ? (val1)-0x100 \
: (val1)) * 1000) + ((val2 & 0x80) ? 500 : 0))
#define TEMP_ADD_TO_REG_HIGH(val) \
(SENSORS_LIMIT(((val) < 0 ? (val)+0x100*1000 \
: (val)) / 1000, 0, 0xff))
#define TEMP_ADD_TO_REG_LOW(val)	((val%1000) ? 0x80 : 0x00)
#define DIV_FROM_REG(val)		(1 << (val))
static inline u8
DIV_TO_REG(long val)
struct w83792d_data ;
static int w83792d_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int w83792d_detect(struct i2c_client *client,
struct i2c_board_info *info);
static int w83792d_remove(struct i2c_client *client);
static struct w83792d_data *w83792d_update_device(struct device *dev);
static void w83792d_print_debug(struct w83792d_data *data, struct device *dev);
static void w83792d_init_client(struct i2c_client *client);
static const struct i2c_device_id w83792d_id[] = ;
MODULE_DEVICE_TABLE(i2c, w83792d_id);
static struct i2c_driver w83792d_driver = ;
static inline long in_count_from_reg(int nr, struct w83792d_data *data)
static inline int w83792d_read_value(struct i2c_client *client, u8 reg)
static inline int
w83792d_write_value(struct i2c_client *client, u8 reg, u8 value)
static ssize_t show_in(struct device *dev, struct device_attribute *attr,
char *buf)
#define show_in_reg(reg) \
static ssize_t show_##reg(struct device *dev, struct device_attribute *attr, \
char *buf) \
show_in_reg(in_min);
show_in_reg(in_max);
#define store_in_reg(REG, reg) \
static ssize_t store_in_##reg (struct device *dev, \
struct device_attribute *attr, \
const char *buf, size_t count) \
store_in_reg(MIN, min);
store_in_reg(MAX, max);
#define show_fan_reg(reg) \
static ssize_t show_##reg (struct device *dev, struct device_attribute *attr, \
char *buf) \
show_fan_reg(fan);
show_fan_reg(fan_min);
static ssize_t
store_fan_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_fan_div(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
store_fan_div(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_temp1(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_temp1(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_temp23(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_temp23(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_alarms_reg(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_alarm(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
show_pwm(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
show_pwmenable(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
store_pwm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
store_pwmenable(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_pwm_mode(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
store_pwm_mode(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_chassis(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
show_regs_chassis(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
show_chassis_clear(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_chassis_clear_legacy(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
store_chassis_clear(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_thermal_cruise(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
store_thermal_cruise(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_tolerance(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
store_tolerance(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_sf2_point(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
store_sf2_point(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_sf2_level(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
store_sf2_level(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static int
w83792d_detect_subclients(struct i2c_client *new_client)
static SENSOR_DEVICE_ATTR(in0_input, S_IRUGO, show_in, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_input, S_IRUGO, show_in, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_input, S_IRUGO, show_in, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_input, S_IRUGO, show_in, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_input, S_IRUGO, show_in, NULL, 4);
static SENSOR_DEVICE_ATTR(in5_input, S_IRUGO, show_in, NULL, 5);
static SENSOR_DEVICE_ATTR(in6_input, S_IRUGO, show_in, NULL, 6);
static SENSOR_DEVICE_ATTR(in7_input, S_IRUGO, show_in, NULL, 7);
static SENSOR_DEVICE_ATTR(in8_input, S_IRUGO, show_in, NULL, 8);
static SENSOR_DEVICE_ATTR(in0_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 0);
static SENSOR_DEVICE_ATTR(in1_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 1);
static SENSOR_DEVICE_ATTR(in2_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 2);
static SENSOR_DEVICE_ATTR(in3_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 3);
static SENSOR_DEVICE_ATTR(in4_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 4);
static SENSOR_DEVICE_ATTR(in5_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 5);
static SENSOR_DEVICE_ATTR(in6_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 6);
static SENSOR_DEVICE_ATTR(in7_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 7);
static SENSOR_DEVICE_ATTR(in8_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 8);
static SENSOR_DEVICE_ATTR(in0_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 0);
static SENSOR_DEVICE_ATTR(in1_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 1);
static SENSOR_DEVICE_ATTR(in2_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 2);
static SENSOR_DEVICE_ATTR(in3_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 3);
static SENSOR_DEVICE_ATTR(in4_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 4);
static SENSOR_DEVICE_ATTR(in5_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 5);
static SENSOR_DEVICE_ATTR(in6_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 6);
static SENSOR_DEVICE_ATTR(in7_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 7);
static SENSOR_DEVICE_ATTR(in8_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 8);
static SENSOR_DEVICE_ATTR_2(temp1_input, S_IRUGO, show_temp1, NULL, 0, 0);
static SENSOR_DEVICE_ATTR_2(temp2_input, S_IRUGO, show_temp23, NULL, 0, 0);
static SENSOR_DEVICE_ATTR_2(temp3_input, S_IRUGO, show_temp23, NULL, 1, 0);
static SENSOR_DEVICE_ATTR_2(temp1_max, S_IRUGO | S_IWUSR,
show_temp1, store_temp1, 0, 1);
static SENSOR_DEVICE_ATTR_2(temp2_max, S_IRUGO | S_IWUSR, show_temp23,
store_temp23, 0, 2);
static SENSOR_DEVICE_ATTR_2(temp3_max, S_IRUGO | S_IWUSR, show_temp23,
store_temp23, 1, 2);
static SENSOR_DEVICE_ATTR_2(temp1_max_hyst, S_IRUGO | S_IWUSR,
show_temp1, store_temp1, 0, 2);
static SENSOR_DEVICE_ATTR_2(temp2_max_hyst, S_IRUGO | S_IWUSR,
show_temp23, store_temp23, 0, 4);
static SENSOR_DEVICE_ATTR_2(temp3_max_hyst, S_IRUGO | S_IWUSR,
show_temp23, store_temp23, 1, 4);
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms_reg, NULL);
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(temp2_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(temp3_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(fan3_alarm, S_IRUGO, show_alarm, NULL, 7);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL, 8);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL, 9);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, show_alarm, NULL, 10);
static SENSOR_DEVICE_ATTR(in5_alarm, S_IRUGO, show_alarm, NULL, 11);
static SENSOR_DEVICE_ATTR(in6_alarm, S_IRUGO, show_alarm, NULL, 12);
static SENSOR_DEVICE_ATTR(fan7_alarm, S_IRUGO, show_alarm, NULL, 15);
static SENSOR_DEVICE_ATTR(in7_alarm, S_IRUGO, show_alarm, NULL, 19);
static SENSOR_DEVICE_ATTR(in8_alarm, S_IRUGO, show_alarm, NULL, 20);
static SENSOR_DEVICE_ATTR(fan4_alarm, S_IRUGO, show_alarm, NULL, 21);
static SENSOR_DEVICE_ATTR(fan5_alarm, S_IRUGO, show_alarm, NULL, 22);
static SENSOR_DEVICE_ATTR(fan6_alarm, S_IRUGO, show_alarm, NULL, 23);
static DEVICE_ATTR(chassis, S_IRUGO, show_regs_chassis, NULL);
static DEVICE_ATTR(chassis_clear, S_IRUGO | S_IWUSR,
show_chassis_clear, store_chassis_clear_legacy);
static DEVICE_ATTR(intrusion0_alarm, S_IRUGO | S_IWUSR,
show_chassis, store_chassis_clear);
static SENSOR_DEVICE_ATTR(pwm1, S_IWUSR | S_IRUGO, show_pwm, store_pwm, 0);
static SENSOR_DEVICE_ATTR(pwm2, S_IWUSR | S_IRUGO, show_pwm, store_pwm, 1);
static SENSOR_DEVICE_ATTR(pwm3, S_IWUSR | S_IRUGO, show_pwm, store_pwm, 2);
static SENSOR_DEVICE_ATTR(pwm1_enable, S_IWUSR | S_IRUGO,
show_pwmenable, store_pwmenable, 1);
static SENSOR_DEVICE_ATTR(pwm2_enable, S_IWUSR | S_IRUGO,
show_pwmenable, store_pwmenable, 2);
static SENSOR_DEVICE_ATTR(pwm3_enable, S_IWUSR | S_IRUGO,
show_pwmenable, store_pwmenable, 3);
static SENSOR_DEVICE_ATTR(pwm1_mode, S_IWUSR | S_IRUGO,
show_pwm_mode, store_pwm_mode, 0);
static SENSOR_DEVICE_ATTR(pwm2_mode, S_IWUSR | S_IRUGO,
show_pwm_mode, store_pwm_mode, 1);
static SENSOR_DEVICE_ATTR(pwm3_mode, S_IWUSR | S_IRUGO,
show_pwm_mode, store_pwm_mode, 2);
static SENSOR_DEVICE_ATTR(tolerance1, S_IWUSR | S_IRUGO,
show_tolerance, store_tolerance, 1);
static SENSOR_DEVICE_ATTR(tolerance2, S_IWUSR | S_IRUGO,
show_tolerance, store_tolerance, 2);
static SENSOR_DEVICE_ATTR(tolerance3, S_IWUSR | S_IRUGO,
show_tolerance, store_tolerance, 3);
static SENSOR_DEVICE_ATTR(thermal_cruise1, S_IWUSR | S_IRUGO,
show_thermal_cruise, store_thermal_cruise, 1);
static SENSOR_DEVICE_ATTR(thermal_cruise2, S_IWUSR | S_IRUGO,
show_thermal_cruise, store_thermal_cruise, 2);
static SENSOR_DEVICE_ATTR(thermal_cruise3, S_IWUSR | S_IRUGO,
show_thermal_cruise, store_thermal_cruise, 3);
static SENSOR_DEVICE_ATTR_2(sf2_point1_fan1, S_IRUGO | S_IWUSR,
show_sf2_point, store_sf2_point, 1, 1);
static SENSOR_DEVICE_ATTR_2(sf2_point2_fan1, S_IRUGO | S_IWUSR,
show_sf2_point, store_sf2_point, 2, 1);
static SENSOR_DEVICE_ATTR_2(sf2_point3_fan1, S_IRUGO | S_IWUSR,
show_sf2_point, store_sf2_point, 3, 1);
static SENSOR_DEVICE_ATTR_2(sf2_point4_fan1, S_IRUGO | S_IWUSR,
show_sf2_point, store_sf2_point, 4, 1);
static SENSOR_DEVICE_ATTR_2(sf2_point1_fan2, S_IRUGO | S_IWUSR,
show_sf2_point, store_sf2_point, 1, 2);
static SENSOR_DEVICE_ATTR_2(sf2_point2_fan2, S_IRUGO | S_IWUSR,
show_sf2_point, store_sf2_point, 2, 2);
static SENSOR_DEVICE_ATTR_2(sf2_point3_fan2, S_IRUGO | S_IWUSR,
show_sf2_point, store_sf2_point, 3, 2);
static SENSOR_DEVICE_ATTR_2(sf2_point4_fan2, S_IRUGO | S_IWUSR,
show_sf2_point, store_sf2_point, 4, 2);
static SENSOR_DEVICE_ATTR_2(sf2_point1_fan3, S_IRUGO | S_IWUSR,
show_sf2_point, store_sf2_point, 1, 3);
static SENSOR_DEVICE_ATTR_2(sf2_point2_fan3, S_IRUGO | S_IWUSR,
show_sf2_point, store_sf2_point, 2, 3);
static SENSOR_DEVICE_ATTR_2(sf2_point3_fan3, S_IRUGO | S_IWUSR,
show_sf2_point, store_sf2_point, 3, 3);
static SENSOR_DEVICE_ATTR_2(sf2_point4_fan3, S_IRUGO | S_IWUSR,
show_sf2_point, store_sf2_point, 4, 3);
static SENSOR_DEVICE_ATTR_2(sf2_level1_fan1, S_IRUGO | S_IWUSR,
show_sf2_level, store_sf2_level, 1, 1);
static SENSOR_DEVICE_ATTR_2(sf2_level2_fan1, S_IRUGO | S_IWUSR,
show_sf2_level, store_sf2_level, 2, 1);
static SENSOR_DEVICE_ATTR_2(sf2_level3_fan1, S_IRUGO | S_IWUSR,
show_sf2_level, store_sf2_level, 3, 1);
static SENSOR_DEVICE_ATTR_2(sf2_level1_fan2, S_IRUGO | S_IWUSR,
show_sf2_level, store_sf2_level, 1, 2);
static SENSOR_DEVICE_ATTR_2(sf2_level2_fan2, S_IRUGO | S_IWUSR,
show_sf2_level, store_sf2_level, 2, 2);
static SENSOR_DEVICE_ATTR_2(sf2_level3_fan2, S_IRUGO | S_IWUSR,
show_sf2_level, store_sf2_level, 3, 2);
static SENSOR_DEVICE_ATTR_2(sf2_level1_fan3, S_IRUGO | S_IWUSR,
show_sf2_level, store_sf2_level, 1, 3);
static SENSOR_DEVICE_ATTR_2(sf2_level2_fan3, S_IRUGO | S_IWUSR,
show_sf2_level, store_sf2_level, 2, 3);
static SENSOR_DEVICE_ATTR_2(sf2_level3_fan3, S_IRUGO | S_IWUSR,
show_sf2_level, store_sf2_level, 3, 3);
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, show_fan, NULL, 1);
static SENSOR_DEVICE_ATTR(fan2_input, S_IRUGO, show_fan, NULL, 2);
static SENSOR_DEVICE_ATTR(fan3_input, S_IRUGO, show_fan, NULL, 3);
static SENSOR_DEVICE_ATTR(fan4_input, S_IRUGO, show_fan, NULL, 4);
static SENSOR_DEVICE_ATTR(fan5_input, S_IRUGO, show_fan, NULL, 5);
static SENSOR_DEVICE_ATTR(fan6_input, S_IRUGO, show_fan, NULL, 6);
static SENSOR_DEVICE_ATTR(fan7_input, S_IRUGO, show_fan, NULL, 7);
static SENSOR_DEVICE_ATTR(fan1_min, S_IWUSR | S_IRUGO,
show_fan_min, store_fan_min, 1);
static SENSOR_DEVICE_ATTR(fan2_min, S_IWUSR | S_IRUGO,
show_fan_min, store_fan_min, 2);
static SENSOR_DEVICE_ATTR(fan3_min, S_IWUSR | S_IRUGO,
show_fan_min, store_fan_min, 3);
static SENSOR_DEVICE_ATTR(fan4_min, S_IWUSR | S_IRUGO,
show_fan_min, store_fan_min, 4);
static SENSOR_DEVICE_ATTR(fan5_min, S_IWUSR | S_IRUGO,
show_fan_min, store_fan_min, 5);
static SENSOR_DEVICE_ATTR(fan6_min, S_IWUSR | S_IRUGO,
show_fan_min, store_fan_min, 6);
static SENSOR_DEVICE_ATTR(fan7_min, S_IWUSR | S_IRUGO,
show_fan_min, store_fan_min, 7);
static SENSOR_DEVICE_ATTR(fan1_div, S_IWUSR | S_IRUGO,
show_fan_div, store_fan_div, 1);
static SENSOR_DEVICE_ATTR(fan2_div, S_IWUSR | S_IRUGO,
show_fan_div, store_fan_div, 2);
static SENSOR_DEVICE_ATTR(fan3_div, S_IWUSR | S_IRUGO,
show_fan_div, store_fan_div, 3);
static SENSOR_DEVICE_ATTR(fan4_div, S_IWUSR | S_IRUGO,
show_fan_div, store_fan_div, 4);
static SENSOR_DEVICE_ATTR(fan5_div, S_IWUSR | S_IRUGO,
show_fan_div, store_fan_div, 5);
static SENSOR_DEVICE_ATTR(fan6_div, S_IWUSR | S_IRUGO,
show_fan_div, store_fan_div, 6);
static SENSOR_DEVICE_ATTR(fan7_div, S_IWUSR | S_IRUGO,
show_fan_div, store_fan_div, 7);
static struct attribute *w83792d_attributes_fan[4][5] = ;
static const struct attribute_group w83792d_group_fan[4] = ;
static struct attribute *w83792d_attributes[] = ;
static const struct attribute_group w83792d_group = ;
static int
w83792d_detect(struct i2c_client *client, struct i2c_board_info *info)
static int
w83792d_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int
w83792d_remove(struct i2c_client *client)
static void
w83792d_init_client(struct i2c_client *client)
static struct w83792d_data *w83792d_update_device(struct device *dev)
static void w83792d_print_debug(struct w83792d_data *data, struct device *dev)
static int __init
sensors_w83792d_init(void)
static void __exit
sensors_w83792d_exit(void)
MODULE_AUTHOR("Chunhao Huang @ Winbond <DZShen@Winbond.com.tw>");
MODULE_DESCRIPTION("W83792AD/D driver for linux-2.6");
MODULE_LICENSE("GPL");
module_init(sensors_w83792d_init);
module_exit(sensors_w83792d_exit);
