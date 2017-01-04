#define AD7879_DEVID		0x7A
#define MAX_SPI_FREQ_HZ      5000000
#define AD7879_CMD_MAGIC     0xE000
#define AD7879_CMD_READ      (1 << 10)
#define AD7879_CMD(reg)      (AD7879_CMD_MAGIC | ((reg) & 0xF))
#define AD7879_WRITECMD(reg) (AD7879_CMD(reg))
#define AD7879_READCMD(reg)  (AD7879_CMD(reg) | AD7879_CMD_READ)
static int ad7879_spi_suspend(struct device *dev)
static int ad7879_spi_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(ad7879_spi_pm, ad7879_spi_suspend, ad7879_spi_resume);
static int ad7879_spi_xfer(struct spi_device *spi,
u16 cmd, u8 count, u16 *tx_buf, u16 *rx_buf)
static int ad7879_spi_multi_read(struct device *dev,
u8 first_reg, u8 count, u16 *buf)
static int ad7879_spi_read(struct device *dev, u8 reg)
static int ad7879_spi_write(struct device *dev, u8 reg, u16 val)
static const struct ad7879_bus_ops ad7879_spi_bus_ops = ;
static int __devinit ad7879_spi_probe(struct spi_device *spi)
static int __devexit ad7879_spi_remove(struct spi_device *spi)
static struct spi_driver ad7879_spi_driver = ;
static int __init ad7879_spi_init(void)
module_init(ad7879_spi_init);
static void __exit ad7879_spi_exit(void)
module_exit(ad7879_spi_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("AD7879(-1) touchscreen SPI bus driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:ad7879");
