#define __IBM_NEWEMAC_CORE_H
#define NUM_TX_BUFF			CONFIG_IBM_NEW_EMAC_TXB
#define NUM_RX_BUFF			CONFIG_IBM_NEW_EMAC_RXB
#if NUM_TX_BUFF > 256 || NUM_RX_BUFF > 256
#error Invalid number of buffer descriptors (greater than 256)
#define EMAC_MIN_MTU			46
#define EMAC_MTU_OVERHEAD		(6 * 2 + 2 + 4)
static inline int emac_rx_size(int mtu)
#define EMAC_DMA_ALIGN(x)		ALIGN((x), dma_get_cache_alignment())
#define EMAC_RX_SKB_HEADROOM		\
EMAC_DMA_ALIGN(CONFIG_IBM_NEW_EMAC_RX_SKB_HEADROOM)
static inline int emac_rx_skb_size(int mtu)
static inline int emac_rx_sync_size(int mtu)
struct emac_stats ;
struct emac_error_stats ;
#define EMAC_ETHTOOL_STATS_COUNT	((sizeof(struct emac_stats) + \
sizeof(struct emac_error_stats)) \
/ sizeof(u64))
struct emac_instance ;
#define EMAC_FTR_NO_FLOW_CONTROL_40x	0x00000001
#define EMAC_FTR_EMAC4			0x00000002
#define EMAC_FTR_STACR_OC_INVERT	0x00000004
#define EMAC_FTR_HAS_TAH		0x00000008
#define EMAC_FTR_HAS_ZMII		0x00000010
#define EMAC_FTR_HAS_RGMII		0x00000020
#define EMAC_FTR_HAS_NEW_STACR		0x00000040
#define EMAC_FTR_440GX_PHY_CLK_FIX	0x00000080
#define EMAC_FTR_440EP_PHY_CLK_FIX	0x00000100
#define EMAC_FTR_EMAC4SYNC		0x00000200
#define EMAC_FTR_460EX_PHY_CLK_FIX	0x00000400
enum ;
static inline int emac_has_feature(struct emac_instance *dev,
unsigned long feature)
#define	EMAC4_XAHT_SLOTS_SHIFT		6
#define	EMAC4_XAHT_WIDTH_SHIFT		4
#define	EMAC4SYNC_XAHT_SLOTS_SHIFT	8
#define	EMAC4SYNC_XAHT_WIDTH_SHIFT	5
#define	EMAC_XAHT_SLOTS(dev)         	(1 << (dev)->xaht_slots_shift)
#define	EMAC_XAHT_WIDTH(dev)         	(1 << (dev)->xaht_width_shift)
#define	EMAC_XAHT_REGS(dev)          	(1 << ((dev)->xaht_slots_shift - \
(dev)->xaht_width_shift))
#define	EMAC_XAHT_CRC_TO_SLOT(dev, crc)			\
((EMAC_XAHT_SLOTS(dev) - 1) -			\
((crc) >> ((sizeof (u32) * BITS_PER_BYTE) -	\
(dev)->xaht_slots_shift)))
#define	EMAC_XAHT_SLOT_TO_REG(dev, slot)		\
((slot) >> (dev)->xaht_width_shift)
#define	EMAC_XAHT_SLOT_TO_MASK(dev, slot)		\
((u32)(1 << (EMAC_XAHT_WIDTH(dev) - 1)) >>	\
((slot) & (u32)(EMAC_XAHT_WIDTH(dev) - 1)))
static inline u32 *emac_xaht_base(struct emac_instance *dev)
static inline u32 *emac_gaht_base(struct emac_instance *dev)
static inline u32 *emac_iaht_base(struct emac_instance *dev)
#define EMAC_ETHTOOL_REGS_ZMII		0x00000001
#define EMAC_ETHTOOL_REGS_RGMII		0x00000002
#define EMAC_ETHTOOL_REGS_TAH		0x00000004
struct emac_ethtool_regs_hdr ;
struct emac_ethtool_regs_subhdr ;
#define EMAC_ETHTOOL_REGS_VER		0
#define EMAC_ETHTOOL_REGS_SIZE(dev) 	((dev)->rsrc_regs.end - \
(dev)->rsrc_regs.start + 1)
#define EMAC4_ETHTOOL_REGS_VER      	1
#define EMAC4_ETHTOOL_REGS_SIZE(dev)	((dev)->rsrc_regs.end -	\
(dev)->rsrc_regs.start + 1)
