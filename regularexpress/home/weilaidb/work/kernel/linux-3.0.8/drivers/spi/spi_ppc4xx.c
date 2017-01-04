#define SPI_PPC4XX_MODE_SCP	(0x80 >> 3)
#define SPI_PPC4XX_MODE_SPE	(0x80 >> 4)
#define SPI_PPC4XX_MODE_RD	(0x80 >> 5)
#define SPI_PPC4XX_MODE_CI	(0x80 >> 6)
#define SPI_PPC4XX_MODE_IL	(0x80 >> 7)
#define SPI_PPC4XX_CR_STR	(0x80 >> 7)
#define SPI_PPC4XX_SR_BSY	(0x80 >> 6)
#define SPI_PPC4XX_SR_RBR	(0x80 >> 7)
#define SPI_CLK_MODE0	(SPI_PPC4XX_MODE_SCP | 0)
#define SPI_CLK_MODE1	(0 | 0)
#define SPI_CLK_MODE2	(SPI_PPC4XX_MODE_SCP | SPI_PPC4XX_MODE_CI)
#define SPI_CLK_MODE3	(0 | SPI_PPC4XX_MODE_CI)
#define DRIVER_NAME	"spi_ppc4xx_of"
struct spi_ppc4xx_regs ;
struct ppc4xx_spi ;
struct spi_ppc4xx_cs ;
static int spi_ppc4xx_txrx(struct spi_device *spi, struct spi_transfer *t)
static int spi_ppc4xx_setupxfer(struct spi_device *spi, struct spi_transfer *t)
static int spi_ppc4xx_setup(struct spi_device *spi)
static void spi_ppc4xx_chipsel(struct spi_device *spi, int value)
static irqreturn_t spi_ppc4xx_int(int irq, void *dev_id)
static void spi_ppc4xx_cleanup(struct spi_device *spi)
static void spi_ppc4xx_enable(struct ppc4xx_spi *hw)
static void free_gpios(struct ppc4xx_spi *hw)
static int __init spi_ppc4xx_of_probe(struct platform_device *op)
static int __exit spi_ppc4xx_of_remove(struct platform_device *op)
static const struct of_device_id spi_ppc4xx_of_match[] = ;
MODULE_DEVICE_TABLE(of, spi_ppc4xx_of_match);
static struct platform_driver spi_ppc4xx_of_driver = ;
static int __init spi_ppc4xx_init(void)
module_init(spi_ppc4xx_init);
static void __exit spi_ppc4xx_exit(void)
module_exit(spi_ppc4xx_exit);
MODULE_AUTHOR("Gary Jennejohn & Stefan Roese");
MODULE_DESCRIPTION("Simple PPC4xx SPI Driver");
MODULE_LICENSE("GPL");
