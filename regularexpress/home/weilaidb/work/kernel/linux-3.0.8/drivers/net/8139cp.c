#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME		"8139cp"
#define DRV_VERSION		"1.3"
#define DRV_RELDATE		"Mar 22, 2004"
#if defined(CONFIG_VLAN_8021Q) || defined(CONFIG_VLAN_8021Q_MODULE)
#define CP_VLAN_TAG_USED 1
#define CP_VLAN_TX_TAG(tx_desc,vlan_tag_value) \
do  while (0)
#define CP_VLAN_TAG_USED 0
#define CP_VLAN_TX_TAG(tx_desc,vlan_tag_value) \
do  while (0)
static char version[] =
DRV_NAME ": 10/100 PCI Ethernet driver v" DRV_VERSION " (" DRV_RELDATE ")\n";
MODULE_AUTHOR("Jeff Garzik <jgarzik@pobox.com>");
MODULE_DESCRIPTION("RealTek RTL-8139C+ series 10/100 PCI Ethernet driver");
MODULE_VERSION(DRV_VERSION);
MODULE_LICENSE("GPL");
static int debug = -1;
module_param(debug, int, 0);
MODULE_PARM_DESC (debug, "8139cp: bitmapped message enable number");
static int multicast_filter_limit = 32;
module_param(multicast_filter_limit, int, 0);
MODULE_PARM_DESC (multicast_filter_limit, "8139cp: maximum number of filtered multicast addresses");
#define CP_DEF_MSG_ENABLE	(NETIF_MSG_DRV		| \
NETIF_MSG_PROBE 	| \
NETIF_MSG_LINK)
#define CP_NUM_STATS		14
#define CP_STATS_SIZE		64
#define CP_REGS_SIZE		(0xff + 1)
#define CP_REGS_VER		1
#define CP_RX_RING_SIZE		64
#define CP_TX_RING_SIZE		64
#define CP_RING_BYTES		\
((sizeof(struct cp_desc) * CP_RX_RING_SIZE) +	\
(sizeof(struct cp_desc) * CP_TX_RING_SIZE) +	\
CP_STATS_SIZE)
#define NEXT_TX(N)		(((N) + 1) & (CP_TX_RING_SIZE - 1))
#define NEXT_RX(N)		(((N) + 1) & (CP_RX_RING_SIZE - 1))
#define TX_BUFFS_AVAIL(CP)					\
(((CP)->tx_tail <= (CP)->tx_head) ?			\
(CP)->tx_tail + (CP_TX_RING_SIZE - 1) - (CP)->tx_head :	\
(CP)->tx_tail - (CP)->tx_head - 1)
#define PKT_BUF_SZ		1536
#define CP_INTERNAL_PHY		32
#define RX_FIFO_THRESH		5
#define RX_DMA_BURST		4
#define TX_DMA_BURST		6
#define TX_EARLY_THRESH		256
#define TX_TIMEOUT		(6*HZ)
#define CP_MIN_MTU		60
#define CP_MAX_MTU		4096
enum ;
static const unsigned int cp_rx_config =
(RX_FIFO_THRESH << RxCfgFIFOShift) |
(RX_DMA_BURST << RxCfgDMAShift);
struct cp_desc ;
struct cp_dma_stats  __packed;
struct cp_extra_stats ;
struct cp_private ;
#define cpr8(reg)	readb(cp->regs + (reg))
#define cpr16(reg)	readw(cp->regs + (reg))
#define cpr32(reg)	readl(cp->regs + (reg))
#define cpw8(reg,val)	writeb((val), cp->regs + (reg))
#define cpw16(reg,val)	writew((val), cp->regs + (reg))
#define cpw32(reg,val)	writel((val), cp->regs + (reg))
#define cpw8_f(reg,val) do  while (0)
#define cpw16_f(reg,val) do  while (0)
#define cpw32_f(reg,val) do  while (0)
static void __cp_set_rx_mode (struct net_device *dev);
static void cp_tx (struct cp_private *cp);
static void cp_clean_rings (struct cp_private *cp);
static void cp_poll_controller(struct net_device *dev);
static int cp_get_eeprom_len(struct net_device *dev);
static int cp_get_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *data);
static int cp_set_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *data);
static DEFINE_PCI_DEVICE_TABLE(cp_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, cp_pci_tbl);
static struct  ethtool_stats_keys[] = ;
#if CP_VLAN_TAG_USED
static void cp_vlan_rx_register(struct net_device *dev, struct vlan_group *grp)
static inline void cp_set_rxbufsize (struct cp_private *cp)
static inline void cp_rx_skb (struct cp_private *cp, struct sk_buff *skb,
struct cp_desc *desc)
static void cp_rx_err_acct (struct cp_private *cp, unsigned rx_tail,
u32 status, u32 len)
static inline unsigned int cp_rx_csum_ok (u32 status)
static int cp_rx_poll(struct napi_struct *napi, int budget)
static irqreturn_t cp_interrupt (int irq, void *dev_instance)
static void cp_poll_controller(struct net_device *dev)
static void cp_tx (struct cp_private *cp)
static netdev_tx_t cp_start_xmit (struct sk_buff *skb,
struct net_device *dev)
static void __cp_set_rx_mode (struct net_device *dev)
static void cp_set_rx_mode (struct net_device *dev)
static void __cp_get_stats(struct cp_private *cp)
static struct net_device_stats *cp_get_stats(struct net_device *dev)
static void cp_stop_hw (struct cp_private *cp)
static void cp_reset_hw (struct cp_private *cp)
static inline void cp_start_hw (struct cp_private *cp)
static void cp_init_hw (struct cp_private *cp)
static int cp_refill_rx(struct cp_private *cp)
static void cp_init_rings_index (struct cp_private *cp)
static int cp_init_rings (struct cp_private *cp)
static int cp_alloc_rings (struct cp_private *cp)
static void cp_clean_rings (struct cp_private *cp)
static void cp_free_rings (struct cp_private *cp)
static int cp_open (struct net_device *dev)
static int cp_close (struct net_device *dev)
static void cp_tx_timeout(struct net_device *dev)
static int cp_change_mtu(struct net_device *dev, int new_mtu)
static const char mii_2_8139_map[8] = ;
static int mdio_read(struct net_device *dev, int phy_id, int location)
static void mdio_write(struct net_device *dev, int phy_id, int location,
int value)
static int netdev_set_wol (struct cp_private *cp,
const struct ethtool_wolinfo *wol)
static void netdev_get_wol (struct cp_private *cp,
struct ethtool_wolinfo *wol)
static void cp_get_drvinfo (struct net_device *dev, struct ethtool_drvinfo *info)
static int cp_get_regs_len(struct net_device *dev)
static int cp_get_sset_count (struct net_device *dev, int sset)
static int cp_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int cp_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int cp_nway_reset(struct net_device *dev)
static u32 cp_get_msglevel(struct net_device *dev)
static void cp_set_msglevel(struct net_device *dev, u32 value)
static int cp_set_features(struct net_device *dev, u32 features)
static void cp_get_regs(struct net_device *dev, struct ethtool_regs *regs,
void *p)
static void cp_get_wol (struct net_device *dev, struct ethtool_wolinfo *wol)
static int cp_set_wol (struct net_device *dev, struct ethtool_wolinfo *wol)
static void cp_get_strings (struct net_device *dev, u32 stringset, u8 *buf)
static void cp_get_ethtool_stats (struct net_device *dev,
struct ethtool_stats *estats, u64 *tmp_stats)
static const struct ethtool_ops cp_ethtool_ops = ;
static int cp_ioctl (struct net_device *dev, struct ifreq *rq, int cmd)
static int cp_set_mac_address(struct net_device *dev, void *p)
#define EE_SHIFT_CLK	0x04
#define EE_CS			0x08
#define EE_DATA_WRITE	0x02
#define EE_WRITE_0		0x00
#define EE_WRITE_1		0x02
#define EE_DATA_READ	0x01
#define EE_ENB			(0x80 | EE_CS)
#define eeprom_delay()	readl(ee_addr)
#define EE_EXTEND_CMD	(4)
#define EE_WRITE_CMD	(5)
#define EE_READ_CMD		(6)
#define EE_ERASE_CMD	(7)
#define EE_EWDS_ADDR	(0)
#define EE_WRAL_ADDR	(1)
#define EE_ERAL_ADDR	(2)
#define EE_EWEN_ADDR	(3)
#define CP_EEPROM_MAGIC PCI_DEVICE_ID_REALTEK_8139
static void eeprom_cmd_start(void __iomem *ee_addr)
static void eeprom_cmd(void __iomem *ee_addr, int cmd, int cmd_len)
static void eeprom_cmd_end(void __iomem *ee_addr)
static void eeprom_extend_cmd(void __iomem *ee_addr, int extend_cmd,
int addr_len)
static u16 read_eeprom (void __iomem *ioaddr, int location, int addr_len)
static void write_eeprom(void __iomem *ioaddr, int location, u16 val,
int addr_len)
static int cp_get_eeprom_len(struct net_device *dev)
static int cp_get_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *data)
static int cp_set_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *data)
static void cp_set_d3_state (struct cp_private *cp)
static const struct net_device_ops cp_netdev_ops = ;
static int cp_init_one (struct pci_dev *pdev, const struct pci_device_id *ent)
static void cp_remove_one (struct pci_dev *pdev)
static int cp_suspend (struct pci_dev *pdev, pm_message_t state)
static int cp_resume (struct pci_dev *pdev)
static struct pci_driver cp_driver = ;
static int __init cp_init (void)
static void __exit cp_exit (void)
module_init(cp_init);
module_exit(cp_exit);
