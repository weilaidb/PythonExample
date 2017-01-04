static struct txx9dmac_chan *to_txx9dmac_chan(struct dma_chan *chan)
static struct txx9dmac_cregs __iomem *__dma_regs(const struct txx9dmac_chan *dc)
static struct txx9dmac_cregs32 __iomem *__dma_regs32(
const struct txx9dmac_chan *dc)
#define channel64_readq(dc, name) \
__raw_readq(&(__dma_regs(dc)->name))
#define channel64_writeq(dc, name, val) \
__raw_writeq((val), &(__dma_regs(dc)->name))
#define channel64_readl(dc, name) \
__raw_readl(&(__dma_regs(dc)->name))
#define channel64_writel(dc, name, val) \
__raw_writel((val), &(__dma_regs(dc)->name))
#define channel32_readl(dc, name) \
__raw_readl(&(__dma_regs32(dc)->name))
#define channel32_writel(dc, name, val) \
__raw_writel((val), &(__dma_regs32(dc)->name))
#define channel_readq(dc, name) channel64_readq(dc, name)
#define channel_writeq(dc, name, val) channel64_writeq(dc, name, val)
#define channel_readl(dc, name) \
(is_dmac64(dc) ? \
channel64_readl(dc, name) : channel32_readl(dc, name))
#define channel_writel(dc, name, val) \
(is_dmac64(dc) ? \
channel64_writel(dc, name, val) : channel32_writel(dc, name, val))
static dma_addr_t channel64_read_CHAR(const struct txx9dmac_chan *dc)
static void channel64_write_CHAR(const struct txx9dmac_chan *dc, dma_addr_t val)
static void channel64_clear_CHAR(const struct txx9dmac_chan *dc)
static dma_addr_t channel_read_CHAR(const struct txx9dmac_chan *dc)
static void channel_write_CHAR(const struct txx9dmac_chan *dc, dma_addr_t val)
static struct txx9dmac_regs __iomem *__txx9dmac_regs(
const struct txx9dmac_dev *ddev)
static struct txx9dmac_regs32 __iomem *__txx9dmac_regs32(
const struct txx9dmac_dev *ddev)
#define dma64_readl(ddev, name) \
__raw_readl(&(__txx9dmac_regs(ddev)->name))
#define dma64_writel(ddev, name, val) \
__raw_writel((val), &(__txx9dmac_regs(ddev)->name))
#define dma32_readl(ddev, name) \
__raw_readl(&(__txx9dmac_regs32(ddev)->name))
#define dma32_writel(ddev, name, val) \
__raw_writel((val), &(__txx9dmac_regs32(ddev)->name))
#define dma_readl(ddev, name) \
(__is_dmac64(ddev) ? \
dma64_readl(ddev, name) : dma32_readl(ddev, name))
#define dma_writel(ddev, name, val) \
(__is_dmac64(ddev) ? \
dma64_writel(ddev, name, val) : dma32_writel(ddev, name, val))
static struct device *chan2dev(struct dma_chan *chan)
static struct device *chan2parent(struct dma_chan *chan)
static struct txx9dmac_desc *
txd_to_txx9dmac_desc(struct dma_async_tx_descriptor *txd)
static dma_addr_t desc_read_CHAR(const struct txx9dmac_chan *dc,
const struct txx9dmac_desc *desc)
static void desc_write_CHAR(const struct txx9dmac_chan *dc,
struct txx9dmac_desc *desc, dma_addr_t val)
#define TXX9_DMA_MAX_COUNT	0x04000000
#define TXX9_DMA_INITIAL_DESC_COUNT	64
static struct txx9dmac_desc *txx9dmac_first_active(struct txx9dmac_chan *dc)
static struct txx9dmac_desc *txx9dmac_last_active(struct txx9dmac_chan *dc)
static struct txx9dmac_desc *txx9dmac_first_queued(struct txx9dmac_chan *dc)
static struct txx9dmac_desc *txx9dmac_last_child(struct txx9dmac_desc *desc)
static dma_cookie_t txx9dmac_tx_submit(struct dma_async_tx_descriptor *tx);
static struct txx9dmac_desc *txx9dmac_desc_alloc(struct txx9dmac_chan *dc,
gfp_t flags)
static struct txx9dmac_desc *txx9dmac_desc_get(struct txx9dmac_chan *dc)
static void txx9dmac_sync_desc_for_cpu(struct txx9dmac_chan *dc,
struct txx9dmac_desc *desc)
static void txx9dmac_desc_put(struct txx9dmac_chan *dc,
struct txx9dmac_desc *desc)
static dma_cookie_t
txx9dmac_assign_cookie(struct txx9dmac_chan *dc, struct txx9dmac_desc *desc)
static void txx9dmac_dump_regs(struct txx9dmac_chan *dc)
static void txx9dmac_reset_chan(struct txx9dmac_chan *dc)
static void txx9dmac_dostart(struct txx9dmac_chan *dc,
struct txx9dmac_desc *first)
static void
txx9dmac_descriptor_complete(struct txx9dmac_chan *dc,
struct txx9dmac_desc *desc)
static void txx9dmac_dequeue(struct txx9dmac_chan *dc, struct list_head *list)
static void txx9dmac_complete_all(struct txx9dmac_chan *dc)
static void txx9dmac_dump_desc(struct txx9dmac_chan *dc,
struct txx9dmac_hwdesc *desc)
static void txx9dmac_handle_error(struct txx9dmac_chan *dc, u32 csr)
static void txx9dmac_scan_descriptors(struct txx9dmac_chan *dc)
static void txx9dmac_chan_tasklet(unsigned long data)
static irqreturn_t txx9dmac_chan_interrupt(int irq, void *dev_id)
static void txx9dmac_tasklet(unsigned long data)
static irqreturn_t txx9dmac_interrupt(int irq, void *dev_id)
static dma_cookie_t txx9dmac_tx_submit(struct dma_async_tx_descriptor *tx)
static struct dma_async_tx_descriptor *
txx9dmac_prep_dma_memcpy(struct dma_chan *chan, dma_addr_t dest, dma_addr_t src,
size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *
txx9dmac_prep_slave_sg(struct dma_chan *chan, struct scatterlist *sgl,
unsigned int sg_len, enum dma_data_direction direction,
unsigned long flags)
static int txx9dmac_control(struct dma_chan *chan, enum dma_ctrl_cmd cmd,
unsigned long arg)
static enum dma_status
txx9dmac_tx_status(struct dma_chan *chan, dma_cookie_t cookie,
struct dma_tx_state *txstate)
static void txx9dmac_chain_dynamic(struct txx9dmac_chan *dc,
struct txx9dmac_desc *prev)
static void txx9dmac_issue_pending(struct dma_chan *chan)
static int txx9dmac_alloc_chan_resources(struct dma_chan *chan)
static void txx9dmac_free_chan_resources(struct dma_chan *chan)
static void txx9dmac_off(struct txx9dmac_dev *ddev)
static int __init txx9dmac_chan_probe(struct platform_device *pdev)
static int __exit txx9dmac_chan_remove(struct platform_device *pdev)
static int __init txx9dmac_probe(struct platform_device *pdev)
static int __exit txx9dmac_remove(struct platform_device *pdev)
static void txx9dmac_shutdown(struct platform_device *pdev)
static int txx9dmac_suspend_noirq(struct device *dev)
static int txx9dmac_resume_noirq(struct device *dev)
static const struct dev_pm_ops txx9dmac_dev_pm_ops = ;
static struct platform_driver txx9dmac_chan_driver = ;
static struct platform_driver txx9dmac_driver = ;
static int __init txx9dmac_init(void)
module_init(txx9dmac_init);
static void __exit txx9dmac_exit(void)
module_exit(txx9dmac_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("TXx9 DMA Controller driver");
MODULE_AUTHOR("Atsushi Nemoto <anemo@mba.ocn.ne.jp>");
MODULE_ALIAS("platform:txx9dmac");
MODULE_ALIAS("platform:txx9dmac-chan");
