static int max7301_spi_write(struct device *dev, unsigned int reg,
unsigned int val)
static int max7301_spi_read(struct device *dev, unsigned int reg)
static int __devinit max7301_probe(struct spi_device *spi)
static int __devexit max7301_remove(struct spi_device *spi)
static const struct spi_device_id max7301_id[] = ;
MODULE_DEVICE_TABLE(spi, max7301_id);
static struct spi_driver max7301_driver = ;
static int __init max7301_init(void)
subsys_initcall(max7301_init);
static void __exit max7301_exit(void)
module_exit(max7301_exit);
MODULE_AUTHOR("Juergen Beisert, Wolfram Sang");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("MAX7301 GPIO-Expander");
