#define _ACENIC_H_
#define USE_TX_COAL_NOW	 0
struct ace_regs ;
typedef struct  aceaddr;
#define ACE_WINDOW_SIZE	0x800
#define ACE_JUMBO_MTU 9000
#define ACE_STD_MTU 1500
#define ACE_TRACE_SIZE 0x8000
#define IN_INT		0x01
#define CLR_INT		0x02
#define HW_RESET	0x08
#define BYTE_SWAP	0x10
#define WORD_SWAP	0x20
#define MASK_INTS	0x40
#define EEPROM_DATA_IN		0x800000
#define EEPROM_DATA_OUT		0x400000
#define EEPROM_WRITE_ENABLE	0x200000
#define EEPROM_CLK_OUT		0x100000
#define EEPROM_BASE		0xa0000000
#define EEPROM_WRITE_SELECT	0xa0
#define EEPROM_READ_SELECT	0xa1
#define SRAM_BANK_512K		0x200
#define ACE_SHORT_DELAY		2
#define ACE_LONG_DELAY		4
#define SYNC_SRAM_TIMING	0x100000
#define CPU_RESET		0x01
#define CPU_TRACE		0x02
#define CPU_PROM_FAILED		0x10
#define CPU_HALT		0x00010000
#define CPU_HALTED		0xffff0000
#define DMA_READ_MAX_4		0x04
#define DMA_READ_MAX_16		0x08
#define DMA_READ_MAX_32		0x0c
#define DMA_READ_MAX_64		0x10
#define DMA_READ_MAX_128	0x14
#define DMA_READ_MAX_256	0x18
#define DMA_READ_MAX_1K		0x1c
#define DMA_WRITE_MAX_4		0x20
#define DMA_WRITE_MAX_16	0x40
#define DMA_WRITE_MAX_32	0x60
#define DMA_WRITE_MAX_64	0x80
#define DMA_WRITE_MAX_128	0xa0
#define DMA_WRITE_MAX_256	0xc0
#define DMA_WRITE_MAX_1K	0xe0
#define DMA_READ_WRITE_MASK	0xfc
#define MEM_READ_MULTIPLE	0x00020000
#define PCI_66MHZ		0x00080000
#define PCI_32BIT		0x00100000
#define DMA_WRITE_ALL_ALIGN	0x00800000
#define READ_CMD_MEM		0x06000000
#define WRITE_CMD_MEM		0x70000000
#define ACE_BYTE_SWAP_BD	0x02
#define ACE_WORD_SWAP_BD	0x04
#define ACE_WARN		0x08
#define ACE_BYTE_SWAP_DMA	0x10
#define ACE_NO_JUMBO_FRAG	0x200
#define ACE_FATAL		0x40000000
#define DMA_THRESH_1W		0x10
#define DMA_THRESH_2W		0x20
#define DMA_THRESH_4W		0x40
#define DMA_THRESH_8W		0x80
#define DMA_THRESH_16W		0x100
#define DMA_THRESH_32W		0x0
#define TICKS_PER_SEC		1000000
#define LNK_PREF		0x00008000
#define LNK_10MB		0x00010000
#define LNK_100MB		0x00020000
#define LNK_1000MB		0x00040000
#define LNK_FULL_DUPLEX		0x00080000
#define LNK_HALF_DUPLEX		0x00100000
#define LNK_TX_FLOW_CTL_Y	0x00200000
#define LNK_NEG_ADVANCED	0x00400000
#define LNK_RX_FLOW_CTL_Y	0x00800000
#define LNK_NIC			0x01000000
#define LNK_JAM			0x02000000
#define LNK_JUMBO		0x04000000
#define LNK_ALTEON		0x08000000
#define LNK_NEG_FCTL		0x10000000
#define LNK_NEGOTIATE		0x20000000
#define LNK_ENABLE		0x40000000
#define LNK_UP			0x80000000
#define EVT_RING_ENTRIES	256
#define EVT_RING_SIZE	(EVT_RING_ENTRIES * sizeof(struct event))
struct event ;
#define E_FW_RUNNING		0x01
#define E_STATS_UPDATED		0x04
#define E_STATS_UPDATE		0x04
#define E_LNK_STATE		0x06
#define E_C_LINK_UP		0x01
#define E_C_LINK_DOWN		0x02
#define E_C_LINK_10_100		0x03
#define E_ERROR			0x07
#define E_C_ERR_INVAL_CMD	0x01
#define E_C_ERR_UNIMP_CMD	0x02
#define E_C_ERR_BAD_CFG		0x03
#define E_MCAST_LIST		0x08
#define E_C_MCAST_ADDR_ADD	0x01
#define E_C_MCAST_ADDR_DEL	0x02
#define E_RESET_JUMBO_RNG	0x09
#define CMD_RING_ENTRIES	64
struct cmd ;
#define C_HOST_STATE		0x01
#define C_C_STACK_UP		0x01
#define C_C_STACK_DOWN		0x02
#define C_FDR_FILTERING		0x02
#define C_C_FDR_FILT_ENABLE	0x01
#define C_C_FDR_FILT_DISABLE	0x02
#define C_SET_RX_PRD_IDX	0x03
#define C_UPDATE_STATS		0x04
#define C_RESET_JUMBO_RNG	0x05
#define C_ADD_MULTICAST_ADDR	0x08
#define C_DEL_MULTICAST_ADDR	0x09
#define C_SET_PROMISC_MODE	0x0a
#define C_C_PROMISC_ENABLE	0x01
#define C_C_PROMISC_DISABLE	0x02
#define C_LNK_NEGOTIATION	0x0b
#define C_C_NEGOTIATE_BOTH	0x00
#define C_C_NEGOTIATE_GIG	0x01
#define C_C_NEGOTIATE_10_100	0x02
#define C_SET_MAC_ADDR		0x0c
#define C_CLEAR_PROFILE		0x0d
#define C_SET_MULTICAST_MODE	0x0e
#define C_C_MCAST_ENABLE	0x01
#define C_C_MCAST_DISABLE	0x02
#define C_CLEAR_STATS		0x0f
#define C_SET_RX_JUMBO_PRD_IDX	0x10
#define C_REFRESH_STATS		0x11
#define BD_FLG_TCP_UDP_SUM	0x01
#define BD_FLG_IP_SUM		0x02
#define BD_FLG_END		0x04
#define BD_FLG_MORE		0x08
#define BD_FLG_JUMBO		0x10
#define BD_FLG_UCAST		0x20
#define BD_FLG_MCAST		0x40
#define BD_FLG_BCAST		0x60
#define BD_FLG_TYP_MASK		0x60
#define BD_FLG_IP_FRAG		0x80
#define BD_FLG_IP_FRAG_END	0x100
#define BD_FLG_VLAN_TAG		0x200
#define BD_FLG_FRAME_ERROR	0x400
#define BD_FLG_COAL_NOW		0x800
#define BD_FLG_MINI		0x1000
#define RCB_FLG_TCP_UDP_SUM	0x01
#define RCB_FLG_IP_SUM		0x02
#define RCB_FLG_NO_PSEUDO_HDR	0x08
#define RCB_FLG_VLAN_ASSIST	0x10
#define RCB_FLG_COAL_INT_ONLY	0x20
#define RCB_FLG_TX_HOST_RING	0x40
#define RCB_FLG_IEEE_SNAP_SUM	0x80
#define RCB_FLG_EXT_RX_BD	0x100
#define RCB_FLG_RNG_DISABLE	0x200
#define MAX_TX_RING_ENTRIES	256
#define TIGON_I_TX_RING_ENTRIES	128
#define TX_RING_SIZE		(MAX_TX_RING_ENTRIES * sizeof(struct tx_desc))
#define TX_RING_BASE		0x3800
struct tx_desc;
#define RX_STD_RING_ENTRIES	512
#define RX_STD_RING_SIZE	(RX_STD_RING_ENTRIES * sizeof(struct rx_desc))
#define RX_JUMBO_RING_ENTRIES	256
#define RX_JUMBO_RING_SIZE	(RX_JUMBO_RING_ENTRIES *sizeof(struct rx_desc))
#define RX_MINI_RING_ENTRIES	1024
#define RX_MINI_RING_SIZE	(RX_MINI_RING_ENTRIES *sizeof(struct rx_desc))
#define RX_RETURN_RING_ENTRIES	2048
#define RX_RETURN_RING_SIZE	(RX_MAX_RETURN_RING_ENTRIES * \
sizeof(struct rx_desc))
struct rx_desc;
struct ring_ctrl ;
struct ace_mac_stats ;
struct ace_info ;
struct ring_info ;
struct tx_ring_info ;
struct ace_skb
;
struct ace_private
;
#define TX_RESERVED	MAX_SKB_FRAGS
static inline int tx_space (struct ace_private *ap, u32 csm, u32 prd)
#define tx_free(ap) 		tx_space((ap)->tx_ret_csm, (ap)->tx_prd, ap)
#define tx_ring_full(ap, csm, prd)	(tx_space(ap, csm, prd) <= TX_RESERVED)
static inline void set_aceaddr(aceaddr *aa, dma_addr_t addr)
static inline void ace_set_txprd(struct ace_regs __iomem *regs,
struct ace_private *ap, u32 value)
static inline void ace_mask_irq(struct net_device *dev)
static inline void ace_unmask_irq(struct net_device *dev)
static int ace_init(struct net_device *dev);
static void ace_load_std_rx_ring(struct ace_private *ap, int nr_bufs);
static void ace_load_mini_rx_ring(struct ace_private *ap, int nr_bufs);
static void ace_load_jumbo_rx_ring(struct ace_private *ap, int nr_bufs);
static irqreturn_t ace_interrupt(int irq, void *dev_id);
static int ace_load_firmware(struct net_device *dev);
static int ace_open(struct net_device *dev);
static netdev_tx_t ace_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static int ace_close(struct net_device *dev);
static void ace_tasklet(unsigned long dev);
static void ace_dump_trace(struct ace_private *ap);
static void ace_set_multicast_list(struct net_device *dev);
static int ace_change_mtu(struct net_device *dev, int new_mtu);
static int ace_set_mac_addr(struct net_device *dev, void *p);
static void ace_set_rxtx_parms(struct net_device *dev, int jumbo);
static int ace_allocate_descriptors(struct net_device *dev);
static void ace_free_descriptors(struct net_device *dev);
static void ace_init_cleanup(struct net_device *dev);
static struct net_device_stats *ace_get_stats(struct net_device *dev);
static int read_eeprom_byte(struct net_device *dev, unsigned long offset);
#if ACENIC_DO_VLAN
static void ace_vlan_rx_register(struct net_device *dev, struct vlan_group *grp);
