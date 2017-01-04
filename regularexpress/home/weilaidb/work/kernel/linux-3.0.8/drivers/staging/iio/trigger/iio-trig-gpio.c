static LIST_HEAD(iio_gpio_trigger_list);
static DEFINE_MUTEX(iio_gpio_trigger_list_lock);
struct iio_gpio_trigger_info ;
static irqreturn_t iio_gpio_trigger_poll(int irq, void *private)
static int iio_gpio_trigger_probe(struct platform_device *pdev)
static int iio_gpio_trigger_remove(struct platform_device *pdev)
static struct platform_driver iio_gpio_trigger_driver = ;
static int __init iio_gpio_trig_init(void)
module_init(iio_gpio_trig_init);
static void __exit iio_gpio_trig_exit(void)
module_exit(iio_gpio_trig_exit);
MODULE_AUTHOR("Jonathan Cameron <jic23@cam.ac.uk>");
MODULE_DESCRIPTION("Example gpio trigger for the iio subsystem");
MODULE_LICENSE("GPL v2");
