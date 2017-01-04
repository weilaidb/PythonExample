#define DS620_REG_CONFIG_DONE		0x8000
#define DS620_REG_CONFIG_NVB		0x4000
#define DS620_REG_CONFIG_THF		0x2000
#define DS620_REG_CONFIG_TLF		0x1000
#define DS620_REG_CONFIG_R1		0x0800
#define DS620_REG_CONFIG_R0		0x0400
#define DS620_REG_CONFIG_AUTOC		0x0200
#define DS620_REG_CONFIG_1SHOT		0x0100
#define DS620_REG_CONFIG_PO2		0x0080
#define DS620_REG_CONFIG_PO1		0x0040
#define DS620_REG_CONFIG_A2		0x0020
#define DS620_REG_CONFIG_A1		0x0010
#define DS620_REG_CONFIG_A0		0x0008
static const u8 DS620_REG_TEMP[3] = ;
#define DS620_REG_CONF		0xAC
#define DS620_COM_START		0x51
#define DS620_COM_STOP		0x22
struct ds620_data ;
static int ds620_read_temp(struct i2c_client *client, u8 reg)
static int ds620_write_temp(struct i2c_client *client, u8 reg, u16 value)
static void ds620_init_client(struct i2c_client *client)
static struct ds620_data *ds620_update_client(struct device *dev)
static ssize_t show_temp(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t set_temp(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static ssize_t show_alarm(struct device *dev, struct device_attribute *da,
char *buf)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL, 0);
static SENSOR_DEVICE_ATTR(temp1_min, S_IWUSR | S_IRUGO, show_temp, set_temp, 1);
static SENSOR_DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO, show_temp, set_temp, 2);
static SENSOR_DEVICE_ATTR(temp1_min_alarm, S_IRUGO, show_alarm, NULL,
DS620_REG_CONFIG_TLF);
static SENSOR_DEVICE_ATTR(temp1_max_alarm, S_IRUGO, show_alarm, NULL,
DS620_REG_CONFIG_THF);
static struct attribute *ds620_attributes[] = ;
static const struct attribute_group ds620_group = ;
static int ds620_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int ds620_remove(struct i2c_client *client)
static const struct i2c_device_id ds620_id[] = ;
MODULE_DEVICE_TABLE(i2c, ds620_id);
static struct i2c_driver ds620_driver = ;
static int __init ds620_init(void)
static void __exit ds620_exit(void)
MODULE_AUTHOR("Roland Stigge <stigge@antcom.de>");
MODULE_DESCRIPTION("DS620 driver");
MODULE_LICENSE("GPL");
module_init(ds620_init);
module_exit(ds620_exit);
