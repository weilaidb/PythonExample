#define EM3027_REG_ON_OFF_CTRL	0x00
#define EM3027_REG_IRQ_CTRL	0x01
#define EM3027_REG_IRQ_FLAGS	0x02
#define EM3027_REG_STATUS	0x03
#define EM3027_REG_RST_CTRL	0x04
#define EM3027_REG_WATCH_SEC	0x08
#define EM3027_REG_WATCH_MIN	0x09
#define EM3027_REG_WATCH_HOUR	0x0a
#define EM3027_REG_WATCH_DATE	0x0b
#define EM3027_REG_WATCH_DAY	0x0c
#define EM3027_REG_WATCH_MON	0x0d
#define EM3027_REG_WATCH_YEAR	0x0e
#define EM3027_REG_ALARM_SEC	0x10
#define EM3027_REG_ALARM_MIN	0x11
#define EM3027_REG_ALARM_HOUR	0x12
#define EM3027_REG_ALARM_DATE	0x13
#define EM3027_REG_ALARM_DAY	0x14
#define EM3027_REG_ALARM_MON	0x15
#define EM3027_REG_ALARM_YEAR	0x16
static struct i2c_driver em3027_driver;
static int em3027_get_time(struct device *dev, struct rtc_time *tm)
static int em3027_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops em3027_rtc_ops = ;
static int em3027_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int em3027_remove(struct i2c_client *client)
static struct i2c_device_id em3027_id[] = ;
static struct i2c_driver em3027_driver = ;
static int __init em3027_init(void)
static void __exit em3027_exit(void)
MODULE_AUTHOR("Mike Rapoport <mike@compulab.co.il>");
MODULE_DESCRIPTION("EM Microelectronic EM3027 RTC driver");
MODULE_LICENSE("GPL");
module_init(em3027_init);
module_exit(em3027_exit);
