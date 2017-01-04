static unsigned usedma = 1;
module_param(usedma, uint, 0644);
#define AU1550_SPI_DBDMA_DESCRIPTORS 1
#define AU1550_SPI_DMA_RXTMP_MINSIZE 2048U
struct au1550_spi ;
static dbdev_tab_t au1550_spi_mem_dbdev =
;
static int ddma_memid;
static void au1550_spi_bits_handlers_set(struct au1550_spi *hw, int bpw);
static u32 au1550_spi_baudcfg(struct au1550_spi *hw, unsigned speed_hz)
static inline void au1550_spi_mask_ack_all(struct au1550_spi *hw)
static void au1550_spi_reset_fifos(struct au1550_spi *hw)
static void au1550_spi_chipsel(struct spi_device *spi, int value)
static int au1550_spi_setupxfer(struct spi_device *spi, struct spi_transfer *t)
static int au1550_spi_setup(struct spi_device *spi)
static int au1550_spi_dma_rxtmp_alloc(struct au1550_spi *hw, unsigned size)
static void au1550_spi_dma_rxtmp_free(struct au1550_spi *hw)
static int au1550_spi_dma_txrxb(struct spi_device *spi, struct spi_transfer *t)
static irqreturn_t au1550_spi_dma_irq_callback(struct au1550_spi *hw)
#define AU1550_SPI_RX_WORD(size, mask)					\
static void au1550_spi_rx_word_##size(struct au1550_spi *hw)		\
#define AU1550_SPI_TX_WORD(size, mask)					\
static void au1550_spi_tx_word_##size(struct au1550_spi *hw)		\
AU1550_SPI_RX_WORD(8,0xff)
AU1550_SPI_RX_WORD(16,0xffff)
AU1550_SPI_RX_WORD(32,0xffffff)
AU1550_SPI_TX_WORD(8,0xff)
AU1550_SPI_TX_WORD(16,0xffff)
AU1550_SPI_TX_WORD(32,0xffffff)
static int au1550_spi_pio_txrxb(struct spi_device *spi, struct spi_transfer *t)
static irqreturn_t au1550_spi_pio_irq_callback(struct au1550_spi *hw)
static int au1550_spi_txrx_bufs(struct spi_device *spi, struct spi_transfer *t)
static irqreturn_t au1550_spi_irq(int irq, void *dev)
static void au1550_spi_bits_handlers_set(struct au1550_spi *hw, int bpw)
static void __init au1550_spi_setup_psc_as_spi(struct au1550_spi *hw)
static int __init au1550_spi_probe(struct platform_device *pdev)
static int __exit au1550_spi_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:au1550-spi");
static struct platform_driver au1550_spi_drv = ;
static int __init au1550_spi_init(void)
module_init(au1550_spi_init);
static void __exit au1550_spi_exit(void)
module_exit(au1550_spi_exit);
MODULE_DESCRIPTION("Au1550 PSC SPI Driver");
MODULE_AUTHOR("Jan Nikitenko <jan.nikitenko@gmail.com>");
MODULE_LICENSE("GPL");
