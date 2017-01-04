enum lm75_type ;
static const unsigned short normal_i2c[] = ;
#define LM75_REG_CONF		0x01
static const u8 LM75_REG_TEMP[3] = ;
struct lm75_data ;
static int lm75_read_value(struct i2c_client *client, u8 reg);
static int lm75_write_value(struct i2c_client *client, u8 reg, u16 value);
static struct lm75_data *lm75_update_device(struct device *dev);
static ssize_t show_temp(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t set_temp(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO,
show_temp, set_temp, 1);
static SENSOR_DEVICE_ATTR(temp1_max_hyst, S_IWUSR | S_IRUGO,
show_temp, set_temp, 2);
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL, 0);
static struct attribute *lm75_attributes[] = ;
static const struct attribute_group lm75_group = ;
static int
lm75_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int lm75_remove(struct i2c_client *client)
static const struct i2c_device_id lm75_ids[] = ;
MODULE_DEVICE_TABLE(i2c, lm75_ids);
#define LM75A_ID 0xA1
static int lm75_detect(struct i2c_client *new_client,
struct i2c_board_info *info)
static int lm75_suspend(struct device *dev)
static int lm75_resume(struct device *dev)
static const struct dev_pm_ops lm75_dev_pm_ops = ;
#define LM75_DEV_PM_OPS (&lm75_dev_pm_ops)
#define LM75_DEV_PM_OPS NULL
static struct i2c_driver lm75_driver = ;
static int lm75_read_value(struct i2c_client *client, u8 reg)
static int lm75_write_value(struct i2c_client *client, u8 reg, u16 value)
static struct lm75_data *lm75_update_device(struct device *dev)
static int __init sensors_lm75_init(void)
static void __exit sensors_lm75_exit(void)
MODULE_AUTHOR("Frodo Looijaard <frodol@dds.nl>");
MODULE_DESCRIPTION("LM75 driver");
MODULE_LICENSE("GPL");
module_init(sensors_lm75_init);
module_exit(sensors_lm75_exit);
