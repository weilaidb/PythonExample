#define NR_DEFAULT_DESC	16
enum desc_status ;
struct dma_pl330_chan ;
struct dma_pl330_dmac ;
struct dma_pl330_desc ;
static inline struct dma_pl330_chan *
to_pchan(struct dma_chan *ch)
static inline struct dma_pl330_desc *
to_desc(struct dma_async_tx_descriptor *tx)
static inline void free_desc_list(struct list_head *list)
static inline void fill_queue(struct dma_pl330_chan *pch)
static void pl330_tasklet(unsigned long data)
static void dma_pl330_rqcb(void *token, enum pl330_op_err err)
static int pl330_alloc_chan_resources(struct dma_chan *chan)
static int pl330_control(struct dma_chan *chan, enum dma_ctrl_cmd cmd, unsigned long arg)
static void pl330_free_chan_resources(struct dma_chan *chan)
static enum dma_status
pl330_tx_status(struct dma_chan *chan, dma_cookie_t cookie,
struct dma_tx_state *txstate)
static void pl330_issue_pending(struct dma_chan *chan)
static dma_cookie_t pl330_tx_submit(struct dma_async_tx_descriptor *tx)
static inline void _init_desc(struct dma_pl330_desc *desc)
int add_desc(struct dma_pl330_dmac *pdmac, gfp_t flg, int count)
static struct dma_pl330_desc *
pluck_desc(struct dma_pl330_dmac *pdmac)
static struct dma_pl330_desc *pl330_get_desc(struct dma_pl330_chan *pch)
static inline void fill_px(struct pl330_xfer *px,
dma_addr_t dst, dma_addr_t src, size_t len)
static struct dma_pl330_desc *
__pl330_prep_dma_memcpy(struct dma_pl330_chan *pch, dma_addr_t dst,
dma_addr_t src, size_t len)
static inline int get_burst_len(struct dma_pl330_desc *desc, size_t len)
static struct dma_async_tx_descriptor *
pl330_prep_dma_memcpy(struct dma_chan *chan, dma_addr_t dst,
dma_addr_t src, size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *
pl330_prep_slave_sg(struct dma_chan *chan, struct scatterlist *sgl,
unsigned int sg_len, enum dma_data_direction direction,
unsigned long flg)
static irqreturn_t pl330_irq_handler(int irq, void *data)
static int __devinit
pl330_probe(struct amba_device *adev, const struct amba_id *id)
static int __devexit pl330_remove(struct amba_device *adev)
static struct amba_id pl330_ids[] = ;
static struct amba_driver pl330_driver = ;
static int __init pl330_init(void)
module_init(pl330_init);
static void __exit pl330_exit(void)
module_exit(pl330_exit);
MODULE_AUTHOR("Jaswinder Singh <jassi.brar@samsung.com>");
MODULE_DESCRIPTION("API Driver for PL330 DMAC");
MODULE_LICENSE("GPL");
