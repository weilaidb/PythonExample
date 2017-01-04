static const unsigned short normal_i2c[] = ;
#define LM77_REG_TEMP		0x00
#define LM77_REG_CONF		0x01
#define LM77_REG_TEMP_HYST	0x02
#define LM77_REG_TEMP_CRIT	0x03
#define LM77_REG_TEMP_MIN	0x04
#define LM77_REG_TEMP_MAX	0x05
struct lm77_data ;
static int lm77_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int lm77_detect(struct i2c_client *client, struct i2c_board_info *info);
static void lm77_init_client(struct i2c_client *client);
static int lm77_remove(struct i2c_client *client);
static u16 lm77_read_value(struct i2c_client *client, u8 reg);
static int lm77_write_value(struct i2c_client *client, u8 reg, u16 value);
static struct lm77_data *lm77_update_device(struct device *dev);
static const struct i2c_device_id lm77_id[] = ;
MODULE_DEVICE_TABLE(i2c, lm77_id);
static struct i2c_driver lm77_driver = ;
#define LM77_TEMP_MIN (-55000)
#define LM77_TEMP_MAX 125000
static inline s16 LM77_TEMP_TO_REG(int temp)
static inline int LM77_TEMP_FROM_REG(s16 reg)
#define show(value)	\
static ssize_t show_##value(struct device *dev, struct device_attribute *attr, char *buf)	\
show(temp_input);
show(temp_crit);
show(temp_min);
show(temp_max);
static ssize_t show_temp_crit_hyst(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_temp_min_hyst(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_temp_max_hyst(struct device *dev, struct device_attribute *attr, char *buf)
#define set(value, reg)	\
static ssize_t set_##value(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)	\
set(temp_min, LM77_REG_TEMP_MIN);
set(temp_max, LM77_REG_TEMP_MAX);
static ssize_t set_temp_crit_hyst(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static ssize_t set_temp_crit(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(temp1_input, S_IRUGO,
show_temp_input, NULL);
static DEVICE_ATTR(temp1_crit, S_IWUSR | S_IRUGO,
show_temp_crit, set_temp_crit);
static DEVICE_ATTR(temp1_min, S_IWUSR | S_IRUGO,
show_temp_min, set_temp_min);
static DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO,
show_temp_max, set_temp_max);
static DEVICE_ATTR(temp1_crit_hyst, S_IWUSR | S_IRUGO,
show_temp_crit_hyst, set_temp_crit_hyst);
static DEVICE_ATTR(temp1_min_hyst, S_IRUGO,
show_temp_min_hyst, NULL);
static DEVICE_ATTR(temp1_max_hyst, S_IRUGO,
show_temp_max_hyst, NULL);
static SENSOR_DEVICE_ATTR(temp1_crit_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(temp1_min_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(temp1_max_alarm, S_IRUGO, show_alarm, NULL, 1);
static struct attribute *lm77_attributes[] = ;
static const struct attribute_group lm77_group = ;
static int lm77_detect(struct i2c_client *new_client,
struct i2c_board_info *info)
static int lm77_probe(struct i2c_client *new_client,
const struct i2c_device_id *id)
static int lm77_remove(struct i2c_client *client)
static u16 lm77_read_value(struct i2c_client *client, u8 reg)
static int lm77_write_value(struct i2c_client *client, u8 reg, u16 value)
static void lm77_init_client(struct i2c_client *client)
static struct lm77_data *lm77_update_device(struct device *dev)
static int __init sensors_lm77_init(void)
static void __exit sensors_lm77_exit(void)
MODULE_AUTHOR("Andras BALI <drewie@freemail.hu>");
MODULE_DESCRIPTION("LM77 driver");
MODULE_LICENSE("GPL");
module_init(sensors_lm77_init);
module_exit(sensors_lm77_exit);
