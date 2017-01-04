#define RTC_DEF_DIVIDER		(32768 - 1)
#define RTC_DEF_TRIM		0
static const unsigned long RTC_FREQ = 1024;
static struct rtc_time rtc_alarm;
static DEFINE_SPINLOCK(sa1100_rtc_lock);
static inline int rtc_periodic_alarm(struct rtc_time *tm)
static void rtc_next_alarm_time(struct rtc_time *next, struct rtc_time *now,
struct rtc_time *alrm)
static int rtc_update_alarm(struct rtc_time *alrm)
static irqreturn_t sa1100_rtc_interrupt(int irq, void *dev_id)
static int sa1100_rtc_open(struct device *dev)
static void sa1100_rtc_release(struct device *dev)
static int sa1100_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static int sa1100_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int sa1100_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int sa1100_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int sa1100_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int sa1100_rtc_proc(struct device *dev, struct seq_file *seq)
static const struct rtc_class_ops sa1100_rtc_ops = ;
static int sa1100_rtc_probe(struct platform_device *pdev)
static int sa1100_rtc_remove(struct platform_device *pdev)
static int sa1100_rtc_suspend(struct device *dev)
static int sa1100_rtc_resume(struct device *dev)
static const struct dev_pm_ops sa1100_rtc_pm_ops = ;
static struct platform_driver sa1100_rtc_driver = ;
static int __init sa1100_rtc_init(void)
static void __exit sa1100_rtc_exit(void)
module_init(sa1100_rtc_init);
module_exit(sa1100_rtc_exit);
MODULE_AUTHOR("Richard Purdie <rpurdie@rpsys.net>");
MODULE_DESCRIPTION("SA11x0/PXA2xx Realtime Clock Driver (RTC)");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:sa1100-rtc");
