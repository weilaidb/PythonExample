#define EP93XX_RTC_DATA			0x000
#define EP93XX_RTC_MATCH		0x004
#define EP93XX_RTC_STATUS		0x008
#define  EP93XX_RTC_STATUS_INTR		 (1<<0)
#define EP93XX_RTC_LOAD			0x00C
#define EP93XX_RTC_CONTROL		0x010
#define  EP93XX_RTC_CONTROL_MIE		 (1<<0)
#define EP93XX_RTC_SWCOMP		0x108
#define  EP93XX_RTC_SWCOMP_DEL_MASK	 0x001f0000
#define  EP93XX_RTC_SWCOMP_DEL_SHIFT	 16
#define  EP93XX_RTC_SWCOMP_INT_MASK	 0x0000ffff
#define  EP93XX_RTC_SWCOMP_INT_SHIFT	 0
#define DRV_VERSION "0.3"
struct ep93xx_rtc ;
static int ep93xx_rtc_get_swcomp(struct device *dev, unsigned short *preload,
unsigned short *delete)
static int ep93xx_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int ep93xx_rtc_set_mmss(struct device *dev, unsigned long secs)
static int ep93xx_rtc_proc(struct device *dev, struct seq_file *seq)
static const struct rtc_class_ops ep93xx_rtc_ops = ;
static ssize_t ep93xx_rtc_show_comp_preload(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(comp_preload, S_IRUGO, ep93xx_rtc_show_comp_preload, NULL);
static ssize_t ep93xx_rtc_show_comp_delete(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(comp_delete, S_IRUGO, ep93xx_rtc_show_comp_delete, NULL);
static struct attribute *ep93xx_rtc_attrs[] = ;
static const struct attribute_group ep93xx_rtc_sysfs_files = ;
static int __init ep93xx_rtc_probe(struct platform_device *pdev)
static int __exit ep93xx_rtc_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:ep93xx-rtc");
static struct platform_driver ep93xx_rtc_driver = ;
static int __init ep93xx_rtc_init(void)
static void __exit ep93xx_rtc_exit(void)
MODULE_AUTHOR("Alessandro Zummo <a.zummo@towertech.it>");
MODULE_DESCRIPTION("EP93XX RTC driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_init(ep93xx_rtc_init);
module_exit(ep93xx_rtc_exit);
