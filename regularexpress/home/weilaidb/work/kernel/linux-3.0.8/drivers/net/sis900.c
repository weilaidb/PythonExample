#define SIS900_MODULE_NAME "sis900"
#define SIS900_DRV_VERSION "v1.08.10 Apr. 2 2006"
static const char version[] __devinitconst =
KERN_INFO "sis900.c: " SIS900_DRV_VERSION "\n";
static int max_interrupt_work = 40;
static int multicast_filter_limit = 128;
static int sis900_debug = -1;
#define SIS900_DEF_MSG \
(NETIF_MSG_DRV		| \
NETIF_MSG_LINK		| \
NETIF_MSG_RX_ERR	| \
NETIF_MSG_TX_ERR)
#define TX_TIMEOUT  (4*HZ)
enum ;
static const char * card_names[] = ;
static DEFINE_PCI_DEVICE_TABLE(sis900_pci_tbl) = ;
MODULE_DEVICE_TABLE (pci, sis900_pci_tbl);
static void sis900_read_mode(struct net_device *net_dev, int *speed, int *duplex);
static const struct mii_chip_info  mii_chip_table[] = ;
struct mii_phy ;
typedef struct _BufferDesc  BufferDesc;
struct sis900_private ;
MODULE_AUTHOR("Jim Huang <cmhuang@sis.com.tw>, Ollie Lho <ollie@sis.com.tw>");
MODULE_DESCRIPTION("SiS 900 PCI Fast Ethernet driver");
MODULE_LICENSE("GPL");
module_param(multicast_filter_limit, int, 0444);
module_param(max_interrupt_work, int, 0444);
module_param(sis900_debug, int, 0444);
MODULE_PARM_DESC(multicast_filter_limit, "SiS 900/7016 maximum number of filtered multicast addresses");
MODULE_PARM_DESC(max_interrupt_work, "SiS 900/7016 maximum events handled per interrupt");
MODULE_PARM_DESC(sis900_debug, "SiS 900/7016 bitmapped debugging message level");
static void sis900_poll(struct net_device *dev);
static int sis900_open(struct net_device *net_dev);
static int sis900_mii_probe (struct net_device * net_dev);
static void sis900_init_rxfilter (struct net_device * net_dev);
static u16 read_eeprom(long ioaddr, int location);
static int mdio_read(struct net_device *net_dev, int phy_id, int location);
static void mdio_write(struct net_device *net_dev, int phy_id, int location, int val);
static void sis900_timer(unsigned long data);
static void sis900_check_mode (struct net_device *net_dev, struct mii_phy *mii_phy);
static void sis900_tx_timeout(struct net_device *net_dev);
static void sis900_init_tx_ring(struct net_device *net_dev);
static void sis900_init_rx_ring(struct net_device *net_dev);
static netdev_tx_t sis900_start_xmit(struct sk_buff *skb,
struct net_device *net_dev);
static int sis900_rx(struct net_device *net_dev);
static void sis900_finish_xmit (struct net_device *net_dev);
static irqreturn_t sis900_interrupt(int irq, void *dev_instance);
static int sis900_close(struct net_device *net_dev);
static int mii_ioctl(struct net_device *net_dev, struct ifreq *rq, int cmd);
static u16 sis900_mcast_bitnr(u8 *addr, u8 revision);
static void set_rx_mode(struct net_device *net_dev);
static void sis900_reset(struct net_device *net_dev);
static void sis630_set_eq(struct net_device *net_dev, u8 revision);
static int sis900_set_config(struct net_device *dev, struct ifmap *map);
static u16 sis900_default_phy(struct net_device * net_dev);
static void sis900_set_capability( struct net_device *net_dev ,struct mii_phy *phy);
static u16 sis900_reset_phy(struct net_device *net_dev, int phy_addr);
static void sis900_auto_negotiate(struct net_device *net_dev, int phy_addr);
static void sis900_set_mode (long ioaddr, int speed, int duplex);
static const struct ethtool_ops sis900_ethtool_ops;
static int __devinit sis900_get_mac_addr(struct pci_dev * pci_dev, struct net_device *net_dev)
static int __devinit sis630e_get_mac_addr(struct pci_dev * pci_dev,
struct net_device *net_dev)
static int __devinit sis635_get_mac_addr(struct pci_dev * pci_dev,
struct net_device *net_dev)
static int __devinit sis96x_get_mac_addr(struct pci_dev * pci_dev,
struct net_device *net_dev)
static const struct net_device_ops sis900_netdev_ops = ;
static int __devinit sis900_probe(struct pci_dev *pci_dev,
const struct pci_device_id *pci_id)
static int __devinit sis900_mii_probe(struct net_device * net_dev)
static u16 sis900_default_phy(struct net_device * net_dev)
static void sis900_set_capability(struct net_device *net_dev, struct mii_phy *phy)
#define eeprom_delay()  inl(ee_addr)
static u16 __devinit read_eeprom(long ioaddr, int location)
#define mdio_delay()    inl(mdio_addr)
static void mdio_idle(long mdio_addr)
static void mdio_reset(long mdio_addr)
static int mdio_read(struct net_device *net_dev, int phy_id, int location)
static void mdio_write(struct net_device *net_dev, int phy_id, int location,
int value)
static u16 sis900_reset_phy(struct net_device *net_dev, int phy_addr)
static void sis900_poll(struct net_device *dev)
static int
sis900_open(struct net_device *net_dev)
static void
sis900_init_rxfilter (struct net_device * net_dev)
static void
sis900_init_tx_ring(struct net_device *net_dev)
static void
sis900_init_rx_ring(struct net_device *net_dev)
static void sis630_set_eq(struct net_device *net_dev, u8 revision)
static void sis900_timer(unsigned long data)
static void sis900_check_mode(struct net_device *net_dev, struct mii_phy *mii_phy)
static void sis900_set_mode (long ioaddr, int speed, int duplex)
static void sis900_auto_negotiate(struct net_device *net_dev, int phy_addr)
static void sis900_read_mode(struct net_device *net_dev, int *speed, int *duplex)
static void sis900_tx_timeout(struct net_device *net_dev)
static netdev_tx_t
sis900_start_xmit(struct sk_buff *skb, struct net_device *net_dev)
static irqreturn_t sis900_interrupt(int irq, void *dev_instance)
static int sis900_rx(struct net_device *net_dev)
static void sis900_finish_xmit (struct net_device *net_dev)
static int sis900_close(struct net_device *net_dev)
static void sis900_get_drvinfo(struct net_device *net_dev,
struct ethtool_drvinfo *info)
static u32 sis900_get_msglevel(struct net_device *net_dev)
static void sis900_set_msglevel(struct net_device *net_dev, u32 value)
static u32 sis900_get_link(struct net_device *net_dev)
static int sis900_get_settings(struct net_device *net_dev,
struct ethtool_cmd *cmd)
static int sis900_set_settings(struct net_device *net_dev,
struct ethtool_cmd *cmd)
static int sis900_nway_reset(struct net_device *net_dev)
static int sis900_set_wol(struct net_device *net_dev, struct ethtool_wolinfo *wol)
static void sis900_get_wol(struct net_device *net_dev, struct ethtool_wolinfo *wol)
static const struct ethtool_ops sis900_ethtool_ops = ;
static int mii_ioctl(struct net_device *net_dev, struct ifreq *rq, int cmd)
static int sis900_set_config(struct net_device *dev, struct ifmap *map)
static inline u16 sis900_mcast_bitnr(u8 *addr, u8 revision)
static void set_rx_mode(struct net_device *net_dev)
static void sis900_reset(struct net_device *net_dev)
static void __devexit sis900_remove(struct pci_dev *pci_dev)
static int sis900_suspend(struct pci_dev *pci_dev, pm_message_t state)
static int sis900_resume(struct pci_dev *pci_dev)
static struct pci_driver sis900_pci_driver = ;
static int __init sis900_init_module(void)
static void __exit sis900_cleanup_module(void)
module_init(sis900_init_module);
module_exit(sis900_cleanup_module);
