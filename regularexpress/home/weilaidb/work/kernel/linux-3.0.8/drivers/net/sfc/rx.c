#define EFX_RX_BATCH  8
#define EFX_RX_HALF_PAGE ((PAGE_SIZE >> 1) - sizeof(struct efx_rx_page_state))
#define EFX_SKB_HEADERS  64u
static int rx_alloc_method = RX_ALLOC_METHOD_AUTO;
#define RX_ALLOC_LEVEL_GRO 0x2000
#define RX_ALLOC_LEVEL_MAX 0x3000
#define RX_ALLOC_FACTOR_GRO 1
#define RX_ALLOC_FACTOR_SKB (-2)
static unsigned int rx_refill_threshold = 90;
static unsigned int rx_refill_limit = 95;
#define EFX_RXD_HEAD_ROOM 2
static inline unsigned int efx_rx_buf_offset(struct efx_nic *efx,
struct efx_rx_buffer *buf)
static inline unsigned int efx_rx_buf_size(struct efx_nic *efx)
static u8 *efx_rx_buf_eh(struct efx_nic *efx, struct efx_rx_buffer *buf)
static inline u32 efx_rx_buf_hash(const u8 *eh)
static int efx_init_rx_buffers_skb(struct efx_rx_queue *rx_queue)
static int efx_init_rx_buffers_page(struct efx_rx_queue *rx_queue)
static void efx_unmap_rx_buffer(struct efx_nic *efx,
struct efx_rx_buffer *rx_buf)
static void efx_free_rx_buffer(struct efx_nic *efx,
struct efx_rx_buffer *rx_buf)
static void efx_fini_rx_buffer(struct efx_rx_queue *rx_queue,
struct efx_rx_buffer *rx_buf)
static void efx_resurrect_rx_buffer(struct efx_rx_queue *rx_queue,
struct efx_rx_buffer *rx_buf)
static void efx_recycle_rx_buffer(struct efx_channel *channel,
struct efx_rx_buffer *rx_buf)
void efx_fast_push_rx_descriptors(struct efx_rx_queue *rx_queue)
void efx_rx_slow_fill(unsigned long context)
static void efx_rx_packet__check_len(struct efx_rx_queue *rx_queue,
struct efx_rx_buffer *rx_buf,
int len, bool *discard,
bool *leak_packet)
static void efx_rx_packet_gro(struct efx_channel *channel,
struct efx_rx_buffer *rx_buf,
const u8 *eh, bool checksummed)
void efx_rx_packet(struct efx_rx_queue *rx_queue, unsigned int index,
unsigned int len, bool checksummed, bool discard)
void __efx_rx_packet(struct efx_channel *channel,
struct efx_rx_buffer *rx_buf, bool checksummed)
void efx_rx_strategy(struct efx_channel *channel)
int efx_probe_rx_queue(struct efx_rx_queue *rx_queue)
void efx_init_rx_queue(struct efx_rx_queue *rx_queue)
void efx_fini_rx_queue(struct efx_rx_queue *rx_queue)
void efx_remove_rx_queue(struct efx_rx_queue *rx_queue)
module_param(rx_alloc_method, int, 0644);
MODULE_PARM_DESC(rx_alloc_method, "Allocation method used for RX buffers");
module_param(rx_refill_threshold, uint, 0444);
MODULE_PARM_DESC(rx_refill_threshold,
"RX descriptor ring fast/slow fill threshold (%)");
