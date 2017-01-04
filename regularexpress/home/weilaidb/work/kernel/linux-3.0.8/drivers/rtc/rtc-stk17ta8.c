#define DRV_VERSION "0.1"
#define RTC_REG_SIZE		0x20000
#define RTC_OFFSET		0x1fff0
#define RTC_FLAGS		(RTC_OFFSET + 0)
#define RTC_CENTURY		(RTC_OFFSET + 1)
#define RTC_SECONDS_ALARM	(RTC_OFFSET + 2)
#define RTC_MINUTES_ALARM	(RTC_OFFSET + 3)
#define RTC_HOURS_ALARM		(RTC_OFFSET + 4)
#define RTC_DATE_ALARM		(RTC_OFFSET + 5)
#define RTC_INTERRUPTS		(RTC_OFFSET + 6)
#define RTC_WATCHDOG		(RTC_OFFSET + 7)
#define RTC_CALIBRATION		(RTC_OFFSET + 8)
#define RTC_SECONDS		(RTC_OFFSET + 9)
#define RTC_MINUTES		(RTC_OFFSET + 10)
#define RTC_HOURS		(RTC_OFFSET + 11)
#define RTC_DAY			(RTC_OFFSET + 12)
#define RTC_DATE		(RTC_OFFSET + 13)
#define RTC_MONTH		(RTC_OFFSET + 14)
#define RTC_YEAR		(RTC_OFFSET + 15)
#define RTC_SECONDS_MASK	0x7f
#define RTC_DAY_MASK		0x07
#define RTC_CAL_MASK		0x3f
#define RTC_STOP		0x80
#define RTC_FLAGS_AF		0x40
#define RTC_FLAGS_PF		0x20
#define RTC_WRITE		0x02
#define RTC_READ		0x01
#define RTC_INTS_AIE		0x40
struct rtc_plat_data ;
static int stk17ta8_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int stk17ta8_rtc_read_time(struct device *dev, struct rtc_time *tm)
static void stk17ta8_rtc_update_alarm(struct rtc_plat_data *pdata)
static int stk17ta8_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int stk17ta8_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static irqreturn_t stk17ta8_rtc_interrupt(int irq, void *dev_id)
static int stk17ta8_rtc_alarm_irq_enable(struct device *dev,
unsigned int enabled)
static const struct rtc_class_ops stk17ta8_rtc_ops = ;
static ssize_t stk17ta8_nvram_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr, char *buf,
loff_t pos, size_t size)
static ssize_t stk17ta8_nvram_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr, char *buf,
loff_t pos, size_t size)
static struct bin_attribute stk17ta8_nvram_attr = ;
static int __devinit stk17ta8_rtc_probe(struct platform_device *pdev)
static int __devexit stk17ta8_rtc_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:stk17ta8");
static struct platform_driver stk17ta8_rtc_driver = ;
static __init int stk17ta8_init(void)
static __exit void stk17ta8_exit(void)
module_init(stk17ta8_init);
module_exit(stk17ta8_exit);
MODULE_AUTHOR("Thomas Hommel <thomas.hommel@ge.com>");
MODULE_DESCRIPTION("Simtek STK17TA8 RTC driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
