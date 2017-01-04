#define AB3100_RTC_CLOCK_RATE	32768
#define AB3100_RTC		0x53
#define RTC_SETTING		0x30
#define AB3100_AL0		0x56
#define AB3100_AL1		0x57
#define AB3100_AL2		0x58
#define AB3100_AL3		0x59
#define AB3100_TI0		0x5a
#define AB3100_TI1		0x5b
#define AB3100_TI2		0x5c
#define AB3100_TI3		0x5d
#define AB3100_TI4		0x5e
#define AB3100_TI5		0x5f
static int ab3100_rtc_set_mmss(struct device *dev, unsigned long secs)
static int ab3100_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int ab3100_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static int ab3100_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static int ab3100_rtc_irq_enable(struct device *dev, unsigned int enabled)
static const struct rtc_class_ops ab3100_rtc_ops = ;
static int __init ab3100_rtc_probe(struct platform_device *pdev)
static int __exit ab3100_rtc_remove(struct platform_device *pdev)
static struct platform_driver ab3100_rtc_driver = ;
static int __init ab3100_rtc_init(void)
static void __exit ab3100_rtc_exit(void)
module_init(ab3100_rtc_init);
module_exit(ab3100_rtc_exit);
MODULE_AUTHOR("Linus Walleij <linus.walleij@stericsson.com>");
MODULE_DESCRIPTION("AB3100 RTC Driver");
MODULE_LICENSE("GPL");
