static unsigned short extra_sensor_type;
module_param(extra_sensor_type, ushort, 0);
MODULE_PARM_DESC(extra_sensor_type, "Type of extra sensor (0=autodetect, 1=temperature, 2=voltage)");
static const unsigned short normal_i2c[] = ;
#define GL520_REG_CHIP_ID		0x00
#define GL520_REG_REVISION		0x01
#define GL520_REG_CONF			0x03
#define GL520_REG_MASK			0x11
#define GL520_REG_VID_INPUT		0x02
static const u8 GL520_REG_IN_INPUT[]	= ;
static const u8 GL520_REG_IN_LIMIT[]	= ;
static const u8 GL520_REG_IN_MIN[]	= ;
static const u8 GL520_REG_IN_MAX[]	= ;
static const u8 GL520_REG_TEMP_INPUT[]		= ;
static const u8 GL520_REG_TEMP_MAX[]		= ;
static const u8 GL520_REG_TEMP_MAX_HYST[]	= ;
#define GL520_REG_FAN_INPUT		0x07
#define GL520_REG_FAN_MIN		0x08
#define GL520_REG_FAN_DIV		0x0f
#define GL520_REG_FAN_OFF		GL520_REG_FAN_DIV
#define GL520_REG_ALARMS		0x12
#define GL520_REG_BEEP_MASK		0x10
#define GL520_REG_BEEP_ENABLE		GL520_REG_CONF
static int gl520_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int gl520_detect(struct i2c_client *client, struct i2c_board_info *info);
static void gl520_init_client(struct i2c_client *client);
static int gl520_remove(struct i2c_client *client);
static int gl520_read_value(struct i2c_client *client, u8 reg);
static int gl520_write_value(struct i2c_client *client, u8 reg, u16 value);
static struct gl520_data *gl520_update_device(struct device *dev);
static const struct i2c_device_id gl520_id[] = ;
MODULE_DEVICE_TABLE(i2c, gl520_id);
static struct i2c_driver gl520_driver = ;
struct gl520_data ;
static ssize_t get_cpu_vid(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(cpu0_vid, S_IRUGO, get_cpu_vid, NULL);
#define VDD_FROM_REG(val) (((val)*95+2)/4)
#define VDD_TO_REG(val) (SENSORS_LIMIT((((val)*4+47)/95),0,255))
#define IN_FROM_REG(val) ((val)*19)
#define IN_TO_REG(val) (SENSORS_LIMIT((((val)+9)/19),0,255))
static ssize_t get_in_input(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t get_in_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t get_in_max(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_in_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_in_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(in0_input, S_IRUGO, get_in_input, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_input, S_IRUGO, get_in_input, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_input, S_IRUGO, get_in_input, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_input, S_IRUGO, get_in_input, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_input, S_IRUGO, get_in_input, NULL, 4);
static SENSOR_DEVICE_ATTR(in0_min, S_IRUGO | S_IWUSR,
get_in_min, set_in_min, 0);
static SENSOR_DEVICE_ATTR(in1_min, S_IRUGO | S_IWUSR,
get_in_min, set_in_min, 1);
static SENSOR_DEVICE_ATTR(in2_min, S_IRUGO | S_IWUSR,
get_in_min, set_in_min, 2);
static SENSOR_DEVICE_ATTR(in3_min, S_IRUGO | S_IWUSR,
get_in_min, set_in_min, 3);
static SENSOR_DEVICE_ATTR(in4_min, S_IRUGO | S_IWUSR,
get_in_min, set_in_min, 4);
static SENSOR_DEVICE_ATTR(in0_max, S_IRUGO | S_IWUSR,
get_in_max, set_in_max, 0);
static SENSOR_DEVICE_ATTR(in1_max, S_IRUGO | S_IWUSR,
get_in_max, set_in_max, 1);
static SENSOR_DEVICE_ATTR(in2_max, S_IRUGO | S_IWUSR,
get_in_max, set_in_max, 2);
static SENSOR_DEVICE_ATTR(in3_max, S_IRUGO | S_IWUSR,
get_in_max, set_in_max, 3);
static SENSOR_DEVICE_ATTR(in4_max, S_IRUGO | S_IWUSR,
get_in_max, set_in_max, 4);
#define DIV_FROM_REG(val) (1 << (val))
#define FAN_FROM_REG(val,div) ((val)==0 ? 0 : (480000/((val) << (div))))
#define FAN_TO_REG(val,div) ((val)<=0?0:SENSORS_LIMIT((480000 + ((val) << ((div)-1))) / ((val) << (div)), 1, 255));
static ssize_t get_fan_input(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t get_fan_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t get_fan_div(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t get_fan_off(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_fan_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_fan_div(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_fan_off(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, get_fan_input, NULL, 0);
static SENSOR_DEVICE_ATTR(fan2_input, S_IRUGO, get_fan_input, NULL, 1);
static SENSOR_DEVICE_ATTR(fan1_min, S_IRUGO | S_IWUSR,
get_fan_min, set_fan_min, 0);
static SENSOR_DEVICE_ATTR(fan2_min, S_IRUGO | S_IWUSR,
get_fan_min, set_fan_min, 1);
static SENSOR_DEVICE_ATTR(fan1_div, S_IRUGO | S_IWUSR,
get_fan_div, set_fan_div, 0);
static SENSOR_DEVICE_ATTR(fan2_div, S_IRUGO | S_IWUSR,
get_fan_div, set_fan_div, 1);
static DEVICE_ATTR(fan1_off, S_IRUGO | S_IWUSR,
get_fan_off, set_fan_off);
#define TEMP_FROM_REG(val) (((val) - 130) * 1000)
#define TEMP_TO_REG(val) (SENSORS_LIMIT(((((val)<0?(val)-500:(val)+500) / 1000)+130),0,255))
static ssize_t get_temp_input(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t get_temp_max(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t get_temp_max_hyst(struct device *dev, struct device_attribute
*attr, char *buf)
static ssize_t set_temp_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_temp_max_hyst(struct device *dev, struct device_attribute
*attr, const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, get_temp_input, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, get_temp_input, NULL, 1);
static SENSOR_DEVICE_ATTR(temp1_max, S_IRUGO | S_IWUSR,
get_temp_max, set_temp_max, 0);
static SENSOR_DEVICE_ATTR(temp2_max, S_IRUGO | S_IWUSR,
get_temp_max, set_temp_max, 1);
static SENSOR_DEVICE_ATTR(temp1_max_hyst, S_IRUGO | S_IWUSR,
get_temp_max_hyst, set_temp_max_hyst, 0);
static SENSOR_DEVICE_ATTR(temp2_max_hyst, S_IRUGO | S_IWUSR,
get_temp_max_hyst, set_temp_max_hyst, 1);
static ssize_t get_alarms(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t get_beep_enable(struct device *dev, struct device_attribute
*attr, char *buf)
static ssize_t get_beep_mask(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_beep_enable(struct device *dev, struct device_attribute
*attr, const char *buf, size_t count)
static ssize_t set_beep_mask(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(alarms, S_IRUGO, get_alarms, NULL);
static DEVICE_ATTR(beep_enable, S_IRUGO | S_IWUSR,
get_beep_enable, set_beep_enable);
static DEVICE_ATTR(beep_mask, S_IRUGO | S_IWUSR,
get_beep_mask, set_beep_mask);
static ssize_t get_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, get_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, get_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, get_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, get_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, get_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, get_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, get_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(temp2_alarm, S_IRUGO, get_alarm, NULL, 7);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, get_alarm, NULL, 7);
static ssize_t get_beep(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_beep(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(in0_beep, S_IRUGO | S_IWUSR, get_beep, set_beep, 0);
static SENSOR_DEVICE_ATTR(in1_beep, S_IRUGO | S_IWUSR, get_beep, set_beep, 1);
static SENSOR_DEVICE_ATTR(in2_beep, S_IRUGO | S_IWUSR, get_beep, set_beep, 2);
static SENSOR_DEVICE_ATTR(in3_beep, S_IRUGO | S_IWUSR, get_beep, set_beep, 3);
static SENSOR_DEVICE_ATTR(temp1_beep, S_IRUGO | S_IWUSR, get_beep, set_beep, 4);
static SENSOR_DEVICE_ATTR(fan1_beep, S_IRUGO | S_IWUSR, get_beep, set_beep, 5);
static SENSOR_DEVICE_ATTR(fan2_beep, S_IRUGO | S_IWUSR, get_beep, set_beep, 6);
static SENSOR_DEVICE_ATTR(temp2_beep, S_IRUGO | S_IWUSR, get_beep, set_beep, 7);
static SENSOR_DEVICE_ATTR(in4_beep, S_IRUGO | S_IWUSR, get_beep, set_beep, 7);
static struct attribute *gl520_attributes[] = ;
static const struct attribute_group gl520_group = ;
static struct attribute *gl520_attributes_opt[] = ;
static const struct attribute_group gl520_group_opt = ;
static int gl520_detect(struct i2c_client *client, struct i2c_board_info *info)
static int gl520_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static void gl520_init_client(struct i2c_client *client)
static int gl520_remove(struct i2c_client *client)
static int gl520_read_value(struct i2c_client *client, u8 reg)
static int gl520_write_value(struct i2c_client *client, u8 reg, u16 value)
static struct gl520_data *gl520_update_device(struct device *dev)
static int __init sensors_gl520sm_init(void)
static void __exit sensors_gl520sm_exit(void)
MODULE_AUTHOR("Frodo Looijaard <frodol@dds.nl>, "
"Kyösti Mälkki <kmalkki@cc.hut.fi>, "
"Maarten Deprez <maartendeprez@users.sourceforge.net>");
MODULE_DESCRIPTION("GL520SM driver");
MODULE_LICENSE("GPL");
module_init(sensors_gl520sm_init);
module_exit(sensors_gl520sm_exit);
