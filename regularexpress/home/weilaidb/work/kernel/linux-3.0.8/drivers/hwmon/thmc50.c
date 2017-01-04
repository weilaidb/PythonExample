MODULE_LICENSE("GPL");
static const unsigned short normal_i2c[] = ;
enum chips ;
static unsigned short adm1022_temp3[16];
static unsigned int adm1022_temp3_num;
module_param_array(adm1022_temp3, ushort, &adm1022_temp3_num, 0);
MODULE_PARM_DESC(adm1022_temp3, "List of adapter,address pairs "
"to enable 3rd temperature (ADM1022 only)");
#define THMC50_REG_CONF				0x40
#define THMC50_REG_COMPANY_ID			0x3E
#define THMC50_REG_DIE_CODE			0x3F
#define THMC50_REG_ANALOG_OUT			0x19
#define THMC50_REG_INTR				0x41
static const u8 THMC50_REG_TEMP[] = ;
static const u8 THMC50_REG_TEMP_MIN[] = ;
static const u8 THMC50_REG_TEMP_MAX[] = ;
static const u8 THMC50_REG_TEMP_CRITICAL[] = ;
static const u8 THMC50_REG_TEMP_DEFAULT[] = ;
#define THMC50_REG_CONF_nFANOFF			0x20
#define THMC50_REG_CONF_PROGRAMMED		0x08
struct thmc50_data ;
static int thmc50_detect(struct i2c_client *client,
struct i2c_board_info *info);
static int thmc50_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int thmc50_remove(struct i2c_client *client);
static void thmc50_init_client(struct i2c_client *client);
static struct thmc50_data *thmc50_update_device(struct device *dev);
static const struct i2c_device_id thmc50_id[] = ;
MODULE_DEVICE_TABLE(i2c, thmc50_id);
static struct i2c_driver thmc50_driver = ;
static ssize_t show_analog_out(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_analog_out(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_pwm_mode(struct device *dev, struct device_attribute *attr,
char *buf)
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
static ssize_t show_temp_critical(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
#define temp_reg(offset)						\
static SENSOR_DEVICE_ATTR(temp##offset##_input, S_IRUGO, show_temp,	\
NULL, offset - 1);				\
static SENSOR_DEVICE_ATTR(temp##offset##_min, S_IRUGO | S_IWUSR,	\
show_temp_min, set_temp_min, offset - 1);	\
static SENSOR_DEVICE_ATTR(temp##offset##_max, S_IRUGO | S_IWUSR,	\
show_temp_max, set_temp_max, offset - 1);	\
static SENSOR_DEVICE_ATTR(temp##offset##_crit, S_IRUGO,			\
show_temp_critical, NULL, offset - 1);
temp_reg(1);
temp_reg(2);
temp_reg(3);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_alarm, S_IRUGO, show_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(temp3_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(temp2_fault, S_IRUGO, show_alarm, NULL, 7);
static SENSOR_DEVICE_ATTR(temp3_fault, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(pwm1, S_IRUGO | S_IWUSR, show_analog_out,
set_analog_out, 0);
static SENSOR_DEVICE_ATTR(pwm1_mode, S_IRUGO, show_pwm_mode, NULL, 0);
static struct attribute *thmc50_attributes[] = ;
static const struct attribute_group thmc50_group = ;
static struct attribute *temp3_attributes[] = ;
static const struct attribute_group temp3_group = ;
static int thmc50_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int thmc50_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int thmc50_remove(struct i2c_client *client)
static void thmc50_init_client(struct i2c_client *client)
static struct thmc50_data *thmc50_update_device(struct device *dev)
static int __init sm_thmc50_init(void)
static void __exit sm_thmc50_exit(void)
MODULE_AUTHOR("Krzysztof Helt <krzysztof.h1@wp.pl>");
MODULE_DESCRIPTION("THMC50 driver");
module_init(sm_thmc50_init);
module_exit(sm_thmc50_exit);
