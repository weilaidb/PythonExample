static const unsigned short normal_i2c[] = ;
#define LM92_REG_CONFIG			0x01
#define LM92_REG_TEMP			0x00
#define LM92_REG_TEMP_HYST		0x02
#define LM92_REG_TEMP_CRIT		0x03
#define LM92_REG_TEMP_LOW		0x04
#define LM92_REG_TEMP_HIGH		0x05
#define LM92_REG_MAN_ID			0x07
static inline int TEMP_FROM_REG(s16 reg)
static inline s16 TEMP_TO_REG(int val)
static inline u8 ALARMS_FROM_REG(s16 reg)
static struct i2c_driver lm92_driver;
struct lm92_data ;
static struct lm92_data *lm92_update_device(struct device *dev)
#define show_temp(value) \
static ssize_t show_##value(struct device *dev, struct device_attribute *attr, char *buf) \
show_temp(temp1_input);
show_temp(temp1_crit);
show_temp(temp1_min);
show_temp(temp1_max);
#define set_temp(value, reg) \
static ssize_t set_##value(struct device *dev, struct device_attribute *attr, const char *buf, \
size_t count) \
set_temp(temp1_crit, LM92_REG_TEMP_CRIT);
set_temp(temp1_min, LM92_REG_TEMP_LOW);
set_temp(temp1_max, LM92_REG_TEMP_HIGH);
static ssize_t show_temp1_crit_hyst(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_temp1_max_hyst(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_temp1_min_hyst(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_temp1_crit_hyst(struct device *dev, struct device_attribute *attr, const char *buf,
size_t count)
static ssize_t show_alarms(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(temp1_input, S_IRUGO, show_temp1_input, NULL);
static DEVICE_ATTR(temp1_crit, S_IWUSR | S_IRUGO, show_temp1_crit,
set_temp1_crit);
static DEVICE_ATTR(temp1_crit_hyst, S_IWUSR | S_IRUGO, show_temp1_crit_hyst,
set_temp1_crit_hyst);
static DEVICE_ATTR(temp1_min, S_IWUSR | S_IRUGO, show_temp1_min,
set_temp1_min);
static DEVICE_ATTR(temp1_min_hyst, S_IRUGO, show_temp1_min_hyst, NULL);
static DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO, show_temp1_max,
set_temp1_max);
static DEVICE_ATTR(temp1_max_hyst, S_IRUGO, show_temp1_max_hyst, NULL);
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static SENSOR_DEVICE_ATTR(temp1_crit_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(temp1_min_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(temp1_max_alarm, S_IRUGO, show_alarm, NULL, 1);
static void lm92_init_client(struct i2c_client *client)
static int max6635_check(struct i2c_client *client)
static struct attribute *lm92_attributes[] = ;
static const struct attribute_group lm92_group = ;
static int lm92_detect(struct i2c_client *new_client,
struct i2c_board_info *info)
static int lm92_probe(struct i2c_client *new_client,
const struct i2c_device_id *id)
static int lm92_remove(struct i2c_client *client)
static const struct i2c_device_id lm92_id[] = ;
MODULE_DEVICE_TABLE(i2c, lm92_id);
static struct i2c_driver lm92_driver = ;
static int __init sensors_lm92_init(void)
static void __exit sensors_lm92_exit(void)
MODULE_AUTHOR("Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("LM92/MAX6635 driver");
MODULE_LICENSE("GPL");
module_init(sensors_lm92_init);
module_exit(sensors_lm92_exit);
