struct g2_channel  __attribute__ ((aligned(32)));
struct g2_status  __attribute__ ((aligned(16)));
struct g2_dma_info  __attribute__ ((aligned(256)));
static volatile struct g2_dma_info *g2_dma = (volatile struct g2_dma_info *)0xa05f7800;
#define g2_bytes_remaining(i) \
((g2_dma->channel[i].size - \
g2_dma->status[i].size) & 0x0fffffff)
static irqreturn_t g2_dma_interrupt(int irq, void *dev_id)
static int g2_enable_dma(struct dma_channel *chan)
static int g2_disable_dma(struct dma_channel *chan)
static int g2_xfer_dma(struct dma_channel *chan)
static int g2_get_residue(struct dma_channel *chan)
static struct dma_ops g2_dma_ops = ;
static struct dma_info g2_dma_info = ;
static int __init g2_dma_init(void)
static void __exit g2_dma_exit(void)
subsys_initcall(g2_dma_init);
module_exit(g2_dma_exit);
MODULE_AUTHOR("Paul Mundt <lethal@linux-sh.org>");
MODULE_DESCRIPTION("G2 bus DMA driver");
MODULE_LICENSE("GPL");
