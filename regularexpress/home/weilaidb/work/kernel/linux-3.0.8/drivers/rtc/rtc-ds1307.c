enum ds_type ;
#define DS1307_REG_SECS		0x00
#	define DS1307_BIT_CH		0x80
#	define DS1340_BIT_nEOSC		0x80
#define DS1307_REG_MIN		0x01
#define DS1307_REG_HOUR		0x02
#	define DS1307_BIT_12HR		0x40
#	define DS1307_BIT_PM		0x20
#	define DS1340_BIT_CENTURY_EN	0x80
#	define DS1340_BIT_CENTURY	0x40
#define DS1307_REG_WDAY		0x03
#define DS1307_REG_MDAY		0x04
#define DS1307_REG_MONTH	0x05
#	define DS1337_BIT_CENTURY	0x80
#define DS1307_REG_YEAR		0x06
#define DS1307_REG_CONTROL	0x07
#	define DS1307_BIT_OUT		0x80
#	define DS1338_BIT_OSF		0x20
#	define DS1307_BIT_SQWE		0x10
#	define DS1307_BIT_RS1		0x02
#	define DS1307_BIT_RS0		0x01
#define DS1337_REG_CONTROL	0x0e
#	define DS1337_BIT_nEOSC		0x80
#	define DS1339_BIT_BBSQI		0x20
#	define DS3231_BIT_BBSQW		0x40
#	define DS1337_BIT_RS2		0x10
#	define DS1337_BIT_RS1		0x08
#	define DS1337_BIT_INTCN		0x04
#	define DS1337_BIT_A2IE		0x02
#	define DS1337_BIT_A1IE		0x01
#define DS1340_REG_CONTROL	0x07
#	define DS1340_BIT_OUT		0x80
#	define DS1340_BIT_FT		0x40
#	define DS1340_BIT_CALIB_SIGN	0x20
#	define DS1340_M_CALIBRATION	0x1f
#define DS1340_REG_FLAG		0x09
#	define DS1340_BIT_OSF		0x80
#define DS1337_REG_STATUS	0x0f
#	define DS1337_BIT_OSF		0x80
#	define DS1337_BIT_A2I		0x02
#	define DS1337_BIT_A1I		0x01
#define DS1339_REG_ALARM1_SECS	0x07
#define DS1339_REG_TRICKLE	0x10
#define RX8025_REG_CTRL1	0x0e
#	define RX8025_BIT_2412		0x20
#define RX8025_REG_CTRL2	0x0f
#	define RX8025_BIT_PON		0x10
#	define RX8025_BIT_VDET		0x40
#	define RX8025_BIT_XST		0x20
struct ds1307 ;
struct chip_desc ;
static const struct chip_desc chips[] = ;
static const struct i2c_device_id ds1307_id[] = ;
MODULE_DEVICE_TABLE(i2c, ds1307_id);
#define BLOCK_DATA_MAX_TRIES 10
static s32 ds1307_read_block_data_once(const struct i2c_client *client,
u8 command, u8 length, u8 *values)
static s32 ds1307_read_block_data(const struct i2c_client *client, u8 command,
u8 length, u8 *values)
static s32 ds1307_write_block_data(const struct i2c_client *client, u8 command,
u8 length, const u8 *values)
static void ds1307_work(struct work_struct *work)
static irqreturn_t ds1307_irq(int irq, void *dev_id)
static int ds1307_get_time(struct device *dev, struct rtc_time *t)
static int ds1307_set_time(struct device *dev, struct rtc_time *t)
static int ds1337_read_alarm(struct device *dev, struct rtc_wkalrm *t)
static int ds1337_set_alarm(struct device *dev, struct rtc_wkalrm *t)
static int ds1307_alarm_irq_enable(struct device *dev, unsigned int enabled)
static const struct rtc_class_ops ds13xx_rtc_ops = ;
#define NVRAM_SIZE	56
static ssize_t
ds1307_nvram_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t off, size_t count)
static ssize_t
ds1307_nvram_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute nvram = ;
static struct i2c_driver ds1307_driver;
static int __devinit ds1307_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit ds1307_remove(struct i2c_client *client)
static struct i2c_driver ds1307_driver = ;
static int __init ds1307_init(void)
module_init(ds1307_init);
static void __exit ds1307_exit(void)
module_exit(ds1307_exit);
MODULE_DESCRIPTION("RTC driver for DS1307 and similar chips");
MODULE_LICENSE("GPL");
