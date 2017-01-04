static struct dma_channel  dma_channels[MAX_DMA_CHANNELS];
static struct ll_pool  ll_pool;
static DEFINE_SPINLOCK(ll_lock);
struct pnx4008_dma_ll *pnx4008_alloc_ll_entry(dma_addr_t * ll_dma)
EXPORT_SYMBOL_GPL(pnx4008_alloc_ll_entry);
void pnx4008_free_ll_entry(struct pnx4008_dma_ll * ll, dma_addr_t ll_dma)
EXPORT_SYMBOL_GPL(pnx4008_free_ll_entry);
void pnx4008_free_ll(u32 ll_dma, struct pnx4008_dma_ll * ll)
EXPORT_SYMBOL_GPL(pnx4008_free_ll);
static int dma_channels_requested = 0;
static inline void dma_increment_usage(void)
static inline void dma_decrement_usage(void)
static DEFINE_SPINLOCK(dma_lock);
static inline void pnx4008_dma_lock(void)
static inline void pnx4008_dma_unlock(void)
#define VALID_CHANNEL(c)	(((c) >= 0) && ((c) < MAX_DMA_CHANNELS))
int pnx4008_request_channel(char *name, int ch,
void (*irq_handler) (int, int, void *), void *data)
EXPORT_SYMBOL_GPL(pnx4008_request_channel);
void pnx4008_free_channel(int ch)
EXPORT_SYMBOL_GPL(pnx4008_free_channel);
int pnx4008_config_dma(int ahb_m1_be, int ahb_m2_be, int enable)
EXPORT_SYMBOL_GPL(pnx4008_config_dma);
int pnx4008_dma_pack_control(const struct pnx4008_dma_ch_ctrl * ch_ctrl,
unsigned long *ctrl)
EXPORT_SYMBOL_GPL(pnx4008_dma_pack_control);
int pnx4008_dma_parse_control(unsigned long ctrl,
struct pnx4008_dma_ch_ctrl * ch_ctrl)
EXPORT_SYMBOL_GPL(pnx4008_dma_parse_control);
int pnx4008_dma_pack_config(const struct pnx4008_dma_ch_config * ch_cfg,
unsigned long *cfg)
EXPORT_SYMBOL_GPL(pnx4008_dma_pack_config);
int pnx4008_dma_parse_config(unsigned long cfg,
struct pnx4008_dma_ch_config * ch_cfg)
EXPORT_SYMBOL_GPL(pnx4008_dma_parse_config);
void pnx4008_dma_split_head_entry(struct pnx4008_dma_config * config,
struct pnx4008_dma_ch_ctrl * ctrl)
EXPORT_SYMBOL_GPL(pnx4008_dma_split_head_entry);
void pnx4008_dma_split_ll_entry(struct pnx4008_dma_ll * cur_ll,
struct pnx4008_dma_ch_ctrl * ctrl)
EXPORT_SYMBOL_GPL(pnx4008_dma_split_ll_entry);
int pnx4008_config_channel(int ch, struct pnx4008_dma_config * config)
EXPORT_SYMBOL_GPL(pnx4008_config_channel);
int pnx4008_channel_get_config(int ch, struct pnx4008_dma_config * config)
EXPORT_SYMBOL_GPL(pnx4008_channel_get_config);
int pnx4008_dma_ch_enable(int ch)
EXPORT_SYMBOL_GPL(pnx4008_dma_ch_enable);
int pnx4008_dma_ch_disable(int ch)
EXPORT_SYMBOL_GPL(pnx4008_dma_ch_disable);
int pnx4008_dma_ch_enabled(int ch)
EXPORT_SYMBOL_GPL(pnx4008_dma_ch_enabled);
static irqreturn_t dma_irq_handler(int irq, void *dev_id)
static int __init pnx4008_dma_init(void)
arch_initcall(pnx4008_dma_init);
