static struct platform_device *test0 = NULL, *test1 = NULL;
static int test_rtc_read_alarm(struct device *dev,
struct rtc_wkalrm *alrm)
static int test_rtc_set_alarm(struct device *dev,
struct rtc_wkalrm *alrm)
static int test_rtc_read_time(struct device *dev,
struct rtc_time *tm)
static int test_rtc_set_mmss(struct device *dev, unsigned long secs)
static int test_rtc_proc(struct device *dev, struct seq_file *seq)
static int test_rtc_alarm_irq_enable(struct device *dev, unsigned int enable)
static const struct rtc_class_ops test_rtc_ops = ;
static ssize_t test_irq_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t test_irq_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(irq, S_IRUGO | S_IWUSR, test_irq_show, test_irq_store);
static int test_probe(struct platform_device *plat_dev)
static int __devexit test_remove(struct platform_device *plat_dev)
static struct platform_driver test_driver = ;
static int __init test_init(void)
static void __exit test_exit(void)
MODULE_AUTHOR("Alessandro Zummo <a.zummo@towertech.it>");
MODULE_DESCRIPTION("RTC test driver/device");
MODULE_LICENSE("GPL");
module_init(test_init);
module_exit(test_exit);
