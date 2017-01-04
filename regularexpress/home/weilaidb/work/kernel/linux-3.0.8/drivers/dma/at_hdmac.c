#define	ATC_DEFAULT_CFG		(ATC_FIFOCFG_HALFFIFO)
#define	ATC_DEFAULT_CTRLA	(0)
#define	ATC_DEFAULT_CTRLB	(ATC_SIF(AT_DMA_MEM_IF) \
|ATC_DIF(AT_DMA_MEM_IF))
static unsigned int init_nr_desc_per_channel = 64;
module_param(init_nr_desc_per_channel, uint, 0644);
MODULE_PARM_DESC(init_nr_desc_per_channel,
"initial descriptors per channel (default: 64)");
static dma_cookie_t atc_tx_submit(struct dma_async_tx_descriptor *tx);
static struct at_desc *atc_first_active(struct at_dma_chan *atchan)
static struct at_desc *atc_first_queued(struct at_dma_chan *atchan)
static struct at_desc *atc_alloc_descriptor(struct dma_chan *chan,
gfp_t gfp_flags)
static struct at_desc *atc_desc_get(struct at_dma_chan *atchan)
static void atc_desc_put(struct at_dma_chan *atchan, struct at_desc *desc)
static void atc_desc_chain(struct at_desc **first, struct at_desc **prev,
struct at_desc *desc)
static dma_cookie_t
atc_assign_cookie(struct at_dma_chan *atchan, struct at_desc *desc)
static void atc_dostart(struct at_dma_chan *atchan, struct at_desc *first)
static void
atc_chain_complete(struct at_dma_chan *atchan, struct at_desc *desc)
static void atc_complete_all(struct at_dma_chan *atchan)
static void atc_cleanup_descriptors(struct at_dma_chan *atchan)
static void atc_advance_work(struct at_dma_chan *atchan)
static void atc_handle_error(struct at_dma_chan *atchan)
static void atc_handle_cyclic(struct at_dma_chan *atchan)
static void atc_tasklet(unsigned long data)
static irqreturn_t at_dma_interrupt(int irq, void *dev_id)
static dma_cookie_t atc_tx_submit(struct dma_async_tx_descriptor *tx)
static struct dma_async_tx_descriptor *
atc_prep_dma_memcpy(struct dma_chan *chan, dma_addr_t dest, dma_addr_t src,
size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *
atc_prep_slave_sg(struct dma_chan *chan, struct scatterlist *sgl,
unsigned int sg_len, enum dma_data_direction direction,
unsigned long flags)
static int
atc_dma_cyclic_check_values(unsigned int reg_width, dma_addr_t buf_addr,
size_t period_len, enum dma_data_direction direction)
static int
atc_dma_cyclic_fill_desc(struct at_dma_slave *atslave, struct at_desc *desc,
unsigned int period_index, dma_addr_t buf_addr,
size_t period_len, enum dma_data_direction direction)
static struct dma_async_tx_descriptor *
atc_prep_dma_cyclic(struct dma_chan *chan, dma_addr_t buf_addr, size_t buf_len,
size_t period_len, enum dma_data_direction direction)
static int atc_control(struct dma_chan *chan, enum dma_ctrl_cmd cmd,
unsigned long arg)
static enum dma_status
atc_tx_status(struct dma_chan *chan,
dma_cookie_t cookie,
struct dma_tx_state *txstate)
static void atc_issue_pending(struct dma_chan *chan)
static int atc_alloc_chan_resources(struct dma_chan *chan)
static void atc_free_chan_resources(struct dma_chan *chan)
static void at_dma_off(struct at_dma *atdma)
static int __init at_dma_probe(struct platform_device *pdev)
static int __exit at_dma_remove(struct platform_device *pdev)
static void at_dma_shutdown(struct platform_device *pdev)
static int at_dma_suspend_noirq(struct device *dev)
static int at_dma_resume_noirq(struct device *dev)
static const struct dev_pm_ops at_dma_dev_pm_ops = ;
static struct platform_driver at_dma_driver = ;
static int __init at_dma_init(void)
subsys_initcall(at_dma_init);
static void __exit at_dma_exit(void)
module_exit(at_dma_exit);
MODULE_DESCRIPTION("Atmel AHB DMA Controller driver");
MODULE_AUTHOR("Nicolas Ferre <nicolas.ferre@atmel.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:at_hdmac");
