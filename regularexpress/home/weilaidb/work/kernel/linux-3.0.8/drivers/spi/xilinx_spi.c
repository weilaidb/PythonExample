#define XILINX_SPI_NAME "xilinx_spi"
#define XSPI_CR_OFFSET		0x60
#define XSPI_CR_ENABLE		0x02
#define XSPI_CR_MASTER_MODE	0x04
#define XSPI_CR_CPOL		0x08
#define XSPI_CR_CPHA		0x10
#define XSPI_CR_MODE_MASK	(XSPI_CR_CPHA | XSPI_CR_CPOL)
#define XSPI_CR_TXFIFO_RESET	0x20
#define XSPI_CR_RXFIFO_RESET	0x40
#define XSPI_CR_MANUAL_SSELECT	0x80
#define XSPI_CR_TRANS_INHIBIT	0x100
#define XSPI_CR_LSB_FIRST	0x200
#define XSPI_SR_OFFSET		0x64
#define XSPI_SR_RX_EMPTY_MASK	0x01
#define XSPI_SR_RX_FULL_MASK	0x02
#define XSPI_SR_TX_EMPTY_MASK	0x04
#define XSPI_SR_TX_FULL_MASK	0x08
#define XSPI_SR_MODE_FAULT_MASK	0x10
#define XSPI_TXD_OFFSET		0x68
#define XSPI_RXD_OFFSET		0x6c
#define XSPI_SSR_OFFSET		0x70
#define XIPIF_V123B_DGIER_OFFSET	0x1c
#define XIPIF_V123B_GINTR_ENABLE	0x80000000
#define XIPIF_V123B_IISR_OFFSET		0x20
#define XIPIF_V123B_IIER_OFFSET		0x28
#define XSPI_INTR_MODE_FAULT		0x01
#define XSPI_INTR_SLAVE_MODE_FAULT	0x02
#define XSPI_INTR_TX_EMPTY		0x04
#define XSPI_INTR_TX_UNDERRUN		0x08
#define XSPI_INTR_RX_FULL		0x10
#define XSPI_INTR_RX_OVERRUN		0x20
#define XSPI_INTR_TX_HALF_EMPTY		0x40
#define XIPIF_V123B_RESETR_OFFSET	0x40
#define XIPIF_V123B_RESET_MASK		0x0a
struct xilinx_spi ;
static void xspi_write32(u32 val, void __iomem *addr)
static unsigned int xspi_read32(void __iomem *addr)
static void xspi_write32_be(u32 val, void __iomem *addr)
static unsigned int xspi_read32_be(void __iomem *addr)
static void xspi_tx8(struct xilinx_spi *xspi)
static void xspi_tx16(struct xilinx_spi *xspi)
static void xspi_tx32(struct xilinx_spi *xspi)
static void xspi_rx8(struct xilinx_spi *xspi)
static void xspi_rx16(struct xilinx_spi *xspi)
static void xspi_rx32(struct xilinx_spi *xspi)
static void xspi_init_hw(struct xilinx_spi *xspi)
static void xilinx_spi_chipselect(struct spi_device *spi, int is_on)
static int xilinx_spi_setup_transfer(struct spi_device *spi,
struct spi_transfer *t)
static int xilinx_spi_setup(struct spi_device *spi)
static void xilinx_spi_fill_tx_fifo(struct xilinx_spi *xspi)
static int xilinx_spi_txrx_bufs(struct spi_device *spi, struct spi_transfer *t)
static irqreturn_t xilinx_spi_irq(int irq, void *dev_id)
static const struct of_device_id xilinx_spi_of_match[] = ;
MODULE_DEVICE_TABLE(of, xilinx_spi_of_match);
struct spi_master *xilinx_spi_init(struct device *dev, struct resource *mem,
u32 irq, s16 bus_num, int num_cs, int little_endian, int bits_per_word)
EXPORT_SYMBOL(xilinx_spi_init);
void xilinx_spi_deinit(struct spi_master *master)
EXPORT_SYMBOL(xilinx_spi_deinit);
static int __devinit xilinx_spi_probe(struct platform_device *dev)
static int __devexit xilinx_spi_remove(struct platform_device *dev)
MODULE_ALIAS("platform:" XILINX_SPI_NAME);
static struct platform_driver xilinx_spi_driver = ;
static int __init xilinx_spi_pltfm_init(void)
module_init(xilinx_spi_pltfm_init);
static void __exit xilinx_spi_pltfm_exit(void)
module_exit(xilinx_spi_pltfm_exit);
MODULE_AUTHOR("MontaVista Software, Inc. <source@mvista.com>");
MODULE_DESCRIPTION("Xilinx SPI driver");
MODULE_LICENSE("GPL");
