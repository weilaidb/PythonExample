#define VT8500_RTC_TS		0x00
#define VT8500_RTC_DS		0x04
#define VT8500_RTC_AS		0x08
#define VT8500_RTC_CR		0x0c
#define VT8500_RTC_TR		0x10
#define VT8500_RTC_DR		0x14
#define VT8500_RTC_WS		0x18
#define VT8500_RTC_CL		0x20
#define VT8500_RTC_IS		0x24
#define VT8500_RTC_ST		0x28
#define INVALID_TIME_BIT	(1 << 31)
#define DATE_CENTURY_S		19
#define DATE_YEAR_S		11
#define DATE_YEAR_MASK		(0xff << DATE_YEAR_S)
#define DATE_MONTH_S		6
#define DATE_MONTH_MASK		(0x1f << DATE_MONTH_S)
#define DATE_DAY_MASK		0x3f
#define TIME_DOW_S		20
#define TIME_DOW_MASK		(0x07 << TIME_DOW_S)
#define TIME_HOUR_S		14
#define TIME_HOUR_MASK		(0x3f << TIME_HOUR_S)
#define TIME_MIN_S		7
#define TIME_MIN_MASK		(0x7f << TIME_MIN_S)
#define TIME_SEC_MASK		0x7f
#define ALARM_DAY_S		20
#define ALARM_DAY_MASK		(0x3f << ALARM_DAY_S)
#define ALARM_DAY_BIT		(1 << 29)
#define ALARM_HOUR_BIT		(1 << 28)
#define ALARM_MIN_BIT		(1 << 27)
#define ALARM_SEC_BIT		(1 << 26)
#define ALARM_ENABLE_MASK	(ALARM_DAY_BIT \
| ALARM_HOUR_BIT \
| ALARM_MIN_BIT \
| ALARM_SEC_BIT)
#define VT8500_RTC_CR_ENABLE	(1 << 0)
#define VT8500_RTC_CR_24H	(1 << 1)
#define VT8500_RTC_CR_SM_ENABLE	(1 << 2)
#define VT8500_RTC_CR_SM_SEC	(1 << 3)
#define VT8500_RTC_CR_CALIB	(1 << 4)
struct vt8500_rtc ;
static irqreturn_t vt8500_rtc_irq(int irq, void *dev_id)
static int vt8500_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int vt8500_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int vt8500_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int vt8500_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int vt8500_alarm_irq_enable(struct device *dev, unsigned int enabled)
static const struct rtc_class_ops vt8500_rtc_ops = ;
static int __devinit vt8500_rtc_probe(struct platform_device *pdev)
static int __devexit vt8500_rtc_remove(struct platform_device *pdev)
static struct platform_driver vt8500_rtc_driver = ;
static int __init vt8500_rtc_init(void)
module_init(vt8500_rtc_init);
static void __exit vt8500_rtc_exit(void)
module_exit(vt8500_rtc_exit);
MODULE_AUTHOR("Alexey Charkov <alchark@gmail.com>");
MODULE_DESCRIPTION("VIA VT8500 SoC Realtime Clock Driver (RTC)");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:vt8500-rtc");
