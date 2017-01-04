#if defined(DMAE1_IRQ)
#define NR_DMAE		2
#define NR_DMAE		1
static const char *dmae_name[] = ;
static inline unsigned int get_dmte_irq(unsigned int chan)
static unsigned int ts_shift[] = TS_SHIFT;
static inline unsigned int calc_xmit_shift(struct dma_channel *chan)
static irqreturn_t dma_tei(int irq, void *dev_id)
static int sh_dmac_request_dma(struct dma_channel *chan)
static void sh_dmac_free_dma(struct dma_channel *chan)
static int
sh_dmac_configure_channel(struct dma_channel *chan, unsigned long chcr)
static void sh_dmac_enable_dma(struct dma_channel *chan)
static void sh_dmac_disable_dma(struct dma_channel *chan)
static int sh_dmac_xfer_dma(struct dma_channel *chan)
static int sh_dmac_get_dma_residue(struct dma_channel *chan)
static inline int dmaor_reset(int no)
#if defined(CONFIG_CPU_SH4)
static irqreturn_t dma_err(int irq, void *dummy)
static struct dma_ops sh_dmac_ops = ;
static struct dma_info sh_dmac_info = ;
static unsigned int get_dma_error_irq(int n)
static int __init sh_dmac_init(void)
static void __exit sh_dmac_exit(void)
subsys_initcall(sh_dmac_init);
module_exit(sh_dmac_exit);
MODULE_AUTHOR("Takashi YOSHII, Paul Mundt, Andriy Skulysh");
MODULE_DESCRIPTION("SuperH On-Chip DMAC Support");
MODULE_LICENSE("GPL");
