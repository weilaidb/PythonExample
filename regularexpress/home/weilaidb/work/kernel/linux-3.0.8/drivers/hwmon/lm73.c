static const unsigned short normal_i2c[] = ;
#define LM73_REG_INPUT		0x00
#define LM73_REG_CONF		0x01
#define LM73_REG_MAX		0x02
#define LM73_REG_MIN		0x03
#define LM73_REG_CTRL		0x04
#define LM73_REG_ID		0x07
#define LM73_ID			0x9001
#define DRVNAME			"lm73"
#define LM73_TEMP_MIN		(-40)
#define LM73_TEMP_MAX		150
static ssize_t set_temp(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static ssize_t show_temp(struct device *dev, struct device_attribute *da,
char *buf)
static SENSOR_DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO,
show_temp, set_temp, LM73_REG_MAX);
static SENSOR_DEVICE_ATTR(temp1_min, S_IWUSR | S_IRUGO,
show_temp, set_temp, LM73_REG_MIN);
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO,
show_temp, NULL, LM73_REG_INPUT);
static struct attribute *lm73_attributes[] = ;
static const struct attribute_group lm73_group = ;
static int
lm73_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int lm73_remove(struct i2c_client *client)
static const struct i2c_device_id lm73_ids[] = ;
MODULE_DEVICE_TABLE(i2c, lm73_ids);
static int lm73_detect(struct i2c_client *new_client,
struct i2c_board_info *info)
static struct i2c_driver lm73_driver = ;
static int __init sensors_lm73_init(void)
static void __exit sensors_lm73_exit(void)
MODULE_AUTHOR("Guillaume Ligneul <guillaume.ligneul@gmail.com>");
MODULE_DESCRIPTION("LM73 driver");
MODULE_LICENSE("GPL");
module_init(sensors_lm73_init);
module_exit(sensors_lm73_exit);
