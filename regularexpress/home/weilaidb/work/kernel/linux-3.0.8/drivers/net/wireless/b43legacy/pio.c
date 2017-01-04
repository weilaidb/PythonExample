static void tx_start(struct b43legacy_pioqueue *queue)
static void tx_octet(struct b43legacy_pioqueue *queue,
u8 octet)
static u16 tx_get_next_word(const u8 *txhdr,
const u8 *packet,
size_t txhdr_size,
unsigned int *pos)
static void tx_data(struct b43legacy_pioqueue *queue,
u8 *txhdr,
const u8 *packet,
unsigned int octets)
static void tx_complete(struct b43legacy_pioqueue *queue,
struct sk_buff *skb)
static u16 generate_cookie(struct b43legacy_pioqueue *queue,
struct b43legacy_pio_txpacket *packet)
static
struct b43legacy_pioqueue *parse_cookie(struct b43legacy_wldev *dev,
u16 cookie,
struct b43legacy_pio_txpacket **packet)
union txhdr_union ;
static int pio_tx_write_fragment(struct b43legacy_pioqueue *queue,
struct sk_buff *skb,
struct b43legacy_pio_txpacket *packet,
size_t txhdr_size)
static void free_txpacket(struct b43legacy_pio_txpacket *packet,
int irq_context)
static int pio_tx_packet(struct b43legacy_pio_txpacket *packet)
static void tx_tasklet(unsigned long d)
static void setup_txqueues(struct b43legacy_pioqueue *queue)
static
struct b43legacy_pioqueue *b43legacy_setup_pioqueue(struct b43legacy_wldev *dev,
u16 pio_mmio_base)
static void cancel_transfers(struct b43legacy_pioqueue *queue)
static void b43legacy_destroy_pioqueue(struct b43legacy_pioqueue *queue)
void b43legacy_pio_free(struct b43legacy_wldev *dev)
int b43legacy_pio_init(struct b43legacy_wldev *dev)
int b43legacy_pio_tx(struct b43legacy_wldev *dev,
struct sk_buff *skb)
void b43legacy_pio_handle_txstatus(struct b43legacy_wldev *dev,
const struct b43legacy_txstatus *status)
static void pio_rx_error(struct b43legacy_pioqueue *queue,
int clear_buffers,
const char *error)
void b43legacy_pio_rx(struct b43legacy_pioqueue *queue)
void b43legacy_pio_tx_suspend(struct b43legacy_pioqueue *queue)
void b43legacy_pio_tx_resume(struct b43legacy_pioqueue *queue)
void b43legacy_pio_freeze_txqueues(struct b43legacy_wldev *dev)
void b43legacy_pio_thaw_txqueues(struct b43legacy_wldev *dev)
