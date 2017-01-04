struct tx4939rtc_plat_data ;
static struct tx4939rtc_plat_data *get_tx4939rtc_plat_data(struct device *dev)
static int tx4939_rtc_cmd(struct tx4939_rtc_reg __iomem *rtcreg, int cmd)
static int tx4939_rtc_set_mmss(struct device *dev, unsigned long secs)
static int tx4939_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int tx4939_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int tx4939_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int tx4939_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static irqreturn_t tx4939_rtc_interrupt(int irq, void *dev_id)
static const struct rtc_class_ops tx4939_rtc_ops = ;
static ssize_t tx4939_rtc_nvram_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t size)
static ssize_t tx4939_rtc_nvram_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t size)
static struct bin_attribute tx4939_rtc_nvram_attr = ;
static int __init tx4939_rtc_probe(struct platform_device *pdev)
static int __exit tx4939_rtc_remove(struct platform_device *pdev)
static struct platform_driver tx4939_rtc_driver = ;
static int __init tx4939rtc_init(void)
static void __exit tx4939rtc_exit(void)
module_init(tx4939rtc_init);
module_exit(tx4939rtc_exit);
MODULE_AUTHOR("Atsushi Nemoto <anemo@mba.ocn.ne.jp>");
MODULE_DESCRIPTION("TX4939 internal RTC driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:tx4939rtc");
