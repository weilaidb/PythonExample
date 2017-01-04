#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME	"winbond-840"
#define DRV_VERSION	"1.01-e"
#define DRV_RELDATE	"Sep-11-2006"
static int debug = 1;
static int max_interrupt_work = 20;
static int multicast_filter_limit = 32;
static int rx_copybreak;
#define MAX_UNITS 8
static int options[MAX_UNITS] = ;
static int full_duplex[MAX_UNITS] = ;
#define TX_QUEUE_LEN	10
#define TX_QUEUE_LEN_RESTART	5
#define TX_BUFLIMIT	(1024-128)
#define TX_FIFO_SIZE (2048)
#define TX_BUG_FIFO_LIMIT (TX_FIFO_SIZE-1514-16)
#define TX_TIMEOUT  (2*HZ)
#undef PKT_BUF_SZ
#define PKT_BUF_SZ		1536
static const char version[] __initconst =
"v" DRV_VERSION " (2.4 port) "
DRV_RELDATE "  Donald Becker <becker@scyld.com>\n"
"  http:
MODULE_AUTHOR("Donald Becker <becker@scyld.com>");
MODULE_DESCRIPTION("Winbond W89c840 Ethernet driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_param(max_interrupt_work, int, 0);
module_param(debug, int, 0);
module_param(rx_copybreak, int, 0);
module_param(multicast_filter_limit, int, 0);
module_param_array(options, int, NULL, 0);
module_param_array(full_duplex, int, NULL, 0);
MODULE_PARM_DESC(max_interrupt_work, "winbond-840 maximum events handled per interrupt");
MODULE_PARM_DESC(debug, "winbond-840 debug level (0-6)");
MODULE_PARM_DESC(rx_copybreak, "winbond-840 copy breakpoint for copy-only-tiny-frames");
MODULE_PARM_DESC(multicast_filter_limit, "winbond-840 maximum number of filtered multicast addresses");
MODULE_PARM_DESC(options, "winbond-840: Bits 0-3: media type, bit 17: full duplex");
MODULE_PARM_DESC(full_duplex, "winbond-840 full duplex setting(s) (1)");
enum chip_capability_flags ;
static DEFINE_PCI_DEVICE_TABLE(w840_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, w840_pci_tbl);
enum ;
struct pci_id_info ;
static const struct pci_id_info pci_id_tbl[] __devinitdata = ;
enum w840_offsets ;
enum rx_mode_bits ;
enum mii_reg_bits ;
struct w840_rx_desc ;
struct w840_tx_desc ;
#define MII_CNT		1
struct netdev_private ;
static int  eeprom_read(void __iomem *ioaddr, int location);
static int  mdio_read(struct net_device *dev, int phy_id, int location);
static void mdio_write(struct net_device *dev, int phy_id, int location, int value);
static int  netdev_open(struct net_device *dev);
static int  update_link(struct net_device *dev);
static void netdev_timer(unsigned long data);
static void init_rxtx_rings(struct net_device *dev);
static void free_rxtx_rings(struct netdev_private *np);
static void init_registers(struct net_device *dev);
static void tx_timeout(struct net_device *dev);
static int alloc_ringdesc(struct net_device *dev);
static void free_ringdesc(struct netdev_private *np);
static netdev_tx_t start_tx(struct sk_buff *skb, struct net_device *dev);
static irqreturn_t intr_handler(int irq, void *dev_instance);
static void netdev_error(struct net_device *dev, int intr_status);
static int  netdev_rx(struct net_device *dev);
static u32 __set_rx_mode(struct net_device *dev);
static void set_rx_mode(struct net_device *dev);
static struct net_device_stats *get_stats(struct net_device *dev);
static int netdev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static const struct ethtool_ops netdev_ethtool_ops;
static int  netdev_close(struct net_device *dev);
static const struct net_device_ops netdev_ops = ;
static int __devinit w840_probe1 (struct pci_dev *pdev,
const struct pci_device_id *ent)
#define eeprom_delay(ee_addr)	ioread32(ee_addr)
enum EEPROM_Ctrl_Bits ;
enum EEPROM_Cmds ;
static int eeprom_read(void __iomem *addr, int location)
#define mdio_delay(mdio_addr) ioread32(mdio_addr)
static char mii_preamble_required = 1;
#define MDIO_WRITE0 (MDIO_EnbOutput)
#define MDIO_WRITE1 (MDIO_DataOut | MDIO_EnbOutput)
static void mdio_sync(void __iomem *mdio_addr)
static int mdio_read(struct net_device *dev, int phy_id, int location)
static void mdio_write(struct net_device *dev, int phy_id, int location, int value)
static int netdev_open(struct net_device *dev)
#define MII_DAVICOM_DM9101	0x0181b800
static int update_link(struct net_device *dev)
#define RXTX_TIMEOUT	2000
static inline void update_csr6(struct net_device *dev, int new)
static void netdev_timer(unsigned long data)
static void init_rxtx_rings(struct net_device *dev)
static void free_rxtx_rings(struct netdev_private* np)
static void init_registers(struct net_device *dev)
static void tx_timeout(struct net_device *dev)
static int alloc_ringdesc(struct net_device *dev)
static void free_ringdesc(struct netdev_private *np)
static netdev_tx_t start_tx(struct sk_buff *skb, struct net_device *dev)
static void netdev_tx_done(struct net_device *dev)
static irqreturn_t intr_handler(int irq, void *dev_instance)
static int netdev_rx(struct net_device *dev)
static void netdev_error(struct net_device *dev, int intr_status)
static struct net_device_stats *get_stats(struct net_device *dev)
static u32 __set_rx_mode(struct net_device *dev)
static void set_rx_mode(struct net_device *dev)
static void netdev_get_drvinfo (struct net_device *dev, struct ethtool_drvinfo *info)
static int netdev_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int netdev_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int netdev_nway_reset(struct net_device *dev)
static u32 netdev_get_link(struct net_device *dev)
static u32 netdev_get_msglevel(struct net_device *dev)
static void netdev_set_msglevel(struct net_device *dev, u32 value)
static const struct ethtool_ops netdev_ethtool_ops = ;
static int netdev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int netdev_close(struct net_device *dev)
static void __devexit w840_remove1 (struct pci_dev *pdev)
static int w840_suspend (struct pci_dev *pdev, pm_message_t state)
static int w840_resume (struct pci_dev *pdev)
static struct pci_driver w840_driver = ;
static int __init w840_init(void)
static void __exit w840_exit(void)
module_init(w840_init);
module_exit(w840_exit);
