#define LTC4261_STATUS	0x00
#define LTC4261_FAULT	0x01
#define LTC4261_ALERT	0x02
#define LTC4261_CONTROL	0x03
#define LTC4261_SENSE_H	0x04
#define LTC4261_SENSE_L	0x05
#define LTC4261_ADIN2_H	0x06
#define LTC4261_ADIN2_L	0x07
#define LTC4261_ADIN_H	0x08
#define LTC4261_ADIN_L	0x09
#define FAULT_OV	(1<<0)
#define FAULT_UV	(1<<1)
#define FAULT_OC	(1<<2)
struct ltc4261_data ;
static struct ltc4261_data *ltc4261_update_device(struct device *dev)
static int ltc4261_get_value(struct ltc4261_data *data, u8 reg)
static ssize_t ltc4261_show_value(struct device *dev,
struct device_attribute *da, char *buf)
static ssize_t ltc4261_show_bool(struct device *dev,
struct device_attribute *da, char *buf)
#define LTC4261_VALUE(name, ltc4261_cmd_idx) \
static SENSOR_DEVICE_ATTR(name, S_IRUGO, \
ltc4261_show_value, NULL, ltc4261_cmd_idx)
#define LTC4261_BOOL(name, mask) \
static SENSOR_DEVICE_ATTR(name, S_IRUGO, \
ltc4261_show_bool, NULL, (mask))
LTC4261_VALUE(in1_input, LTC4261_ADIN_H);
LTC4261_VALUE(in2_input, LTC4261_ADIN2_H);
LTC4261_BOOL(in1_min_alarm, FAULT_UV);
LTC4261_BOOL(in1_max_alarm, FAULT_OV);
LTC4261_BOOL(in2_min_alarm, FAULT_UV);
LTC4261_BOOL(in2_max_alarm, FAULT_OV);
LTC4261_VALUE(curr1_input, LTC4261_SENSE_H);
LTC4261_BOOL(curr1_max_alarm, FAULT_OC);
static struct attribute *ltc4261_attributes[] = ;
static const struct attribute_group ltc4261_group = ;
static int ltc4261_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int ltc4261_remove(struct i2c_client *client)
static const struct i2c_device_id ltc4261_id[] = ;
MODULE_DEVICE_TABLE(i2c, ltc4261_id);
static struct i2c_driver ltc4261_driver = ;
static int __init ltc4261_init(void)
static void __exit ltc4261_exit(void)
MODULE_AUTHOR("Guenter Roeck <guenter.roeck@ericsson.com>");
MODULE_DESCRIPTION("LTC4261 driver");
MODULE_LICENSE("GPL");
module_init(ltc4261_init);
module_exit(ltc4261_exit);
