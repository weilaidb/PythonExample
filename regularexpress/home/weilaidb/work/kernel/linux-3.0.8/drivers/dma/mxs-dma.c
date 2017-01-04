#define MXS_DMA_APBH		0
#define MXS_DMA_APBX		1
#define dma_is_apbh()		(mxs_dma->dev_id == MXS_DMA_APBH)
#define APBH_VERSION_LATEST	3
#define apbh_is_old()		(mxs_dma->version < APBH_VERSION_LATEST)
#define HW_APBHX_CTRL0				0x000
#define BM_APBH_CTRL0_APB_BURST8_EN		(1 << 29)
#define BM_APBH_CTRL0_APB_BURST_EN		(1 << 28)
#define BP_APBH_CTRL0_CLKGATE_CHANNEL		8
#define BP_APBH_CTRL0_RESET_CHANNEL		16
#define HW_APBHX_CTRL1				0x010
#define HW_APBHX_CTRL2				0x020
#define HW_APBHX_CHANNEL_CTRL			0x030
#define BP_APBHX_CHANNEL_CTRL_RESET_CHANNEL	16
#define HW_APBH_VERSION				(cpu_is_mx23() ? 0x3f0 : 0x800)
#define HW_APBX_VERSION				0x800
#define BP_APBHX_VERSION_MAJOR			24
#define HW_APBHX_CHn_NXTCMDAR(n) \
(((dma_is_apbh() && apbh_is_old()) ? 0x050 : 0x110) + (n) * 0x70)
#define HW_APBHX_CHn_SEMA(n) \
(((dma_is_apbh() && apbh_is_old()) ? 0x080 : 0x140) + (n) * 0x70)
#define BP_CCW_COMMAND		0
#define BM_CCW_COMMAND		(3 << 0)
#define CCW_CHAIN		(1 << 2)
#define CCW_IRQ			(1 << 3)
#define CCW_DEC_SEM		(1 << 6)
#define CCW_WAIT4END		(1 << 7)
#define CCW_HALT_ON_TERM	(1 << 8)
#define CCW_TERM_FLUSH		(1 << 9)
#define BP_CCW_PIO_NUM		12
#define BM_CCW_PIO_NUM		(0xf << 12)
#define BF_CCW(value, field)	(((value) << BP_CCW_##field) & BM_CCW_##field)
#define MXS_DMA_CMD_NO_XFER	0
#define MXS_DMA_CMD_WRITE	1
#define MXS_DMA_CMD_READ	2
#define MXS_DMA_CMD_DMA_SENSE	3
struct mxs_dma_ccw ;
#define NUM_CCW	(int)(PAGE_SIZE / sizeof(struct mxs_dma_ccw))
struct mxs_dma_chan ;
#define MXS_DMA_CHANNELS		16
#define MXS_DMA_CHANNELS_MASK		0xffff
struct mxs_dma_engine ;
static void mxs_dma_reset_chan(struct mxs_dma_chan *mxs_chan)
static void mxs_dma_enable_chan(struct mxs_dma_chan *mxs_chan)
static void mxs_dma_disable_chan(struct mxs_dma_chan *mxs_chan)
static void mxs_dma_pause_chan(struct mxs_dma_chan *mxs_chan)
static void mxs_dma_resume_chan(struct mxs_dma_chan *mxs_chan)
static dma_cookie_t mxs_dma_assign_cookie(struct mxs_dma_chan *mxs_chan)
static struct mxs_dma_chan *to_mxs_dma_chan(struct dma_chan *chan)
static dma_cookie_t mxs_dma_tx_submit(struct dma_async_tx_descriptor *tx)
static void mxs_dma_tasklet(unsigned long data)
static irqreturn_t mxs_dma_int_handler(int irq, void *dev_id)
static int mxs_dma_alloc_chan_resources(struct dma_chan *chan)
static void mxs_dma_free_chan_resources(struct dma_chan *chan)
static struct dma_async_tx_descriptor *mxs_dma_prep_slave_sg(
struct dma_chan *chan, struct scatterlist *sgl,
unsigned int sg_len, enum dma_data_direction direction,
unsigned long append)
static struct dma_async_tx_descriptor *mxs_dma_prep_dma_cyclic(
struct dma_chan *chan, dma_addr_t dma_addr, size_t buf_len,
size_t period_len, enum dma_data_direction direction)
static int mxs_dma_control(struct dma_chan *chan, enum dma_ctrl_cmd cmd,
unsigned long arg)
static enum dma_status mxs_dma_tx_status(struct dma_chan *chan,
dma_cookie_t cookie, struct dma_tx_state *txstate)
static void mxs_dma_issue_pending(struct dma_chan *chan)
static int __init mxs_dma_init(struct mxs_dma_engine *mxs_dma)
static int __init mxs_dma_probe(struct platform_device *pdev)
static struct platform_device_id mxs_dma_type[] = ;
static struct platform_driver mxs_dma_driver = ;
static int __init mxs_dma_module_init(void)
subsys_initcall(mxs_dma_module_init);
