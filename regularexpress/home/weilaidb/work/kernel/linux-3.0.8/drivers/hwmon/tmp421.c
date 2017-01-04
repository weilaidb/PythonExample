static const unsigned short normal_i2c[] = ;
enum chips ;
#define TMP421_CONFIG_REG_1			0x09
#define TMP421_CONVERSION_RATE_REG		0x0B
#define TMP421_MANUFACTURER_ID_REG		0xFE
#define TMP421_DEVICE_ID_REG			0xFF
static const u8 TMP421_TEMP_MSB[4]		= ;
static const u8 TMP421_TEMP_LSB[4]		= ;
#define TMP421_CONFIG_SHUTDOWN			0x40
#define TMP421_CONFIG_RANGE			0x04
#define TMP421_MANUFACTURER_ID			0x55
#define TMP421_DEVICE_ID			0x21
#define TMP422_DEVICE_ID			0x22
#define TMP423_DEVICE_ID			0x23
static const struct i2c_device_id tmp421_id[] = ;
MODULE_DEVICE_TABLE(i2c, tmp421_id);
struct tmp421_data ;
static int temp_from_s16(s16 reg)
static int temp_from_u16(u16 reg)
static struct tmp421_data *tmp421_update_device(struct device *dev)
static ssize_t show_temp_value(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_fault(struct device *dev,
struct device_attribute *devattr, char *buf)
static mode_t tmp421_is_visible(struct kobject *kobj, struct attribute *a,
int n)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp_value, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_temp_value, NULL, 1);
static SENSOR_DEVICE_ATTR(temp2_fault, S_IRUGO, show_fault, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_input, S_IRUGO, show_temp_value, NULL, 2);
static SENSOR_DEVICE_ATTR(temp3_fault, S_IRUGO, show_fault, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_input, S_IRUGO, show_temp_value, NULL, 3);
static SENSOR_DEVICE_ATTR(temp4_fault, S_IRUGO, show_fault, NULL, 3);
static struct attribute *tmp421_attr[] = ;
static const struct attribute_group tmp421_group = ;
static int tmp421_init_client(struct i2c_client *client)
static int tmp421_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int tmp421_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int tmp421_remove(struct i2c_client *client)
static struct i2c_driver tmp421_driver = ;
static int __init tmp421_init(void)
static void __exit tmp421_exit(void)
MODULE_AUTHOR("Andre Prendel <andre.prendel@gmx.de>");
MODULE_DESCRIPTION("Texas Instruments TMP421/422/423 temperature sensor"
" driver");
MODULE_LICENSE("GPL");
module_init(tmp421_init);
module_exit(tmp421_exit);
