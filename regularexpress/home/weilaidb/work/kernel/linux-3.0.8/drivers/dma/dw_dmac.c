#define DWC_DEFAULT_CTLLO(private) ()
#define DWC_MAX_COUNT	4095U
#define NR_DESCS_PER_CHANNEL	64
static struct device *chan2dev(struct dma_chan *chan)
static struct device *chan2parent(struct dma_chan *chan)
static struct dw_desc *dwc_first_active(struct dw_dma_chan *dwc)
static struct dw_desc *dwc_desc_get(struct dw_dma_chan *dwc)
static void dwc_sync_desc_for_cpu(struct dw_dma_chan *dwc, struct dw_desc *desc)
static void dwc_desc_put(struct dw_dma_chan *dwc, struct dw_desc *desc)
static dma_cookie_t
dwc_assign_cookie(struct dw_dma_chan *dwc, struct dw_desc *desc)
static void dwc_dostart(struct dw_dma_chan *dwc, struct dw_desc *first)
static void
dwc_descriptor_complete(struct dw_dma_chan *dwc, struct dw_desc *desc,
bool callback_required)
static void dwc_complete_all(struct dw_dma *dw, struct dw_dma_chan *dwc)
static void dwc_scan_descriptors(struct dw_dma *dw, struct dw_dma_chan *dwc)
static void dwc_dump_lli(struct dw_dma_chan *dwc, struct dw_lli *lli)
static void dwc_handle_error(struct dw_dma *dw, struct dw_dma_chan *dwc)
inline dma_addr_t dw_dma_get_src_addr(struct dma_chan *chan)
EXPORT_SYMBOL(dw_dma_get_src_addr);
inline dma_addr_t dw_dma_get_dst_addr(struct dma_chan *chan)
EXPORT_SYMBOL(dw_dma_get_dst_addr);
static void dwc_handle_cyclic(struct dw_dma *dw, struct dw_dma_chan *dwc,
u32 status_block, u32 status_err, u32 status_xfer)
static void dw_dma_tasklet(unsigned long data)
static irqreturn_t dw_dma_interrupt(int irq, void *dev_id)
static dma_cookie_t dwc_tx_submit(struct dma_async_tx_descriptor *tx)
static struct dma_async_tx_descriptor *
dwc_prep_dma_memcpy(struct dma_chan *chan, dma_addr_t dest, dma_addr_t src,
size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *
dwc_prep_slave_sg(struct dma_chan *chan, struct scatterlist *sgl,
unsigned int sg_len, enum dma_data_direction direction,
unsigned long flags)
static int dwc_control(struct dma_chan *chan, enum dma_ctrl_cmd cmd,
unsigned long arg)
static enum dma_status
dwc_tx_status(struct dma_chan *chan,
dma_cookie_t cookie,
struct dma_tx_state *txstate)
static void dwc_issue_pending(struct dma_chan *chan)
static int dwc_alloc_chan_resources(struct dma_chan *chan)
static void dwc_free_chan_resources(struct dma_chan *chan)
int dw_dma_cyclic_start(struct dma_chan *chan)
EXPORT_SYMBOL(dw_dma_cyclic_start);
void dw_dma_cyclic_stop(struct dma_chan *chan)
EXPORT_SYMBOL(dw_dma_cyclic_stop);
struct dw_cyclic_desc *dw_dma_cyclic_prep(struct dma_chan *chan,
dma_addr_t buf_addr, size_t buf_len, size_t period_len,
enum dma_data_direction direction)
EXPORT_SYMBOL(dw_dma_cyclic_prep);
void dw_dma_cyclic_free(struct dma_chan *chan)
EXPORT_SYMBOL(dw_dma_cyclic_free);
static void dw_dma_off(struct dw_dma *dw)
static int __init dw_probe(struct platform_device *pdev)
static int __exit dw_remove(struct platform_device *pdev)
static void dw_shutdown(struct platform_device *pdev)
static int dw_suspend_noirq(struct device *dev)
static int dw_resume_noirq(struct device *dev)
static const struct dev_pm_ops dw_dev_pm_ops = ;
static struct platform_driver dw_driver = ;
static int __init dw_init(void)
subsys_initcall(dw_init);
static void __exit dw_exit(void)
module_exit(dw_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Synopsys DesignWare DMA Controller driver");
MODULE_AUTHOR("Haavard Skinnemoen (Atmel)");
MODULE_AUTHOR("Viresh Kumar <viresh.kumar@st.com>");
