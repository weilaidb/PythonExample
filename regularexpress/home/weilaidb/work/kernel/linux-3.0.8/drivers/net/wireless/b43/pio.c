static u16 generate_cookie(struct b43_pio_txqueue *q,
struct b43_pio_txpacket *pack)
static
struct b43_pio_txqueue *parse_cookie(struct b43_wldev *dev,
u16 cookie,
struct b43_pio_txpacket **pack)
static u16 index_to_pioqueue_base(struct b43_wldev *dev,
unsigned int index)
static u16 pio_txqueue_offset(struct b43_wldev *dev)
static u16 pio_rxqueue_offset(struct b43_wldev *dev)
static struct b43_pio_txqueue *b43_setup_pioqueue_tx(struct b43_wldev *dev,
unsigned int index)
static struct b43_pio_rxqueue *b43_setup_pioqueue_rx(struct b43_wldev *dev,
unsigned int index)
static void b43_pio_cancel_tx_packets(struct b43_pio_txqueue *q)
static void b43_destroy_pioqueue_tx(struct b43_pio_txqueue *q,
const char *name)
static void b43_destroy_pioqueue_rx(struct b43_pio_rxqueue *q,
const char *name)
#define destroy_queue_tx(pio, queue) do  while (0)
#define destroy_queue_rx(pio, queue) do  while (0)
void b43_pio_free(struct b43_wldev *dev)
int b43_pio_init(struct b43_wldev *dev)
static struct b43_pio_txqueue *select_queue_by_priority(struct b43_wldev *dev,
u8 queue_prio)
static u16 tx_write_2byte_queue(struct b43_pio_txqueue *q,
u16 ctl,
const void *_data,
unsigned int data_len)
static void pio_tx_frame_2byte_queue(struct b43_pio_txpacket *pack,
const u8 *hdr, unsigned int hdrlen)
static u32 tx_write_4byte_queue(struct b43_pio_txqueue *q,
u32 ctl,
const void *_data,
unsigned int data_len)
static void pio_tx_frame_4byte_queue(struct b43_pio_txpacket *pack,
const u8 *hdr, unsigned int hdrlen)
static int pio_tx_frame(struct b43_pio_txqueue *q,
struct sk_buff *skb)
int b43_pio_tx(struct b43_wldev *dev, struct sk_buff *skb)
void b43_pio_handle_txstatus(struct b43_wldev *dev,
const struct b43_txstatus *status)
static bool pio_rx_frame(struct b43_pio_rxqueue *q)
void b43_pio_rx(struct b43_pio_rxqueue *q)
static void b43_pio_tx_suspend_queue(struct b43_pio_txqueue *q)
static void b43_pio_tx_resume_queue(struct b43_pio_txqueue *q)
void b43_pio_tx_suspend(struct b43_wldev *dev)
void b43_pio_tx_resume(struct b43_wldev *dev)
