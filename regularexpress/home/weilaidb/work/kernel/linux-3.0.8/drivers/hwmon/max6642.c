static const unsigned short normal_i2c[] = ;
#define MAX6642_REG_R_MAN_ID		0xFE
#define MAX6642_REG_R_CONFIG		0x03
#define MAX6642_REG_W_CONFIG		0x09
#define MAX6642_REG_R_STATUS		0x02
#define MAX6642_REG_R_LOCAL_TEMP	0x00
#define MAX6642_REG_R_LOCAL_TEMPL	0x11
#define MAX6642_REG_R_LOCAL_HIGH	0x05
#define MAX6642_REG_W_LOCAL_HIGH	0x0B
#define MAX6642_REG_R_REMOTE_TEMP	0x01
#define MAX6642_REG_R_REMOTE_TEMPL	0x10
#define MAX6642_REG_R_REMOTE_HIGH	0x07
#define MAX6642_REG_W_REMOTE_HIGH	0x0D
static int temp_from_reg10(int val)
static int temp_from_reg(int val)
static int temp_to_reg(int val)
struct max6642_data ;
static void max6642_init_client(struct i2c_client *client)
static int max6642_detect(struct i2c_client *client,
struct i2c_board_info *info)
static struct max6642_data *max6642_update_device(struct device *dev)
static ssize_t show_temp_max10(struct device *dev,
struct device_attribute *dev_attr, char *buf)
static ssize_t show_temp_max(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_temp_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp_max10, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_temp_max10, NULL, 1);
static SENSOR_DEVICE_ATTR_2(temp1_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 0, MAX6642_REG_W_LOCAL_HIGH);
static SENSOR_DEVICE_ATTR_2(temp2_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 1, MAX6642_REG_W_REMOTE_HIGH);
static SENSOR_DEVICE_ATTR(temp2_fault, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(temp1_max_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(temp2_max_alarm, S_IRUGO, show_alarm, NULL, 4);
static struct attribute *max6642_attributes[] = ;
static const struct attribute_group max6642_group = ;
static int max6642_probe(struct i2c_client *new_client,
const struct i2c_device_id *id)
static int max6642_remove(struct i2c_client *client)
static const struct i2c_device_id max6642_id[] = ;
MODULE_DEVICE_TABLE(i2c, max6642_id);
static struct i2c_driver max6642_driver = ;
static int __init max6642_init(void)
static void __exit max6642_exit(void)
MODULE_AUTHOR("Per Dalen <per.dalen@appeartv.com>");
MODULE_DESCRIPTION("MAX6642 sensor driver");
MODULE_LICENSE("GPL");
module_init(max6642_init);
module_exit(max6642_exit);
