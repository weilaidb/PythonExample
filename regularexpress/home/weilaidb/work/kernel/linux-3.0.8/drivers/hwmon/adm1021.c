static const unsigned short normal_i2c[] = ;
enum chips ;
#define ADM1021_REG_TEMP(nr)		(nr)
#define ADM1021_REG_STATUS		0x02
#define ADM1021_REG_MAN_ID		0xFE
#define ADM1021_REG_DEV_ID		0xFF
#define ADM1021_REG_CONFIG_R		0x03
#define ADM1021_REG_CONFIG_W		0x09
#define ADM1021_REG_CONV_RATE_R		0x04
#define ADM1021_REG_CONV_RATE_W		0x0A
#define ADM1023_REG_REM_TEMP_PREC	0x10
#define ADM1023_REG_REM_OFFSET		0x11
#define ADM1023_REG_REM_OFFSET_PREC	0x12
#define ADM1023_REG_REM_TOS_PREC	0x13
#define ADM1023_REG_REM_THYST_PREC	0x14
#define ADM1021_REG_TOS_R(nr)		(0x05 + 2 * (nr))
#define ADM1021_REG_TOS_W(nr)		(0x0B + 2 * (nr))
#define ADM1021_REG_THYST_R(nr)		(0x06 + 2 * (nr))
#define ADM1021_REG_THYST_W(nr)		(0x0C + 2 * (nr))
#define ADM1021_REG_ONESHOT		0x0F
struct adm1021_data ;
static int adm1021_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int adm1021_detect(struct i2c_client *client,
struct i2c_board_info *info);
static void adm1021_init_client(struct i2c_client *client);
static int adm1021_remove(struct i2c_client *client);
static struct adm1021_data *adm1021_update_device(struct device *dev);
static int read_only;
static const struct i2c_device_id adm1021_id[] = ;
MODULE_DEVICE_TABLE(i2c, adm1021_id);
static struct i2c_driver adm1021_driver = ;
static ssize_t show_temp(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_temp_max(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_temp_min(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_alarms(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t set_temp_max(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t set_temp_min(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_low_power(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t set_low_power(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL, 0);
static SENSOR_DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 0);
static SENSOR_DEVICE_ATTR(temp1_min, S_IWUSR | S_IRUGO, show_temp_min,
set_temp_min, 0);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_temp, NULL, 1);
static SENSOR_DEVICE_ATTR(temp2_max, S_IWUSR | S_IRUGO, show_temp_max,
set_temp_max, 1);
static SENSOR_DEVICE_ATTR(temp2_min, S_IWUSR | S_IRUGO, show_temp_min,
set_temp_min, 1);
static SENSOR_DEVICE_ATTR(temp1_max_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(temp1_min_alarm, S_IRUGO, show_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(temp2_max_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(temp2_min_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(temp2_fault, S_IRUGO, show_alarm, NULL, 2);
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static DEVICE_ATTR(low_power, S_IWUSR | S_IRUGO, show_low_power, set_low_power);
static struct attribute *adm1021_attributes[] = ;
static const struct attribute_group adm1021_group = ;
static int adm1021_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int adm1021_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static void adm1021_init_client(struct i2c_client *client)
static int adm1021_remove(struct i2c_client *client)
static struct adm1021_data *adm1021_update_device(struct device *dev)
static int __init sensors_adm1021_init(void)
static void __exit sensors_adm1021_exit(void)
MODULE_AUTHOR ("Frodo Looijaard <frodol@dds.nl> and "
"Philip Edelbrock <phil@netroedge.com>");
MODULE_DESCRIPTION("adm1021 driver");
MODULE_LICENSE("GPL");
module_param(read_only, bool, 0);
MODULE_PARM_DESC(read_only, "Don't set any values, read only mode");
module_init(sensors_adm1021_init)
module_exit(sensors_adm1021_exit)
