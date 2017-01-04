#define DRIVER_NAME "timb-dma"
#define TIMBDMA_ACR		0x34
#define TIMBDMA_32BIT_ADDR	0x01
#define TIMBDMA_ISR		0x080000
#define TIMBDMA_IPR		0x080004
#define TIMBDMA_IER		0x080008
#define TIMBDMA_INSTANCE_OFFSET		0x40
#define TIMBDMA_INSTANCE_TX_OFFSET	0x18
#define TIMBDMA_OFFS_RX_DHAR	0x00
#define TIMBDMA_OFFS_RX_DLAR	0x04
#define TIMBDMA_OFFS_RX_LR	0x0C
#define TIMBDMA_OFFS_RX_BLR	0x10
#define TIMBDMA_OFFS_RX_ER	0x14
#define TIMBDMA_RX_EN		0x01
#define TIMBDMA_OFFS_RX_BPRR	0x30
#define TIMBDMA_OFFS_TX_DHAR	0x00
#define TIMBDMA_OFFS_TX_DLAR	0x04
#define TIMBDMA_OFFS_TX_BLR	0x0C
#define TIMBDMA_OFFS_TX_LR	0x14
#define TIMB_DMA_DESC_SIZE	8
struct timb_dma_desc ;
struct timb_dma_chan ;
struct timb_dma ;
static struct device *chan2dev(struct dma_chan *chan)
static struct device *chan2dmadev(struct dma_chan *chan)
static struct timb_dma *tdchantotd(struct timb_dma_chan *td_chan)
static void __td_enable_chan_irq(struct timb_dma_chan *td_chan)
static bool __td_dma_done_ack(struct timb_dma_chan *td_chan)
static void __td_unmap_desc(struct timb_dma_chan *td_chan, const u8 *dma_desc,
bool single)
static void __td_unmap_descs(struct timb_dma_desc *td_desc, bool single)
static int td_fill_desc(struct timb_dma_chan *td_chan, u8 *dma_desc,
struct scatterlist *sg, bool last)
static void __td_start_dma(struct timb_dma_chan *td_chan)
static void __td_finish(struct timb_dma_chan *td_chan)
static u32 __td_ier_mask(struct timb_dma *td)
static void __td_start_next(struct timb_dma_chan *td_chan)
static dma_cookie_t td_tx_submit(struct dma_async_tx_descriptor *txd)
static struct timb_dma_desc *td_alloc_init_desc(struct timb_dma_chan *td_chan)
static void td_free_desc(struct timb_dma_desc *td_desc)
static void td_desc_put(struct timb_dma_chan *td_chan,
struct timb_dma_desc *td_desc)
static struct timb_dma_desc *td_desc_get(struct timb_dma_chan *td_chan)
static int td_alloc_chan_resources(struct dma_chan *chan)
static void td_free_chan_resources(struct dma_chan *chan)
static enum dma_status td_tx_status(struct dma_chan *chan, dma_cookie_t cookie,
struct dma_tx_state *txstate)
static void td_issue_pending(struct dma_chan *chan)
static struct dma_async_tx_descriptor *td_prep_slave_sg(struct dma_chan *chan,
struct scatterlist *sgl, unsigned int sg_len,
enum dma_data_direction direction, unsigned long flags)
static int td_control(struct dma_chan *chan, enum dma_ctrl_cmd cmd,
unsigned long arg)
static void td_tasklet(unsigned long data)
static irqreturn_t td_irq(int irq, void *devid)
static int __devinit td_probe(struct platform_device *pdev)
static int __devexit td_remove(struct platform_device *pdev)
static struct platform_driver td_driver = ;
static int __init td_init(void)
module_init(td_init);
static void __exit td_exit(void)
module_exit(td_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Timberdale DMA controller driver");
MODULE_AUTHOR("Pelagicore AB <info@pelagicore.com>");
MODULE_ALIAS("platform:"DRIVER_NAME);
