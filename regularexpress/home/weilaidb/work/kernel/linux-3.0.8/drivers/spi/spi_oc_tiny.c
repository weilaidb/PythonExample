#define DRV_NAME "spi_oc_tiny"
#define TINY_SPI_RXDATA 0
#define TINY_SPI_TXDATA 4
#define TINY_SPI_STATUS 8
#define TINY_SPI_CONTROL 12
#define TINY_SPI_BAUD 16
#define TINY_SPI_STATUS_TXE 0x1
#define TINY_SPI_STATUS_TXR 0x2
struct tiny_spi ;
static inline struct tiny_spi *tiny_spi_to_hw(struct spi_device *sdev)
static unsigned int tiny_spi_baud(struct spi_device *spi, unsigned int hz)
static void tiny_spi_chipselect(struct spi_device *spi, int is_active)
static int tiny_spi_setup_transfer(struct spi_device *spi,
struct spi_transfer *t)
static int tiny_spi_setup(struct spi_device *spi)
static inline void tiny_spi_wait_txr(struct tiny_spi *hw)
static inline void tiny_spi_wait_txe(struct tiny_spi *hw)
static int tiny_spi_txrx_bufs(struct spi_device *spi, struct spi_transfer *t)
static irqreturn_t tiny_spi_irq(int irq, void *dev)
static int __devinit tiny_spi_of_probe(struct platform_device *pdev)
static int __devinit tiny_spi_of_probe(struct platform_device *pdev)
static int __devinit tiny_spi_probe(struct platform_device *pdev)
static int __devexit tiny_spi_remove(struct platform_device *pdev)
static const struct of_device_id tiny_spi_match[] = ;
MODULE_DEVICE_TABLE(of, tiny_spi_match);
#define tiny_spi_match NULL
static struct platform_driver tiny_spi_driver = ;
static int __init tiny_spi_init(void)
module_init(tiny_spi_init);
static void __exit tiny_spi_exit(void)
module_exit(tiny_spi_exit);
MODULE_DESCRIPTION("OpenCores tiny SPI driver");
MODULE_AUTHOR("Thomas Chou <thomas@wytron.com.tw>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);
