#define IPG_RX_RING_BYTES	(sizeof(struct ipg_rx) * IPG_RFDLIST_LENGTH)
#define IPG_TX_RING_BYTES	(sizeof(struct ipg_tx) * IPG_TFDLIST_LENGTH)
#define IPG_RESET_MASK \
(IPG_AC_GLOBAL_RESET | IPG_AC_RX_RESET | IPG_AC_TX_RESET | \
IPG_AC_DMA | IPG_AC_FIFO | IPG_AC_NETWORK | IPG_AC_HOST | \
IPG_AC_AUTO_INIT)
#define ipg_w32(val32, reg)	iowrite32((val32), ioaddr + (reg))
#define ipg_w16(val16, reg)	iowrite16((val16), ioaddr + (reg))
#define ipg_w8(val8, reg)	iowrite8((val8), ioaddr + (reg))
#define ipg_r32(reg)		ioread32(ioaddr + (reg))
#define ipg_r16(reg)		ioread16(ioaddr + (reg))
#define ipg_r8(reg)		ioread8(ioaddr + (reg))
enum ;
#define DRV_NAME	"ipg"
MODULE_AUTHOR("IC Plus Corp. 2003");
MODULE_DESCRIPTION("IC Plus IP1000 Gigabit Ethernet Adapter Linux Driver");
MODULE_LICENSE("GPL");
#define IPG_MAX_RXFRAME_SIZE	0x0600
#define IPG_RXFRAG_SIZE		0x0600
#define IPG_RXSUPPORT_SIZE	0x0600
#define IPG_IS_JUMBO		false
static unsigned short DefaultPhyParam[] = ;
static const char *ipg_brand_name[] = ;
static DEFINE_PCI_DEVICE_TABLE(ipg_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, ipg_pci_tbl);
static inline void __iomem *ipg_ioaddr(struct net_device *dev)
static void ipg_dump_rfdlist(struct net_device *dev)
static void ipg_dump_tfdlist(struct net_device *dev)
static void ipg_write_phy_ctl(void __iomem *ioaddr, u8 data)
static void ipg_drive_phy_ctl_low_high(void __iomem *ioaddr, u8 data)
static void send_three_state(void __iomem *ioaddr, u8 phyctrlpolarity)
static void send_end(void __iomem *ioaddr, u8 phyctrlpolarity)
static u16 read_phy_bit(void __iomem *ioaddr, u8 phyctrlpolarity)
static int mdio_read(struct net_device *dev, int phy_id, int phy_reg)
static void mdio_write(struct net_device *dev, int phy_id, int phy_reg, int val)
static void ipg_set_led_mode(struct net_device *dev)
static void ipg_set_phy_set(struct net_device *dev)
static int ipg_reset(struct net_device *dev, u32 resetflags)
static int ipg_find_phyaddr(struct net_device *dev)
static int ipg_config_autoneg(struct net_device *dev)
static void ipg_nic_set_multicast_list(struct net_device *dev)
static int ipg_io_config(struct net_device *dev)
static int ipg_get_rxbuff(struct net_device *dev, int entry)
static int init_rfdlist(struct net_device *dev)
static void init_tfdlist(struct net_device *dev)
static void ipg_nic_txfree(struct net_device *dev)
static void ipg_tx_timeout(struct net_device *dev)
static void ipg_nic_txcleanup(struct net_device *dev)
static struct net_device_stats *ipg_nic_get_stats(struct net_device *dev)
static int ipg_nic_rxrestore(struct net_device *dev)
enum ;
enum ;
static void ipg_nic_rx_free_skb(struct net_device *dev)
static int ipg_nic_rx_check_frame_type(struct net_device *dev)
static int ipg_nic_rx_check_error(struct net_device *dev)
static void ipg_nic_rx_with_start_and_end(struct net_device *dev,
struct ipg_nic_private *sp,
struct ipg_rx *rxfd, unsigned entry)
static void ipg_nic_rx_with_start(struct net_device *dev,
struct ipg_nic_private *sp,
struct ipg_rx *rxfd, unsigned entry)
static void ipg_nic_rx_with_end(struct net_device *dev,
struct ipg_nic_private *sp,
struct ipg_rx *rxfd, unsigned entry)
static void ipg_nic_rx_no_start_no_end(struct net_device *dev,
struct ipg_nic_private *sp,
struct ipg_rx *rxfd, unsigned entry)
static int ipg_nic_rx_jumbo(struct net_device *dev)
static int ipg_nic_rx(struct net_device *dev)
static void ipg_reset_after_host_error(struct work_struct *work)
static irqreturn_t ipg_interrupt_handler(int irq, void *dev_inst)
static void ipg_rx_clear(struct ipg_nic_private *sp)
static void ipg_tx_clear(struct ipg_nic_private *sp)
static int ipg_nic_open(struct net_device *dev)
static int ipg_nic_stop(struct net_device *dev)
static netdev_tx_t ipg_nic_hard_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static void ipg_set_phy_default_param(unsigned char rev,
struct net_device *dev, int phy_address)
static int read_eeprom(struct net_device *dev, int eep_addr)
static void ipg_init_mii(struct net_device *dev)
static int ipg_hw_init(struct net_device *dev)
static int ipg_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int ipg_nic_change_mtu(struct net_device *dev, int new_mtu)
static int ipg_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int ipg_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int ipg_nway_reset(struct net_device *dev)
static const struct ethtool_ops ipg_ethtool_ops = ;
static void __devexit ipg_remove(struct pci_dev *pdev)
static const struct net_device_ops ipg_netdev_ops = ;
static int __devinit ipg_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static struct pci_driver ipg_pci_driver = ;
static int __init ipg_init_module(void)
static void __exit ipg_exit_module(void)
module_init(ipg_init_module);
module_exit(ipg_exit_module);
