#define BCM63XX_ENET_H_
#define BCMENET_DEF_RX_DESC	64
#define BCMENET_DEF_TX_DESC	32
#define BCMENET_DMA_MAXBURST	16
#define BCMENET_TX_FIFO_TRESH	32
#define BCMENET_MAX_MTU		2046
struct bcm_enet_desc ;
#define DMADESC_LENGTH_SHIFT	16
#define DMADESC_LENGTH_MASK	(0xfff << DMADESC_LENGTH_SHIFT)
#define DMADESC_OWNER_MASK	(1 << 15)
#define DMADESC_EOP_MASK	(1 << 14)
#define DMADESC_SOP_MASK	(1 << 13)
#define DMADESC_ESOP_MASK	(DMADESC_EOP_MASK | DMADESC_SOP_MASK)
#define DMADESC_WRAP_MASK	(1 << 12)
#define DMADESC_UNDER_MASK	(1 << 9)
#define DMADESC_APPEND_CRC	(1 << 8)
#define DMADESC_OVSIZE_MASK	(1 << 4)
#define DMADESC_RXER_MASK	(1 << 2)
#define DMADESC_CRC_MASK	(1 << 1)
#define DMADESC_OV_MASK		(1 << 0)
#define DMADESC_ERR_MASK	(DMADESC_UNDER_MASK | \
DMADESC_OVSIZE_MASK | \
DMADESC_RXER_MASK | \
DMADESC_CRC_MASK | \
DMADESC_OV_MASK)
#define ETH_MIB_TX_GD_OCTETS			0
#define ETH_MIB_TX_GD_PKTS			1
#define ETH_MIB_TX_ALL_OCTETS			2
#define ETH_MIB_TX_ALL_PKTS			3
#define ETH_MIB_TX_BRDCAST			4
#define ETH_MIB_TX_MULT				5
#define ETH_MIB_TX_64				6
#define ETH_MIB_TX_65_127			7
#define ETH_MIB_TX_128_255			8
#define ETH_MIB_TX_256_511			9
#define ETH_MIB_TX_512_1023			10
#define ETH_MIB_TX_1024_MAX			11
#define ETH_MIB_TX_JAB				12
#define ETH_MIB_TX_OVR				13
#define ETH_MIB_TX_FRAG				14
#define ETH_MIB_TX_UNDERRUN			15
#define ETH_MIB_TX_COL				16
#define ETH_MIB_TX_1_COL			17
#define ETH_MIB_TX_M_COL			18
#define ETH_MIB_TX_EX_COL			19
#define ETH_MIB_TX_LATE				20
#define ETH_MIB_TX_DEF				21
#define ETH_MIB_TX_CRS				22
#define ETH_MIB_TX_PAUSE			23
#define ETH_MIB_RX_GD_OCTETS			32
#define ETH_MIB_RX_GD_PKTS			33
#define ETH_MIB_RX_ALL_OCTETS			34
#define ETH_MIB_RX_ALL_PKTS			35
#define ETH_MIB_RX_BRDCAST			36
#define ETH_MIB_RX_MULT				37
#define ETH_MIB_RX_64				38
#define ETH_MIB_RX_65_127			39
#define ETH_MIB_RX_128_255			40
#define ETH_MIB_RX_256_511			41
#define ETH_MIB_RX_512_1023			42
#define ETH_MIB_RX_1024_MAX			43
#define ETH_MIB_RX_JAB				44
#define ETH_MIB_RX_OVR				45
#define ETH_MIB_RX_FRAG				46
#define ETH_MIB_RX_DROP				47
#define ETH_MIB_RX_CRC_ALIGN			48
#define ETH_MIB_RX_UND				49
#define ETH_MIB_RX_CRC				50
#define ETH_MIB_RX_ALIGN			51
#define ETH_MIB_RX_SYM				52
#define ETH_MIB_RX_PAUSE			53
#define ETH_MIB_RX_CNTRL			54
struct bcm_enet_mib_counters ;
struct bcm_enet_priv ;
