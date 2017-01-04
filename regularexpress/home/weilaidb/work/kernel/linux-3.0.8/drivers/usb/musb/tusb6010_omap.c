#define to_chdat(c)		((struct tusb_omap_dma_ch *)(c)->private_data)
#define MAX_DMAREQ		5
struct tusb_omap_dma_ch ;
struct tusb_omap_dma ;
static int tusb_omap_dma_start(struct dma_controller *c)
static int tusb_omap_dma_stop(struct dma_controller *c)
static inline int tusb_omap_use_shared_dmareq(struct tusb_omap_dma_ch *chdat)
static inline void tusb_omap_free_shared_dmareq(struct tusb_omap_dma_ch *chdat)
static void tusb_omap_dma_cb(int lch, u16 ch_status, void *data)
static int tusb_omap_dma_program(struct dma_channel *channel, u16 packet_sz,
u8 rndis_mode, dma_addr_t dma_addr, u32 len)
static int tusb_omap_dma_abort(struct dma_channel *channel)
static inline int tusb_omap_dma_allocate_dmareq(struct tusb_omap_dma_ch *chdat)
static inline void tusb_omap_dma_free_dmareq(struct tusb_omap_dma_ch *chdat)
static struct dma_channel *dma_channel_pool[MAX_DMAREQ];
static struct dma_channel *
tusb_omap_dma_allocate(struct dma_controller *c,
struct musb_hw_ep *hw_ep,
u8 tx)
static void tusb_omap_dma_release(struct dma_channel *channel)
void dma_controller_destroy(struct dma_controller *c)
struct dma_controller *__init
dma_controller_create(struct musb *musb, void __iomem *base)
