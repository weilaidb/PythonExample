#define B43_DMA_H_
#define B43_DMAIRQ_FATALMASK	((1 << 10) | (1 << 11) | (1 << 12) \
| (1 << 14) | (1 << 15))
#define B43_DMAIRQ_NONFATALMASK	(1 << 13)
#define B43_DMAIRQ_RX_DONE		(1 << 16)
#define B43_DMA32_TXCTL				0x00
#define		B43_DMA32_TXENABLE			0x00000001
#define		B43_DMA32_TXSUSPEND			0x00000002
#define		B43_DMA32_TXLOOPBACK		0x00000004
#define		B43_DMA32_TXFLUSH			0x00000010
#define		B43_DMA32_TXADDREXT_MASK		0x00030000
#define		B43_DMA32_TXADDREXT_SHIFT		16
#define B43_DMA32_TXRING				0x04
#define B43_DMA32_TXINDEX				0x08
#define B43_DMA32_TXSTATUS				0x0C
#define		B43_DMA32_TXDPTR			0x00000FFF
#define		B43_DMA32_TXSTATE			0x0000F000
#define			B43_DMA32_TXSTAT_DISABLED	0x00000000
#define			B43_DMA32_TXSTAT_ACTIVE	0x00001000
#define			B43_DMA32_TXSTAT_IDLEWAIT	0x00002000
#define			B43_DMA32_TXSTAT_STOPPED	0x00003000
#define			B43_DMA32_TXSTAT_SUSP	0x00004000
#define		B43_DMA32_TXERROR			0x000F0000
#define			B43_DMA32_TXERR_NOERR	0x00000000
#define			B43_DMA32_TXERR_PROT	0x00010000
#define			B43_DMA32_TXERR_UNDERRUN	0x00020000
#define			B43_DMA32_TXERR_BUFREAD	0x00030000
#define			B43_DMA32_TXERR_DESCREAD	0x00040000
#define		B43_DMA32_TXACTIVE			0xFFF00000
#define B43_DMA32_RXCTL				0x10
#define		B43_DMA32_RXENABLE			0x00000001
#define		B43_DMA32_RXFROFF_MASK		0x000000FE
#define		B43_DMA32_RXFROFF_SHIFT		1
#define		B43_DMA32_RXDIRECTFIFO		0x00000100
#define		B43_DMA32_RXADDREXT_MASK		0x00030000
#define		B43_DMA32_RXADDREXT_SHIFT		16
#define B43_DMA32_RXRING				0x14
#define B43_DMA32_RXINDEX				0x18
#define B43_DMA32_RXSTATUS				0x1C
#define		B43_DMA32_RXDPTR			0x00000FFF
#define		B43_DMA32_RXSTATE			0x0000F000
#define			B43_DMA32_RXSTAT_DISABLED	0x00000000
#define			B43_DMA32_RXSTAT_ACTIVE	0x00001000
#define			B43_DMA32_RXSTAT_IDLEWAIT	0x00002000
#define			B43_DMA32_RXSTAT_STOPPED	0x00003000
#define		B43_DMA32_RXERROR			0x000F0000
#define			B43_DMA32_RXERR_NOERR	0x00000000
#define			B43_DMA32_RXERR_PROT	0x00010000
#define			B43_DMA32_RXERR_OVERFLOW	0x00020000
#define			B43_DMA32_RXERR_BUFWRITE	0x00030000
#define			B43_DMA32_RXERR_DESCREAD	0x00040000
#define		B43_DMA32_RXACTIVE			0xFFF00000
struct b43_dmadesc32  __packed;
#define B43_DMA32_DCTL_BYTECNT		0x00001FFF
#define B43_DMA32_DCTL_ADDREXT_MASK		0x00030000
#define B43_DMA32_DCTL_ADDREXT_SHIFT	16
#define B43_DMA32_DCTL_DTABLEEND		0x10000000
#define B43_DMA32_DCTL_IRQ			0x20000000
#define B43_DMA32_DCTL_FRAMEEND		0x40000000
#define B43_DMA32_DCTL_FRAMESTART		0x80000000
#define B43_DMA64_TXCTL				0x00
#define		B43_DMA64_TXENABLE			0x00000001
#define		B43_DMA64_TXSUSPEND			0x00000002
#define		B43_DMA64_TXLOOPBACK		0x00000004
#define		B43_DMA64_TXFLUSH			0x00000010
#define		B43_DMA64_TXADDREXT_MASK		0x00030000
#define		B43_DMA64_TXADDREXT_SHIFT		16
#define B43_DMA64_TXINDEX				0x04
#define B43_DMA64_TXRINGLO				0x08
#define B43_DMA64_TXRINGHI				0x0C
#define B43_DMA64_TXSTATUS				0x10
#define		B43_DMA64_TXSTATDPTR		0x00001FFF
#define		B43_DMA64_TXSTAT			0xF0000000
#define			B43_DMA64_TXSTAT_DISABLED	0x00000000
#define			B43_DMA64_TXSTAT_ACTIVE	0x10000000
#define			B43_DMA64_TXSTAT_IDLEWAIT	0x20000000
#define			B43_DMA64_TXSTAT_STOPPED	0x30000000
#define			B43_DMA64_TXSTAT_SUSP	0x40000000
#define B43_DMA64_TXERROR				0x14
#define		B43_DMA64_TXERRDPTR			0x0001FFFF
#define		B43_DMA64_TXERR			0xF0000000
#define			B43_DMA64_TXERR_NOERR	0x00000000
#define			B43_DMA64_TXERR_PROT	0x10000000
#define			B43_DMA64_TXERR_UNDERRUN	0x20000000
#define			B43_DMA64_TXERR_TRANSFER	0x30000000
#define			B43_DMA64_TXERR_DESCREAD	0x40000000
#define			B43_DMA64_TXERR_CORE	0x50000000
#define B43_DMA64_RXCTL				0x20
#define		B43_DMA64_RXENABLE			0x00000001
#define		B43_DMA64_RXFROFF_MASK		0x000000FE
#define		B43_DMA64_RXFROFF_SHIFT		1
#define		B43_DMA64_RXDIRECTFIFO		0x00000100
#define		B43_DMA64_RXADDREXT_MASK		0x00030000
#define		B43_DMA64_RXADDREXT_SHIFT		16
#define B43_DMA64_RXINDEX				0x24
#define B43_DMA64_RXRINGLO				0x28
#define B43_DMA64_RXRINGHI				0x2C
#define B43_DMA64_RXSTATUS				0x30
#define		B43_DMA64_RXSTATDPTR		0x00001FFF
#define		B43_DMA64_RXSTAT			0xF0000000
#define			B43_DMA64_RXSTAT_DISABLED	0x00000000
#define			B43_DMA64_RXSTAT_ACTIVE	0x10000000
#define			B43_DMA64_RXSTAT_IDLEWAIT	0x20000000
#define			B43_DMA64_RXSTAT_STOPPED	0x30000000
#define			B43_DMA64_RXSTAT_SUSP	0x40000000
#define B43_DMA64_RXERROR				0x34
#define		B43_DMA64_RXERRDPTR			0x0001FFFF
#define		B43_DMA64_RXERR			0xF0000000
#define			B43_DMA64_RXERR_NOERR	0x00000000
#define			B43_DMA64_RXERR_PROT	0x10000000
#define			B43_DMA64_RXERR_UNDERRUN	0x20000000
#define			B43_DMA64_RXERR_TRANSFER	0x30000000
#define			B43_DMA64_RXERR_DESCREAD	0x40000000
#define			B43_DMA64_RXERR_CORE	0x50000000
struct b43_dmadesc64  __packed;
#define B43_DMA64_DCTL0_DTABLEEND		0x10000000
#define B43_DMA64_DCTL0_IRQ			0x20000000
#define B43_DMA64_DCTL0_FRAMEEND		0x40000000
#define B43_DMA64_DCTL0_FRAMESTART		0x80000000
#define B43_DMA64_DCTL1_BYTECNT		0x00001FFF
#define B43_DMA64_DCTL1_ADDREXT_MASK	0x00030000
#define B43_DMA64_DCTL1_ADDREXT_SHIFT	16
struct b43_dmadesc_generic  __packed;
#define B43_DMA_RINGMEMSIZE		PAGE_SIZE
#define B43_DMA0_RX_FRAMEOFFSET		30
#define B43_TXRING_SLOTS		256
#define B43_RXRING_SLOTS		64
#define B43_DMA0_RX_BUFFERSIZE		(B43_DMA0_RX_FRAMEOFFSET + IEEE80211_MAX_FRAME_LEN)
#define B43_DMA_PTR_POISON		((void *)ERR_PTR(-ENOMEM))
#define b43_dma_ptr_is_poisoned(ptr)	(unlikely((ptr) == B43_DMA_PTR_POISON))
struct sk_buff;
struct b43_private;
struct b43_txstatus;
struct b43_dmadesc_meta ;
struct b43_dmaring;
struct b43_dma_ops ;
enum b43_dmatype ;
struct b43_dmaring ;
static inline u32 b43_dma_read(struct b43_dmaring *ring, u16 offset)
static inline void b43_dma_write(struct b43_dmaring *ring, u16 offset, u32 value)
int b43_dma_init(struct b43_wldev *dev);
void b43_dma_free(struct b43_wldev *dev);
void b43_dma_tx_suspend(struct b43_wldev *dev);
void b43_dma_tx_resume(struct b43_wldev *dev);
int b43_dma_tx(struct b43_wldev *dev,
struct sk_buff *skb);
void b43_dma_handle_txstatus(struct b43_wldev *dev,
const struct b43_txstatus *status);
void b43_dma_rx(struct b43_dmaring *ring);
void b43_dma_direct_fifo_rx(struct b43_wldev *dev,
unsigned int engine_index, bool enable);