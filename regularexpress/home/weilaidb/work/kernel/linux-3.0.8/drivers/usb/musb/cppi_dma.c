#define NUM_TXCHAN_BD       64
#define NUM_RXCHAN_BD       64
static inline void cpu_drain_writebuffer(void)
static inline struct cppi_descriptor *cppi_bd_alloc(struct cppi_channel *c)
static inline void
cppi_bd_free(struct cppi_channel *c, struct cppi_descriptor *bd)
static void cppi_reset_rx(struct cppi_rx_stateram __iomem *rx)
static void cppi_reset_tx(struct cppi_tx_stateram __iomem *tx, u32 ptr)
static void __init cppi_pool_init(struct cppi *cppi, struct cppi_channel *c)
static int cppi_channel_abort(struct dma_channel *);
static void cppi_pool_free(struct cppi_channel *c)
static int __init cppi_controller_start(struct dma_controller *c)
static int cppi_controller_stop(struct dma_controller *c)
static inline void core_rxirq_disable(void __iomem *tibase, unsigned epnum)
static inline void core_rxirq_enable(void __iomem *tibase, unsigned epnum)
static struct dma_channel *
cppi_channel_allocate(struct dma_controller *c,
struct musb_hw_ep *ep, u8 transmit)
static void cppi_channel_release(struct dma_channel *channel)
static void
cppi_dump_rx(int level, struct cppi_channel *c, const char *tag)
static void
cppi_dump_tx(int level, struct cppi_channel *c, const char *tag)
static inline void
cppi_rndis_update(struct cppi_channel *c, int is_rx,
void __iomem *tibase, int is_rndis)
static void cppi_dump_rxbd(const char *tag, struct cppi_descriptor *bd)
static void cppi_dump_rxq(int level, const char *tag, struct cppi_channel *rx)
static inline int cppi_autoreq_update(struct cppi_channel *rx,
void __iomem *tibase, int onepacket, unsigned n_bds)
static void
cppi_next_tx_segment(struct musb *musb, struct cppi_channel *tx)
static int cppi_rx_rndis = 1;
module_param(cppi_rx_rndis, bool, 0);
MODULE_PARM_DESC(cppi_rx_rndis, "enable/disable RX RNDIS heuristic");
static void
cppi_next_rx_segment(struct musb *musb, struct cppi_channel *rx, int onepacket)
static int cppi_channel_program(struct dma_channel *ch,
u16 maxpacket, u8 mode,
dma_addr_t dma_addr, u32 len)
static bool cppi_rx_scan(struct cppi *cppi, unsigned ch)
irqreturn_t cppi_interrupt(int irq, void *dev_id)
struct dma_controller *__init
dma_controller_create(struct musb *musb, void __iomem *mregs)
void dma_controller_destroy(struct dma_controller *c)
static int cppi_channel_abort(struct dma_channel *channel)
