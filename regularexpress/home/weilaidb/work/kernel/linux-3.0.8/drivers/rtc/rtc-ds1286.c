#define DRV_VERSION		"1.0"
struct ds1286_priv ;
static inline u8 ds1286_rtc_read(struct ds1286_priv *priv, int reg)
static inline void ds1286_rtc_write(struct ds1286_priv *priv, u8 data, int reg)
static int ds1286_alarm_irq_enable(struct device *dev, unsigned int enabled)
static int ds1286_ioctl(struct device *dev, unsigned int cmd, unsigned long arg)
#define ds1286_ioctl    NULL
static int ds1286_proc(struct device *dev, struct seq_file *seq)
#define ds1286_proc     NULL
static int ds1286_read_time(struct device *dev, struct rtc_time *tm)
static int ds1286_set_time(struct device *dev, struct rtc_time *tm)
static int ds1286_read_alarm(struct device *dev, struct rtc_wkalrm *alm)
static int ds1286_set_alarm(struct device *dev, struct rtc_wkalrm *alm)
static const struct rtc_class_ops ds1286_ops = ;
static int __devinit ds1286_probe(struct platform_device *pdev)
static int __devexit ds1286_remove(struct platform_device *pdev)
static struct platform_driver ds1286_platform_driver = ;
static int __init ds1286_init(void)
static void __exit ds1286_exit(void)
MODULE_AUTHOR("Thomas Bogendoerfer <tsbogend@alpha.franken.de>");
MODULE_DESCRIPTION("DS1286 RTC driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_ALIAS("platform:rtc-ds1286");
module_init(ds1286_init);
module_exit(ds1286_exit);
