enum ;
static const unsigned int fullscale_table[8] = ;
static const unsigned int data_rate_table[8] = ;
#define ADS1015_DEFAULT_CHANNELS 0xff
#define ADS1015_DEFAULT_PGA 2
#define ADS1015_DEFAULT_DATA_RATE 4
struct ads1015_data ;
static s32 ads1015_read_reg(struct i2c_client *client, unsigned int reg)
static s32 ads1015_write_reg(struct i2c_client *client, unsigned int reg,
u16 val)
static int ads1015_read_value(struct i2c_client *client, unsigned int channel,
int *value)
static ssize_t show_in(struct device *dev, struct device_attribute *da,
char *buf)
static const struct sensor_device_attribute ads1015_in[] = ;
static int ads1015_remove(struct i2c_client *client)
static int ads1015_get_channels_config_of(struct i2c_client *client)
static void ads1015_get_channels_config(struct i2c_client *client)
static int ads1015_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static const struct i2c_device_id ads1015_id[] = ;
MODULE_DEVICE_TABLE(i2c, ads1015_id);
static struct i2c_driver ads1015_driver = ;
static int __init sensors_ads1015_init(void)
static void __exit sensors_ads1015_exit(void)
MODULE_AUTHOR("Dirk Eibach <eibach@gdsys.de>");
MODULE_DESCRIPTION("ADS1015 driver");
MODULE_LICENSE("GPL");
module_init(sensors_ads1015_init);
module_exit(sensors_ads1015_exit);
