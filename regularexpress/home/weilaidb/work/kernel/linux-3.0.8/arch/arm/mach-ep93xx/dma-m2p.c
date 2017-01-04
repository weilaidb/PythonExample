#define pr_fmt(fmt) "ep93xx " KBUILD_MODNAME ": " fmt
#define M2P_CONTROL			0x00
#define  M2P_CONTROL_STALL_IRQ_EN	(1 << 0)
#define  M2P_CONTROL_NFB_IRQ_EN		(1 << 1)
#define  M2P_CONTROL_ERROR_IRQ_EN	(1 << 3)
#define  M2P_CONTROL_ENABLE		(1 << 4)
#define M2P_INTERRUPT			0x04
#define  M2P_INTERRUPT_STALL		(1 << 0)
#define  M2P_INTERRUPT_NFB		(1 << 1)
#define  M2P_INTERRUPT_ERROR		(1 << 3)
#define M2P_PPALLOC			0x08
#define M2P_STATUS			0x0c
#define M2P_REMAIN			0x14
#define M2P_MAXCNT0			0x20
#define M2P_BASE0			0x24
#define M2P_MAXCNT1			0x30
#define M2P_BASE1			0x34
#define STATE_IDLE	0
#define STATE_STALL	1
#define STATE_ON	2
#define STATE_NEXT	3
struct m2p_channel ;
static struct m2p_channel m2p_rx[] = ;
static struct m2p_channel m2p_tx[] = ;
static void feed_buf(struct m2p_channel *ch, struct ep93xx_dma_buffer *buf)
static void choose_buffer_xfer(struct m2p_channel *ch)
static void choose_buffer_next(struct m2p_channel *ch)
static inline void m2p_set_control(struct m2p_channel *ch, u32 v)
static inline int m2p_channel_state(struct m2p_channel *ch)
static irqreturn_t m2p_irq(int irq, void *dev_id)
static struct m2p_channel *find_free_channel(struct ep93xx_dma_m2p_client *cl)
static void channel_enable(struct m2p_channel *ch)
static void channel_disable(struct m2p_channel *ch)
int ep93xx_dma_m2p_client_register(struct ep93xx_dma_m2p_client *cl)
EXPORT_SYMBOL_GPL(ep93xx_dma_m2p_client_register);
void ep93xx_dma_m2p_client_unregister(struct ep93xx_dma_m2p_client *cl)
EXPORT_SYMBOL_GPL(ep93xx_dma_m2p_client_unregister);
void ep93xx_dma_m2p_submit(struct ep93xx_dma_m2p_client *cl,
struct ep93xx_dma_buffer *buf)
EXPORT_SYMBOL_GPL(ep93xx_dma_m2p_submit);
void ep93xx_dma_m2p_submit_recursive(struct ep93xx_dma_m2p_client *cl,
struct ep93xx_dma_buffer *buf)
EXPORT_SYMBOL_GPL(ep93xx_dma_m2p_submit_recursive);
void ep93xx_dma_m2p_flush(struct ep93xx_dma_m2p_client *cl)
EXPORT_SYMBOL_GPL(ep93xx_dma_m2p_flush);
static int init_channel(struct m2p_channel *ch)
static int __init ep93xx_dma_m2p_init(void)
arch_initcall(ep93xx_dma_m2p_init);
