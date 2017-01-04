struct atmel_spi ;
struct atmel_spi_device ;
#define BUFFER_SIZE		PAGE_SIZE
#define INVALID_DMA_ADDRESS	0xffffffff
static bool atmel_spi_is_v2(void)
static void cs_activate(struct atmel_spi *as, struct spi_device *spi)
static void cs_deactivate(struct atmel_spi *as, struct spi_device *spi)
static inline int atmel_spi_xfer_is_last(struct spi_message *msg,
struct spi_transfer *xfer)
static inline int atmel_spi_xfer_can_be_chained(struct spi_transfer *xfer)
static void atmel_spi_next_xfer_data(struct spi_master *master,
struct spi_transfer *xfer,
dma_addr_t *tx_dma,
dma_addr_t *rx_dma,
u32 *plen)
static void atmel_spi_next_xfer(struct spi_master *master,
struct spi_message *msg)
static void atmel_spi_next_message(struct spi_master *master)
static int
atmel_spi_dma_map_xfer(struct atmel_spi *as, struct spi_transfer *xfer)
static void atmel_spi_dma_unmap_xfer(struct spi_master *master,
struct spi_transfer *xfer)
static void
atmel_spi_msg_done(struct spi_master *master, struct atmel_spi *as,
struct spi_message *msg, int status, int stay)
static irqreturn_t
atmel_spi_interrupt(int irq, void *dev_id)
static int atmel_spi_setup(struct spi_device *spi)
static int atmel_spi_transfer(struct spi_device *spi, struct spi_message *msg)
static void atmel_spi_cleanup(struct spi_device *spi)
static int __init atmel_spi_probe(struct platform_device *pdev)
static int __exit atmel_spi_remove(struct platform_device *pdev)
static int atmel_spi_suspend(struct platform_device *pdev, pm_message_t mesg)
static int atmel_spi_resume(struct platform_device *pdev)
#define	atmel_spi_suspend	NULL
#define	atmel_spi_resume	NULL
static struct platform_driver atmel_spi_driver = ;
static int __init atmel_spi_init(void)
module_init(atmel_spi_init);
static void __exit atmel_spi_exit(void)
module_exit(atmel_spi_exit);
MODULE_DESCRIPTION("Atmel AT32/AT91 SPI Controller driver");
MODULE_AUTHOR("Haavard Skinnemoen (Atmel)");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:atmel_spi");
