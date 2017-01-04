#define RTC_TIME_REG_OFFS	0
#define RTC_SECONDS_OFFS	0
#define RTC_MINUTES_OFFS	8
#define RTC_HOURS_OFFS		16
#define RTC_WDAY_OFFS		24
#define RTC_HOURS_12H_MODE		(1 << 22)
#define RTC_DATE_REG_OFFS	4
#define RTC_MDAY_OFFS		0
#define RTC_MONTH_OFFS		8
#define RTC_YEAR_OFFS		16
#define RTC_ALARM_TIME_REG_OFFS	8
#define RTC_ALARM_DATE_REG_OFFS	0xc
#define RTC_ALARM_VALID		(1 << 7)
#define RTC_ALARM_INTERRUPT_MASK_REG_OFFS	0x10
#define RTC_ALARM_INTERRUPT_CASUE_REG_OFFS	0x14
struct rtc_plat_data ;
static int mv_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int mv_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int mv_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alm)
static int mv_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alm)
static int mv_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static irqreturn_t mv_rtc_interrupt(int irq, void *data)
static const struct rtc_class_ops mv_rtc_ops = ;
static const struct rtc_class_ops mv_rtc_alarm_ops = ;
static int __devinit mv_rtc_probe(struct platform_device *pdev)
static int __exit mv_rtc_remove(struct platform_device *pdev)
static struct platform_driver mv_rtc_driver = ;
static __init int mv_init(void)
static __exit void mv_exit(void)
module_init(mv_init);
module_exit(mv_exit);
MODULE_AUTHOR("Saeed Bishara <saeed@marvell.com>");
MODULE_DESCRIPTION("Marvell RTC driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:rtc-mv");
