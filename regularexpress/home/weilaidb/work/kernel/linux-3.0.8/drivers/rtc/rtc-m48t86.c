#define M48T86_REG_SEC		0x00
#define M48T86_REG_SECALRM	0x01
#define M48T86_REG_MIN		0x02
#define M48T86_REG_MINALRM	0x03
#define M48T86_REG_HOUR		0x04
#define M48T86_REG_HOURALRM	0x05
#define M48T86_REG_DOW		0x06
#define M48T86_REG_DOM		0x07
#define M48T86_REG_MONTH	0x08
#define M48T86_REG_YEAR		0x09
#define M48T86_REG_A		0x0A
#define M48T86_REG_B		0x0B
#define M48T86_REG_C		0x0C
#define M48T86_REG_D		0x0D
#define M48T86_REG_B_H24	(1 << 1)
#define M48T86_REG_B_DM		(1 << 2)
#define M48T86_REG_B_SET	(1 << 7)
#define M48T86_REG_D_VRT	(1 << 7)
#define DRV_VERSION "0.1"
static int m48t86_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int m48t86_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int m48t86_rtc_proc(struct device *dev, struct seq_file *seq)
static const struct rtc_class_ops m48t86_rtc_ops = ;
static int __devinit m48t86_rtc_probe(struct platform_device *dev)
static int __devexit m48t86_rtc_remove(struct platform_device *dev)
static struct platform_driver m48t86_rtc_platform_driver = ;
static int __init m48t86_rtc_init(void)
static void __exit m48t86_rtc_exit(void)
MODULE_AUTHOR("Alessandro Zummo <a.zummo@towertech.it>");
MODULE_DESCRIPTION("M48T86 RTC driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_ALIAS("platform:rtc-m48t86");
module_init(m48t86_rtc_init);
module_exit(m48t86_rtc_exit);
