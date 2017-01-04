#define DRV_NAME	"DL2000/TC902x-based linux driver"
#define DRV_VERSION	"v1.19"
#define DRV_RELDATE	"2007/08/12"
static char version[] __devinitdata =
KERN_INFO DRV_NAME " " DRV_VERSION " " DRV_RELDATE "\n";
#define MAX_UNITS 8
static int mtu[MAX_UNITS];
static int vlan[MAX_UNITS];
static int jumbo[MAX_UNITS];
static char *media[MAX_UNITS];
static int tx_flow=-1;
static int rx_flow=-1;
static int copy_thresh;
static int rx_coalesce=10;
static int rx_timeout=200;
static int tx_coalesce=16;
MODULE_AUTHOR ("Edward Peng");
MODULE_DESCRIPTION ("D-Link DL2000-based Gigabit Ethernet Adapter");
MODULE_LICENSE("GPL");
module_param_array(mtu, int, NULL, 0);
module_param_array(media, charp, NULL, 0);
module_param_array(vlan, int, NULL, 0);
module_param_array(jumbo, int, NULL, 0);
module_param(tx_flow, int, 0);
module_param(rx_flow, int, 0);
module_param(copy_thresh, int, 0);
module_param(rx_coalesce, int, 0);
module_param(rx_timeout, int, 0);
module_param(tx_coalesce, int, 0);
#define DEFAULT_INTR (RxDMAComplete | HostError | IntRequested | TxDMAComplete| \
UpdateStats | LinkEvent)
#define EnableInt() \
writew(DEFAULT_INTR, ioaddr + IntEnable)
static const int max_intrloop = 50;
static const int multicast_filter_limit = 0x40;
static int rio_open (struct net_device *dev);
static void rio_timer (unsigned long data);
static void rio_tx_timeout (struct net_device *dev);
static void alloc_list (struct net_device *dev);
static netdev_tx_t start_xmit (struct sk_buff *skb, struct net_device *dev);
static irqreturn_t rio_interrupt (int irq, void *dev_instance);
static void rio_free_tx (struct net_device *dev, int irq);
static void tx_error (struct net_device *dev, int tx_status);
static int receive_packet (struct net_device *dev);
static void rio_error (struct net_device *dev, int int_status);
static int change_mtu (struct net_device *dev, int new_mtu);
static void set_multicast (struct net_device *dev);
static struct net_device_stats *get_stats (struct net_device *dev);
static int clear_stats (struct net_device *dev);
static int rio_ioctl (struct net_device *dev, struct ifreq *rq, int cmd);
static int rio_close (struct net_device *dev);
static int find_miiphy (struct net_device *dev);
static int parse_eeprom (struct net_device *dev);
static int read_eeprom (long ioaddr, int eep_addr);
static int mii_wait_link (struct net_device *dev, int wait);
static int mii_set_media (struct net_device *dev);
static int mii_get_media (struct net_device *dev);
static int mii_set_media_pcs (struct net_device *dev);
static int mii_get_media_pcs (struct net_device *dev);
static int mii_read (struct net_device *dev, int phy_addr, int reg_num);
static int mii_write (struct net_device *dev, int phy_addr, int reg_num,
u16 data);
static const struct ethtool_ops ethtool_ops;
static const struct net_device_ops netdev_ops = ;
static int __devinit
rio_probe1 (struct pci_dev *pdev, const struct pci_device_id *ent)
static int
find_miiphy (struct net_device *dev)
static int
parse_eeprom (struct net_device *dev)
static int
rio_open (struct net_device *dev)
static void
rio_timer (unsigned long data)
static void
rio_tx_timeout (struct net_device *dev)
static void
alloc_list (struct net_device *dev)
static netdev_tx_t
start_xmit (struct sk_buff *skb, struct net_device *dev)
static irqreturn_t
rio_interrupt (int irq, void *dev_instance)
static inline dma_addr_t desc_to_dma(struct netdev_desc *desc)
static void
rio_free_tx (struct net_device *dev, int irq)
static void
tx_error (struct net_device *dev, int tx_status)
static int
receive_packet (struct net_device *dev)
static void
rio_error (struct net_device *dev, int int_status)
static struct net_device_stats *
get_stats (struct net_device *dev)
static int
clear_stats (struct net_device *dev)
static int
change_mtu (struct net_device *dev, int new_mtu)
static void
set_multicast (struct net_device *dev)
static void rio_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int rio_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int rio_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static u32 rio_get_link(struct net_device *dev)
static const struct ethtool_ops ethtool_ops = ;
static int
rio_ioctl (struct net_device *dev, struct ifreq *rq, int cmd)
#define EEP_READ 0x0200
#define EEP_BUSY 0x8000
static int
read_eeprom (long ioaddr, int eep_addr)
enum phy_ctrl_bits ;
#define mii_delay() readb(ioaddr)
static void
mii_sendbit (struct net_device *dev, u32 data)
static int
mii_getbit (struct net_device *dev)
static void
mii_send_bits (struct net_device *dev, u32 data, int len)
static int
mii_read (struct net_device *dev, int phy_addr, int reg_num)
static int
mii_write (struct net_device *dev, int phy_addr, int reg_num, u16 data)
static int
mii_wait_link (struct net_device *dev, int wait)
static int
mii_get_media (struct net_device *dev)
static int
mii_set_media (struct net_device *dev)
static int
mii_get_media_pcs (struct net_device *dev)
static int
mii_set_media_pcs (struct net_device *dev)
static int
rio_close (struct net_device *dev)
static void __devexit
rio_remove1 (struct pci_dev *pdev)
static struct pci_driver rio_driver = ;
static int __init
rio_init (void)
static void __exit
rio_exit (void)
module_init (rio_init);
module_exit (rio_exit);
