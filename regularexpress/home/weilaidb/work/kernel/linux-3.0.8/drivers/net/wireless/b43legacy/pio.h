#define B43legacy_PIO_H_
#define B43legacy_PIO_TXCTL		0x00
#define B43legacy_PIO_TXDATA		0x02
#define B43legacy_PIO_TXQBUFSIZE	0x04
#define B43legacy_PIO_RXCTL		0x08
#define B43legacy_PIO_RXDATA		0x0A
#define B43legacy_PIO_TXCTL_WRITELO	(1 << 0)
#define B43legacy_PIO_TXCTL_WRITEHI	(1 << 1)
#define B43legacy_PIO_TXCTL_COMPLETE	(1 << 2)
#define B43legacy_PIO_TXCTL_INIT	(1 << 3)
#define B43legacy_PIO_TXCTL_SUSPEND	(1 << 7)
#define B43legacy_PIO_RXCTL_DATAAVAILABLE	(1 << 0)
#define B43legacy_PIO_RXCTL_READY		(1 << 1)
#define B43legacy_PIO_MAXTXDEVQPACKETS	31
#define B43legacy_PIO_TXQADJUST		80
#define B43legacy_PIO_MAXTXPACKETS	256
struct b43legacy_pioqueue;
struct b43legacy_xmitstatus;
struct b43legacy_pio_txpacket ;
#define pio_txpacket_getindex(packet) ((int)((packet) - \
(packet)->queue->tx_packets_cache))
struct b43legacy_pioqueue ;
static inline
u16 b43legacy_pio_read(struct b43legacy_pioqueue *queue,
u16 offset)
static inline
void b43legacy_pio_write(struct b43legacy_pioqueue *queue,
u16 offset, u16 value)
int b43legacy_pio_init(struct b43legacy_wldev *dev);
void b43legacy_pio_free(struct b43legacy_wldev *dev);
int b43legacy_pio_tx(struct b43legacy_wldev *dev,
struct sk_buff *skb);
void b43legacy_pio_handle_txstatus(struct b43legacy_wldev *dev,
const struct b43legacy_txstatus *status);
void b43legacy_pio_rx(struct b43legacy_pioqueue *queue);
void b43legacy_pio_tx_suspend(struct b43legacy_pioqueue *queue);
void b43legacy_pio_tx_resume(struct b43legacy_pioqueue *queue);
void b43legacy_pio_freeze_txqueues(struct b43legacy_wldev *dev);
void b43legacy_pio_thaw_txqueues(struct b43legacy_wldev *dev);
static inline
int b43legacy_pio_init(struct b43legacy_wldev *dev)
static inline
void b43legacy_pio_free(struct b43legacy_wldev *dev)
static inline
int b43legacy_pio_tx(struct b43legacy_wldev *dev,
struct sk_buff *skb)
static inline
void b43legacy_pio_handle_txstatus(struct b43legacy_wldev *dev,
const struct b43legacy_txstatus *status)
static inline
void b43legacy_pio_rx(struct b43legacy_pioqueue *queue)
static inline
void b43legacy_pio_tx_suspend(struct b43legacy_pioqueue *queue)
static inline
void b43legacy_pio_tx_resume(struct b43legacy_pioqueue *queue)
static inline
void b43legacy_pio_freeze_txqueues(struct b43legacy_wldev *dev)
static inline
void b43legacy_pio_thaw_txqueues(struct b43legacy_wldev *dev)
