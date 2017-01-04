static const unsigned short normal_i2c[] = ;
#define ADM1029_REG_MAN_ID			0x0D
#define ADM1029_REG_CHIP_ID			0x0E
#define ADM1029_REG_CONFIG			0x01
#define ADM1029_REG_NB_FAN_SUPPORT		0x02
#define ADM1029_REG_TEMP_DEVICES_INSTALLED	0x06
#define ADM1029_REG_LOCAL_TEMP			0xA0
#define ADM1029_REG_REMOTE1_TEMP		0xA1
#define ADM1029_REG_REMOTE2_TEMP		0xA2
#define ADM1029_REG_LOCAL_TEMP_HIGH		0x90
#define ADM1029_REG_REMOTE1_TEMP_HIGH		0x91
#define ADM1029_REG_REMOTE2_TEMP_HIGH		0x92
#define ADM1029_REG_LOCAL_TEMP_LOW		0x98
#define ADM1029_REG_REMOTE1_TEMP_LOW		0x99
#define ADM1029_REG_REMOTE2_TEMP_LOW		0x9A
#define ADM1029_REG_FAN1			0x70
#define ADM1029_REG_FAN2			0x71
#define ADM1029_REG_FAN1_MIN			0x78
#define ADM1029_REG_FAN2_MIN			0x79
#define ADM1029_REG_FAN1_CONFIG			0x68
#define ADM1029_REG_FAN2_CONFIG			0x69
#define TEMP_FROM_REG(val)	((val) * 1000)
#define DIV_FROM_REG(val)	( 1 << (((val) >> 6) - 1))
static const u8 ADM1029_REG_TEMP[] = ;
static const u8 ADM1029_REG_FAN[] = ;
static const u8 ADM1029_REG_FAN_DIV[] = ;
static int adm1029_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int adm1029_detect(struct i2c_client *client,
struct i2c_board_info *info);
static int adm1029_remove(struct i2c_client *client);
static struct adm1029_data *adm1029_update_device(struct device *dev);
static int adm1029_init_client(struct i2c_client *client);
static const struct i2c_device_id adm1029_id[] = ;
MODULE_DEVICE_TABLE(i2c, adm1029_id);
static struct i2c_driver adm1029_driver = ;
struct adm1029_data ;
static ssize_t
show_temp(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t
show_fan(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t
show_fan_div(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t set_fan_div(struct device *dev,
struct device_attribute *devattr, const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_temp, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_input, S_IRUGO, show_temp, NULL, 2);
static SENSOR_DEVICE_ATTR(temp1_max, S_IRUGO, show_temp, NULL, 3);
static SENSOR_DEVICE_ATTR(temp2_max, S_IRUGO, show_temp, NULL, 4);
static SENSOR_DEVICE_ATTR(temp3_max, S_IRUGO, show_temp, NULL, 5);
static SENSOR_DEVICE_ATTR(temp1_min, S_IRUGO, show_temp, NULL, 6);
static SENSOR_DEVICE_ATTR(temp2_min, S_IRUGO, show_temp, NULL, 7);
static SENSOR_DEVICE_ATTR(temp3_min, S_IRUGO, show_temp, NULL, 8);
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, show_fan, NULL, 0);
static SENSOR_DEVICE_ATTR(fan2_input, S_IRUGO, show_fan, NULL, 1);
static SENSOR_DEVICE_ATTR(fan1_min, S_IRUGO, show_fan, NULL, 2);
static SENSOR_DEVICE_ATTR(fan2_min, S_IRUGO, show_fan, NULL, 3);
static SENSOR_DEVICE_ATTR(fan1_div, S_IRUGO | S_IWUSR,
show_fan_div, set_fan_div, 0);
static SENSOR_DEVICE_ATTR(fan2_div, S_IRUGO | S_IWUSR,
show_fan_div, set_fan_div, 1);
static struct attribute *adm1029_attributes[] = ;
static const struct attribute_group adm1029_group = ;
static int adm1029_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int adm1029_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int adm1029_init_client(struct i2c_client *client)
static int adm1029_remove(struct i2c_client *client)
static struct adm1029_data *adm1029_update_device(struct device *dev)
static int __init sensors_adm1029_init(void)
static void __exit sensors_adm1029_exit(void)
MODULE_AUTHOR("Corentin LABBE <corentin.labbe@geomatys.fr>");
MODULE_DESCRIPTION("adm1029 driver");
MODULE_LICENSE("GPL v2");
module_init(sensors_adm1029_init);
module_exit(sensors_adm1029_exit);
