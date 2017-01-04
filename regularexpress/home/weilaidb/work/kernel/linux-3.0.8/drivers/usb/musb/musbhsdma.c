static int dma_controller_start(struct dma_controller *c)
static void dma_channel_release(struct dma_channel *channel);
static int dma_controller_stop(struct dma_controller *c)
static struct dma_channel *dma_channel_allocate(struct dma_controller *c,
struct musb_hw_ep *hw_ep, u8 transmit)
static void dma_channel_release(struct dma_channel *channel)
static void configure_channel(struct dma_channel *channel,
u16 packet_sz, u8 mode,
dma_addr_t dma_addr, u32 len)
static int dma_channel_program(struct dma_channel *channel,
u16 packet_sz, u8 mode,
dma_addr_t dma_addr, u32 len)
static int dma_channel_abort(struct dma_channel *channel)
static irqreturn_t dma_controller_irq(int irq, void *private_data)
void dma_controller_destroy(struct dma_controller *c)
struct dma_controller *__init
dma_controller_create(struct musb *musb, void __iomem *base)
