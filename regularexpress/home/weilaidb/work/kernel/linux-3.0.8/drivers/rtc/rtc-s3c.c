enum s3c_cpu_type ;
static struct resource *s3c_rtc_mem;
static struct clk *rtc_clk;
static void __iomem *s3c_rtc_base;
static int s3c_rtc_alarmno = NO_IRQ;
static int s3c_rtc_tickno  = NO_IRQ;
static bool wake_en;
static enum s3c_cpu_type s3c_rtc_cpu_type;
static DEFINE_SPINLOCK(s3c_rtc_pie_lock);
static irqreturn_t s3c_rtc_alarmirq(int irq, void *id)
static irqreturn_t s3c_rtc_tickirq(int irq, void *id)
static int s3c_rtc_setaie(struct device *dev, unsigned int enabled)
static int s3c_rtc_setfreq(struct device *dev, int freq)
static int s3c_rtc_gettime(struct device *dev, struct rtc_time *rtc_tm)
static int s3c_rtc_settime(struct device *dev, struct rtc_time *tm)
static int s3c_rtc_getalarm(struct device *dev, struct rtc_wkalrm *alrm)
static int s3c_rtc_setalarm(struct device *dev, struct rtc_wkalrm *alrm)
static int s3c_rtc_proc(struct device *dev, struct seq_file *seq)
static int s3c_rtc_open(struct device *dev)
static void s3c_rtc_release(struct device *dev)
static const struct rtc_class_ops s3c_rtcops = ;
static void s3c_rtc_enable(struct platform_device *pdev, int en)
static int __devexit s3c_rtc_remove(struct platform_device *dev)
static int __devinit s3c_rtc_probe(struct platform_device *pdev)
static int ticnt_save, ticnt_en_save;
static int s3c_rtc_suspend(struct platform_device *pdev, pm_message_t state)
static int s3c_rtc_resume(struct platform_device *pdev)
#define s3c_rtc_suspend NULL
#define s3c_rtc_resume  NULL
static struct platform_device_id s3c_rtc_driver_ids[] = ;
MODULE_DEVICE_TABLE(platform, s3c_rtc_driver_ids);
static struct platform_driver s3c_rtc_driver = ;
static char __initdata banner[] = "S3C24XX RTC, (c) 2004,2006 Simtec Electronics\n";
static int __init s3c_rtc_init(void)
static void __exit s3c_rtc_exit(void)
module_init(s3c_rtc_init);
module_exit(s3c_rtc_exit);
MODULE_DESCRIPTION("Samsung S3C RTC Driver");
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:s3c2410-rtc");
