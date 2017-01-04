#define MAX_SPI_FREQ_HZ		5000000
#define MAX_FREQ_NO_FIFODELAY	1500000
#define ADXL34X_CMD_MULTB	(1 << 6)
#define ADXL34X_CMD_READ	(1 << 7)
#define ADXL34X_WRITECMD(reg)	(reg & 0x3F)
#define ADXL34X_READCMD(reg)	(ADXL34X_CMD_READ | (reg & 0x3F))
#define ADXL34X_READMB_CMD(reg) (ADXL34X_CMD_READ | ADXL34X_CMD_MULTB \
| (reg & 0x3F))
static int adxl34x_spi_read(struct device *dev, unsigned char reg)
static int adxl34x_spi_write(struct device *dev,
unsigned char reg, unsigned char val)
static int adxl34x_spi_read_block(struct device *dev,
unsigned char reg, int count,
void *buf)
static const struct adxl34x_bus_ops adxl34x_spi_bops = ;
static int __devinit adxl34x_spi_probe(struct spi_device *spi)
static int __devexit adxl34x_spi_remove(struct spi_device *spi)
static int adxl34x_spi_suspend(struct device *dev)
static int adxl34x_spi_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(adxl34x_spi_pm, adxl34x_spi_suspend,
adxl34x_spi_resume);
static struct spi_driver adxl34x_driver = ;
static int __init adxl34x_spi_init(void)
module_init(adxl34x_spi_init);
static void __exit adxl34x_spi_exit(void)
module_exit(adxl34x_spi_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("ADXL345/346 Three-Axis Digital Accelerometer SPI Bus Driver");
MODULE_LICENSE("GPL");
