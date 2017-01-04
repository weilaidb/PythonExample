#define DRV_VERSION "0.4"
enum chips ;
#define AD7418_REG_TEMP_IN	0x00
#define AD7418_REG_CONF		0x01
#define AD7418_REG_TEMP_HYST	0x02
#define AD7418_REG_TEMP_OS	0x03
#define AD7418_REG_ADC		0x04
#define AD7418_REG_CONF2	0x05
#define AD7418_REG_ADC_CH(x)	((x) << 5)
#define AD7418_CH_TEMP		AD7418_REG_ADC_CH(0)
static const u8 AD7418_REG_TEMP[] = ;
struct ad7418_data ;
static int ad7418_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int ad7418_remove(struct i2c_client *client);
static const struct i2c_device_id ad7418_id[] = ;
MODULE_DEVICE_TABLE(i2c, ad7418_id);
static struct i2c_driver ad7418_driver = ;
static inline int ad7418_read(struct i2c_client *client, u8 reg)
static inline int ad7418_write(struct i2c_client *client, u8 reg, u16 value)
static void ad7418_init_client(struct i2c_client *client)
static struct ad7418_data *ad7418_update_device(struct device *dev)
static ssize_t show_temp(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t show_adc(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t set_temp(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL, 0);
static SENSOR_DEVICE_ATTR(temp1_max_hyst, S_IWUSR | S_IRUGO,
show_temp, set_temp, 1);
static SENSOR_DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO,
show_temp, set_temp, 2);
static SENSOR_DEVICE_ATTR(in1_input, S_IRUGO, show_adc, NULL, 0);
static SENSOR_DEVICE_ATTR(in2_input, S_IRUGO, show_adc, NULL, 1);
static SENSOR_DEVICE_ATTR(in3_input, S_IRUGO, show_adc, NULL, 2);
static SENSOR_DEVICE_ATTR(in4_input, S_IRUGO, show_adc, NULL, 3);
static struct attribute *ad7416_attributes[] = ;
static struct attribute *ad7417_attributes[] = ;
static struct attribute *ad7418_attributes[] = ;
static int ad7418_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int ad7418_remove(struct i2c_client *client)
static int __init ad7418_init(void)
static void __exit ad7418_exit(void)
MODULE_AUTHOR("Alessandro Zummo <a.zummo@towertech.it>");
MODULE_DESCRIPTION("AD7416/17/18 driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_init(ad7418_init);
module_exit(ad7418_exit);
