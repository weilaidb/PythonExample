#define SC92031_NAME "sc92031"
#define SC92031_USE_BAR 0
static int multicast_filter_limit = 64;
module_param(multicast_filter_limit, int, 0);
MODULE_PARM_DESC(multicast_filter_limit,
"Maximum number of filtered multicast addresses");
static int media;
module_param(media, int, 0);
MODULE_PARM_DESC(media, "Media type (0x00 = autodetect,"
" 0x01 = 10M half, 0x02 = 10M full,"
" 0x04 = 100M half, 0x08 = 100M full)");
#define  RX_BUF_LEN_IDX  3
#define  RX_BUF_LEN	(8192 << RX_BUF_LEN_IDX)
#define  NUM_TX_DESC	   4
#define  MAX_ETH_FRAME_SIZE	  1536
#define  TX_BUF_SIZE       MAX_ETH_FRAME_SIZE
#define  TX_BUF_TOT_LEN    (TX_BUF_SIZE * NUM_TX_DESC)
#define  RX_FIFO_THRESH    7
#define  TX_TIMEOUT     (4*HZ)
#define  SILAN_STATS_NUM    2
#define  AUTOSELECT    0x00
#define  M10_HALF      0x01
#define  M10_FULL      0x02
#define  M100_HALF     0x04
#define  M100_FULL     0x08
enum  silan_registers ;
#define MII_BMCR            0
#define MII_BMSR            1
#define MII_JAB             16
#define MII_OutputStatus    24
#define BMCR_FULLDPLX       0x0100
#define BMCR_ANRESTART      0x0200
#define BMCR_ANENABLE       0x1000
#define BMCR_SPEED100       0x2000
#define BMSR_LSTATUS        0x0004
#define PHY_16_JAB_ENB      0x1000
#define PHY_16_PORT_ENB     0x1
enum IntrStatusBits ;
enum TxStatusBits ;
enum RxStatusBits ;
enum RxConfigBits ;
enum TxConfigBits ;
enum PhyCtrlconfigbits ;
enum FlowCtrlConfigBits ;
enum Config0Bits ;
enum Config1Bits ;
enum MiiCmd0Bits ;
enum MiiStatusBits ;
enum PMConfigBits ;
struct sc92031_priv ;
static inline void _sc92031_dummy_read(void __iomem *port_base)
static u32 _sc92031_mii_wait(void __iomem *port_base)
static u32 _sc92031_mii_cmd(void __iomem *port_base, u32 cmd0, u32 cmd1)
static void _sc92031_mii_scan(void __iomem *port_base)
static u16 _sc92031_mii_read(void __iomem *port_base, unsigned reg)
static void _sc92031_mii_write(void __iomem *port_base, unsigned reg, u16 val)
static void sc92031_disable_interrupts(struct net_device *dev)
static void sc92031_enable_interrupts(struct net_device *dev)
static void _sc92031_disable_tx_rx(struct net_device *dev)
static void _sc92031_enable_tx_rx(struct net_device *dev)
static void _sc92031_tx_clear(struct net_device *dev)
static void _sc92031_set_mar(struct net_device *dev)
static void _sc92031_set_rx_config(struct net_device *dev)
static bool _sc92031_check_media(struct net_device *dev)
static void _sc92031_phy_reset(struct net_device *dev)
static void _sc92031_reset(struct net_device *dev)
static void _sc92031_tx_tasklet(struct net_device *dev)
static void _sc92031_rx_tasklet_error(struct net_device *dev,
u32 rx_status, unsigned rx_size)
static void _sc92031_rx_tasklet(struct net_device *dev)
static void _sc92031_link_tasklet(struct net_device *dev)
static void sc92031_tasklet(unsigned long data)
static irqreturn_t sc92031_interrupt(int irq, void *dev_id)
static struct net_device_stats *sc92031_get_stats(struct net_device *dev)
static netdev_tx_t sc92031_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static int sc92031_open(struct net_device *dev)
static int sc92031_stop(struct net_device *dev)
static void sc92031_set_multicast_list(struct net_device *dev)
static void sc92031_tx_timeout(struct net_device *dev)
static void sc92031_poll_controller(struct net_device *dev)
static int sc92031_ethtool_get_settings(struct net_device *dev,
struct ethtool_cmd *cmd)
static int sc92031_ethtool_set_settings(struct net_device *dev,
struct ethtool_cmd *cmd)
static void sc92031_ethtool_get_wol(struct net_device *dev,
struct ethtool_wolinfo *wolinfo)
static int sc92031_ethtool_set_wol(struct net_device *dev,
struct ethtool_wolinfo *wolinfo)
static int sc92031_ethtool_nway_reset(struct net_device *dev)
static const char sc92031_ethtool_stats_strings[SILAN_STATS_NUM][ETH_GSTRING_LEN] = ;
static void sc92031_ethtool_get_strings(struct net_device *dev,
u32 stringset, u8 *data)
static int sc92031_ethtool_get_sset_count(struct net_device *dev, int sset)
static void sc92031_ethtool_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 *data)
static const struct ethtool_ops sc92031_ethtool_ops = ;
static const struct net_device_ops sc92031_netdev_ops = ;
static int __devinit sc92031_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit sc92031_remove(struct pci_dev *pdev)
static int sc92031_suspend(struct pci_dev *pdev, pm_message_t state)
static int sc92031_resume(struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(sc92031_pci_device_id_table) = ;
MODULE_DEVICE_TABLE(pci, sc92031_pci_device_id_table);
static struct pci_driver sc92031_pci_driver = ;
static int __init sc92031_init(void)
static void __exit sc92031_exit(void)
module_init(sc92031_init);
module_exit(sc92031_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Cesar Eduardo Barros <cesarb@cesarb.net>");
MODULE_DESCRIPTION("Silan SC92031 PCI Fast Ethernet Adapter driver");
