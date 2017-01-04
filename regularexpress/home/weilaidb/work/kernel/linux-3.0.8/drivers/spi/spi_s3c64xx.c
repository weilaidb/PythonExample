#define S3C64XX_SPI_CH_CFG		0x00
#define S3C64XX_SPI_CLK_CFG		0x04
#define S3C64XX_SPI_MODE_CFG	0x08
#define S3C64XX_SPI_SLAVE_SEL	0x0C
#define S3C64XX_SPI_INT_EN		0x10
#define S3C64XX_SPI_STATUS		0x14
#define S3C64XX_SPI_TX_DATA		0x18
#define S3C64XX_SPI_RX_DATA		0x1C
#define S3C64XX_SPI_PACKET_CNT	0x20
#define S3C64XX_SPI_PENDING_CLR	0x24
#define S3C64XX_SPI_SWAP_CFG	0x28
#define S3C64XX_SPI_FB_CLK		0x2C
#define S3C64XX_SPI_CH_HS_EN		(1<<6)
#define S3C64XX_SPI_CH_SW_RST		(1<<5)
#define S3C64XX_SPI_CH_SLAVE		(1<<4)
#define S3C64XX_SPI_CPOL_L		(1<<3)
#define S3C64XX_SPI_CPHA_B		(1<<2)
#define S3C64XX_SPI_CH_RXCH_ON		(1<<1)
#define S3C64XX_SPI_CH_TXCH_ON		(1<<0)
#define S3C64XX_SPI_CLKSEL_SRCMSK	(3<<9)
#define S3C64XX_SPI_CLKSEL_SRCSHFT	9
#define S3C64XX_SPI_ENCLK_ENABLE	(1<<8)
#define S3C64XX_SPI_PSR_MASK 		0xff
#define S3C64XX_SPI_MODE_CH_TSZ_BYTE		(0<<29)
#define S3C64XX_SPI_MODE_CH_TSZ_HALFWORD	(1<<29)
#define S3C64XX_SPI_MODE_CH_TSZ_WORD		(2<<29)
#define S3C64XX_SPI_MODE_CH_TSZ_MASK		(3<<29)
#define S3C64XX_SPI_MODE_BUS_TSZ_BYTE		(0<<17)
#define S3C64XX_SPI_MODE_BUS_TSZ_HALFWORD	(1<<17)
#define S3C64XX_SPI_MODE_BUS_TSZ_WORD		(2<<17)
#define S3C64XX_SPI_MODE_BUS_TSZ_MASK		(3<<17)
#define S3C64XX_SPI_MODE_RXDMA_ON		(1<<2)
#define S3C64XX_SPI_MODE_TXDMA_ON		(1<<1)
#define S3C64XX_SPI_MODE_4BURST			(1<<0)
#define S3C64XX_SPI_SLAVE_AUTO			(1<<1)
#define S3C64XX_SPI_SLAVE_SIG_INACT		(1<<0)
#define S3C64XX_SPI_ACT(c) writel(0, (c)->regs + S3C64XX_SPI_SLAVE_SEL)
#define S3C64XX_SPI_DEACT(c) writel(S3C64XX_SPI_SLAVE_SIG_INACT, \
(c)->regs + S3C64XX_SPI_SLAVE_SEL)
#define S3C64XX_SPI_INT_TRAILING_EN		(1<<6)
#define S3C64XX_SPI_INT_RX_OVERRUN_EN		(1<<5)
#define S3C64XX_SPI_INT_RX_UNDERRUN_EN		(1<<4)
#define S3C64XX_SPI_INT_TX_OVERRUN_EN		(1<<3)
#define S3C64XX_SPI_INT_TX_UNDERRUN_EN		(1<<2)
#define S3C64XX_SPI_INT_RX_FIFORDY_EN		(1<<1)
#define S3C64XX_SPI_INT_TX_FIFORDY_EN		(1<<0)
#define S3C64XX_SPI_ST_RX_OVERRUN_ERR		(1<<5)
#define S3C64XX_SPI_ST_RX_UNDERRUN_ERR	(1<<4)
#define S3C64XX_SPI_ST_TX_OVERRUN_ERR		(1<<3)
#define S3C64XX_SPI_ST_TX_UNDERRUN_ERR	(1<<2)
#define S3C64XX_SPI_ST_RX_FIFORDY		(1<<1)
#define S3C64XX_SPI_ST_TX_FIFORDY		(1<<0)
#define S3C64XX_SPI_PACKET_CNT_EN		(1<<16)
#define S3C64XX_SPI_PND_TX_UNDERRUN_CLR		(1<<4)
#define S3C64XX_SPI_PND_TX_OVERRUN_CLR		(1<<3)
#define S3C64XX_SPI_PND_RX_UNDERRUN_CLR		(1<<2)
#define S3C64XX_SPI_PND_RX_OVERRUN_CLR		(1<<1)
#define S3C64XX_SPI_PND_TRAILING_CLR		(1<<0)
#define S3C64XX_SPI_SWAP_RX_HALF_WORD		(1<<7)
#define S3C64XX_SPI_SWAP_RX_BYTE		(1<<6)
#define S3C64XX_SPI_SWAP_RX_BIT			(1<<5)
#define S3C64XX_SPI_SWAP_RX_EN			(1<<4)
#define S3C64XX_SPI_SWAP_TX_HALF_WORD		(1<<3)
#define S3C64XX_SPI_SWAP_TX_BYTE		(1<<2)
#define S3C64XX_SPI_SWAP_TX_BIT			(1<<1)
#define S3C64XX_SPI_SWAP_TX_EN			(1<<0)
#define S3C64XX_SPI_FBCLK_MSK		(3<<0)
#define S3C64XX_SPI_ST_TRLCNTZ(v, i) ((((v) >> (i)->rx_lvl_offset) & \
(((i)->fifo_lvl_mask + 1))) \
? 1 : 0)
#define S3C64XX_SPI_ST_TX_DONE(v, i) (((v) & (1 << (i)->tx_st_done)) ? 1 : 0)
#define TX_FIFO_LVL(v, i) (((v) >> 6) & (i)->fifo_lvl_mask)
#define RX_FIFO_LVL(v, i) (((v) >> (i)->rx_lvl_offset) & (i)->fifo_lvl_mask)
#define S3C64XX_SPI_MAX_TRAILCNT	0x3ff
#define S3C64XX_SPI_TRAILCNT_OFF	19
#define S3C64XX_SPI_TRAILCNT		S3C64XX_SPI_MAX_TRAILCNT
#define msecs_to_loops(t) (loops_per_jiffy / 1000 * HZ * t)
#define SUSPND    (1<<0)
#define SPIBUSY   (1<<1)
#define RXBUSY    (1<<2)
#define TXBUSY    (1<<3)
struct s3c64xx_spi_driver_data ;
static struct s3c2410_dma_client s3c64xx_spi_dma_client = ;
static void flush_fifo(struct s3c64xx_spi_driver_data *sdd)
static void enable_datapath(struct s3c64xx_spi_driver_data *sdd,
struct spi_device *spi,
struct spi_transfer *xfer, int dma_mode)
static inline void enable_cs(struct s3c64xx_spi_driver_data *sdd,
struct spi_device *spi)
static int wait_for_xfer(struct s3c64xx_spi_driver_data *sdd,
struct spi_transfer *xfer, int dma_mode)
static inline void disable_cs(struct s3c64xx_spi_driver_data *sdd,
struct spi_device *spi)
static void s3c64xx_spi_config(struct s3c64xx_spi_driver_data *sdd)
static void s3c64xx_spi_dma_rxcb(struct s3c2410_dma_chan *chan, void *buf_id,
int size, enum s3c2410_dma_buffresult res)
static void s3c64xx_spi_dma_txcb(struct s3c2410_dma_chan *chan, void *buf_id,
int size, enum s3c2410_dma_buffresult res)
#define XFER_DMAADDR_INVALID DMA_BIT_MASK(32)
static int s3c64xx_spi_map_mssg(struct s3c64xx_spi_driver_data *sdd,
struct spi_message *msg)
static void s3c64xx_spi_unmap_mssg(struct s3c64xx_spi_driver_data *sdd,
struct spi_message *msg)
static void handle_msg(struct s3c64xx_spi_driver_data *sdd,
struct spi_message *msg)
static int acquire_dma(struct s3c64xx_spi_driver_data *sdd)
static void s3c64xx_spi_work(struct work_struct *work)
static int s3c64xx_spi_transfer(struct spi_device *spi,
struct spi_message *msg)
static int s3c64xx_spi_setup(struct spi_device *spi)
static void s3c64xx_spi_hwinit(struct s3c64xx_spi_driver_data *sdd, int channel)
static int __init s3c64xx_spi_probe(struct platform_device *pdev)
static int s3c64xx_spi_remove(struct platform_device *pdev)
static int s3c64xx_spi_suspend(struct platform_device *pdev, pm_message_t state)
static int s3c64xx_spi_resume(struct platform_device *pdev)
#define s3c64xx_spi_suspend	NULL
#define s3c64xx_spi_resume	NULL
static struct platform_driver s3c64xx_spi_driver = ;
MODULE_ALIAS("platform:s3c64xx-spi");
static int __init s3c64xx_spi_init(void)
subsys_initcall(s3c64xx_spi_init);
static void __exit s3c64xx_spi_exit(void)
module_exit(s3c64xx_spi_exit);
MODULE_AUTHOR("Jaswinder Singh <jassi.brar@samsung.com>");
MODULE_DESCRIPTION("S3C64XX SPI Controller Driver");
MODULE_LICENSE("GPL");
