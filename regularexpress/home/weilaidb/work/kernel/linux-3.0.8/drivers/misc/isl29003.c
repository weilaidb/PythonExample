#define ISL29003_DRV_NAME	"isl29003"
#define DRIVER_VERSION		"1.0"
#define ISL29003_REG_COMMAND		0x00
#define ISL29003_ADC_ENABLED		(1 << 7)
#define ISL29003_ADC_PD			(1 << 6)
#define ISL29003_TIMING_INT		(1 << 5)
#define ISL29003_MODE_SHIFT		(2)
#define ISL29003_MODE_MASK		(0x3 << ISL29003_MODE_SHIFT)
#define ISL29003_RES_SHIFT		(0)
#define ISL29003_RES_MASK		(0x3 << ISL29003_RES_SHIFT)
#define ISL29003_REG_CONTROL		0x01
#define ISL29003_INT_FLG		(1 << 5)
#define ISL29003_RANGE_SHIFT		(2)
#define ISL29003_RANGE_MASK		(0x3 << ISL29003_RANGE_SHIFT)
#define ISL29003_INT_PERSISTS_SHIFT	(0)
#define ISL29003_INT_PERSISTS_MASK	(0xf << ISL29003_INT_PERSISTS_SHIFT)
#define ISL29003_REG_IRQ_THRESH_HI	0x02
#define ISL29003_REG_IRQ_THRESH_LO	0x03
#define ISL29003_REG_LSB_SENSOR		0x04
#define ISL29003_REG_MSB_SENSOR		0x05
#define ISL29003_REG_LSB_TIMER		0x06
#define ISL29003_REG_MSB_TIMER		0x07
#define ISL29003_NUM_CACHABLE_REGS	4
struct isl29003_data ;
static int gain_range[] = ;
static int __isl29003_read_reg(struct i2c_client *client,
u32 reg, u8 mask, u8 shift)
static int __isl29003_write_reg(struct i2c_client *client,
u32 reg, u8 mask, u8 shift, u8 val)
static int isl29003_get_range(struct i2c_client *client)
static int isl29003_set_range(struct i2c_client *client, int range)
static int isl29003_get_resolution(struct i2c_client *client)
static int isl29003_set_resolution(struct i2c_client *client, int res)
static int isl29003_get_mode(struct i2c_client *client)
static int isl29003_set_mode(struct i2c_client *client, int mode)
static int isl29003_set_power_state(struct i2c_client *client, int state)
static int isl29003_get_power_state(struct i2c_client *client)
static int isl29003_get_adc_value(struct i2c_client *client)
static ssize_t isl29003_show_range(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t isl29003_store_range(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(range, S_IWUSR | S_IRUGO,
isl29003_show_range, isl29003_store_range);
static ssize_t isl29003_show_resolution(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t isl29003_store_resolution(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(resolution, S_IWUSR | S_IRUGO,
isl29003_show_resolution, isl29003_store_resolution);
static ssize_t isl29003_show_mode(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t isl29003_store_mode(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(mode, S_IWUSR | S_IRUGO,
isl29003_show_mode, isl29003_store_mode);
static ssize_t isl29003_show_power_state(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t isl29003_store_power_state(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(power_state, S_IWUSR | S_IRUGO,
isl29003_show_power_state, isl29003_store_power_state);
static ssize_t isl29003_show_lux(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(lux, S_IRUGO, isl29003_show_lux, NULL);
static struct attribute *isl29003_attributes[] = ;
static const struct attribute_group isl29003_attr_group = ;
static int isl29003_init_client(struct i2c_client *client)
static int __devinit isl29003_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit isl29003_remove(struct i2c_client *client)
static int isl29003_suspend(struct i2c_client *client, pm_message_t mesg)
static int isl29003_resume(struct i2c_client *client)
#define isl29003_suspend	NULL
#define isl29003_resume		NULL
static const struct i2c_device_id isl29003_id[] = ;
MODULE_DEVICE_TABLE(i2c, isl29003_id);
static struct i2c_driver isl29003_driver = ;
static int __init isl29003_init(void)
static void __exit isl29003_exit(void)
MODULE_AUTHOR("Daniel Mack <daniel@caiaq.de>");
MODULE_DESCRIPTION("ISL29003 ambient light sensor driver");
MODULE_LICENSE("GPL v2");
MODULE_VERSION(DRIVER_VERSION);
module_init(isl29003_init);
module_exit(isl29003_exit);
