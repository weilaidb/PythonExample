#define FM3130_RTC_CONTROL	(0x0)
#define FM3130_CAL_CONTROL	(0x1)
#define FM3130_RTC_SECONDS	(0x2)
#define FM3130_RTC_MINUTES	(0x3)
#define FM3130_RTC_HOURS	(0x4)
#define FM3130_RTC_DAY		(0x5)
#define FM3130_RTC_DATE		(0x6)
#define FM3130_RTC_MONTHS	(0x7)
#define FM3130_RTC_YEARS	(0x8)
#define FM3130_ALARM_SECONDS	(0x9)
#define FM3130_ALARM_MINUTES	(0xa)
#define FM3130_ALARM_HOURS	(0xb)
#define FM3130_ALARM_DATE	(0xc)
#define FM3130_ALARM_MONTHS	(0xd)
#define FM3130_ALARM_WP_CONTROL	(0xe)
#define FM3130_CAL_CONTROL_BIT_nOSCEN (1 << 7)
#define FM3130_RTC_CONTROL_BIT_LB (1 << 7)
#define FM3130_RTC_CONTROL_BIT_AF (1 << 6)
#define FM3130_RTC_CONTROL_BIT_CF (1 << 5)
#define FM3130_RTC_CONTROL_BIT_POR (1 << 4)
#define FM3130_RTC_CONTROL_BIT_AEN (1 << 3)
#define FM3130_RTC_CONTROL_BIT_CAL (1 << 2)
#define FM3130_RTC_CONTROL_BIT_WRITE (1 << 1)
#define FM3130_RTC_CONTROL_BIT_READ (1 << 0)
#define FM3130_CLOCK_REGS 7
#define FM3130_ALARM_REGS 5
struct fm3130 ;
static const struct i2c_device_id fm3130_id[] = ;
MODULE_DEVICE_TABLE(i2c, fm3130_id);
#define FM3130_MODE_NORMAL		0
#define FM3130_MODE_WRITE		1
#define FM3130_MODE_READ		2
static void fm3130_rtc_mode(struct device *dev, int mode)
static int fm3130_get_time(struct device *dev, struct rtc_time *t)
static int fm3130_set_time(struct device *dev, struct rtc_time *t)
static int fm3130_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int fm3130_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int fm3130_alarm_irq_enable(struct device *dev, unsigned int enabled)
static const struct rtc_class_ops fm3130_rtc_ops = ;
static struct i2c_driver fm3130_driver;
static int __devinit fm3130_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit fm3130_remove(struct i2c_client *client)
static struct i2c_driver fm3130_driver = ;
static int __init fm3130_init(void)
module_init(fm3130_init);
static void __exit fm3130_exit(void)
module_exit(fm3130_exit);
MODULE_DESCRIPTION("RTC driver for FM3130");
MODULE_AUTHOR("Sergey Lapin <slapin@ossfans.org>");
MODULE_LICENSE("GPL");
