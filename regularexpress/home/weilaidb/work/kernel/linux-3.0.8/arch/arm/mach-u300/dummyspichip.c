struct dummy ;
#define DMA_TEST_SIZE 2048
static ssize_t dummy_looptest(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(looptest, S_IRUGO, dummy_looptest, NULL);
static int __devinit pl022_dummy_probe(struct spi_device *spi)
static int __devexit pl022_dummy_remove(struct spi_device *spi)
static struct spi_driver pl022_dummy_driver = ;
static int __init pl022_init_dummy(void)
static void __exit pl022_exit_dummy(void)
module_init(pl022_init_dummy);
module_exit(pl022_exit_dummy);
MODULE_AUTHOR("Linus Walleij <linus.walleij@stericsson.com>");
MODULE_DESCRIPTION("PL022 SSP/SPI DUMMY Linux driver");
MODULE_LICENSE("GPL");
