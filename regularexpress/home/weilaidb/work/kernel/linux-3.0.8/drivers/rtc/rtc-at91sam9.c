#define ALARM_DISABLED	((u32)~0)
struct sam9_rtc ;
#define rtt_readl(rtc, field) \
__raw_readl((rtc)->rtt + AT91_RTT_ ## field)
#define rtt_writel(rtc, field, val) \
__raw_writel((val), (rtc)->rtt + AT91_RTT_ ## field)
#define gpbr_readl(rtc) \
at91_sys_read(AT91_GPBR + 4 * CONFIG_RTC_DRV_AT91SAM9_GPBR)
#define gpbr_writel(rtc, val) \
at91_sys_write(AT91_GPBR + 4 * CONFIG_RTC_DRV_AT91SAM9_GPBR, (val))
static int at91_rtc_readtime(struct device *dev, struct rtc_time *tm)
static int at91_rtc_settime(struct device *dev, struct rtc_time *tm)
static int at91_rtc_readalarm(struct device *dev, struct rtc_wkalrm *alrm)
static int at91_rtc_setalarm(struct device *dev, struct rtc_wkalrm *alrm)
static int at91_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static int at91_rtc_proc(struct device *dev, struct seq_file *seq)
static irqreturn_t at91_rtc_interrupt(int irq, void *_rtc)
static const struct rtc_class_ops at91_rtc_ops = ;
static int __init at91_rtc_probe(struct platform_device *pdev)
static int __exit at91_rtc_remove(struct platform_device *pdev)
static void at91_rtc_shutdown(struct platform_device *pdev)
static int at91_rtc_suspend(struct platform_device *pdev,
pm_message_t state)
static int at91_rtc_resume(struct platform_device *pdev)
#define at91_rtc_suspend	NULL
#define at91_rtc_resume		NULL
static struct platform_driver at91_rtc_driver = ;
static int __init at91_rtc_match(struct device *dev, void *v)
static int __init at91_rtc_init(void)
module_init(at91_rtc_init);
static void __exit at91_rtc_exit(void)
module_exit(at91_rtc_exit);
MODULE_AUTHOR("Michel Benoit");
MODULE_DESCRIPTION("RTC driver for Atmel AT91SAM9x");
MODULE_LICENSE("GPL");
