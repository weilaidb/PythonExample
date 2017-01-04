#define NO_IRQ	(-1)
#define M48T59_READ(reg) (pdata->read_byte(dev, pdata->offset + reg))
#define M48T59_WRITE(val, reg) \
(pdata->write_byte(dev, pdata->offset + reg, val))
#define M48T59_SET_BITS(mask, reg)	\
M48T59_WRITE((M48T59_READ(reg) | (mask)), (reg))
#define M48T59_CLEAR_BITS(mask, reg)	\
M48T59_WRITE((M48T59_READ(reg) & ~(mask)), (reg))
struct m48t59_private ;
static void
m48t59_mem_writeb(struct device *dev, u32 ofs, u8 val)
static u8
m48t59_mem_readb(struct device *dev, u32 ofs)
static int m48t59_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int m48t59_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int m48t59_rtc_readalarm(struct device *dev, struct rtc_wkalrm *alrm)
static int m48t59_rtc_setalarm(struct device *dev, struct rtc_wkalrm *alrm)
static int m48t59_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static int m48t59_rtc_proc(struct device *dev, struct seq_file *seq)
static irqreturn_t m48t59_rtc_interrupt(int irq, void *dev_id)
static const struct rtc_class_ops m48t59_rtc_ops = ;
static const struct rtc_class_ops m48t02_rtc_ops = ;
static ssize_t m48t59_nvram_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t size)
static ssize_t m48t59_nvram_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t size)
static struct bin_attribute m48t59_nvram_attr = ;
static int __devinit m48t59_rtc_probe(struct platform_device *pdev)
static int __devexit m48t59_rtc_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:rtc-m48t59");
static struct platform_driver m48t59_rtc_driver = ;
static int __init m48t59_rtc_init(void)
static void __exit m48t59_rtc_exit(void)
module_init(m48t59_rtc_init);
module_exit(m48t59_rtc_exit);
MODULE_AUTHOR("Mark Zhan <rongkai.zhan@windriver.com>");
MODULE_DESCRIPTION("M48T59/M48T02/M48T08 RTC driver");
MODULE_LICENSE("GPL");
