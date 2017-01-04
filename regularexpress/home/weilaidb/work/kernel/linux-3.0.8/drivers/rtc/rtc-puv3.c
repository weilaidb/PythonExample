static struct resource *puv3_rtc_mem;
static int puv3_rtc_alarmno = IRQ_RTCAlarm;
static int puv3_rtc_tickno  = IRQ_RTC;
static DEFINE_SPINLOCK(puv3_rtc_pie_lock);
static irqreturn_t puv3_rtc_alarmirq(int irq, void *id)
static irqreturn_t puv3_rtc_tickirq(int irq, void *id)
static void puv3_rtc_setaie(int to)
static int puv3_rtc_setpie(struct device *dev, int enabled)
static int puv3_rtc_gettime(struct device *dev, struct rtc_time *rtc_tm)
static int puv3_rtc_settime(struct device *dev, struct rtc_time *tm)
static int puv3_rtc_getalarm(struct device *dev, struct rtc_wkalrm *alrm)
static int puv3_rtc_setalarm(struct device *dev, struct rtc_wkalrm *alrm)
static int puv3_rtc_proc(struct device *dev, struct seq_file *seq)
static int puv3_rtc_open(struct device *dev)
static void puv3_rtc_release(struct device *dev)
static const struct rtc_class_ops puv3_rtcops = ;
static void puv3_rtc_enable(struct platform_device *pdev, int en)
static int puv3_rtc_remove(struct platform_device *dev)
static int puv3_rtc_probe(struct platform_device *pdev)
static int ticnt_save;
static int puv3_rtc_suspend(struct platform_device *pdev, pm_message_t state)
static int puv3_rtc_resume(struct platform_device *pdev)
#define puv3_rtc_suspend NULL
#define puv3_rtc_resume  NULL
static struct platform_driver puv3_rtcdrv = ;
static char __initdata banner[] = "PKUnity-v3 RTC, (c) 2009 PKUnity Co.\n";
static int __init puv3_rtc_init(void)
static void __exit puv3_rtc_exit(void)
module_init(puv3_rtc_init);
module_exit(puv3_rtc_exit);
MODULE_DESCRIPTION("RTC Driver for the PKUnity v3 chip");
MODULE_AUTHOR("Hu Dongliang");
MODULE_LICENSE("GPL v2");
