#define LTC4151_SENSE_H	0x00
#define LTC4151_SENSE_L	0x01
#define LTC4151_VIN_H	0x02
#define LTC4151_VIN_L	0x03
#define LTC4151_ADIN_H	0x04
#define LTC4151_ADIN_L	0x05
struct ltc4151_data ;
static struct ltc4151_data *ltc4151_update_device(struct device *dev)
static int ltc4151_get_value(struct ltc4151_data *data, u8 reg)
static ssize_t ltc4151_show_value(struct device *dev,
struct device_attribute *da, char *buf)
static SENSOR_DEVICE_ATTR(in1_input, S_IRUGO, \
ltc4151_show_value, NULL, LTC4151_VIN_H);
static SENSOR_DEVICE_ATTR(in2_input, S_IRUGO, \
ltc4151_show_value, NULL, LTC4151_ADIN_H);
static SENSOR_DEVICE_ATTR(curr1_input, S_IRUGO, \
ltc4151_show_value, NULL, LTC4151_SENSE_H);
static struct attribute *ltc4151_attributes[] = ;
static const struct attribute_group ltc4151_group = ;
static int ltc4151_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int ltc4151_remove(struct i2c_client *client)
static const struct i2c_device_id ltc4151_id[] = ;
MODULE_DEVICE_TABLE(i2c, ltc4151_id);
static struct i2c_driver ltc4151_driver = ;
static int __init ltc4151_init(void)
static void __exit ltc4151_exit(void)
MODULE_AUTHOR("Per Dalen <per.dalen@appeartv.com>");
MODULE_DESCRIPTION("LTC4151 driver");
MODULE_LICENSE("GPL");
module_init(ltc4151_init);
module_exit(ltc4151_exit);
