#define MPC_DMA_DESCRIPTORS	64
#define MPC_DMA_CHANNELS	64
#define MPC_DMA_TCD_OFFSET	0x1000
#define MPC_DMA_DMACR_EDCG	(1 << 31)
#define MPC_DMA_DMACR_ERGA	(1 << 3)
#define MPC_DMA_DMACR_ERCA	(1 << 2)
#define MPC_DMA_DMAES_VLD	(1 << 31)
#define MPC_DMA_DMAES_GPE	(1 << 15)
#define MPC_DMA_DMAES_CPE	(1 << 14)
#define MPC_DMA_DMAES_ERRCHN(err) \
(((err) >> 8) & 0x3f)
#define MPC_DMA_DMAES_SAE	(1 << 7)
#define MPC_DMA_DMAES_SOE	(1 << 6)
#define MPC_DMA_DMAES_DAE	(1 << 5)
#define MPC_DMA_DMAES_DOE	(1 << 4)
#define MPC_DMA_DMAES_NCE	(1 << 3)
#define MPC_DMA_DMAES_SGE	(1 << 2)
#define MPC_DMA_DMAES_SBE	(1 << 1)
#define MPC_DMA_DMAES_DBE	(1 << 0)
#define MPC_DMA_DMAGPOR_SNOOP_ENABLE	(1 << 6)
#define MPC_DMA_TSIZE_1		0x00
#define MPC_DMA_TSIZE_2		0x01
#define MPC_DMA_TSIZE_4		0x02
#define MPC_DMA_TSIZE_16	0x04
#define MPC_DMA_TSIZE_32	0x05
struct __attribute__ ((__packed__)) mpc_dma_regs ;
struct __attribute__ ((__packed__)) mpc_dma_tcd ;
struct mpc_dma_desc ;
struct mpc_dma_chan ;
struct mpc_dma ;
#define DRV_NAME	"mpc512x_dma"
static inline struct mpc_dma_chan *dma_chan_to_mpc_dma_chan(struct dma_chan *c)
static inline struct mpc_dma *dma_chan_to_mpc_dma(struct dma_chan *c)
static void mpc_dma_execute(struct mpc_dma_chan *mchan)
static void mpc_dma_irq_process(struct mpc_dma *mdma, u32 is, u32 es, int off)
static irqreturn_t mpc_dma_irq(int irq, void *data)
static void mpc_dma_process_completed(struct mpc_dma *mdma)
static void mpc_dma_tasklet(unsigned long data)
static dma_cookie_t mpc_dma_tx_submit(struct dma_async_tx_descriptor *txd)
static int mpc_dma_alloc_chan_resources(struct dma_chan *chan)
static void mpc_dma_free_chan_resources(struct dma_chan *chan)
static void mpc_dma_issue_pending(struct dma_chan *chan)
static enum dma_status
mpc_dma_tx_status(struct dma_chan *chan, dma_cookie_t cookie,
struct dma_tx_state *txstate)
static struct dma_async_tx_descriptor *
mpc_dma_prep_memcpy(struct dma_chan *chan, dma_addr_t dst, dma_addr_t src,
size_t len, unsigned long flags)
static int __devinit mpc_dma_probe(struct platform_device *op)
static int __devexit mpc_dma_remove(struct platform_device *op)
static struct of_device_id mpc_dma_match[] = ;
static struct platform_driver mpc_dma_driver = ;
static int __init mpc_dma_init(void)
module_init(mpc_dma_init);
static void __exit mpc_dma_exit(void)
module_exit(mpc_dma_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Piotr Ziecik <kosmo@semihalf.com>");
