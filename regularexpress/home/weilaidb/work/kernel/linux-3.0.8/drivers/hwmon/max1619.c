static const unsigned short normal_i2c[] = ;
#define MAX1619_REG_R_MAN_ID		0xFE
#define MAX1619_REG_R_CHIP_ID		0xFF
#define MAX1619_REG_R_CONFIG		0x03
#define MAX1619_REG_W_CONFIG		0x09
#define MAX1619_REG_R_CONVRATE		0x04
#define MAX1619_REG_W_CONVRATE		0x0A
#define MAX1619_REG_R_STATUS		0x02
#define MAX1619_REG_R_LOCAL_TEMP	0x00
#define MAX1619_REG_R_REMOTE_TEMP	0x01
#define MAX1619_REG_R_REMOTE_HIGH	0x07
#define MAX1619_REG_W_REMOTE_HIGH	0x0D
#define MAX1619_REG_R_REMOTE_LOW	0x08
#define MAX1619_REG_W_REMOTE_LOW	0x0E
#define MAX1619_REG_R_REMOTE_CRIT	0x10
#define MAX1619_REG_W_REMOTE_CRIT	0x12
#define MAX1619_REG_R_TCRIT_HYST	0x11
#define MAX1619_REG_W_TCRIT_HYST	0x13
static int temp_from_reg(int val)
static int temp_to_reg(int val)
static int max1619_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int max1619_detect(struct i2c_client *client,
struct i2c_board_info *info);
static void max1619_init_client(struct i2c_client *client);
static int max1619_remove(struct i2c_client *client);
static struct max1619_data *max1619_update_device(struct device *dev);
static const struct i2c_device_id max1619_id[] = ;
MODULE_DEVICE_TABLE(i2c, max1619_id);
static struct i2c_driver max1619_driver = ;
struct max1619_data ;
#define show_temp(value) \
static ssize_t show_##value(struct device *dev, struct device_attribute *attr, char *buf) \
show_temp(temp_input1);
show_temp(temp_input2);
show_temp(temp_low2);
show_temp(temp_high2);
show_temp(temp_crit2);
show_temp(temp_hyst2);
#define set_temp2(value, reg) \
static ssize_t set_##value(struct device *dev, struct device_attribute *attr, const char *buf, \
size_t count) \
set_temp2(temp_low2, MAX1619_REG_W_REMOTE_LOW);
set_temp2(temp_high2, MAX1619_REG_W_REMOTE_HIGH);
set_temp2(temp_crit2, MAX1619_REG_W_REMOTE_CRIT);
set_temp2(temp_hyst2, MAX1619_REG_W_TCRIT_HYST);
static ssize_t show_alarms(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(temp1_input, S_IRUGO, show_temp_input1, NULL);
static DEVICE_ATTR(temp2_input, S_IRUGO, show_temp_input2, NULL);
static DEVICE_ATTR(temp2_min, S_IWUSR | S_IRUGO, show_temp_low2,
set_temp_low2);
static DEVICE_ATTR(temp2_max, S_IWUSR | S_IRUGO, show_temp_high2,
set_temp_high2);
static DEVICE_ATTR(temp2_crit, S_IWUSR | S_IRUGO, show_temp_crit2,
set_temp_crit2);
static DEVICE_ATTR(temp2_crit_hyst, S_IWUSR | S_IRUGO, show_temp_hyst2,
set_temp_hyst2);
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static SENSOR_DEVICE_ATTR(temp2_crit_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(temp2_fault, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(temp2_min_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(temp2_max_alarm, S_IRUGO, show_alarm, NULL, 4);
static struct attribute *max1619_attributes[] = ;
static const struct attribute_group max1619_group = ;
static int max1619_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int max1619_probe(struct i2c_client *new_client,
const struct i2c_device_id *id)
static void max1619_init_client(struct i2c_client *client)
static int max1619_remove(struct i2c_client *client)
static struct max1619_data *max1619_update_device(struct device *dev)
static int __init sensors_max1619_init(void)
static void __exit sensors_max1619_exit(void)
MODULE_AUTHOR("Alexey Fisher <fishor@mail.ru> and "
"Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("MAX1619 sensor driver");
MODULE_LICENSE("GPL");
module_init(sensors_max1619_init);
module_exit(sensors_max1619_exit);
