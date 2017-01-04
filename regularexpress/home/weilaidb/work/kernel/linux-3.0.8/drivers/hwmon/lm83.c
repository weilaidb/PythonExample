static const unsigned short normal_i2c[] = ;
enum chips ;
#define LM83_REG_R_MAN_ID		0xFE
#define LM83_REG_R_CHIP_ID		0xFF
#define LM83_REG_R_CONFIG		0x03
#define LM83_REG_W_CONFIG		0x09
#define LM83_REG_R_STATUS1		0x02
#define LM83_REG_R_STATUS2		0x35
#define LM83_REG_R_LOCAL_TEMP		0x00
#define LM83_REG_R_LOCAL_HIGH		0x05
#define LM83_REG_W_LOCAL_HIGH		0x0B
#define LM83_REG_R_REMOTE1_TEMP		0x30
#define LM83_REG_R_REMOTE1_HIGH		0x38
#define LM83_REG_W_REMOTE1_HIGH		0x50
#define LM83_REG_R_REMOTE2_TEMP		0x01
#define LM83_REG_R_REMOTE2_HIGH		0x07
#define LM83_REG_W_REMOTE2_HIGH		0x0D
#define LM83_REG_R_REMOTE3_TEMP		0x31
#define LM83_REG_R_REMOTE3_HIGH		0x3A
#define LM83_REG_W_REMOTE3_HIGH		0x52
#define LM83_REG_R_TCRIT		0x42
#define LM83_REG_W_TCRIT		0x5A
#define TEMP_FROM_REG(val)	((val) * 1000)
#define TEMP_TO_REG(val)	((val) <= -128000 ? -128 : \
(val) >= 127000 ? 127 : \
(val) < 0 ? ((val) - 500) / 1000 : \
((val) + 500) / 1000)
static const u8 LM83_REG_R_TEMP[] = ;
static const u8 LM83_REG_W_HIGH[] = ;
static int lm83_detect(struct i2c_client *new_client,
struct i2c_board_info *info);
static int lm83_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int lm83_remove(struct i2c_client *client);
static struct lm83_data *lm83_update_device(struct device *dev);
static const struct i2c_device_id lm83_id[] = ;
MODULE_DEVICE_TABLE(i2c, lm83_id);
static struct i2c_driver lm83_driver = ;
struct lm83_data ;
static ssize_t show_temp(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t set_temp(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_alarms(struct device *dev, struct device_attribute *dummy,
char *buf)
static ssize_t show_alarm(struct device *dev, struct device_attribute
*devattr, char *buf)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_temp, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_input, S_IRUGO, show_temp, NULL, 2);
static SENSOR_DEVICE_ATTR(temp4_input, S_IRUGO, show_temp, NULL, 3);
static SENSOR_DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO, show_temp,
set_temp, 4);
static SENSOR_DEVICE_ATTR(temp2_max, S_IWUSR | S_IRUGO, show_temp,
set_temp, 5);
static SENSOR_DEVICE_ATTR(temp3_max, S_IWUSR | S_IRUGO, show_temp,
set_temp, 6);
static SENSOR_DEVICE_ATTR(temp4_max, S_IWUSR | S_IRUGO, show_temp,
set_temp, 7);
static SENSOR_DEVICE_ATTR(temp1_crit, S_IRUGO, show_temp, NULL, 8);
static SENSOR_DEVICE_ATTR(temp2_crit, S_IRUGO, show_temp, NULL, 8);
static SENSOR_DEVICE_ATTR(temp3_crit, S_IWUSR | S_IRUGO, show_temp,
set_temp, 8);
static SENSOR_DEVICE_ATTR(temp4_crit, S_IRUGO, show_temp, NULL, 8);
static SENSOR_DEVICE_ATTR(temp1_crit_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(temp3_crit_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_fault, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(temp3_max_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(temp1_max_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(temp2_crit_alarm, S_IRUGO, show_alarm, NULL, 8);
static SENSOR_DEVICE_ATTR(temp4_crit_alarm, S_IRUGO, show_alarm, NULL, 9);
static SENSOR_DEVICE_ATTR(temp4_fault, S_IRUGO, show_alarm, NULL, 10);
static SENSOR_DEVICE_ATTR(temp4_max_alarm, S_IRUGO, show_alarm, NULL, 12);
static SENSOR_DEVICE_ATTR(temp2_fault, S_IRUGO, show_alarm, NULL, 13);
static SENSOR_DEVICE_ATTR(temp2_max_alarm, S_IRUGO, show_alarm, NULL, 15);
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static struct attribute *lm83_attributes[] = ;
static const struct attribute_group lm83_group = ;
static struct attribute *lm83_attributes_opt[] = ;
static const struct attribute_group lm83_group_opt = ;
static int lm83_detect(struct i2c_client *new_client,
struct i2c_board_info *info)
static int lm83_probe(struct i2c_client *new_client,
const struct i2c_device_id *id)
static int lm83_remove(struct i2c_client *client)
static struct lm83_data *lm83_update_device(struct device *dev)
static int __init sensors_lm83_init(void)
static void __exit sensors_lm83_exit(void)
MODULE_AUTHOR("Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("LM83 driver");
MODULE_LICENSE("GPL");
module_init(sensors_lm83_init);
module_exit(sensors_lm83_exit);
