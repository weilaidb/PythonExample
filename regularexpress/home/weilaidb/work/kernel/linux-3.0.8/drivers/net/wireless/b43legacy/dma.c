static
struct b43legacy_dmadesc_generic *op32_idx2desc(
struct b43legacy_dmaring *ring,
int slot,
struct b43legacy_dmadesc_meta **meta)
static void op32_fill_descriptor(struct b43legacy_dmaring *ring,
struct b43legacy_dmadesc_generic *desc,
dma_addr_t dmaaddr, u16 bufsize,
int start, int end, int irq)
static void op32_poke_tx(struct b43legacy_dmaring *ring, int slot)
static void op32_tx_suspend(struct b43legacy_dmaring *ring)
static void op32_tx_resume(struct b43legacy_dmaring *ring)
static int op32_get_current_rxslot(struct b43legacy_dmaring *ring)
static void op32_set_current_rxslot(struct b43legacy_dmaring *ring,
int slot)
static const struct b43legacy_dma_ops dma32_ops = ;
static
struct b43legacy_dmadesc_generic *op64_idx2desc(
struct b43legacy_dmaring *ring,
int slot,
struct b43legacy_dmadesc_meta
**meta)
static void op64_fill_descriptor(struct b43legacy_dmaring *ring,
struct b43legacy_dmadesc_generic *desc,
dma_addr_t dmaaddr, u16 bufsize,
int start, int end, int irq)
static void op64_poke_tx(struct b43legacy_dmaring *ring, int slot)
static void op64_tx_suspend(struct b43legacy_dmaring *ring)
static void op64_tx_resume(struct b43legacy_dmaring *ring)
static int op64_get_current_rxslot(struct b43legacy_dmaring *ring)
static void op64_set_current_rxslot(struct b43legacy_dmaring *ring,
int slot)
static const struct b43legacy_dma_ops dma64_ops = ;
static inline int free_slots(struct b43legacy_dmaring *ring)
static inline int next_slot(struct b43legacy_dmaring *ring, int slot)
static inline int prev_slot(struct b43legacy_dmaring *ring, int slot)
static void update_max_used_slots(struct b43legacy_dmaring *ring,
int current_used_slots)
static inline
void update_max_used_slots(struct b43legacy_dmaring *ring,
int current_used_slots)
static inline
int request_slot(struct b43legacy_dmaring *ring)
static struct b43legacy_dmaring *priority_to_txring(
struct b43legacy_wldev *dev,
int queue_priority)
static inline int txring_to_priority(struct b43legacy_dmaring *ring)
static u16 b43legacy_dmacontroller_base(enum b43legacy_dmatype type,
int controller_idx)
static inline
dma_addr_t map_descbuffer(struct b43legacy_dmaring *ring,
unsigned char *buf,
size_t len,
int tx)
static inline
void unmap_descbuffer(struct b43legacy_dmaring *ring,
dma_addr_t addr,
size_t len,
int tx)
static inline
void sync_descbuffer_for_cpu(struct b43legacy_dmaring *ring,
dma_addr_t addr,
size_t len)
static inline
void sync_descbuffer_for_device(struct b43legacy_dmaring *ring,
dma_addr_t addr,
size_t len)
static inline
void free_descriptor_buffer(struct b43legacy_dmaring *ring,
struct b43legacy_dmadesc_meta *meta,
int irq_context)
static int alloc_ringmemory(struct b43legacy_dmaring *ring)
static void free_ringmemory(struct b43legacy_dmaring *ring)
static int b43legacy_dmacontroller_rx_reset(struct b43legacy_wldev *dev,
u16 mmio_base,
enum b43legacy_dmatype type)
static int b43legacy_dmacontroller_tx_reset(struct b43legacy_wldev *dev,
u16 mmio_base,
enum b43legacy_dmatype type)
static bool b43legacy_dma_mapping_error(struct b43legacy_dmaring *ring,
dma_addr_t addr,
size_t buffersize,
bool dma_to_device)
static int setup_rx_descbuffer(struct b43legacy_dmaring *ring,
struct b43legacy_dmadesc_generic *desc,
struct b43legacy_dmadesc_meta *meta,
gfp_t gfp_flags)
static int alloc_initial_descbuffers(struct b43legacy_dmaring *ring)
static int dmacontroller_setup(struct b43legacy_dmaring *ring)
static void dmacontroller_cleanup(struct b43legacy_dmaring *ring)
static void free_all_descbuffers(struct b43legacy_dmaring *ring)
static u64 supported_dma_mask(struct b43legacy_wldev *dev)
static enum b43legacy_dmatype dma_mask_to_engine_type(u64 dmamask)
static
struct b43legacy_dmaring *b43legacy_setup_dmaring(struct b43legacy_wldev *dev,
int controller_index,
int for_tx,
enum b43legacy_dmatype type)
static void b43legacy_destroy_dmaring(struct b43legacy_dmaring *ring)
void b43legacy_dma_free(struct b43legacy_wldev *dev)
static int b43legacy_dma_set_mask(struct b43legacy_wldev *dev, u64 mask)
int b43legacy_dma_init(struct b43legacy_wldev *dev)
static u16 generate_cookie(struct b43legacy_dmaring *ring,
int slot)
static
struct b43legacy_dmaring *parse_cookie(struct b43legacy_wldev *dev,
u16 cookie, int *slot)
static int dma_tx_fragment(struct b43legacy_dmaring *ring,
struct sk_buff **in_skb)
static inline
int should_inject_overflow(struct b43legacy_dmaring *ring)
int b43legacy_dma_tx(struct b43legacy_wldev *dev,
struct sk_buff *skb)
void b43legacy_dma_handle_txstatus(struct b43legacy_wldev *dev,
const struct b43legacy_txstatus *status)
static void dma_rx(struct b43legacy_dmaring *ring,
int *slot)
void b43legacy_dma_rx(struct b43legacy_dmaring *ring)
static void b43legacy_dma_tx_suspend_ring(struct b43legacy_dmaring *ring)
static void b43legacy_dma_tx_resume_ring(struct b43legacy_dmaring *ring)
void b43legacy_dma_tx_suspend(struct b43legacy_wldev *dev)
void b43legacy_dma_tx_resume(struct b43legacy_wldev *dev)
