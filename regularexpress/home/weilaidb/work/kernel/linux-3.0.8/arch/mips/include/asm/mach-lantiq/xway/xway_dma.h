#define LTQ_DMA_H__
#define LTQ_DESC_SIZE		0x08
#define LTQ_DESC_NUM		0x40
#define LTQ_DMA_OWN		BIT(31)
#define LTQ_DMA_C		BIT(30)
#define LTQ_DMA_SOP		BIT(29)
#define LTQ_DMA_EOP		BIT(28)
#define LTQ_DMA_TX_OFFSET(x)	((x & 0x1f) << 23)
#define LTQ_DMA_RX_OFFSET(x)	((x & 0x7) << 23)
#define LTQ_DMA_SIZE_MASK	(0xffff)
struct ltq_dma_desc ;
struct ltq_dma_channel ;
enum ;
extern void ltq_dma_enable_irq(struct ltq_dma_channel *ch);
extern void ltq_dma_disable_irq(struct ltq_dma_channel *ch);
extern void ltq_dma_ack_irq(struct ltq_dma_channel *ch);
extern void ltq_dma_open(struct ltq_dma_channel *ch);
extern void ltq_dma_close(struct ltq_dma_channel *ch);
extern void ltq_dma_alloc_tx(struct ltq_dma_channel *ch);
extern void ltq_dma_alloc_rx(struct ltq_dma_channel *ch);
extern void ltq_dma_free(struct ltq_dma_channel *ch);
extern void ltq_dma_init_port(int p);
