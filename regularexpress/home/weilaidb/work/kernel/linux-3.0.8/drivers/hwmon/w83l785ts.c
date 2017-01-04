#define MAX_RETRIES	5
static const unsigned short normal_i2c[] = ;
#define W83L785TS_REG_MAN_ID1		0x4D
#define W83L785TS_REG_MAN_ID2		0x4C
#define W83L785TS_REG_CHIP_ID		0x4E
#define W83L785TS_REG_CONFIG		0x40
#define W83L785TS_REG_TYPE		0x52
#define W83L785TS_REG_TEMP		0x27
#define W83L785TS_REG_TEMP_OVER		0x53
#define TEMP_FROM_REG(val)	((val) * 1000)
static int w83l785ts_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int w83l785ts_detect(struct i2c_client *client,
struct i2c_board_info *info);
static int w83l785ts_remove(struct i2c_client *client);
static u8 w83l785ts_read_value(struct i2c_client *client, u8 reg, u8 defval);
static struct w83l785ts_data *w83l785ts_update_device(struct device *dev);
static const struct i2c_device_id w83l785ts_id[] = ;
MODULE_DEVICE_TABLE(i2c, w83l785ts_id);
static struct i2c_driver w83l785ts_driver = ;
struct w83l785ts_data ;
static ssize_t show_temp(struct device *dev, struct device_attribute *devattr,
char *buf)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL, 0);
static SENSOR_DEVICE_ATTR(temp1_max, S_IRUGO, show_temp, NULL, 1);
static int w83l785ts_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int w83l785ts_probe(struct i2c_client *new_client,
const struct i2c_device_id *id)
static int w83l785ts_remove(struct i2c_client *client)
static u8 w83l785ts_read_value(struct i2c_client *client, u8 reg, u8 defval)
static struct w83l785ts_data *w83l785ts_update_device(struct device *dev)
static int __init sensors_w83l785ts_init(void)
static void __exit sensors_w83l785ts_exit(void)
MODULE_AUTHOR("Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("W83L785TS-S driver");
MODULE_LICENSE("GPL");
module_init(sensors_w83l785ts_init);
module_exit(sensors_w83l785ts_exit);
