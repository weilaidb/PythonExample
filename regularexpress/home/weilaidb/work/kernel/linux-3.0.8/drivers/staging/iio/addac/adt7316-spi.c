#define ADT7316_SPI_MAX_FREQ_HZ		5000000
#define ADT7316_SPI_CMD_READ		0x91
#define ADT7316_SPI_CMD_WRITE		0x90
static int adt7316_spi_multi_read(void *client, u8 reg, u8 count, u8 *data)
static int adt7316_spi_multi_write(void *client, u8 reg, u8 count, u8 *data)
static int adt7316_spi_read(void *client, u8 reg, u8 *data)
static int adt7316_spi_write(void *client, u8 reg, u8 val)
static int __devinit adt7316_spi_probe(struct spi_device *spi_dev)
static int __devexit adt7316_spi_remove(struct spi_device *spi_dev)
static const struct spi_device_id adt7316_spi_id[] = ;
MODULE_DEVICE_TABLE(spi, adt7316_spi_id);
static int adt7316_spi_suspend(struct spi_device *spi_dev, pm_message_t message)
static int adt7316_spi_resume(struct spi_device *spi_dev)
# define adt7316_spi_suspend NULL
# define adt7316_spi_resume  NULL
static struct spi_driver adt7316_driver = ;
static __init int adt7316_spi_init(void)
static __exit void adt7316_spi_exit(void)
MODULE_AUTHOR("Sonic Zhang <sonic.zhang@analog.com>");
MODULE_DESCRIPTION("SPI bus driver for Analog Devices ADT7316/7/8 and"
"ADT7516/7/9 digital temperature sensor, ADC and DAC");
MODULE_LICENSE("GPL v2");
module_init(adt7316_spi_init);
module_exit(adt7316_spi_exit);
