#define DRIVER_NAME "mc13xxx-rtc"
#define MC13XXX_RTCTOD	20
#define MC13XXX_RTCTODA	21
#define MC13XXX_RTCDAY	22
#define MC13XXX_RTCDAYA	23
struct mc13xxx_rtc ;
static int mc13xxx_rtc_irq_enable_unlocked(struct device *dev,
unsigned int enabled, int irq)
static int mc13xxx_rtc_irq_enable(struct device *dev,
unsigned int enabled, int irq)
static int mc13xxx_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int mc13xxx_rtc_set_mmss(struct device *dev, unsigned long secs)
static int mc13xxx_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static int mc13xxx_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static irqreturn_t mc13xxx_rtc_alarm_handler(int irq, void *dev)
static irqreturn_t mc13xxx_rtc_update_handler(int irq, void *dev)
static int mc13xxx_rtc_alarm_irq_enable(struct device *dev,
unsigned int enabled)
static const struct rtc_class_ops mc13xxx_rtc_ops = ;
static irqreturn_t mc13xxx_rtc_reset_handler(int irq, void *dev)
static int __devinit mc13xxx_rtc_probe(struct platform_device *pdev)
static int __devexit mc13xxx_rtc_remove(struct platform_device *pdev)
const struct platform_device_id mc13xxx_rtc_idtable[] = ;
static struct platform_driver mc13xxx_rtc_driver = ;
static int __init mc13xxx_rtc_init(void)
module_init(mc13xxx_rtc_init);
static void __exit mc13xxx_rtc_exit(void)
module_exit(mc13xxx_rtc_exit);
MODULE_AUTHOR("Sascha Hauer <s.hauer@pengutronix.de>");
MODULE_DESCRIPTION("RTC driver for Freescale MC13XXX PMIC");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:" DRIVER_NAME);
