struct stmp3xxx_rtc_data ;
static void stmp3xxx_wait_time(struct stmp3xxx_rtc_data *rtc_data)
static int stmp3xxx_rtc_gettime(struct device *dev, struct rtc_time *rtc_tm)
static int stmp3xxx_rtc_set_mmss(struct device *dev, unsigned long t)
static irqreturn_t stmp3xxx_rtc_interrupt(int irq, void *dev_id)
static int stmp3xxx_alarm_irq_enable(struct device *dev, unsigned int enabled)
static int stmp3xxx_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alm)
static int stmp3xxx_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alm)
static struct rtc_class_ops stmp3xxx_rtc_ops = ;
static int stmp3xxx_rtc_remove(struct platform_device *pdev)
static int stmp3xxx_rtc_probe(struct platform_device *pdev)
static int stmp3xxx_rtc_suspend(struct platform_device *dev, pm_message_t state)
static int stmp3xxx_rtc_resume(struct platform_device *dev)
#define stmp3xxx_rtc_suspend	NULL
#define stmp3xxx_rtc_resume	NULL
static struct platform_driver stmp3xxx_rtcdrv = ;
static int __init stmp3xxx_rtc_init(void)
static void __exit stmp3xxx_rtc_exit(void)
module_init(stmp3xxx_rtc_init);
module_exit(stmp3xxx_rtc_exit);
MODULE_DESCRIPTION("STMP3xxx RTC Driver");
MODULE_AUTHOR("dmitry pervushin <dpervushin@embeddedalley.com>");
MODULE_LICENSE("GPL");
