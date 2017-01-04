#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_MODULE_NAME		"b44"
#define DRV_MODULE_VERSION	"2.0"
#define B44_DEF_MSG_ENABLE	  \
(NETIF_MSG_DRV		| \
NETIF_MSG_PROBE	| \
NETIF_MSG_LINK		| \
NETIF_MSG_TIMER	| \
NETIF_MSG_IFDOWN	| \
NETIF_MSG_IFUP		| \
NETIF_MSG_RX_ERR	| \
NETIF_MSG_TX_ERR)
#define B44_TX_TIMEOUT			(5 * HZ)
#define B44_MIN_MTU			60
#define B44_MAX_MTU			1500
#define B44_RX_RING_SIZE		512
#define B44_DEF_RX_RING_PENDING		200
#define B44_RX_RING_BYTES	(sizeof(struct dma_desc) * \
B44_RX_RING_SIZE)
#define B44_TX_RING_SIZE		512
#define B44_DEF_TX_RING_PENDING		(B44_TX_RING_SIZE - 1)
#define B44_TX_RING_BYTES	(sizeof(struct dma_desc) * \
B44_TX_RING_SIZE)
#define TX_RING_GAP(BP)	\
(B44_TX_RING_SIZE - (BP)->tx_pending)
#define TX_BUFFS_AVAIL(BP)						\
(((BP)->tx_cons <= (BP)->tx_prod) ?				\
(BP)->tx_cons + (BP)->tx_pending - (BP)->tx_prod :		\
(BP)->tx_cons - (BP)->tx_prod - TX_RING_GAP(BP))
#define NEXT_TX(N)		(((N) + 1) & (B44_TX_RING_SIZE - 1))
#define RX_PKT_OFFSET		(RX_HEADER_LEN + 2)
#define RX_PKT_BUF_SZ		(1536 + RX_PKT_OFFSET)
#define B44_TX_WAKEUP_THRESH		(B44_TX_RING_SIZE / 4)
#define B44_PATTERN_BASE	0x400
#define B44_PATTERN_SIZE	0x80
#define B44_PMASK_BASE		0x600
#define B44_PMASK_SIZE		0x10
#define B44_MAX_PATTERNS	16
#define B44_ETHIPV6UDP_HLEN	62
#define B44_ETHIPV4UDP_HLEN	42
static char version[] __devinitdata =
DRV_MODULE_NAME ".c:v" DRV_MODULE_VERSION "\n";
MODULE_AUTHOR("Felix Fietkau, Florian Schirmer, Pekka Pietikainen, David S. Miller");
MODULE_DESCRIPTION("Broadcom 44xx/47xx 10/100 PCI ethernet driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_MODULE_VERSION);
static int b44_debug = -1;
module_param(b44_debug, int, 0);
MODULE_PARM_DESC(b44_debug, "B44 bitmapped debugging message enable value");
static DEFINE_PCI_DEVICE_TABLE(b44_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, b44_pci_tbl);
static struct pci_driver b44_pci_driver = ;
static const struct ssb_device_id b44_ssb_tbl[] = ;
MODULE_DEVICE_TABLE(ssb, b44_ssb_tbl);
static void b44_halt(struct b44 *);
static void b44_init_rings(struct b44 *);
#define B44_FULL_RESET		1
#define B44_FULL_RESET_SKIP_PHY	2
#define B44_PARTIAL_RESET	3
#define B44_CHIP_RESET_FULL	4
#define B44_CHIP_RESET_PARTIAL	5
static void b44_init_hw(struct b44 *, int);
static int dma_desc_sync_size;
static int instance;
static const char b44_gstrings[][ETH_GSTRING_LEN] = ;
static inline void b44_sync_dma_desc_for_device(struct ssb_device *sdev,
dma_addr_t dma_base,
unsigned long offset,
enum dma_data_direction dir)
static inline void b44_sync_dma_desc_for_cpu(struct ssb_device *sdev,
dma_addr_t dma_base,
unsigned long offset,
enum dma_data_direction dir)
static inline unsigned long br32(const struct b44 *bp, unsigned long reg)
static inline void bw32(const struct b44 *bp,
unsigned long reg, unsigned long val)
static int b44_wait_bit(struct b44 *bp, unsigned long reg,
u32 bit, unsigned long timeout, const int clear)
static inline void __b44_cam_read(struct b44 *bp, unsigned char *data, int index)
static inline void __b44_cam_write(struct b44 *bp, unsigned char *data, int index)
static inline void __b44_disable_ints(struct b44 *bp)
static void b44_disable_ints(struct b44 *bp)
static void b44_enable_ints(struct b44 *bp)
static int __b44_readphy(struct b44 *bp, int phy_addr, int reg, u32 *val)
static int __b44_writephy(struct b44 *bp, int phy_addr, int reg, u32 val)
static inline int b44_readphy(struct b44 *bp, int reg, u32 *val)
static inline int b44_writephy(struct b44 *bp, int reg, u32 val)
static int b44_mii_read(struct net_device *dev, int phy_id, int location)
static void b44_mii_write(struct net_device *dev, int phy_id, int location,
int val)
static int b44_phy_reset(struct b44 *bp)
static void __b44_set_flow_ctrl(struct b44 *bp, u32 pause_flags)
static void b44_set_flow_ctrl(struct b44 *bp, u32 local, u32 remote)
static void b44_wap54g10_workaround(struct b44 *bp)
static inline void b44_wap54g10_workaround(struct b44 *bp)
static int b44_setup_phy(struct b44 *bp)
static void b44_stats_update(struct b44 *bp)
static void b44_link_report(struct b44 *bp)
static void b44_check_phy(struct b44 *bp)
static void b44_timer(unsigned long __opaque)
static void b44_tx(struct b44 *bp)
static int b44_alloc_rx_skb(struct b44 *bp, int src_idx, u32 dest_idx_unmasked)
static void b44_recycle_rx(struct b44 *bp, int src_idx, u32 dest_idx_unmasked)
static int b44_rx(struct b44 *bp, int budget)
static int b44_poll(struct napi_struct *napi, int budget)
static irqreturn_t b44_interrupt(int irq, void *dev_id)
static void b44_tx_timeout(struct net_device *dev)
static netdev_tx_t b44_start_xmit(struct sk_buff *skb, struct net_device *dev)
static int b44_change_mtu(struct net_device *dev, int new_mtu)
static void b44_free_rings(struct b44 *bp)
static void b44_init_rings(struct b44 *bp)
static void b44_free_consistent(struct b44 *bp)
static int b44_alloc_consistent(struct b44 *bp, gfp_t gfp)
static void b44_clear_stats(struct b44 *bp)
static void b44_chip_reset(struct b44 *bp, int reset_kind)
static void b44_halt(struct b44 *bp)
static void __b44_set_mac_addr(struct b44 *bp)
static int b44_set_mac_addr(struct net_device *dev, void *p)
static void __b44_set_rx_mode(struct net_device *);
static void b44_init_hw(struct b44 *bp, int reset_kind)
static int b44_open(struct net_device *dev)
static void b44_poll_controller(struct net_device *dev)
static void bwfilter_table(struct b44 *bp, u8 *pp, u32 bytes, u32 table_offset)
static int b44_magic_pattern(u8 *macaddr, u8 *ppattern, u8 *pmask, int offset)
static void b44_setup_pseudo_magicp(struct b44 *bp)
static void b44_setup_wol_pci(struct b44 *bp)
static inline void b44_setup_wol_pci(struct b44 *bp)
static void b44_setup_wol(struct b44 *bp)
static int b44_close(struct net_device *dev)
static struct net_device_stats *b44_get_stats(struct net_device *dev)
static int __b44_load_mcast(struct b44 *bp, struct net_device *dev)
static void __b44_set_rx_mode(struct net_device *dev)
static void b44_set_rx_mode(struct net_device *dev)
static u32 b44_get_msglevel(struct net_device *dev)
static void b44_set_msglevel(struct net_device *dev, u32 value)
static void b44_get_drvinfo (struct net_device *dev, struct ethtool_drvinfo *info)
static int b44_nway_reset(struct net_device *dev)
static int b44_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int b44_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void b44_get_ringparam(struct net_device *dev,
struct ethtool_ringparam *ering)
static int b44_set_ringparam(struct net_device *dev,
struct ethtool_ringparam *ering)
static void b44_get_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *epause)
static int b44_set_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *epause)
static void b44_get_strings(struct net_device *dev, u32 stringset, u8 *data)
static int b44_get_sset_count(struct net_device *dev, int sset)
static void b44_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 *data)
static void b44_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int b44_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static const struct ethtool_ops b44_ethtool_ops = ;
static int b44_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int __devinit b44_get_invariants(struct b44 *bp)
static const struct net_device_ops b44_netdev_ops = ;
static int __devinit b44_init_one(struct ssb_device *sdev,
const struct ssb_device_id *ent)
static void __devexit b44_remove_one(struct ssb_device *sdev)
static int b44_suspend(struct ssb_device *sdev, pm_message_t state)
static int b44_resume(struct ssb_device *sdev)
static struct ssb_driver b44_ssb_driver = ;
static inline int b44_pci_init(void)
static inline void b44_pci_exit(void)
static int __init b44_init(void)
static void __exit b44_cleanup(void)
module_init(b44_init);
module_exit(b44_cleanup);
