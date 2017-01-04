#define chan_dbg(chan, fmt, arg...)					\
dev_dbg(chan->dev, "%s: " fmt, chan->name, ##arg)
#define chan_err(chan, fmt, arg...)					\
dev_err(chan->dev, "%s: " fmt, chan->name, ##arg)
static const char msg_ld_oom[] = "No free memory for link descriptor";
static void set_sr(struct fsldma_chan *chan, u32 val)
static u32 get_sr(struct fsldma_chan *chan)
static void set_cdar(struct fsldma_chan *chan, dma_addr_t addr)
static dma_addr_t get_cdar(struct fsldma_chan *chan)
static u32 get_bcr(struct fsldma_chan *chan)
static void set_desc_cnt(struct fsldma_chan *chan,
struct fsl_dma_ld_hw *hw, u32 count)
static u32 get_desc_cnt(struct fsldma_chan *chan, struct fsl_desc_sw *desc)
static void set_desc_src(struct fsldma_chan *chan,
struct fsl_dma_ld_hw *hw, dma_addr_t src)
static dma_addr_t get_desc_src(struct fsldma_chan *chan,
struct fsl_desc_sw *desc)
static void set_desc_dst(struct fsldma_chan *chan,
struct fsl_dma_ld_hw *hw, dma_addr_t dst)
static dma_addr_t get_desc_dst(struct fsldma_chan *chan,
struct fsl_desc_sw *desc)
static void set_desc_next(struct fsldma_chan *chan,
struct fsl_dma_ld_hw *hw, dma_addr_t next)
static void set_ld_eol(struct fsldma_chan *chan, struct fsl_desc_sw *desc)
static void dma_init(struct fsldma_chan *chan)
static int dma_is_idle(struct fsldma_chan *chan)
static void dma_start(struct fsldma_chan *chan)
static void dma_halt(struct fsldma_chan *chan)
static void fsl_chan_set_src_loop_size(struct fsldma_chan *chan, int size)
static void fsl_chan_set_dst_loop_size(struct fsldma_chan *chan, int size)
static void fsl_chan_set_request_count(struct fsldma_chan *chan, int size)
static void fsl_chan_toggle_ext_pause(struct fsldma_chan *chan, int enable)
static void fsl_chan_toggle_ext_start(struct fsldma_chan *chan, int enable)
static void append_ld_queue(struct fsldma_chan *chan, struct fsl_desc_sw *desc)
static dma_cookie_t fsl_dma_tx_submit(struct dma_async_tx_descriptor *tx)
static struct fsl_desc_sw *fsl_dma_alloc_descriptor(struct fsldma_chan *chan)
static int fsl_dma_alloc_chan_resources(struct dma_chan *dchan)
static void fsldma_free_desc_list(struct fsldma_chan *chan,
struct list_head *list)
static void fsldma_free_desc_list_reverse(struct fsldma_chan *chan,
struct list_head *list)
static void fsl_dma_free_chan_resources(struct dma_chan *dchan)
static struct dma_async_tx_descriptor *
fsl_dma_prep_interrupt(struct dma_chan *dchan, unsigned long flags)
static struct dma_async_tx_descriptor *
fsl_dma_prep_memcpy(struct dma_chan *dchan,
dma_addr_t dma_dst, dma_addr_t dma_src,
size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *fsl_dma_prep_sg(struct dma_chan *dchan,
struct scatterlist *dst_sg, unsigned int dst_nents,
struct scatterlist *src_sg, unsigned int src_nents,
unsigned long flags)
static struct dma_async_tx_descriptor *fsl_dma_prep_slave_sg(
struct dma_chan *dchan, struct scatterlist *sgl, unsigned int sg_len,
enum dma_data_direction direction, unsigned long flags)
static int fsl_dma_device_control(struct dma_chan *dchan,
enum dma_ctrl_cmd cmd, unsigned long arg)
static void fsldma_cleanup_descriptor(struct fsldma_chan *chan,
struct fsl_desc_sw *desc)
static void fsl_chan_xfer_ld_queue(struct fsldma_chan *chan)
static void fsl_dma_memcpy_issue_pending(struct dma_chan *dchan)
static enum dma_status fsl_tx_status(struct dma_chan *dchan,
dma_cookie_t cookie,
struct dma_tx_state *txstate)
static irqreturn_t fsldma_chan_irq(int irq, void *data)
static void dma_do_tasklet(unsigned long data)
static irqreturn_t fsldma_ctrl_irq(int irq, void *data)
static void fsldma_free_irqs(struct fsldma_device *fdev)
static int fsldma_request_irqs(struct fsldma_device *fdev)
static int __devinit fsl_dma_chan_probe(struct fsldma_device *fdev,
struct device_node *node, u32 feature, const char *compatible)
static void fsl_dma_chan_remove(struct fsldma_chan *chan)
static int __devinit fsldma_of_probe(struct platform_device *op)
static int fsldma_of_remove(struct platform_device *op)
static const struct of_device_id fsldma_of_ids[] = ;
static struct platform_driver fsldma_of_driver = ;
static __init int fsldma_init(void)
static void __exit fsldma_exit(void)
subsys_initcall(fsldma_init);
module_exit(fsldma_exit);
MODULE_DESCRIPTION("Freescale Elo / Elo Plus DMA driver");
MODULE_LICENSE("GPL");
