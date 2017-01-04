struct ux500_dma_channel ;
struct ux500_dma_controller ;
static void ux500_tx_work(struct work_struct *data)
static void ux500_rx_work(struct work_struct *data)
void ux500_dma_callback(void *private_data)
static bool ux500_configure_channel(struct dma_channel *channel,
u16 packet_sz, u8 mode,
dma_addr_t dma_addr, u32 len)
static struct dma_channel *ux500_dma_channel_allocate(struct dma_controller *c,
struct musb_hw_ep *hw_ep, u8 is_tx)
static void ux500_dma_channel_release(struct dma_channel *channel)
static int ux500_dma_is_compatible(struct dma_channel *channel,
u16 maxpacket, void *buf, u32 length)
static int ux500_dma_channel_program(struct dma_channel *channel,
u16 packet_sz, u8 mode,
dma_addr_t dma_addr, u32 len)
static int ux500_dma_channel_abort(struct dma_channel *channel)
static int ux500_dma_controller_stop(struct dma_controller *c)
static int ux500_dma_controller_start(struct dma_controller *c)
void dma_controller_destroy(struct dma_controller *c)
struct dma_controller *__init
dma_controller_create(struct musb *musb, void __iomem *base)
