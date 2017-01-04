#define DRV_VERSION "0.4"
#define RTC_SIZE		8
#define RTC_CONTROL		0
#define RTC_CENTURY		0
#define RTC_SECONDS		1
#define RTC_MINUTES		2
#define RTC_HOURS		3
#define RTC_DAY			4
#define RTC_DATE		5
#define RTC_MONTH		6
#define RTC_YEAR		7
#define RTC_CENTURY_MASK	0x3f
#define RTC_SECONDS_MASK	0x7f
#define RTC_DAY_MASK		0x07
#define RTC_WRITE		0x80
#define RTC_READ		0x40
#define RTC_STOP		0x80
#define RTC_BATT_FLAG		0x80
struct rtc_plat_data ;
static int ds1742_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int ds1742_rtc_read_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops ds1742_rtc_ops = ;
static ssize_t ds1742_nvram_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t size)
static ssize_t ds1742_nvram_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t size)
static int __devinit ds1742_rtc_probe(struct platform_device *pdev)
static int __devexit ds1742_rtc_remove(struct platform_device *pdev)
static struct platform_driver ds1742_rtc_driver = ;
static __init int ds1742_init(void)
static __exit void ds1742_exit(void)
module_init(ds1742_init);
module_exit(ds1742_exit);
MODULE_AUTHOR("Atsushi Nemoto <anemo@mba.ocn.ne.jp>");
MODULE_DESCRIPTION("Dallas DS1742 RTC driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_ALIAS("platform:rtc-ds1742");
