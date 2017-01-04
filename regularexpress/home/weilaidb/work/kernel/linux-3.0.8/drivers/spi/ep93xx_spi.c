#define SSPCR0			0x0000
#define SSPCR0_MODE_SHIFT	6
#define SSPCR0_SCR_SHIFT	8
#define SSPCR1			0x0004
#define SSPCR1_RIE		BIT(0)
#define SSPCR1_TIE		BIT(1)
#define SSPCR1_RORIE		BIT(2)
#define SSPCR1_LBM		BIT(3)
#define SSPCR1_SSE		BIT(4)
#define SSPCR1_MS		BIT(5)
#define SSPCR1_SOD		BIT(6)
#define SSPDR			0x0008
#define SSPSR			0x000c
#define SSPSR_TFE		BIT(0)
#define SSPSR_TNF		BIT(1)
#define SSPSR_RNE		BIT(2)
#define SSPSR_RFF		BIT(3)
#define SSPSR_BSY		BIT(4)
#define SSPCPSR			0x0010
#define SSPIIR			0x0014
#define SSPIIR_RIS		BIT(0)
#define SSPIIR_TIS		BIT(1)
#define SSPIIR_RORIS		BIT(2)
#define SSPICR			SSPIIR
#define SPI_TIMEOUT		5
#define SPI_FIFO_SIZE		8
struct ep93xx_spi ;
struct ep93xx_spi_chip ;
#define bits_per_word_to_dss(bpw)	((bpw) - 1)
static inline void
ep93xx_spi_write_u8(const struct ep93xx_spi *espi, u16 reg, u8 value)
static inline u8
ep93xx_spi_read_u8(const struct ep93xx_spi *spi, u16 reg)
static inline void
ep93xx_spi_write_u16(const struct ep93xx_spi *espi, u16 reg, u16 value)
static inline u16
ep93xx_spi_read_u16(const struct ep93xx_spi *spi, u16 reg)
static int ep93xx_spi_enable(const struct ep93xx_spi *espi)
static void ep93xx_spi_disable(const struct ep93xx_spi *espi)
static void ep93xx_spi_enable_interrupts(const struct ep93xx_spi *espi)
static void ep93xx_spi_disable_interrupts(const struct ep93xx_spi *espi)
static int ep93xx_spi_calc_divisors(const struct ep93xx_spi *espi,
struct ep93xx_spi_chip *chip,
unsigned long rate)
static void ep93xx_spi_cs_control(struct spi_device *spi, bool control)
static int ep93xx_spi_setup(struct spi_device *spi)
static int ep93xx_spi_transfer(struct spi_device *spi, struct spi_message *msg)
static void ep93xx_spi_cleanup(struct spi_device *spi)
static void ep93xx_spi_chip_setup(const struct ep93xx_spi *espi,
const struct ep93xx_spi_chip *chip)
static inline int bits_per_word(const struct ep93xx_spi *espi)
static void ep93xx_do_write(struct ep93xx_spi *espi, struct spi_transfer *t)
static void ep93xx_do_read(struct ep93xx_spi *espi, struct spi_transfer *t)
static int ep93xx_spi_read_write(struct ep93xx_spi *espi)
static void ep93xx_spi_process_transfer(struct ep93xx_spi *espi,
struct spi_message *msg,
struct spi_transfer *t)
static void ep93xx_spi_process_message(struct ep93xx_spi *espi,
struct spi_message *msg)
#define work_to_espi(work) (container_of((work), struct ep93xx_spi, msg_work))
static void ep93xx_spi_work(struct work_struct *work)
static irqreturn_t ep93xx_spi_interrupt(int irq, void *dev_id)
static int __init ep93xx_spi_probe(struct platform_device *pdev)
static int __exit ep93xx_spi_remove(struct platform_device *pdev)
static struct platform_driver ep93xx_spi_driver = ;
static int __init ep93xx_spi_init(void)
module_init(ep93xx_spi_init);
static void __exit ep93xx_spi_exit(void)
module_exit(ep93xx_spi_exit);
MODULE_DESCRIPTION("EP93xx SPI Controller driver");
MODULE_AUTHOR("Mika Westerberg <mika.westerberg@iki.fi>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:ep93xx-spi");
