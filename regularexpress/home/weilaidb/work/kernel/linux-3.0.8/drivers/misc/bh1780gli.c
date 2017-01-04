#define BH1780_REG_CONTROL	0x80
#define BH1780_REG_PARTID	0x8A
#define BH1780_REG_MANFID	0x8B
#define BH1780_REG_DLOW	0x8C
#define BH1780_REG_DHIGH	0x8D
#define BH1780_REVMASK		(0xf)
#define BH1780_POWMASK		(0x3)
#define BH1780_POFF		(0x0)
#define BH1780_PON		(0x3)
#define BH1780_PON_DELAY	2
struct bh1780_data ;
static int bh1780_write(struct bh1780_data *ddata, u8 reg, u8 val, char *msg)
static int bh1780_read(struct bh1780_data *ddata, u8 reg, char *msg)
static ssize_t bh1780_show_lux(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bh1780_show_power_state(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t bh1780_store_power_state(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(lux, S_IRUGO, bh1780_show_lux, NULL);
static DEVICE_ATTR(power_state, S_IWUSR | S_IRUGO,
bh1780_show_power_state, bh1780_store_power_state);
static struct attribute *bh1780_attributes[] = ;
static const struct attribute_group bh1780_attr_group = ;
static int __devinit bh1780_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit bh1780_remove(struct i2c_client *client)
static int bh1780_suspend(struct device *dev)
static int bh1780_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(bh1780_pm, bh1780_suspend, bh1780_resume);
#define BH1780_PMOPS (&bh1780_pm)
#define BH1780_PMOPS NULL
static const struct i2c_device_id bh1780_id[] = ;
static struct i2c_driver bh1780_driver = ;
static int __init bh1780_init(void)
static void __exit bh1780_exit(void)
module_init(bh1780_init)
module_exit(bh1780_exit)
MODULE_DESCRIPTION("BH1780GLI Ambient Light Sensor Driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Hemanth V <hemanthv@ti.com>");
