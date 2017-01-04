static const unsigned short normal_i2c[] = ;
static int polarity = -1;
module_param(polarity, int, 0);
MODULE_PARM_DESC(polarity, "Output's polarity: 0 = active high, 1 = active low");
#define DS1621_REG_CONFIG_NVB		0x10
#define DS1621_REG_CONFIG_POLARITY	0x02
#define DS1621_REG_CONFIG_1SHOT		0x01
#define DS1621_REG_CONFIG_DONE		0x80
static const u8 DS1621_REG_TEMP[3] = ;
#define DS1621_REG_CONF			0xAC
#define DS1621_COM_START		0xEE
#define DS1621_COM_STOP			0x22
#define DS1621_ALARM_TEMP_HIGH		0x40
#define DS1621_ALARM_TEMP_LOW		0x20
#define ALARMS_FROM_REG(val) ((val) & \
(DS1621_ALARM_TEMP_HIGH | DS1621_ALARM_TEMP_LOW))
struct ds1621_data ;
static int ds1621_read_temp(struct i2c_client *client, u8 reg)
static int ds1621_write_temp(struct i2c_client *client, u8 reg, u16 value)
static void ds1621_init_client(struct i2c_client *client)
static struct ds1621_data *ds1621_update_client(struct device *dev)
static ssize_t show_temp(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t set_temp(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static ssize_t show_alarms(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t show_alarm(struct device *dev, struct device_attribute *da,
char *buf)
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL, 0);
static SENSOR_DEVICE_ATTR(temp1_min, S_IWUSR | S_IRUGO, show_temp, set_temp, 1);
static SENSOR_DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO, show_temp, set_temp, 2);
static SENSOR_DEVICE_ATTR(temp1_min_alarm, S_IRUGO, show_alarm, NULL,
DS1621_ALARM_TEMP_LOW);
static SENSOR_DEVICE_ATTR(temp1_max_alarm, S_IRUGO, show_alarm, NULL,
DS1621_ALARM_TEMP_HIGH);
static struct attribute *ds1621_attributes[] = ;
static const struct attribute_group ds1621_group = ;
static int ds1621_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int ds1621_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int ds1621_remove(struct i2c_client *client)
static const struct i2c_device_id ds1621_id[] = ;
MODULE_DEVICE_TABLE(i2c, ds1621_id);
static struct i2c_driver ds1621_driver = ;
static int __init ds1621_init(void)
static void __exit ds1621_exit(void)
MODULE_AUTHOR("Christian W. Zuckschwerdt <zany@triq.net>");
MODULE_DESCRIPTION("DS1621 driver");
MODULE_LICENSE("GPL");
module_init(ds1621_init);
module_exit(ds1621_exit);
