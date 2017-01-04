#define ADP8870_EXT_FEATURES
#define ADP8870_USE_LEDS
#define ADP8870_MFDVID	0x00
#define ADP8870_MDCR	0x01
#define ADP8870_INT_STAT 0x02
#define ADP8870_INT_EN	0x03
#define ADP8870_CFGR	0x04
#define ADP8870_BLSEL	0x05
#define ADP8870_PWMLED	0x06
#define ADP8870_BLOFF	0x07
#define ADP8870_BLDIM	0x08
#define ADP8870_BLFR	0x09
#define ADP8870_BLMX1	0x0A
#define ADP8870_BLDM1	0x0B
#define ADP8870_BLMX2	0x0C
#define ADP8870_BLDM2	0x0D
#define ADP8870_BLMX3	0x0E
#define ADP8870_BLDM3	0x0F
#define ADP8870_BLMX4	0x10
#define ADP8870_BLDM4	0x11
#define ADP8870_BLMX5	0x12
#define ADP8870_BLDM5	0x13
#define ADP8870_ISCLAW	0x1A
#define ADP8870_ISCC	0x1B
#define ADP8870_ISCT1	0x1C
#define ADP8870_ISCT2	0x1D
#define ADP8870_ISCF	0x1E
#define ADP8870_ISC1	0x1F
#define ADP8870_ISC2	0x20
#define ADP8870_ISC3	0x21
#define ADP8870_ISC4	0x22
#define ADP8870_ISC5	0x23
#define ADP8870_ISC6	0x24
#define ADP8870_ISC7	0x25
#define ADP8870_ISC7_L2	0x26
#define ADP8870_ISC7_L3	0x27
#define ADP8870_ISC7_L4	0x28
#define ADP8870_ISC7_L5	0x29
#define ADP8870_CMP_CTL	0x2D
#define ADP8870_ALS1_EN	0x2E
#define ADP8870_ALS2_EN	0x2F
#define ADP8870_ALS1_STAT 0x30
#define ADP8870_ALS2_STAT 0x31
#define ADP8870_L2TRP	0x32
#define ADP8870_L2HYS	0x33
#define ADP8870_L3TRP	0x34
#define ADP8870_L3HYS	0x35
#define ADP8870_L4TRP	0x36
#define ADP8870_L4HYS	0x37
#define ADP8870_L5TRP	0x38
#define ADP8870_L5HYS	0x39
#define ADP8870_PH1LEVL	0x40
#define ADP8870_PH1LEVH	0x41
#define ADP8870_PH2LEVL	0x42
#define ADP8870_PH2LEVH	0x43
#define ADP8870_MANUFID		0x3
#define ADP8870_DEVID(x)	((x) & 0xF)
#define ADP8870_MANID(x)	((x) >> 4)
#define D7ALSEN			(1 << 7)
#define INT_CFG			(1 << 6)
#define NSTBY			(1 << 5)
#define DIM_EN			(1 << 4)
#define GDWN_DIS		(1 << 3)
#define SIS_EN			(1 << 2)
#define CMP_AUTOEN		(1 << 1)
#define BLEN			(1 << 0)
#define L5_EN			(1 << 3)
#define L4_EN			(1 << 2)
#define L3_EN			(1 << 1)
#define L2_EN			(1 << 0)
#define CFGR_BLV_SHIFT		3
#define CFGR_BLV_MASK		0x7
#define ADP8870_FLAG_LED_MASK	0xFF
#define FADE_VAL(in, out)	((0xF & (in)) | ((0xF & (out)) << 4))
#define BL_CFGR_VAL(law, blv)	((((blv) & CFGR_BLV_MASK) << CFGR_BLV_SHIFT) | ((0x3 & (law)) << 1))
#define ALS_CMPR_CFG_VAL(filt)	((0x7 & (filt)) << 1)
struct adp8870_bl ;
struct adp8870_led ;
static int adp8870_read(struct i2c_client *client, int reg, uint8_t *val)
static int adp8870_write(struct i2c_client *client, u8 reg, u8 val)
static int adp8870_set_bits(struct i2c_client *client, int reg, uint8_t bit_mask)
static int adp8870_clr_bits(struct i2c_client *client, int reg, uint8_t bit_mask)
#if defined(ADP8870_USE_LEDS)
static void adp8870_led_work(struct work_struct *work)
static void adp8870_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static int adp8870_led_setup(struct adp8870_led *led)
static int __devinit adp8870_led_probe(struct i2c_client *client)
static int __devexit adp8870_led_remove(struct i2c_client *client)
static int __devinit adp8870_led_probe(struct i2c_client *client)
static int __devexit adp8870_led_remove(struct i2c_client *client)
static int adp8870_bl_set(struct backlight_device *bl, int brightness)
static int adp8870_bl_update_status(struct backlight_device *bl)
static int adp8870_bl_get_brightness(struct backlight_device *bl)
static const struct backlight_ops adp8870_bl_ops = ;
static int adp8870_bl_setup(struct backlight_device *bl)
static ssize_t adp8870_show(struct device *dev, char *buf, int reg)
static ssize_t adp8870_store(struct device *dev, const char *buf,
size_t count, int reg)
static ssize_t adp8870_bl_l5_dark_max_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp8870_bl_l5_dark_max_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(l5_dark_max, 0664, adp8870_bl_l5_dark_max_show,
adp8870_bl_l5_dark_max_store);
static ssize_t adp8870_bl_l4_indoor_max_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp8870_bl_l4_indoor_max_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(l4_indoor_max, 0664, adp8870_bl_l4_indoor_max_show,
adp8870_bl_l4_indoor_max_store);
static ssize_t adp8870_bl_l3_office_max_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp8870_bl_l3_office_max_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(l3_office_max, 0664, adp8870_bl_l3_office_max_show,
adp8870_bl_l3_office_max_store);
static ssize_t adp8870_bl_l2_bright_max_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp8870_bl_l2_bright_max_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(l2_bright_max, 0664, adp8870_bl_l2_bright_max_show,
adp8870_bl_l2_bright_max_store);
static ssize_t adp8870_bl_l1_daylight_max_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp8870_bl_l1_daylight_max_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(l1_daylight_max, 0664, adp8870_bl_l1_daylight_max_show,
adp8870_bl_l1_daylight_max_store);
static ssize_t adp8870_bl_l5_dark_dim_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp8870_bl_l5_dark_dim_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(l5_dark_dim, 0664, adp8870_bl_l5_dark_dim_show,
adp8870_bl_l5_dark_dim_store);
static ssize_t adp8870_bl_l4_indoor_dim_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp8870_bl_l4_indoor_dim_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(l4_indoor_dim, 0664, adp8870_bl_l4_indoor_dim_show,
adp8870_bl_l4_indoor_dim_store);
static ssize_t adp8870_bl_l3_office_dim_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp8870_bl_l3_office_dim_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(l3_office_dim, 0664, adp8870_bl_l3_office_dim_show,
adp8870_bl_l3_office_dim_store);
static ssize_t adp8870_bl_l2_bright_dim_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp8870_bl_l2_bright_dim_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(l2_bright_dim, 0664, adp8870_bl_l2_bright_dim_show,
adp8870_bl_l2_bright_dim_store);
static ssize_t adp8870_bl_l1_daylight_dim_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp8870_bl_l1_daylight_dim_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(l1_daylight_dim, 0664, adp8870_bl_l1_daylight_dim_show,
adp8870_bl_l1_daylight_dim_store);
static ssize_t adp8870_bl_ambient_light_level_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(ambient_light_level, 0444,
adp8870_bl_ambient_light_level_show, NULL);
static ssize_t adp8870_bl_ambient_light_zone_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adp8870_bl_ambient_light_zone_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(ambient_light_zone, 0664,
adp8870_bl_ambient_light_zone_show,
adp8870_bl_ambient_light_zone_store);
static struct attribute *adp8870_bl_attributes[] = ;
static const struct attribute_group adp8870_bl_attr_group = ;
static int __devinit adp8870_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit adp8870_remove(struct i2c_client *client)
static int adp8870_i2c_suspend(struct i2c_client *client, pm_message_t message)
static int adp8870_i2c_resume(struct i2c_client *client)
#define adp8870_i2c_suspend NULL
#define adp8870_i2c_resume NULL
static const struct i2c_device_id adp8870_id[] = ;
MODULE_DEVICE_TABLE(i2c, adp8870_id);
static struct i2c_driver adp8870_driver = ;
static int __init adp8870_init(void)
module_init(adp8870_init);
static void __exit adp8870_exit(void)
module_exit(adp8870_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("ADP8870 Backlight driver");
MODULE_ALIAS("platform:adp8870-backlight");
