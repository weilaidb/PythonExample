#define DRV_VERSION		"1.0"
struct m48t35_rtc ;
#define M48T35_RTC_SET		0x80
#define M48T35_RTC_READ		0x40
struct m48t35_priv ;
static int m48t35_read_time(struct device *dev, struct rtc_time *tm)
static int m48t35_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops m48t35_ops = ;
static int __devinit m48t35_probe(struct platform_device *pdev)
static int __devexit m48t35_remove(struct platform_device *pdev)
static struct platform_driver m48t35_platform_driver = ;
static int __init m48t35_init(void)
static void __exit m48t35_exit(void)
MODULE_AUTHOR("Thomas Bogendoerfer <tsbogend@alpha.franken.de>");
MODULE_DESCRIPTION("M48T35 RTC driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_ALIAS("platform:rtc-m48t35");
module_init(m48t35_init);
module_exit(m48t35_exit);
