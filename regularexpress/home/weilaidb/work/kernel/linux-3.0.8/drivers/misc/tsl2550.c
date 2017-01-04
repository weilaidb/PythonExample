#define TSL2550_DRV_NAME	"tsl2550"
#define DRIVER_VERSION		"1.2"
#define TSL2550_POWER_DOWN		0x00
#define TSL2550_POWER_UP		0x03
#define TSL2550_STANDARD_RANGE		0x18
#define TSL2550_EXTENDED_RANGE		0x1d
#define TSL2550_READ_ADC0		0x43
#define TSL2550_READ_ADC1		0x83
struct tsl2550_data ;
static const u8 TSL2550_MODE_RANGE[2] = ;
static int tsl2550_set_operating_mode(struct i2c_client *client, int mode)
static int tsl2550_set_power_state(struct i2c_client *client, int state)
static int tsl2550_get_adc_value(struct i2c_client *client, u8 cmd)
#define	TSL2550_MAX_LUX		1846
static const u8 ratio_lut[] = ;
static const u16 count_lut[] = ;
static int tsl2550_calculate_lux(u8 ch0, u8 ch1)
static ssize_t tsl2550_show_power_state(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t tsl2550_store_power_state(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(power_state, S_IWUSR | S_IRUGO,
tsl2550_show_power_state, tsl2550_store_power_state);
static ssize_t tsl2550_show_operating_mode(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t tsl2550_store_operating_mode(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(operating_mode, S_IWUSR | S_IRUGO,
tsl2550_show_operating_mode, tsl2550_store_operating_mode);
static ssize_t __tsl2550_show_lux(struct i2c_client *client, char *buf)
static ssize_t tsl2550_show_lux1_input(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(lux1_input, S_IRUGO,
tsl2550_show_lux1_input, NULL);
static struct attribute *tsl2550_attributes[] = ;
static const struct attribute_group tsl2550_attr_group = ;
static int tsl2550_init_client(struct i2c_client *client)
static struct i2c_driver tsl2550_driver;
static int __devinit tsl2550_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit tsl2550_remove(struct i2c_client *client)
static int tsl2550_suspend(struct i2c_client *client, pm_message_t mesg)
static int tsl2550_resume(struct i2c_client *client)
#define tsl2550_suspend		NULL
#define tsl2550_resume		NULL
static const struct i2c_device_id tsl2550_id[] = ;
MODULE_DEVICE_TABLE(i2c, tsl2550_id);
static struct i2c_driver tsl2550_driver = ;
static int __init tsl2550_init(void)
static void __exit tsl2550_exit(void)
MODULE_AUTHOR("Rodolfo Giometti <giometti@linux.it>");
MODULE_DESCRIPTION("TSL2550 ambient light sensor driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRIVER_VERSION);
module_init(tsl2550_init);
module_exit(tsl2550_exit);
