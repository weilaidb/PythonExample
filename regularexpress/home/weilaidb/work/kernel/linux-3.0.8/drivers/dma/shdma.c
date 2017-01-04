enum sh_dmae_desc_status ;
#define NR_DESCS_PER_CHANNEL 32
#define LOG2_DEFAULT_XFER_SIZE	2
static DEFINE_SPINLOCK(sh_dmae_lock);
static LIST_HEAD(sh_dmae_devices);
static unsigned long sh_dmae_slave_used[BITS_TO_LONGS(SH_DMA_SLAVE_NUMBER)];
static void sh_dmae_chan_ld_cleanup(struct sh_dmae_chan *sh_chan, bool all);
static void sh_dmae_writel(struct sh_dmae_chan *sh_dc, u32 data, u32 reg)
static u32 sh_dmae_readl(struct sh_dmae_chan *sh_dc, u32 reg)
static u16 dmaor_read(struct sh_dmae_device *shdev)
static void dmaor_write(struct sh_dmae_device *shdev, u16 data)
static void sh_dmae_ctl_stop(struct sh_dmae_device *shdev)
static int sh_dmae_rst(struct sh_dmae_device *shdev)
static bool dmae_is_busy(struct sh_dmae_chan *sh_chan)
static unsigned int calc_xmit_shift(struct sh_dmae_chan *sh_chan, u32 chcr)
static u32 log2size_to_chcr(struct sh_dmae_chan *sh_chan, int l2size)
static void dmae_set_reg(struct sh_dmae_chan *sh_chan, struct sh_dmae_regs *hw)
static void dmae_start(struct sh_dmae_chan *sh_chan)
static void dmae_halt(struct sh_dmae_chan *sh_chan)
static void dmae_init(struct sh_dmae_chan *sh_chan)
static int dmae_set_chcr(struct sh_dmae_chan *sh_chan, u32 val)
static int dmae_set_dmars(struct sh_dmae_chan *sh_chan, u16 val)
static dma_cookie_t sh_dmae_tx_submit(struct dma_async_tx_descriptor *tx)
static struct sh_desc *sh_dmae_get_desc(struct sh_dmae_chan *sh_chan)
static const struct sh_dmae_slave_config *sh_dmae_find_slave(
struct sh_dmae_chan *sh_chan, struct sh_dmae_slave *param)
static int sh_dmae_alloc_chan_resources(struct dma_chan *chan)
static void sh_dmae_free_chan_resources(struct dma_chan *chan)
static struct sh_desc *sh_dmae_add_desc(struct sh_dmae_chan *sh_chan,
unsigned long flags, dma_addr_t *dest, dma_addr_t *src, size_t *len,
struct sh_desc **first, enum dma_data_direction direction)
static struct dma_async_tx_descriptor *sh_dmae_prep_sg(struct sh_dmae_chan *sh_chan,
struct scatterlist *sgl, unsigned int sg_len, dma_addr_t *addr,
enum dma_data_direction direction, unsigned long flags)
static struct dma_async_tx_descriptor *sh_dmae_prep_memcpy(
struct dma_chan *chan, dma_addr_t dma_dest, dma_addr_t dma_src,
size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *sh_dmae_prep_slave_sg(
struct dma_chan *chan, struct scatterlist *sgl, unsigned int sg_len,
enum dma_data_direction direction, unsigned long flags)
static int sh_dmae_control(struct dma_chan *chan, enum dma_ctrl_cmd cmd,
unsigned long arg)
static dma_async_tx_callback __ld_cleanup(struct sh_dmae_chan *sh_chan, bool all)
static void sh_dmae_chan_ld_cleanup(struct sh_dmae_chan *sh_chan, bool all)
static void sh_chan_xfer_ld_queue(struct sh_dmae_chan *sh_chan)
static void sh_dmae_memcpy_issue_pending(struct dma_chan *chan)
static enum dma_status sh_dmae_tx_status(struct dma_chan *chan,
dma_cookie_t cookie,
struct dma_tx_state *txstate)
static irqreturn_t sh_dmae_interrupt(int irq, void *data)
static bool sh_dmae_reset(struct sh_dmae_device *shdev)
static irqreturn_t sh_dmae_err(int irq, void *data)
static void dmae_do_tasklet(unsigned long data)
static bool sh_dmae_nmi_notify(struct sh_dmae_device *shdev)
static int sh_dmae_nmi_handler(struct notifier_block *self,
unsigned long cmd, void *data)
static struct notifier_block sh_dmae_nmi_notifier __read_mostly = ;
static int __devinit sh_dmae_chan_probe(struct sh_dmae_device *shdev, int id,
int irq, unsigned long flags)
static void sh_dmae_chan_remove(struct sh_dmae_device *shdev)
static int __init sh_dmae_probe(struct platform_device *pdev)
static int __exit sh_dmae_remove(struct platform_device *pdev)
static void sh_dmae_shutdown(struct platform_device *pdev)
static int sh_dmae_runtime_suspend(struct device *dev)
static int sh_dmae_runtime_resume(struct device *dev)
static int sh_dmae_suspend(struct device *dev)
static int sh_dmae_resume(struct device *dev)
#define sh_dmae_suspend NULL
#define sh_dmae_resume NULL
const struct dev_pm_ops sh_dmae_pm = ;
static struct platform_driver sh_dmae_driver = ;
static int __init sh_dmae_init(void)
module_init(sh_dmae_init);
static void __exit sh_dmae_exit(void)
module_exit(sh_dmae_exit);
MODULE_AUTHOR("Nobuhiro Iwamatsu <iwamatsu.nobuhiro@renesas.com>");
MODULE_DESCRIPTION("Renesas SH DMA Engine driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:sh-dma-engine");
