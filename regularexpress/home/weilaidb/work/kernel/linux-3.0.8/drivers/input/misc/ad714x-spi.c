#define AD714x_SPI_CMD_PREFIX      0xE000
#define AD714x_SPI_READ            BIT(10)
static int ad714x_spi_suspend(struct device *dev)
static int ad714x_spi_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(ad714x_spi_pm, ad714x_spi_suspend, ad714x_spi_resume);
static int ad714x_spi_read(struct device *dev, unsigned short reg,
unsigned short *data)
static int ad714x_spi_write(struct device *dev, unsigned short reg,
unsigned short data)
static int __devinit ad714x_spi_probe(struct spi_device *spi)
static int __devexit ad714x_spi_remove(struct spi_device *spi)
static struct spi_driver ad714x_spi_driver = ;
static __init int ad714x_spi_init(void)
module_init(ad714x_spi_init);
static __exit void ad714x_spi_exit(void)
module_exit(ad714x_spi_exit);
MODULE_DESCRIPTION("Analog Devices AD714X Capacitance Touch Sensor SPI Bus Driver");
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_LICENSE("GPL");
