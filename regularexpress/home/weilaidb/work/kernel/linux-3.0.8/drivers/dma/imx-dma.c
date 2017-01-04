struct imxdma_channel ;
#define MAX_DMA_CHANNELS 8
struct imxdma_engine ;
static struct imxdma_channel *to_imxdma_chan(struct dma_chan *chan)
static void imxdma_handle(struct imxdma_channel *imxdmac)
static void imxdma_irq_handler(int channel, void *data)
static void imxdma_err_handler(int channel, void *data, int error)
static void imxdma_progression(int channel, void *data,
struct scatterlist *sg)
static int imxdma_control(struct dma_chan *chan, enum dma_ctrl_cmd cmd,
unsigned long arg)
static enum dma_status imxdma_tx_status(struct dma_chan *chan,
dma_cookie_t cookie,
struct dma_tx_state *txstate)
static dma_cookie_t imxdma_assign_cookie(struct imxdma_channel *imxdma)
static dma_cookie_t imxdma_tx_submit(struct dma_async_tx_descriptor *tx)
static int imxdma_alloc_chan_resources(struct dma_chan *chan)
static void imxdma_free_chan_resources(struct dma_chan *chan)
static struct dma_async_tx_descriptor *imxdma_prep_slave_sg(
struct dma_chan *chan, struct scatterlist *sgl,
unsigned int sg_len, enum dma_data_direction direction,
unsigned long flags)
static struct dma_async_tx_descriptor *imxdma_prep_dma_cyclic(
struct dma_chan *chan, dma_addr_t dma_addr, size_t buf_len,
size_t period_len, enum dma_data_direction direction)
static void imxdma_issue_pending(struct dma_chan *chan)
static int __init imxdma_probe(struct platform_device *pdev)
static int __exit imxdma_remove(struct platform_device *pdev)
static struct platform_driver imxdma_driver = ;
static int __init imxdma_module_init(void)
subsys_initcall(imxdma_module_init);
MODULE_AUTHOR("Sascha Hauer, Pengutronix <s.hauer@pengutronix.de>");
MODULE_DESCRIPTION("i.MX dma driver");
MODULE_LICENSE("GPL");
