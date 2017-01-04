#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static struct platform_device *pdev;
static const unsigned short normal_i2c[] = ;
static unsigned short isa_address = 0x290;
enum chips ;
#define LM78_EXTENT 8
#define LM78_ADDR_REG_OFFSET 5
#define LM78_DATA_REG_OFFSET 6
#define LM78_REG_IN_MAX(nr) (0x2b + (nr) * 2)
#define LM78_REG_IN_MIN(nr) (0x2c + (nr) * 2)
#define LM78_REG_IN(nr) (0x20 + (nr))
#define LM78_REG_FAN_MIN(nr) (0x3b + (nr))
#define LM78_REG_FAN(nr) (0x28 + (nr))
#define LM78_REG_TEMP 0x27
#define LM78_REG_TEMP_OVER 0x39
#define LM78_REG_TEMP_HYST 0x3a
#define LM78_REG_ALARM1 0x41
#define LM78_REG_ALARM2 0x42
#define LM78_REG_VID_FANDIV 0x47
#define LM78_REG_CONFIG 0x40
#define LM78_REG_CHIPID 0x49
#define LM78_REG_I2C_ADDR 0x48
static inline u8 IN_TO_REG(unsigned long val)
#define IN_FROM_REG(val) ((val) *  16)
static inline u8 FAN_TO_REG(long rpm, int div)
static inline int FAN_FROM_REG(u8 val, int div)
static inline s8 TEMP_TO_REG(int val)
static inline int TEMP_FROM_REG(s8 val)
#define DIV_FROM_REG(val) (1 << (val))
struct lm78_data ;
static int lm78_i2c_detect(struct i2c_client *client,
struct i2c_board_info *info);
static int lm78_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int lm78_i2c_remove(struct i2c_client *client);
static int __devinit lm78_isa_probe(struct platform_device *pdev);
static int __devexit lm78_isa_remove(struct platform_device *pdev);
static int lm78_read_value(struct lm78_data *data, u8 reg);
static int lm78_write_value(struct lm78_data *data, u8 reg, u8 value);
static struct lm78_data *lm78_update_device(struct device *dev);
static void lm78_init_device(struct lm78_data *data);
static const struct i2c_device_id lm78_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, lm78_i2c_id);
static struct i2c_driver lm78_driver = ;
static struct platform_driver lm78_isa_driver = ;
static ssize_t show_in(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t show_in_min(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t show_in_max(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t set_in_min(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static ssize_t set_in_max(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
#define show_in_offset(offset)					\
static SENSOR_DEVICE_ATTR(in##offset##_input, S_IRUGO,		\
show_in, NULL, offset);				\
static SENSOR_DEVICE_ATTR(in##offset##_min, S_IRUGO | S_IWUSR,	\
show_in_min, set_in_min, offset);		\
static SENSOR_DEVICE_ATTR(in##offset##_max, S_IRUGO | S_IWUSR,	\
show_in_max, set_in_max, offset);
show_in_offset(0);
show_in_offset(1);
show_in_offset(2);
show_in_offset(3);
show_in_offset(4);
show_in_offset(5);
show_in_offset(6);
static ssize_t show_temp(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t show_temp_over(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t set_temp_over(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static ssize_t show_temp_hyst(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t set_temp_hyst(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL);
static DEVICE_ATTR(temp1_max, S_IRUGO | S_IWUSR,
show_temp_over, set_temp_over);
static DEVICE_ATTR(temp1_max_hyst, S_IRUGO | S_IWUSR,
show_temp_hyst, set_temp_hyst);
static ssize_t show_fan(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t show_fan_min(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t set_fan_min(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static ssize_t show_fan_div(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t set_fan_div(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
#define show_fan_offset(offset)				\
static SENSOR_DEVICE_ATTR(fan##offset##_input, S_IRUGO,		\
show_fan, NULL, offset - 1);			\
static SENSOR_DEVICE_ATTR(fan##offset##_min, S_IRUGO | S_IWUSR,	\
show_fan_min, set_fan_min, offset - 1);
show_fan_offset(1);
show_fan_offset(2);
show_fan_offset(3);
static SENSOR_DEVICE_ATTR(fan1_div, S_IRUGO | S_IWUSR,
show_fan_div, set_fan_div, 0);
static SENSOR_DEVICE_ATTR(fan2_div, S_IRUGO | S_IWUSR,
show_fan_div, set_fan_div, 1);
static SENSOR_DEVICE_ATTR(fan3_div, S_IRUGO, show_fan_div, NULL, 2);
static ssize_t show_vid(struct device *dev, struct device_attribute *da,
char *buf)
static DEVICE_ATTR(cpu0_vid, S_IRUGO, show_vid, NULL);
static ssize_t show_alarms(struct device *dev, struct device_attribute *da,
char *buf)
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static ssize_t show_alarm(struct device *dev, struct device_attribute *da,
char *buf)
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, show_alarm, NULL, 8);
static SENSOR_DEVICE_ATTR(in5_alarm, S_IRUGO, show_alarm, NULL, 9);
static SENSOR_DEVICE_ATTR(in6_alarm, S_IRUGO, show_alarm, NULL, 10);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL, 7);
static SENSOR_DEVICE_ATTR(fan3_alarm, S_IRUGO, show_alarm, NULL, 11);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL, 4);
static struct attribute *lm78_attributes[] = ;
static const struct attribute_group lm78_group = ;
static ssize_t show_name(struct device *dev, struct device_attribute
*devattr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static int lm78_alias_detect(struct i2c_client *client, u8 chipid)
static int lm78_i2c_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int lm78_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int lm78_i2c_remove(struct i2c_client *client)
static int __devinit lm78_isa_probe(struct platform_device *pdev)
static int __devexit lm78_isa_remove(struct platform_device *pdev)
static int lm78_read_value(struct lm78_data *data, u8 reg)
static int lm78_write_value(struct lm78_data *data, u8 reg, u8 value)
static void lm78_init_device(struct lm78_data *data)
static struct lm78_data *lm78_update_device(struct device *dev)
static int __init lm78_isa_found(unsigned short address)
static int __init lm78_isa_device_add(unsigned short address)
static int __init sm_lm78_init(void)
static void __exit sm_lm78_exit(void)
MODULE_AUTHOR("Frodo Looijaard <frodol@dds.nl>");
MODULE_DESCRIPTION("LM78/LM79 driver");
MODULE_LICENSE("GPL");
module_init(sm_lm78_init);
module_exit(sm_lm78_exit);
