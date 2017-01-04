#define DMA_DCR     0x00
#define DMA_DISR    0x04
#define DMA_DIMR    0x08
#define DMA_DBTOSR  0x0c
#define DMA_DRTOSR  0x10
#define DMA_DSESR   0x14
#define DMA_DBOSR   0x18
#define DMA_DBTOCR  0x1c
#define DMA_WSRA    0x40
#define DMA_XSRA    0x44
#define DMA_YSRA    0x48
#define DMA_WSRB    0x4c
#define DMA_XSRB    0x50
#define DMA_YSRB    0x54
#define DMA_SAR(x)  (0x80 + ((x) << 6))
#define DMA_DAR(x)  (0x84 + ((x) << 6))
#define DMA_CNTR(x) (0x88 + ((x) << 6))
#define DMA_CCR(x)  (0x8c + ((x) << 6))
#define DMA_RSSR(x) (0x90 + ((x) << 6))
#define DMA_BLR(x)  (0x94 + ((x) << 6))
#define DMA_RTOR(x) (0x98 + ((x) << 6))
#define DMA_BUCR(x) (0x98 + ((x) << 6))
#define DMA_CCNR(x) (0x9C + ((x) << 6))
#define DCR_DRST           (1<<1)
#define DCR_DEN            (1<<0)
#define DBTOCR_EN          (1<<15)
#define DBTOCR_CNT(x)      ((x) & 0x7fff)
#define CNTR_CNT(x)        ((x) & 0xffffff)
#define CCR_ACRPT          (1<<14)
#define CCR_DMOD_LINEAR    (0x0 << 12)
#define CCR_DMOD_2D        (0x1 << 12)
#define CCR_DMOD_FIFO      (0x2 << 12)
#define CCR_DMOD_EOBFIFO   (0x3 << 12)
#define CCR_SMOD_LINEAR    (0x0 << 10)
#define CCR_SMOD_2D        (0x1 << 10)
#define CCR_SMOD_FIFO      (0x2 << 10)
#define CCR_SMOD_EOBFIFO   (0x3 << 10)
#define CCR_MDIR_DEC       (1<<9)
#define CCR_MSEL_B         (1<<8)
#define CCR_DSIZ_32        (0x0 << 6)
#define CCR_DSIZ_8         (0x1 << 6)
#define CCR_DSIZ_16        (0x2 << 6)
#define CCR_SSIZ_32        (0x0 << 4)
#define CCR_SSIZ_8         (0x1 << 4)
#define CCR_SSIZ_16        (0x2 << 4)
#define CCR_REN            (1<<3)
#define CCR_RPT            (1<<2)
#define CCR_FRC            (1<<1)
#define CCR_CEN            (1<<0)
#define RTOR_EN            (1<<15)
#define RTOR_CLK           (1<<14)
#define RTOR_PSC           (1<<13)
struct imx_dma_channel ;
static void __iomem *imx_dmav1_baseaddr;
static void imx_dmav1_writel(unsigned val, unsigned offset)
static unsigned imx_dmav1_readl(unsigned offset)
static struct imx_dma_channel imx_dma_channels[IMX_DMA_CHANNELS];
static struct clk *dma_clk;
static int imx_dma_hw_chain(struct imx_dma_channel *imxdma)
static inline int imx_dma_sg_next(int channel, struct scatterlist *sg)
int
imx_dma_setup_single(int channel, dma_addr_t dma_address,
unsigned int dma_length, unsigned int dev_addr,
unsigned int dmamode)
EXPORT_SYMBOL(imx_dma_setup_single);
int
imx_dma_setup_sg(int channel,
struct scatterlist *sg, unsigned int sgcount,
unsigned int dma_length, unsigned int dev_addr,
unsigned int dmamode)
EXPORT_SYMBOL(imx_dma_setup_sg);
int
imx_dma_config_channel(int channel, unsigned int config_port,
unsigned int config_mem, unsigned int dmareq, int hw_chaining)
EXPORT_SYMBOL(imx_dma_config_channel);
void imx_dma_config_burstlen(int channel, unsigned int burstlen)
EXPORT_SYMBOL(imx_dma_config_burstlen);
int
imx_dma_setup_handlers(int channel,
void (*irq_handler) (int, void *),
void (*err_handler) (int, void *, int),
void *data)
EXPORT_SYMBOL(imx_dma_setup_handlers);
int
imx_dma_setup_progression_handler(int channel,
void (*prog_handler) (int, void*, struct scatterlist*))
EXPORT_SYMBOL(imx_dma_setup_progression_handler);
void imx_dma_enable(int channel)
EXPORT_SYMBOL(imx_dma_enable);
void imx_dma_disable(int channel)
EXPORT_SYMBOL(imx_dma_disable);
static void imx_dma_watchdog(unsigned long chno)
static irqreturn_t dma_err_handler(int irq, void *dev_id)
static void dma_irq_handle_channel(int chno)
static irqreturn_t dma_irq_handler(int irq, void *dev_id)
int imx_dma_request(int channel, const char *name)
EXPORT_SYMBOL(imx_dma_request);
void imx_dma_free(int channel)
EXPORT_SYMBOL(imx_dma_free);
int imx_dma_request_by_prio(const char *name, enum imx_dma_prio prio)
EXPORT_SYMBOL(imx_dma_request_by_prio);
static int __init imx_dma_init(void)
arch_initcall(imx_dma_init);
