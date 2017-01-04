struct bfin_timer ;
static struct bfin_timer iio_bfin_timer_code[MAX_BLACKFIN_GPTIMERS] = ;
struct bfin_tmr_state ;
static ssize_t iio_bfin_tmr_frequency_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t iio_bfin_tmr_frequency_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(frequency, S_IRUGO | S_IWUSR, iio_bfin_tmr_frequency_show,
iio_bfin_tmr_frequency_store);
static struct attribute *iio_bfin_tmr_trigger_attrs[] = ;
static const struct attribute_group iio_bfin_tmr_trigger_attr_group = ;
static const struct attribute_group *iio_bfin_tmr_trigger_attr_groups[] = ;
static irqreturn_t iio_bfin_tmr_trigger_isr(int irq, void *devid)
static int iio_bfin_tmr_get_number(int irq)
static int __devinit iio_bfin_tmr_trigger_probe(struct platform_device *pdev)
static int __devexit iio_bfin_tmr_trigger_remove(struct platform_device *pdev)
static struct platform_driver iio_bfin_tmr_trigger_driver = ;
static int __init iio_bfin_tmr_trig_init(void)
module_init(iio_bfin_tmr_trig_init);
static void __exit iio_bfin_tmr_trig_exit(void)
module_exit(iio_bfin_tmr_trig_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Blackfin system timer based trigger for the iio subsystem");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:iio-trig-bfin-timer");
