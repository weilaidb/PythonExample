#define DRV_VERSION "0.3"
#define RTC_REG_SIZE		0x2000
#define RTC_OFFSET		0x1ff0
#define RTC_FLAGS		(RTC_OFFSET + 0)
#define RTC_SECONDS_ALARM	(RTC_OFFSET + 2)
#define RTC_MINUTES_ALARM	(RTC_OFFSET + 3)
#define RTC_HOURS_ALARM		(RTC_OFFSET + 4)
#define RTC_DATE_ALARM		(RTC_OFFSET + 5)
#define RTC_INTERRUPTS		(RTC_OFFSET + 6)
#define RTC_WATCHDOG		(RTC_OFFSET + 7)
#define RTC_CONTROL		(RTC_OFFSET + 8)
#define RTC_CENTURY		(RTC_OFFSET + 8)
#define RTC_SECONDS		(RTC_OFFSET + 9)
#define RTC_MINUTES		(RTC_OFFSET + 10)
#define RTC_HOURS		(RTC_OFFSET + 11)
#define RTC_DAY			(RTC_OFFSET + 12)
#define RTC_DATE		(RTC_OFFSET + 13)
#define RTC_MONTH		(RTC_OFFSET + 14)
#define RTC_YEAR		(RTC_OFFSET + 15)
#define RTC_CENTURY_MASK	0x3f
#define RTC_SECONDS_MASK	0x7f
#define RTC_DAY_MASK		0x07
#define RTC_WRITE		0x80
#define RTC_READ		0x40
#define RTC_STOP		0x80
#define RTC_FLAGS_AF		0x40
#define RTC_FLAGS_BLF		0x10
#define RTC_INTS_AE		0x80
struct rtc_plat_data ;
static int ds1553_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int ds1553_rtc_read_time(struct device *dev, struct rtc_time *tm)
static void ds1553_rtc_update_alarm(struct rtc_plat_data *pdata)
static int ds1553_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int ds1553_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static irqreturn_t ds1553_rtc_interrupt(int irq, void *dev_id)
static int ds1553_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static const struct rtc_class_ops ds1553_rtc_ops = ;
static ssize_t ds1553_nvram_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t size)
static ssize_t ds1553_nvram_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t size)
static struct bin_attribute ds1553_nvram_attr = ;
static int __devinit ds1553_rtc_probe(struct platform_device *pdev)
static int __devexit ds1553_rtc_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:rtc-ds1553");
static struct platform_driver ds1553_rtc_driver = ;
static __init int ds1553_init(void)
static __exit void ds1553_exit(void)
module_init(ds1553_init);
module_exit(ds1553_exit);
MODULE_AUTHOR("Atsushi Nemoto <anemo@mba.ocn.ne.jp>");
MODULE_DESCRIPTION("Dallas DS1553 RTC driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
