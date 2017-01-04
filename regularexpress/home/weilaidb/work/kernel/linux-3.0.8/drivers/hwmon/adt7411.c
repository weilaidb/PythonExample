#define ADT7411_REG_INT_TEMP_VDD_LSB		0x03
#define ADT7411_REG_EXT_TEMP_AIN14_LSB		0x04
#define ADT7411_REG_VDD_MSB			0x06
#define ADT7411_REG_INT_TEMP_MSB		0x07
#define ADT7411_REG_EXT_TEMP_AIN1_MSB		0x08
#define ADT7411_REG_CFG1			0x18
#define ADT7411_CFG1_START_MONITOR		(1 << 0)
#define ADT7411_REG_CFG2			0x19
#define ADT7411_CFG2_DISABLE_AVG		(1 << 5)
#define ADT7411_REG_CFG3			0x1a
#define ADT7411_CFG3_ADC_CLK_225		(1 << 0)
#define ADT7411_CFG3_REF_VDD			(1 << 4)
#define ADT7411_REG_DEVICE_ID			0x4d
#define ADT7411_REG_MANUFACTURER_ID		0x4e
#define ADT7411_DEVICE_ID			0x2
#define ADT7411_MANUFACTURER_ID			0x41
static const unsigned short normal_i2c[] = ;
struct adt7411_data ;
static int adt7411_read_10_bit(struct i2c_client *client, u8 lsb_reg,
u8 msb_reg, u8 lsb_shift)
static int adt7411_modify_bit(struct i2c_client *client, u8 reg, u8 bit,
bool flag)
static ssize_t adt7411_show_vdd(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adt7411_show_temp(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adt7411_show_input(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adt7411_show_bit(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adt7411_set_bit(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
#define ADT7411_BIT_ATTR(__name, __reg, __bit) \
SENSOR_DEVICE_ATTR_2(__name, S_IRUGO | S_IWUSR, adt7411_show_bit, \
adt7411_set_bit, __bit, __reg)
static DEVICE_ATTR(temp1_input, S_IRUGO, adt7411_show_temp, NULL);
static DEVICE_ATTR(in0_input, S_IRUGO, adt7411_show_vdd, NULL);
static SENSOR_DEVICE_ATTR(in1_input, S_IRUGO, adt7411_show_input, NULL, 0);
static SENSOR_DEVICE_ATTR(in2_input, S_IRUGO, adt7411_show_input, NULL, 1);
static SENSOR_DEVICE_ATTR(in3_input, S_IRUGO, adt7411_show_input, NULL, 2);
static SENSOR_DEVICE_ATTR(in4_input, S_IRUGO, adt7411_show_input, NULL, 3);
static SENSOR_DEVICE_ATTR(in5_input, S_IRUGO, adt7411_show_input, NULL, 4);
static SENSOR_DEVICE_ATTR(in6_input, S_IRUGO, adt7411_show_input, NULL, 5);
static SENSOR_DEVICE_ATTR(in7_input, S_IRUGO, adt7411_show_input, NULL, 6);
static SENSOR_DEVICE_ATTR(in8_input, S_IRUGO, adt7411_show_input, NULL, 7);
static ADT7411_BIT_ATTR(no_average, ADT7411_REG_CFG2, ADT7411_CFG2_DISABLE_AVG);
static ADT7411_BIT_ATTR(fast_sampling, ADT7411_REG_CFG3, ADT7411_CFG3_ADC_CLK_225);
static ADT7411_BIT_ATTR(adc_ref_vdd, ADT7411_REG_CFG3, ADT7411_CFG3_REF_VDD);
static struct attribute *adt7411_attrs[] = ;
static const struct attribute_group adt7411_attr_grp = ;
static int adt7411_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int __devinit adt7411_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit adt7411_remove(struct i2c_client *client)
static const struct i2c_device_id adt7411_id[] = ;
MODULE_DEVICE_TABLE(i2c, adt7411_id);
static struct i2c_driver adt7411_driver = ;
static int __init sensors_adt7411_init(void)
module_init(sensors_adt7411_init)
static void __exit sensors_adt7411_exit(void)
module_exit(sensors_adt7411_exit)
MODULE_AUTHOR("Sascha Hauer <s.hauer@pengutronix.de> and "
"Wolfram Sang <w.sang@pengutronix.de>");
MODULE_DESCRIPTION("ADT7411 driver");
MODULE_LICENSE("GPL v2");
