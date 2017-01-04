#define RTC_DR		(0)
#define RTC_MR		(4)
#define RTC_STAT	(8)
#define RTC_EOI		(8)
#define RTC_LR		(12)
#define RTC_CR		(16)
#define RTC_CR_MIE	(1 << 0)
struct pl030_rtc ;
static irqreturn_t pl030_interrupt(int irq, void *dev_id)
static int pl030_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int pl030_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int pl030_read_time(struct device *dev, struct rtc_time *tm)
static int pl030_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops pl030_ops = ;
static int pl030_probe(struct amba_device *dev, const struct amba_id *id)
static int pl030_remove(struct amba_device *dev)
static struct amba_id pl030_ids[] = ;
static struct amba_driver pl030_driver = ;
static int __init pl030_init(void)
static void __exit pl030_exit(void)
module_init(pl030_init);
module_exit(pl030_exit);
MODULE_AUTHOR("Russell King <rmk@arm.linux.org.uk>");
MODULE_DESCRIPTION("ARM AMBA PL030 RTC Driver");
MODULE_LICENSE("GPL");
