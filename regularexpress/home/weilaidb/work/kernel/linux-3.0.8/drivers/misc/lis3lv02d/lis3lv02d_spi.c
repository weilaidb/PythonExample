#define DRV_NAME 	"lis3lv02d_spi"
#define LIS3_SPI_READ	0x80
static int lis3_spi_read(struct lis3lv02d *lis3, int reg, u8 *v)
static int lis3_spi_write(struct lis3lv02d *lis3, int reg, u8 val)
static int lis3_spi_init(struct lis3lv02d *lis3)
static union axis_conversion lis3lv02d_axis_normal =
;
static int __devinit lis302dl_spi_probe(struct spi_device *spi)
static int __devexit lis302dl_spi_remove(struct spi_device *spi)
static int lis3lv02d_spi_suspend(struct device *dev)
static int lis3lv02d_spi_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(lis3lv02d_spi_pm, lis3lv02d_spi_suspend,
lis3lv02d_spi_resume);
static struct spi_driver lis302dl_spi_driver = ;
static int __init lis302dl_init(void)
static void __exit lis302dl_exit(void)
module_init(lis302dl_init);
module_exit(lis302dl_exit);
MODULE_AUTHOR("Daniel Mack <daniel@caiaq.de>");
MODULE_DESCRIPTION("lis3lv02d SPI glue layer");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:" DRV_NAME);
