static unsigned int xfer_complete;
static int count;
static irqreturn_t pvr2_dma_interrupt(int irq, void *dev_id)
static int pvr2_request_dma(struct dma_channel *chan)
static int pvr2_get_dma_residue(struct dma_channel *chan)
static int pvr2_xfer_dma(struct dma_channel *chan)
static struct irqaction pvr2_dma_irq = ;
static struct dma_ops pvr2_dma_ops = ;
static struct dma_info pvr2_dma_info = ;
static int __init pvr2_dma_init(void)
static void __exit pvr2_dma_exit(void)
subsys_initcall(pvr2_dma_init);
module_exit(pvr2_dma_exit);
MODULE_AUTHOR("Paul Mundt <lethal@linux-sh.org>");
MODULE_DESCRIPTION("NEC PowerVR 2 DMA driver");
MODULE_LICENSE("GPL");
