#define DRV_NAME "spi_altera"
#define ALTERA_SPI_RXDATA	0
#define ALTERA_SPI_TXDATA	4
#define ALTERA_SPI_STATUS	8
#define ALTERA_SPI_CONTROL	12
#define ALTERA_SPI_SLAVE_SEL	20
#define ALTERA_SPI_STATUS_ROE_MSK	0x8
#define ALTERA_SPI_STATUS_TOE_MSK	0x10
#define ALTERA_SPI_STATUS_TMT_MSK	0x20
#define ALTERA_SPI_STATUS_TRDY_MSK	0x40
#define ALTERA_SPI_STATUS_RRDY_MSK	0x80
#define ALTERA_SPI_STATUS_E_MSK		0x100
#define ALTERA_SPI_CONTROL_IROE_MSK	0x8
#define ALTERA_SPI_CONTROL_ITOE_MSK	0x10
#define ALTERA_SPI_CONTROL_ITRDY_MSK	0x40
#define ALTERA_SPI_CONTROL_IRRDY_MSK	0x80
#define ALTERA_SPI_CONTROL_IE_MSK	0x100
#define ALTERA_SPI_CONTROL_SSO_MSK	0x400
struct altera_spi ;
static inline struct altera_spi *altera_spi_to_hw(struct spi_device *sdev)
static void altera_spi_chipsel(struct spi_device *spi, int value)
static int altera_spi_setupxfer(struct spi_device *spi, struct spi_transfer *t)
static int altera_spi_setup(struct spi_device *spi)
static inline unsigned int hw_txbyte(struct altera_spi *hw, int count)
static int altera_spi_txrx(struct spi_device *spi, struct spi_transfer *t)
static irqreturn_t altera_spi_irq(int irq, void *dev)
static int __devinit altera_spi_probe(struct platform_device *pdev)
static int __devexit altera_spi_remove(struct platform_device *dev)
static const struct of_device_id altera_spi_match[] = ;
MODULE_DEVICE_TABLE(of, altera_spi_match);
#define altera_spi_match NULL
static struct platform_driver altera_spi_driver = ;
static int __init altera_spi_init(void)
module_init(altera_spi_init);
static void __exit altera_spi_exit(void)
module_exit(altera_spi_exit);
MODULE_DESCRIPTION("Altera SPI driver");
MODULE_AUTHOR("Thomas Chou <thomas@wytron.com.tw>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);
