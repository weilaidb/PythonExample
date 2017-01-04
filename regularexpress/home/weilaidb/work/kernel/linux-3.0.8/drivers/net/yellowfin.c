#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME	"yellowfin"
#define DRV_VERSION	"2.1"
#define DRV_RELDATE	"Sep 11, 2006"
static int debug = 1;
static int max_interrupt_work = 20;
static int mtu;
static int bogus_rx;
static int dma_ctrl = 0x004A0263;
static int fifo_cfg = 0x0020;
#elif defined(YF_NEW)
static int dma_ctrl = 0x00CAC277;
static int fifo_cfg = 0x0028;
static const int dma_ctrl = 0x004A0263;
static const int fifo_cfg = 0x0020;
static int rx_copybreak;
#define MAX_UNITS 8
static int options[MAX_UNITS] = ;
static int full_duplex[MAX_UNITS] = ;
static int gx_fix;
#define TX_RING_SIZE	16
#define TX_QUEUE_SIZE	12
#define RX_RING_SIZE	64
#define STATUS_TOTAL_SIZE	TX_RING_SIZE*sizeof(struct tx_status_words)
#define TX_TOTAL_SIZE		2*TX_RING_SIZE*sizeof(struct yellowfin_desc)
#define RX_TOTAL_SIZE		RX_RING_SIZE*sizeof(struct yellowfin_desc)
#define TX_TIMEOUT  (2*HZ)
#define PKT_BUF_SZ		1536
#define yellowfin_debug debug
static const char version[] __devinitconst =
KERN_INFO DRV_NAME ".c:v1.05  1/09/2001  Written by Donald Becker <becker@scyld.com>\n"
"  (unofficial 2.4.x port, " DRV_VERSION ", " DRV_RELDATE ")\n";
MODULE_AUTHOR("Donald Becker <becker@scyld.com>");
MODULE_DESCRIPTION("Packet Engines Yellowfin G-NIC Gigabit Ethernet driver");
MODULE_LICENSE("GPL");
module_param(max_interrupt_work, int, 0);
module_param(mtu, int, 0);
module_param(debug, int, 0);
module_param(rx_copybreak, int, 0);
module_param_array(options, int, NULL, 0);
module_param_array(full_duplex, int, NULL, 0);
module_param(gx_fix, int, 0);
MODULE_PARM_DESC(max_interrupt_work, "G-NIC maximum events handled per interrupt");
MODULE_PARM_DESC(mtu, "G-NIC MTU (all boards)");
MODULE_PARM_DESC(debug, "G-NIC debug level (0-7)");
MODULE_PARM_DESC(rx_copybreak, "G-NIC copy breakpoint for copy-only-tiny-frames");
MODULE_PARM_DESC(options, "G-NIC: Bits 0-3: media type, bit 17: full duplex");
MODULE_PARM_DESC(full_duplex, "G-NIC full duplex setting(s) (1)");
MODULE_PARM_DESC(gx_fix, "G-NIC: enable GX server chipset bug workaround (0-1)");
enum capability_flags ;
enum ;
struct pci_id_info ;
static const struct pci_id_info pci_id_tbl[] = ;
static DEFINE_PCI_DEVICE_TABLE(yellowfin_pci_tbl) = ;
MODULE_DEVICE_TABLE (pci, yellowfin_pci_tbl);
enum yellowfin_offsets ;
struct yellowfin_desc ;
struct tx_status_words ;
enum desc_cmd_bits ;
enum desc_status_bits ;
enum intr_status_bits ;
#define PRIV_ALIGN	31
#define MII_CNT		4
struct yellowfin_private ;
static int read_eeprom(void __iomem *ioaddr, int location);
static int mdio_read(void __iomem *ioaddr, int phy_id, int location);
static void mdio_write(void __iomem *ioaddr, int phy_id, int location, int value);
static int netdev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static int yellowfin_open(struct net_device *dev);
static void yellowfin_timer(unsigned long data);
static void yellowfin_tx_timeout(struct net_device *dev);
static int yellowfin_init_ring(struct net_device *dev);
static netdev_tx_t yellowfin_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t yellowfin_interrupt(int irq, void *dev_instance);
static int yellowfin_rx(struct net_device *dev);
static void yellowfin_error(struct net_device *dev, int intr_status);
static int yellowfin_close(struct net_device *dev);
static void set_rx_mode(struct net_device *dev);
static const struct ethtool_ops ethtool_ops;
static const struct net_device_ops netdev_ops = ;
static int __devinit yellowfin_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static int __devinit read_eeprom(void __iomem *ioaddr, int location)
static int mdio_read(void __iomem *ioaddr, int phy_id, int location)
static void mdio_write(void __iomem *ioaddr, int phy_id, int location, int value)
static int yellowfin_open(struct net_device *dev)
static void yellowfin_timer(unsigned long data)
static void yellowfin_tx_timeout(struct net_device *dev)
static int yellowfin_init_ring(struct net_device *dev)
static netdev_tx_t yellowfin_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static irqreturn_t yellowfin_interrupt(int irq, void *dev_instance)
static int yellowfin_rx(struct net_device *dev)
static void yellowfin_error(struct net_device *dev, int intr_status)
static int yellowfin_close(struct net_device *dev)
static void set_rx_mode(struct net_device *dev)
static void yellowfin_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static const struct ethtool_ops ethtool_ops = ;
static int netdev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void __devexit yellowfin_remove_one (struct pci_dev *pdev)
static struct pci_driver yellowfin_driver = ;
static int __init yellowfin_init (void)
static void __exit yellowfin_cleanup (void)
module_init(yellowfin_init);
module_exit(yellowfin_cleanup);
