#define SPI_NO_RESOURCE		((resource_size_t)-1)
#define SPI_MAX_CHIPSELECT	2
#define CS_DEFAULT	0xFF
#define SPIFMT_PHASE_MASK	BIT(16)
#define SPIFMT_POLARITY_MASK	BIT(17)
#define SPIFMT_DISTIMER_MASK	BIT(18)
#define SPIFMT_SHIFTDIR_MASK	BIT(20)
#define SPIFMT_WAITENA_MASK	BIT(21)
#define SPIFMT_PARITYENA_MASK	BIT(22)
#define SPIFMT_ODD_PARITY_MASK	BIT(23)
#define SPIFMT_WDELAY_MASK	0x3f000000u
#define SPIFMT_WDELAY_SHIFT	24
#define SPIFMT_PRESCALE_SHIFT	8
#define SPIPC0_DIFUN_MASK	BIT(11)
#define SPIPC0_DOFUN_MASK	BIT(10)
#define SPIPC0_CLKFUN_MASK	BIT(9)
#define SPIPC0_SPIENA_MASK	BIT(8)
#define SPIINT_MASKALL		0x0101035F
#define SPIINT_MASKINT		0x0000015F
#define SPI_INTLVL_1		0x000001FF
#define SPI_INTLVL_0		0x00000000
#define SPIDAT1_CSHOLD_MASK	BIT(12)
#define SPIGCR1_CLKMOD_MASK	BIT(1)
#define SPIGCR1_MASTER_MASK     BIT(0)
#define SPIGCR1_POWERDOWN_MASK	BIT(8)
#define SPIGCR1_LOOPBACK_MASK	BIT(16)
#define SPIGCR1_SPIENA_MASK	BIT(24)
#define SPIBUF_TXFULL_MASK	BIT(29)
#define SPIBUF_RXEMPTY_MASK	BIT(31)
#define SPIDELAY_C2TDELAY_SHIFT 24
#define SPIDELAY_C2TDELAY_MASK  (0xFF << SPIDELAY_C2TDELAY_SHIFT)
#define SPIDELAY_T2CDELAY_SHIFT 16
#define SPIDELAY_T2CDELAY_MASK  (0xFF << SPIDELAY_T2CDELAY_SHIFT)
#define SPIDELAY_T2EDELAY_SHIFT 8
#define SPIDELAY_T2EDELAY_MASK  (0xFF << SPIDELAY_T2EDELAY_SHIFT)
#define SPIDELAY_C2EDELAY_SHIFT 0
#define SPIDELAY_C2EDELAY_MASK  0xFF
#define SPIFLG_DLEN_ERR_MASK		BIT(0)
#define SPIFLG_TIMEOUT_MASK		BIT(1)
#define SPIFLG_PARERR_MASK		BIT(2)
#define SPIFLG_DESYNC_MASK		BIT(3)
#define SPIFLG_BITERR_MASK		BIT(4)
#define SPIFLG_OVRRUN_MASK		BIT(6)
#define SPIFLG_BUF_INIT_ACTIVE_MASK	BIT(24)
#define SPIFLG_ERROR_MASK		(SPIFLG_DLEN_ERR_MASK \
| SPIFLG_TIMEOUT_MASK | SPIFLG_PARERR_MASK \
| SPIFLG_DESYNC_MASK | SPIFLG_BITERR_MASK \
| SPIFLG_OVRRUN_MASK)
#define SPIINT_DMA_REQ_EN	BIT(16)
#define SPIGCR0		0x00
#define SPIGCR1		0x04
#define SPIINT		0x08
#define SPILVL		0x0c
#define SPIFLG		0x10
#define SPIPC0		0x14
#define SPIDAT1		0x3c
#define SPIBUF		0x40
#define SPIDELAY	0x48
#define SPIDEF		0x4c
#define SPIFMT0		0x50
struct davinci_spi_dma ;
struct davinci_spi ;
static struct davinci_spi_config davinci_spi_default_cfg;
static void davinci_spi_rx_buf_u8(u32 data, struct davinci_spi *dspi)
static void davinci_spi_rx_buf_u16(u32 data, struct davinci_spi *dspi)
static u32 davinci_spi_tx_buf_u8(struct davinci_spi *dspi)
static u32 davinci_spi_tx_buf_u16(struct davinci_spi *dspi)
static inline void set_io_bits(void __iomem *addr, u32 bits)
static inline void clear_io_bits(void __iomem *addr, u32 bits)
static void davinci_spi_chipselect(struct spi_device *spi, int value)
static inline int davinci_spi_get_prescale(struct davinci_spi *dspi,
u32 max_speed_hz)
static int davinci_spi_setup_transfer(struct spi_device *spi,
struct spi_transfer *t)
static int davinci_spi_setup(struct spi_device *spi)
static int davinci_spi_check_error(struct davinci_spi *dspi, int int_status)
static int davinci_spi_process_events(struct davinci_spi *dspi)
static void davinci_spi_dma_callback(unsigned lch, u16 status, void *data)
static int davinci_spi_bufs(struct spi_device *spi, struct spi_transfer *t)
static irqreturn_t davinci_spi_irq(s32 irq, void *data)
static int davinci_spi_request_dma(struct davinci_spi *dspi)
static int davinci_spi_probe(struct platform_device *pdev)
static int __exit davinci_spi_remove(struct platform_device *pdev)
static struct platform_driver davinci_spi_driver = ;
static int __init davinci_spi_init(void)
module_init(davinci_spi_init);
static void __exit davinci_spi_exit(void)
module_exit(davinci_spi_exit);
MODULE_DESCRIPTION("TI DaVinci SPI Master Controller Driver");
MODULE_LICENSE("GPL");
