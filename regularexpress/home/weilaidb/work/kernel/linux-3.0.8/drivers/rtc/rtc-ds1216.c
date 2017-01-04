#define DRV_VERSION "0.2"
struct ds1216_regs ;
#define DS1216_HOUR_1224	(1 << 7)
#define DS1216_HOUR_AMPM	(1 << 5)
struct ds1216_priv ;
static const u8 magic[] = ;
static void ds1216_read(u8 __iomem *ioaddr, u8 *buf)
static void ds1216_write(u8 __iomem *ioaddr, const u8 *buf)
static void ds1216_switch_ds_to_clock(u8 __iomem *ioaddr)
static int ds1216_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int ds1216_rtc_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops ds1216_rtc_ops = ;
static int __init ds1216_rtc_probe(struct platform_device *pdev)
static int __exit ds1216_rtc_remove(struct platform_device *pdev)
static struct platform_driver ds1216_rtc_platform_driver = ;
static int __init ds1216_rtc_init(void)
static void __exit ds1216_rtc_exit(void)
MODULE_AUTHOR("Thomas Bogendoerfer <tsbogend@alpha.franken.de>");
MODULE_DESCRIPTION("DS1216 RTC driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_ALIAS("platform:rtc-ds1216");
module_init(ds1216_rtc_init);
module_exit(ds1216_rtc_exit);
