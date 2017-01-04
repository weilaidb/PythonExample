#define DRV_VERSION "0.4.3"
#define PCF8563_REG_ST1		0x00
#define PCF8563_REG_ST2		0x01
#define PCF8563_REG_SC		0x02
#define PCF8563_REG_MN		0x03
#define PCF8563_REG_HR		0x04
#define PCF8563_REG_DM		0x05
#define PCF8563_REG_DW		0x06
#define PCF8563_REG_MO		0x07
#define PCF8563_REG_YR		0x08
#define PCF8563_REG_AMN		0x09
#define PCF8563_REG_AHR		0x0A
#define PCF8563_REG_ADM		0x0B
#define PCF8563_REG_ADW		0x0C
#define PCF8563_REG_CLKO	0x0D
#define PCF8563_REG_TMRC	0x0E
#define PCF8563_REG_TMR		0x0F
#define PCF8563_SC_LV		0x80
#define PCF8563_MO_C		0x80
static struct i2c_driver pcf8563_driver;
struct pcf8563 ;
static int pcf8563_get_datetime(struct i2c_client *client, struct rtc_time *tm)
static int pcf8563_set_datetime(struct i2c_client *client, struct rtc_time *tm)
static int pcf8563_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int pcf8563_rtc_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops pcf8563_rtc_ops = ;
static int pcf8563_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int pcf8563_remove(struct i2c_client *client)
static const struct i2c_device_id pcf8563_id[] = ;
MODULE_DEVICE_TABLE(i2c, pcf8563_id);
static struct i2c_driver pcf8563_driver = ;
static int __init pcf8563_init(void)
static void __exit pcf8563_exit(void)
MODULE_AUTHOR("Alessandro Zummo <a.zummo@towertech.it>");
MODULE_DESCRIPTION("Philips PCF8563/Epson RTC8564 RTC driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_init(pcf8563_init);
module_exit(pcf8563_exit);
