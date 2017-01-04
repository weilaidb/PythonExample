#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define PHY_MAX_ADDR		32
#define PHY_ID_ANY		0x1f
#define MII_REG_ANY		0x1f
#define DRV_VERSION		"1.4"
#define DRV_NAME		"sis190"
#define SIS190_DRIVER_NAME	DRV_NAME " Gigabit Ethernet driver " DRV_VERSION
#define sis190_rx_skb			netif_rx
#define sis190_rx_quota(count, quota)	count
#define MAC_ADDR_LEN		6
#define NUM_TX_DESC		64
#define NUM_RX_DESC		64
#define TX_RING_BYTES		(NUM_TX_DESC * sizeof(struct TxDesc))
#define RX_RING_BYTES		(NUM_RX_DESC * sizeof(struct RxDesc))
#define RX_BUF_SIZE		1536
#define RX_BUF_MASK		0xfff8
#define SIS190_REGS_SIZE	0x80
#define SIS190_TX_TIMEOUT	(6*HZ)
#define SIS190_PHY_TIMEOUT	(10*HZ)
#define SIS190_MSG_DEFAULT	(NETIF_MSG_DRV | NETIF_MSG_PROBE | \
NETIF_MSG_LINK | NETIF_MSG_IFUP | \
NETIF_MSG_IFDOWN)
#define EhnMIIread		0x0000
#define EhnMIIwrite		0x0020
#define EhnMIIdataShift		16
#define EhnMIIpmdShift		6
#define EhnMIIregShift		11
#define EhnMIIreq		0x0010
#define EhnMIInotDone		0x0010
#define SIS_W8(reg, val)	writeb ((val), ioaddr + (reg))
#define SIS_W16(reg, val)	writew ((val), ioaddr + (reg))
#define SIS_W32(reg, val)	writel ((val), ioaddr + (reg))
#define SIS_R8(reg)		readb (ioaddr + (reg))
#define SIS_R16(reg)		readw (ioaddr + (reg))
#define SIS_R32(reg)		readl (ioaddr + (reg))
#define SIS_PCI_COMMIT()	SIS_R32(IntrControl)
enum sis190_registers ;
enum sis190_register_content ;
struct TxDesc ;
struct RxDesc ;
enum _DescStatusBit ;
enum sis190_eeprom_access_register_bits ;
enum sis190_eeprom_address ;
enum sis190_feature ;
struct sis190_private ;
struct sis190_phy ;
enum sis190_phy_type ;
static struct mii_chip_info  mii_chip_table[] = ;
static const struct  sis_chip_info[] = ;
static DEFINE_PCI_DEVICE_TABLE(sis190_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, sis190_pci_tbl);
static int rx_copybreak = 200;
static struct  debug = ;
MODULE_DESCRIPTION("SiS sis190/191 Gigabit Ethernet driver");
module_param(rx_copybreak, int, 0);
MODULE_PARM_DESC(rx_copybreak, "Copy breakpoint for copy-only-tiny-frames");
module_param_named(debug, debug.msg_enable, int, 0);
MODULE_PARM_DESC(debug, "Debug verbosity level (0=none, ..., 16=all)");
MODULE_AUTHOR("K.M. Liu <kmliu@sis.com>, Ueimor <romieu@fr.zoreil.com>");
MODULE_VERSION(DRV_VERSION);
MODULE_LICENSE("GPL");
static const u32 sis190_intr_mask =
RxQEmpty | RxQInt | TxQ1Int | TxQ0Int | RxHalt | TxHalt | LinkChange;
static const int multicast_filter_limit = 32;
static void __mdio_cmd(void __iomem *ioaddr, u32 ctl)
static void mdio_write(void __iomem *ioaddr, int phy_id, int reg, int val)
static int mdio_read(void __iomem *ioaddr, int phy_id, int reg)
static void __mdio_write(struct net_device *dev, int phy_id, int reg, int val)
static int __mdio_read(struct net_device *dev, int phy_id, int reg)
static u16 mdio_read_latched(void __iomem *ioaddr, int phy_id, int reg)
static u16 __devinit sis190_read_eeprom(void __iomem *ioaddr, u32 reg)
static void sis190_irq_mask_and_ack(void __iomem *ioaddr)
static void sis190_asic_down(void __iomem *ioaddr)
static void sis190_mark_as_last_descriptor(struct RxDesc *desc)
static inline void sis190_give_to_asic(struct RxDesc *desc, u32 rx_buf_sz)
static inline void sis190_map_to_asic(struct RxDesc *desc, dma_addr_t mapping,
u32 rx_buf_sz)
static inline void sis190_make_unusable_by_asic(struct RxDesc *desc)
static struct sk_buff *sis190_alloc_rx_skb(struct sis190_private *tp,
struct RxDesc *desc)
static u32 sis190_rx_fill(struct sis190_private *tp, struct net_device *dev,
u32 start, u32 end)
static bool sis190_try_rx_copy(struct sis190_private *tp,
struct sk_buff **sk_buff, int pkt_size,
dma_addr_t addr)
static inline int sis190_rx_pkt_err(u32 status, struct net_device_stats *stats)
static int sis190_rx_interrupt(struct net_device *dev,
struct sis190_private *tp, void __iomem *ioaddr)
static void sis190_unmap_tx_skb(struct pci_dev *pdev, struct sk_buff *skb,
struct TxDesc *desc)
static inline int sis190_tx_pkt_err(u32 status, struct net_device_stats *stats)
static void sis190_tx_interrupt(struct net_device *dev,
struct sis190_private *tp, void __iomem *ioaddr)
static irqreturn_t sis190_interrupt(int irq, void *__dev)
static void sis190_netpoll(struct net_device *dev)
static void sis190_free_rx_skb(struct sis190_private *tp,
struct sk_buff **sk_buff, struct RxDesc *desc)
static void sis190_rx_clear(struct sis190_private *tp)
static void sis190_init_ring_indexes(struct sis190_private *tp)
static int sis190_init_ring(struct net_device *dev)
static void sis190_set_rx_mode(struct net_device *dev)
static void sis190_soft_reset(void __iomem *ioaddr)
static void sis190_hw_start(struct net_device *dev)
static void sis190_phy_task(struct work_struct *work)
static void sis190_phy_timer(unsigned long __opaque)
static inline void sis190_delete_timer(struct net_device *dev)
static inline void sis190_request_timer(struct net_device *dev)
static void sis190_set_rxbufsize(struct sis190_private *tp,
struct net_device *dev)
static int sis190_open(struct net_device *dev)
static void sis190_tx_clear(struct sis190_private *tp)
static void sis190_down(struct net_device *dev)
static int sis190_close(struct net_device *dev)
static netdev_tx_t sis190_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static void sis190_free_phy(struct list_head *first_phy)
static u16 sis190_default_phy(struct net_device *dev)
static void sis190_init_phy(struct net_device *dev, struct sis190_private *tp,
struct sis190_phy *phy, unsigned int phy_id,
u16 mii_status)
static void sis190_mii_probe_88e1111_fixup(struct sis190_private *tp)
static int __devinit sis190_mii_probe(struct net_device *dev)
static void sis190_mii_remove(struct net_device *dev)
static void sis190_release_board(struct pci_dev *pdev)
static struct net_device * __devinit sis190_init_board(struct pci_dev *pdev)
static void sis190_tx_timeout(struct net_device *dev)
static void sis190_set_rgmii(struct sis190_private *tp, u8 reg)
static int __devinit sis190_get_mac_addr_from_eeprom(struct pci_dev *pdev,
struct net_device *dev)
static int __devinit sis190_get_mac_addr_from_apc(struct pci_dev *pdev,
struct net_device *dev)
static inline void sis190_init_rxfilter(struct net_device *dev)
static int __devinit sis190_get_mac_addr(struct pci_dev *pdev,
struct net_device *dev)
static void sis190_set_speed_auto(struct net_device *dev)
static int sis190_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int sis190_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void sis190_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static int sis190_get_regs_len(struct net_device *dev)
static void sis190_get_regs(struct net_device *dev, struct ethtool_regs *regs,
void *p)
static int sis190_nway_reset(struct net_device *dev)
static u32 sis190_get_msglevel(struct net_device *dev)
static void sis190_set_msglevel(struct net_device *dev, u32 value)
static const struct ethtool_ops sis190_ethtool_ops = ;
static int sis190_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int sis190_mac_addr(struct net_device  *dev, void *p)
static const struct net_device_ops sis190_netdev_ops = ;
static int __devinit sis190_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit sis190_remove_one(struct pci_dev *pdev)
static struct pci_driver sis190_pci_driver = ;
static int __init sis190_init_module(void)
static void __exit sis190_cleanup_module(void)
module_init(sis190_init_module);
module_exit(sis190_cleanup_module);
