#define AT91_RTC_EPOCH		1900UL
static DECLARE_COMPLETION(at91_rtc_updated);
static unsigned int at91_alarm_year = AT91_RTC_EPOCH;
static void at91_rtc_decodetime(unsigned int timereg, unsigned int calreg,
struct rtc_time *tm)
static int at91_rtc_readtime(struct device *dev, struct rtc_time *tm)
static int at91_rtc_settime(struct device *dev, struct rtc_time *tm)
static int at91_rtc_readalarm(struct device *dev, struct rtc_wkalrm *alrm)
static int at91_rtc_setalarm(struct device *dev, struct rtc_wkalrm *alrm)
static int at91_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static int at91_rtc_proc(struct device *dev, struct seq_file *seq)
static irqreturn_t at91_rtc_interrupt(int irq, void *dev_id)
static const struct rtc_class_ops at91_rtc_ops = ;
static int __init at91_rtc_probe(struct platform_device *pdev)
static int __exit at91_rtc_remove(struct platform_device *pdev)
static u32 at91_rtc_imr;
static int at91_rtc_suspend(struct device *dev)
static int at91_rtc_resume(struct device *dev)
static const struct dev_pm_ops at91_rtc_pm = ;
#define at91_rtc_pm_ptr	&at91_rtc_pm
#define at91_rtc_pm_ptr	NULL
static struct platform_driver at91_rtc_driver = ;
static int __init at91_rtc_init(void)
static void __exit at91_rtc_exit(void)
module_init(at91_rtc_init);
module_exit(at91_rtc_exit);
MODULE_AUTHOR("Rick Bronson");
MODULE_DESCRIPTION("RTC driver for Atmel AT91RM9200");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:at91_rtc");
