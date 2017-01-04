#define DRV_NAME	"sundance"
#define DRV_VERSION	"1.2"
#define DRV_RELDATE	"11-Sep-2006"
static int debug = 1;
static const int multicast_filter_limit = 32;
static int rx_copybreak;
static int flowctrl=1;
#define MAX_UNITS 8
static char *media[MAX_UNITS];
#define TX_RING_SIZE	32
#define TX_QUEUE_LEN	(TX_RING_SIZE - 1)
#define RX_RING_SIZE	64
#define RX_BUDGET	32
#define TX_TOTAL_SIZE	TX_RING_SIZE*sizeof(struct netdev_desc)
#define RX_TOTAL_SIZE	RX_RING_SIZE*sizeof(struct netdev_desc)
#define TX_TIMEOUT  (4*HZ)
#define PKT_BUF_SZ		1536
static const char version[] __devinitconst =
KERN_INFO DRV_NAME ".c:v" DRV_VERSION " " DRV_RELDATE
" Written by Donald Becker\n";
MODULE_AUTHOR("Donald Becker <becker@scyld.com>");
MODULE_DESCRIPTION("Sundance Alta Ethernet driver");
MODULE_LICENSE("GPL");
module_param(debug, int, 0);
module_param(rx_copybreak, int, 0);
module_param_array(media, charp, NULL, 0);
module_param(flowctrl, int, 0);
MODULE_PARM_DESC(debug, "Sundance Alta debug level (0-5)");
MODULE_PARM_DESC(rx_copybreak, "Sundance Alta copy breakpoint for copy-only-tiny-frames");
MODULE_PARM_DESC(flowctrl, "Sundance Alta flow control [0|1]");
#define USE_IO_OPS 1
static DEFINE_PCI_DEVICE_TABLE(sundance_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, sundance_pci_tbl);
enum ;
struct pci_id_info ;
static const struct pci_id_info pci_id_tbl[] __devinitdata = ;
enum alta_offsets ;
#define ASIC_HI_WORD(x)	((x) + 2)
enum ASICCtrl_HiWord_bit ;
enum intr_status_bits ;
enum rx_mode_bits ;
enum mac_ctrl0_bits ;
enum mac_ctrl1_bits ;
struct netdev_desc ;
enum desc_status_bits ;
#define PRIV_ALIGN	15
#define MII_CNT		4
struct netdev_private ;
#define EEPROM_SA_OFFSET	0x10
#define DEFAULT_INTR (IntrRxDMADone | IntrPCIErr | \
IntrDrvRqst | IntrTxDone | StatsMax | \
LinkChange)
static int  change_mtu(struct net_device *dev, int new_mtu);
static int  eeprom_read(void __iomem *ioaddr, int location);
static int  mdio_read(struct net_device *dev, int phy_id, int location);
static void mdio_write(struct net_device *dev, int phy_id, int location, int value);
static int  mdio_wait_link(struct net_device *dev, int wait);
static int  netdev_open(struct net_device *dev);
static void check_duplex(struct net_device *dev);
static void netdev_timer(unsigned long data);
static void tx_timeout(struct net_device *dev);
static void init_ring(struct net_device *dev);
static netdev_tx_t start_tx(struct sk_buff *skb, struct net_device *dev);
static int reset_tx (struct net_device *dev);
static irqreturn_t intr_handler(int irq, void *dev_instance);
static void rx_poll(unsigned long data);
static void tx_poll(unsigned long data);
static void refill_rx (struct net_device *dev);
static void netdev_error(struct net_device *dev, int intr_status);
static void netdev_error(struct net_device *dev, int intr_status);
static void set_rx_mode(struct net_device *dev);
static int __set_mac_addr(struct net_device *dev);
static int sundance_set_mac_addr(struct net_device *dev, void *data);
static struct net_device_stats *get_stats(struct net_device *dev);
static int netdev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static int  netdev_close(struct net_device *dev);
static const struct ethtool_ops ethtool_ops;
static void sundance_reset(struct net_device *dev, unsigned long reset_cmd)
static const struct net_device_ops netdev_ops = ;
static int __devinit sundance_probe1 (struct pci_dev *pdev,
const struct pci_device_id *ent)
static int change_mtu(struct net_device *dev, int new_mtu)
#define eeprom_delay(ee_addr)	ioread32(ee_addr)
static int __devinit eeprom_read(void __iomem *ioaddr, int location)
#define mdio_delay() ioread8(mdio_addr)
enum mii_reg_bits ;
#define MDIO_EnbIn  (0)
#define MDIO_WRITE0 (MDIO_EnbOutput)
#define MDIO_WRITE1 (MDIO_Data | MDIO_EnbOutput)
static void mdio_sync(void __iomem *mdio_addr)
static int mdio_read(struct net_device *dev, int phy_id, int location)
static void mdio_write(struct net_device *dev, int phy_id, int location, int value)
static int mdio_wait_link(struct net_device *dev, int wait)
static int netdev_open(struct net_device *dev)
static void check_duplex(struct net_device *dev)
static void netdev_timer(unsigned long data)
static void tx_timeout(struct net_device *dev)
static void init_ring(struct net_device *dev)
static void tx_poll (unsigned long data)
static netdev_tx_t
start_tx (struct sk_buff *skb, struct net_device *dev)
static int
reset_tx (struct net_device *dev)
static irqreturn_t intr_handler(int irq, void *dev_instance)
static void rx_poll(unsigned long data)
static void refill_rx (struct net_device *dev)
static void netdev_error(struct net_device *dev, int intr_status)
static struct net_device_stats *get_stats(struct net_device *dev)
static void set_rx_mode(struct net_device *dev)
static int __set_mac_addr(struct net_device *dev)
static int sundance_set_mac_addr(struct net_device *dev, void *data)
static const struct  sundance_stats[] = ;
static int check_if_running(struct net_device *dev)
static void get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int get_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int set_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int nway_reset(struct net_device *dev)
static u32 get_link(struct net_device *dev)
static u32 get_msglevel(struct net_device *dev)
static void set_msglevel(struct net_device *dev, u32 val)
static void get_strings(struct net_device *dev, u32 stringset,
u8 *data)
static int get_sset_count(struct net_device *dev, int sset)
static void get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 *data)
static const struct ethtool_ops ethtool_ops = ;
static int netdev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int netdev_close(struct net_device *dev)
static void __devexit sundance_remove1 (struct pci_dev *pdev)
static int sundance_suspend(struct pci_dev *pci_dev, pm_message_t state)
static int sundance_resume(struct pci_dev *pci_dev)
static struct pci_driver sundance_driver = ;
static int __init sundance_init(void)
static void __exit sundance_exit(void)
module_init(sundance_init);
module_exit(sundance_exit);
