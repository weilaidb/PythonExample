struct mrst_rtc ;
static const char driver_name[] = "rtc_mrst";
#define	RTC_IRQMASK	(RTC_PF | RTC_AF)
static inline int is_intr(u8 rtc_intr)
static inline unsigned char vrtc_is_updating(void)
static int mrst_read_time(struct device *dev, struct rtc_time *time)
static int mrst_set_time(struct device *dev, struct rtc_time *time)
static int mrst_read_alarm(struct device *dev, struct rtc_wkalrm *t)
static void mrst_checkintr(struct mrst_rtc *mrst, unsigned char rtc_control)
static void mrst_irq_enable(struct mrst_rtc *mrst, unsigned char mask)
static void mrst_irq_disable(struct mrst_rtc *mrst, unsigned char mask)
static int mrst_set_alarm(struct device *dev, struct rtc_wkalrm *t)
static int mrst_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
#if defined(CONFIG_RTC_INTF_PROC) || defined(CONFIG_RTC_INTF_PROC_MODULE)
static int mrst_procfs(struct device *dev, struct seq_file *seq)
#define	mrst_procfs	NULL
static const struct rtc_class_ops mrst_rtc_ops = ;
static struct mrst_rtc	mrst_rtc;
static irqreturn_t mrst_rtc_irq(int irq, void *p)
static int __devinit
vrtc_mrst_do_probe(struct device *dev, struct resource *iomem, int rtc_irq)
static void rtc_mrst_do_shutdown(void)
static void __devexit rtc_mrst_do_remove(struct device *dev)
static int mrst_suspend(struct device *dev, pm_message_t mesg)
static inline int mrst_poweroff(struct device *dev)
static int mrst_resume(struct device *dev)
#define	mrst_suspend	NULL
#define	mrst_resume	NULL
static inline int mrst_poweroff(struct device *dev)
static int __devinit vrtc_mrst_platform_probe(struct platform_device *pdev)
static int __devexit vrtc_mrst_platform_remove(struct platform_device *pdev)
static void vrtc_mrst_platform_shutdown(struct platform_device *pdev)
MODULE_ALIAS("platform:vrtc_mrst");
static struct platform_driver vrtc_mrst_platform_driver = ;
static int __init vrtc_mrst_init(void)
static void __exit vrtc_mrst_exit(void)
module_init(vrtc_mrst_init);
module_exit(vrtc_mrst_exit);
MODULE_AUTHOR("Jacob Pan; Feng Tang");
MODULE_DESCRIPTION("Driver for Moorestown virtual RTC");
MODULE_LICENSE("GPL");
