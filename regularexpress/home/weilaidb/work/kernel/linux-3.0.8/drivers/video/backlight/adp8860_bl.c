#define ADP8860_EXT_FEATURES
#define ADP8860_USE_LEDS
#define ADP8860_MFDVID 0x00
#define ADP8860_MDCR 0x01
#define ADP8860_MDCR2 0x02
#define ADP8860_INTR_EN 0x03
#define ADP8860_CFGR 0x04
#define ADP8860_BLSEN 0x05
#define ADP8860_BLOFF 0x06
#define ADP8860_BLDIM 0x07
#define ADP8860_BLFR 0x08
#define ADP8860_BLMX1 0x09
#define ADP8860_BLDM1 0x0A
#define ADP8860_BLMX2 0x0B
#define ADP8860_BLDM2 0x0C
#define ADP8860_BLMX3 0x0D
#define ADP8860_BLDM3 0x0E
#define ADP8860_ISCFR 0x0F
#define ADP8860_ISCC 0x10
#define ADP8860_ISCT1 0x11
#define ADP8860_ISCT2 0x12
#define ADP8860_ISCF 0x13
#define ADP8860_ISC7 0x14
#define ADP8860_ISC6 0x15
#define ADP8860_ISC5 0x16
#define ADP8860_ISC4 0x17
#define ADP8860_ISC3 0x18
#define ADP8860_ISC2 0x19
#define ADP8860_ISC1 0x1A
#define ADP8860_CCFG 0x1B
#define ADP8860_CCFG2 0x1C
#define ADP8860_L2_TRP 0x1D
#define ADP8860_L2_HYS 0x1E
#define ADP8860_L3_TRP 0x1F
#define ADP8860_L3_HYS 0x20
#define ADP8860_PH1LEVL 0x21
#define ADP8860_PH1LEVH 0x22
#define ADP8860_PH2LEVL 0x23
#define ADP8860_PH2LEVH 0x24
#define ADP8860_MANUFID		0x0
#define ADP8861_MANUFID		0x4
#define ADP8863_MANUFID		0x2
#define ADP8860_DEVID(x)	((x) & 0xF)
#define ADP8860_MANID(x)	((x) >> 4)
#define INT_CFG			(1 << 6)
#define NSTBY			(1 << 5)
#define DIM_EN			(1 << 4)
#define GDWN_DIS		(1 << 3)
#define SIS_EN			(1 << 2)
#define CMP_AUTOEN		(1 << 1)
#define BLEN			(1 << 0)
#define L3_EN			(1 << 1)
#define L2_EN			(1 << 0)
#define CFGR_BLV_SHIFT		3
#define CFGR_BLV_MASK		0x3
#define ADP8860_FLAG_LED_MASK	0xFF
#define FADE_VAL(in, out)	((0xF & (in)) | ((0xF & (out)) << 4))
#define BL_CFGR_VAL(law, blv)	((((blv) & CFGR_BLV_MASK) << CFGR_BLV_SHIFT) | ((0x3 & (law)) << 1))
#define ALS_CCFG_VAL(filt)	((0x7 & filt) << 5)
enum ;
struct adp8860_led ;
struct adp8860_bl ;
static int adp8860_read(struct i2c_client *client, int reg, uint8_t *val)
static int adp8860_write(struct i2c_client *client, u8 reg, u8 val)
static int adp8860_set_bits(struct i2c_client *client, int reg, uint8_t bit_mask)
static int adp8860_clr_bits(struct i2c_client *client, int reg, uint8_t bit_mask)
#if defined(ADP8860_USE_LEDS)
static void adp8860_led_work(struct work_struct *work)
static void adp8860_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static int adp8860_led_setup(struct adp8860_led *led)
static int __devinit adp8860_led_probe(struct i2c_client *client)
static int __devexit adp8860_led_remove(struct i2c_client *client)
static int __devinit adp8860_led_probe(struct i2c_client *client)
static int __devexit adp8860_led_remove(struct i2c_client *client)
static int adp8860_bl_set(struct backlight_device *bl, int brightness)
static int adp8860_bl_update_status(struct backlight_device *bl)
static int adp8860_bl_get_brightness(struct backlight_device *bl)
static const struct backlight_ops adp8860_bl_ops = ;
static int adp8860_bl_setup(struct backlight_device *bl)
static ssize_t adp8860_show(struct device *dev, char *buf, int reg)
static ssize_t adp8860_store(struct device *dev, const char *buf,
size_t count, int reg)
static ssize_t adp8860_bl_l3_dark_max_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp8860_bl_l3_dark_max_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(l3_dark_max, 0664, adp8860_bl_l3_dark_max_show,
adp8860_bl_l3_dark_max_store);
static ssize_t adp8860_bl_l2_office_max_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp8860_bl_l2_office_max_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(l2_office_max, 0664, adp8860_bl_l2_office_max_show,
adp8860_bl_l2_office_max_store);
static ssize_t adp8860_bl_l1_daylight_max_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp8860_bl_l1_daylight_max_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(l1_daylight_max, 0664, adp8860_bl_l1_daylight_max_show,
adp8860_bl_l1_daylight_max_store);
static ssize_t adp8860_bl_l3_dark_dim_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp8860_bl_l3_dark_dim_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(l3_dark_dim, 0664, adp8860_bl_l3_dark_dim_show,
adp8860_bl_l3_dark_dim_store);
static ssize_t adp8860_bl_l2_office_dim_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp8860_bl_l2_office_dim_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(l2_office_dim, 0664, adp8860_bl_l2_office_dim_show,
adp8860_bl_l2_office_dim_store);
static ssize_t adp8860_bl_l1_daylight_dim_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp8860_bl_l1_daylight_dim_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(l1_daylight_dim, 0664, adp8860_bl_l1_daylight_dim_show,
adp8860_bl_l1_daylight_dim_store);
static ssize_t adp8860_bl_ambient_light_level_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(ambient_light_level, 0444,
adp8860_bl_ambient_light_level_show, NULL);
static ssize_t adp8860_bl_ambient_light_zone_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp8860_bl_ambient_light_zone_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(ambient_light_zone, 0664,
adp8860_bl_ambient_light_zone_show,
adp8860_bl_ambient_light_zone_store);
static struct attribute *adp8860_bl_attributes[] = ;
static const struct attribute_group adp8860_bl_attr_group = ;
static int __devinit adp8860_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit adp8860_remove(struct i2c_client *client)
static int adp8860_i2c_suspend(struct i2c_client *client, pm_message_t message)
static int adp8860_i2c_resume(struct i2c_client *client)
#define adp8860_i2c_suspend NULL
#define adp8860_i2c_resume NULL
static const struct i2c_device_id adp8860_id[] = ;
MODULE_DEVICE_TABLE(i2c, adp8860_id);
static struct i2c_driver adp8860_driver = ;
static int __init adp8860_init(void)
module_init(adp8860_init);
static void __exit adp8860_exit(void)
module_exit(adp8860_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("ADP8860 Backlight driver");
MODULE_ALIAS("i2c:adp8860-backlight");
