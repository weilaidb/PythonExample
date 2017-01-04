#define LTQ_DMA_CTRL		0x10
#define LTQ_DMA_CPOLL		0x14
#define LTQ_DMA_CS		0x18
#define LTQ_DMA_CCTRL		0x1C
#define LTQ_DMA_CDBA		0x20
#define LTQ_DMA_CDLEN		0x24
#define LTQ_DMA_CIS		0x28
#define LTQ_DMA_CIE		0x2C
#define LTQ_DMA_PS		0x40
#define LTQ_DMA_PCTRL		0x44
#define LTQ_DMA_IRNEN		0xf4
#define DMA_DESCPT		BIT(3)
#define DMA_TX			BIT(8)
#define DMA_CHAN_ON		BIT(0)
#define DMA_PDEN		BIT(6)
#define DMA_CHAN_RST		BIT(1)
#define DMA_RESET		BIT(0)
#define DMA_IRQ_ACK		0x7e
#define DMA_POLL		BIT(31)
#define DMA_CLK_DIV4		BIT(6)
#define DMA_2W_BURST		BIT(1)
#define DMA_MAX_CHANNEL		20
#define DMA_ETOP_ENDIANESS	(0xf << 8)
#define DMA_WEIGHT	(BIT(17) | BIT(16))
#define ltq_dma_r32(x)			ltq_r32(ltq_dma_membase + (x))
#define ltq_dma_w32(x, y)		ltq_w32(x, ltq_dma_membase + (y))
#define ltq_dma_w32_mask(x, y, z)	ltq_w32_mask(x, y, \
ltq_dma_membase + (z))
static struct resource ltq_dma_resource = ;
static void __iomem *ltq_dma_membase;
void
ltq_dma_enable_irq(struct ltq_dma_channel *ch)
EXPORT_SYMBOL_GPL(ltq_dma_enable_irq);
void
ltq_dma_disable_irq(struct ltq_dma_channel *ch)
EXPORT_SYMBOL_GPL(ltq_dma_disable_irq);
void
ltq_dma_ack_irq(struct ltq_dma_channel *ch)
EXPORT_SYMBOL_GPL(ltq_dma_ack_irq);
void
ltq_dma_open(struct ltq_dma_channel *ch)
EXPORT_SYMBOL_GPL(ltq_dma_open);
void
ltq_dma_close(struct ltq_dma_channel *ch)
EXPORT_SYMBOL_GPL(ltq_dma_close);
static void
ltq_dma_alloc(struct ltq_dma_channel *ch)
void
ltq_dma_alloc_tx(struct ltq_dma_channel *ch)
EXPORT_SYMBOL_GPL(ltq_dma_alloc_tx);
void
ltq_dma_alloc_rx(struct ltq_dma_channel *ch)
EXPORT_SYMBOL_GPL(ltq_dma_alloc_rx);
void
ltq_dma_free(struct ltq_dma_channel *ch)
EXPORT_SYMBOL_GPL(ltq_dma_free);
void
ltq_dma_init_port(int p)
EXPORT_SYMBOL_GPL(ltq_dma_init_port);
int __init
ltq_dma_init(void)
postcore_initcall(ltq_dma_init);
