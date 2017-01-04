#define TX_SLOTS_PER_FRAME	2
static
struct b43_dmadesc_generic *op32_idx2desc(struct b43_dmaring *ring,
int slot,
struct b43_dmadesc_meta **meta)
static void op32_fill_descriptor(struct b43_dmaring *ring,
struct b43_dmadesc_generic *desc,
dma_addr_t dmaaddr, u16 bufsize,
int start, int end, int irq)
static void op32_poke_tx(struct b43_dmaring *ring, int slot)
static void op32_tx_suspend(struct b43_dmaring *ring)
static void op32_tx_resume(struct b43_dmaring *ring)
static int op32_get_current_rxslot(struct b43_dmaring *ring)
static void op32_set_current_rxslot(struct b43_dmaring *ring, int slot)
static const struct b43_dma_ops dma32_ops = ;
static
struct b43_dmadesc_generic *op64_idx2desc(struct b43_dmaring *ring,
int slot,
struct b43_dmadesc_meta **meta)
static void op64_fill_descriptor(struct b43_dmaring *ring,
struct b43_dmadesc_generic *desc,
dma_addr_t dmaaddr, u16 bufsize,
int start, int end, int irq)
static void op64_poke_tx(struct b43_dmaring *ring, int slot)
static void op64_tx_suspend(struct b43_dmaring *ring)
static void op64_tx_resume(struct b43_dmaring *ring)
static int op64_get_current_rxslot(struct b43_dmaring *ring)
static void op64_set_current_rxslot(struct b43_dmaring *ring, int slot)
static const struct b43_dma_ops dma64_ops = ;
static inline int free_slots(struct b43_dmaring *ring)
static inline int next_slot(struct b43_dmaring *ring, int slot)
static inline int prev_slot(struct b43_dmaring *ring, int slot)
static void update_max_used_slots(struct b43_dmaring *ring,
int current_used_slots)
static inline
void update_max_used_slots(struct b43_dmaring *ring, int current_used_slots)
static inline int request_slot(struct b43_dmaring *ring)
static u16 b43_dmacontroller_base(enum b43_dmatype type, int controller_idx)
static inline
dma_addr_t map_descbuffer(struct b43_dmaring *ring,
unsigned char *buf, size_t len, int tx)
static inline
void unmap_descbuffer(struct b43_dmaring *ring,
dma_addr_t addr, size_t len, int tx)
static inline
void sync_descbuffer_for_cpu(struct b43_dmaring *ring,
dma_addr_t addr, size_t len)
static inline
void sync_descbuffer_for_device(struct b43_dmaring *ring,
dma_addr_t addr, size_t len)
static inline
void free_descriptor_buffer(struct b43_dmaring *ring,
struct b43_dmadesc_meta *meta)
static int alloc_ringmemory(struct b43_dmaring *ring)
static void free_ringmemory(struct b43_dmaring *ring)
static int b43_dmacontroller_rx_reset(struct b43_wldev *dev, u16 mmio_base,
enum b43_dmatype type)
static int b43_dmacontroller_tx_reset(struct b43_wldev *dev, u16 mmio_base,
enum b43_dmatype type)
static bool b43_dma_mapping_error(struct b43_dmaring *ring,
dma_addr_t addr,
size_t buffersize, bool dma_to_device)
static bool b43_rx_buffer_is_poisoned(struct b43_dmaring *ring, struct sk_buff *skb)
static void b43_poison_rx_buffer(struct b43_dmaring *ring, struct sk_buff *skb)
static int setup_rx_descbuffer(struct b43_dmaring *ring,
struct b43_dmadesc_generic *desc,
struct b43_dmadesc_meta *meta, gfp_t gfp_flags)
static int alloc_initial_descbuffers(struct b43_dmaring *ring)
static int dmacontroller_setup(struct b43_dmaring *ring)
static void dmacontroller_cleanup(struct b43_dmaring *ring)
static void free_all_descbuffers(struct b43_dmaring *ring)
static u64 supported_dma_mask(struct b43_wldev *dev)
static enum b43_dmatype dma_mask_to_engine_type(u64 dmamask)
static
struct b43_dmaring *b43_setup_dmaring(struct b43_wldev *dev,
int controller_index,
int for_tx,
enum b43_dmatype type)
#define divide(a, b)	()
#define modulo(a, b)	()
static void b43_destroy_dmaring(struct b43_dmaring *ring,
const char *ringname)
#define destroy_ring(dma, ring) do  while (0)
void b43_dma_free(struct b43_wldev *dev)
static int b43_dma_set_mask(struct b43_wldev *dev, u64 mask)
int b43_dma_init(struct b43_wldev *dev)
static u16 generate_cookie(struct b43_dmaring *ring, int slot)
static
struct b43_dmaring *parse_cookie(struct b43_wldev *dev, u16 cookie, int *slot)
static int dma_tx_fragment(struct b43_dmaring *ring,
struct sk_buff *skb)
static inline int should_inject_overflow(struct b43_dmaring *ring)
static struct b43_dmaring *select_ring_by_priority(struct b43_wldev *dev,
u8 queue_prio)
int b43_dma_tx(struct b43_wldev *dev, struct sk_buff *skb)
void b43_dma_handle_txstatus(struct b43_wldev *dev,
const struct b43_txstatus *status)
static void dma_rx(struct b43_dmaring *ring, int *slot)
void b43_dma_rx(struct b43_dmaring *ring)
static void b43_dma_tx_suspend_ring(struct b43_dmaring *ring)
static void b43_dma_tx_resume_ring(struct b43_dmaring *ring)
void b43_dma_tx_suspend(struct b43_wldev *dev)
void b43_dma_tx_resume(struct b43_wldev *dev)
static void direct_fifo_rx(struct b43_wldev *dev, enum b43_dmatype type,
u16 mmio_base, bool enable)
void b43_dma_direct_fifo_rx(struct b43_wldev *dev,
unsigned int engine_index, bool enable)
