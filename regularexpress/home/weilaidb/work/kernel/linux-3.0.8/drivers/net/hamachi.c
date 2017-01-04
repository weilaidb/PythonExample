#define DRV_NAME	"hamachi"
#define DRV_VERSION	"2.1"
#define DRV_RELDATE	"Sept 11, 2006"
static int debug = 1;
#define final_version
#define hamachi_debug debug
static int max_interrupt_work = 40;
static int mtu;
static int max_rx_latency = 0x11;
static int max_rx_gap = 0x05;
static int min_rx_pkt = 0x18;
static int max_tx_latency = 0x00;
static int max_tx_gap = 0x00;
static int min_tx_pkt = 0x30;
static int rx_copybreak;
static int force32;
#define MAX_UNITS 8
static int options[MAX_UNITS] = ;
static int full_duplex[MAX_UNITS] = ;
static int rx_params[MAX_UNITS] = ;
static int tx_params[MAX_UNITS] = ;
#define TX_RING_SIZE	64
#define RX_RING_SIZE	512
#define TX_TOTAL_SIZE	TX_RING_SIZE*sizeof(struct hamachi_desc)
#define RX_TOTAL_SIZE	RX_RING_SIZE*sizeof(struct hamachi_desc)
#define RX_CHECKSUM
#define TX_TIMEOUT  (5*HZ)
static const char version[] __devinitconst =
KERN_INFO DRV_NAME ".c:v" DRV_VERSION " " DRV_RELDATE "  Written by Donald Becker\n"
"   Some modifications by Eric kasten <kasten@nscl.msu.edu>\n"
"   Further modifications by Keith Underwood <keithu@parl.clemson.edu>\n";
#define IP_MF 0x2000
#define IP_OFFSET IPOPT_OFFSET
#define IP_OFFSET 2
#define RUN_AT(x) (jiffies + (x))
#define ADDRLEN 32
#if ADDRLEN == 64
#define cpu_to_leXX(addr)	cpu_to_le64(addr)
#define leXX_to_cpu(addr)	le64_to_cpu(addr)
#define cpu_to_leXX(addr)	cpu_to_le32(addr)
#define leXX_to_cpu(addr)	le32_to_cpu(addr)
#define PKT_BUF_SZ		1536
#define MAX_FRAME_SIZE  1518
static void hamachi_timer(unsigned long data);
enum capability_flags ;
static const struct chip_info  chip_tbl[] = ;
enum hamachi_offsets ;
enum MII_offsets ;
enum intr_status_bits ;
struct hamachi_desc ;
enum desc_status_bits ;
#define PRIV_ALIGN	15
#define MII_CNT		4
struct hamachi_private ;
MODULE_AUTHOR("Donald Becker <becker@scyld.com>, Eric Kasten <kasten@nscl.msu.edu>, Keith Underwood <keithu@parl.clemson.edu>");
MODULE_DESCRIPTION("Packet Engines 'Hamachi' GNIC-II Gigabit Ethernet driver");
MODULE_LICENSE("GPL");
module_param(max_interrupt_work, int, 0);
module_param(mtu, int, 0);
module_param(debug, int, 0);
module_param(min_rx_pkt, int, 0);
module_param(max_rx_gap, int, 0);
module_param(max_rx_latency, int, 0);
module_param(min_tx_pkt, int, 0);
module_param(max_tx_gap, int, 0);
module_param(max_tx_latency, int, 0);
module_param(rx_copybreak, int, 0);
module_param_array(rx_params, int, NULL, 0);
module_param_array(tx_params, int, NULL, 0);
module_param_array(options, int, NULL, 0);
module_param_array(full_duplex, int, NULL, 0);
module_param(force32, int, 0);
MODULE_PARM_DESC(max_interrupt_work, "GNIC-II maximum events handled per interrupt");
MODULE_PARM_DESC(mtu, "GNIC-II MTU (all boards)");
MODULE_PARM_DESC(debug, "GNIC-II debug level (0-7)");
MODULE_PARM_DESC(min_rx_pkt, "GNIC-II minimum Rx packets processed between interrupts");
MODULE_PARM_DESC(max_rx_gap, "GNIC-II maximum Rx inter-packet gap in 8.192 microsecond units");
MODULE_PARM_DESC(max_rx_latency, "GNIC-II time between Rx interrupts in 8.192 microsecond units");
MODULE_PARM_DESC(min_tx_pkt, "GNIC-II minimum Tx packets processed between interrupts");
MODULE_PARM_DESC(max_tx_gap, "GNIC-II maximum Tx inter-packet gap in 8.192 microsecond units");
MODULE_PARM_DESC(max_tx_latency, "GNIC-II time between Tx interrupts in 8.192 microsecond units");
MODULE_PARM_DESC(rx_copybreak, "GNIC-II copy breakpoint for copy-only-tiny-frames");
MODULE_PARM_DESC(rx_params, "GNIC-II min_rx_pkt+max_rx_gap+max_rx_latency");
MODULE_PARM_DESC(tx_params, "GNIC-II min_tx_pkt+max_tx_gap+max_tx_latency");
MODULE_PARM_DESC(options, "GNIC-II Bits 0-3: media type, bits 4-6: as force32, bit 7: half duplex, bit 9 full duplex");
MODULE_PARM_DESC(full_duplex, "GNIC-II full duplex setting(s) (1)");
MODULE_PARM_DESC(force32, "GNIC-II: Bit 0: 32 bit PCI, bit 1: disable parity, bit 2: 64 bit PCI (all boards)");
static int read_eeprom(void __iomem *ioaddr, int location);
static int mdio_read(struct net_device *dev, int phy_id, int location);
static void mdio_write(struct net_device *dev, int phy_id, int location, int value);
static int hamachi_open(struct net_device *dev);
static int netdev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static void hamachi_timer(unsigned long data);
static void hamachi_tx_timeout(struct net_device *dev);
static void hamachi_init_ring(struct net_device *dev);
static netdev_tx_t hamachi_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t hamachi_interrupt(int irq, void *dev_instance);
static int hamachi_rx(struct net_device *dev);
static inline int hamachi_tx(struct net_device *dev);
static void hamachi_error(struct net_device *dev, int intr_status);
static int hamachi_close(struct net_device *dev);
static struct net_device_stats *hamachi_get_stats(struct net_device *dev);
static void set_rx_mode(struct net_device *dev);
static const struct ethtool_ops ethtool_ops;
static const struct ethtool_ops ethtool_ops_no_mii;
static const struct net_device_ops hamachi_netdev_ops = ;
static int __devinit hamachi_init_one (struct pci_dev *pdev,
const struct pci_device_id *ent)
static int __devinit read_eeprom(void __iomem *ioaddr, int location)
static int mdio_read(struct net_device *dev, int phy_id, int location)
static void mdio_write(struct net_device *dev, int phy_id, int location, int value)
static int hamachi_open(struct net_device *dev)
static inline int hamachi_tx(struct net_device *dev)
static void hamachi_timer(unsigned long data)
static void hamachi_tx_timeout(struct net_device *dev)
static void hamachi_init_ring(struct net_device *dev)
static netdev_tx_t hamachi_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static irqreturn_t hamachi_interrupt(int irq, void *dev_instance)
static int hamachi_rx(struct net_device *dev)
static void hamachi_error(struct net_device *dev, int intr_status)
static int hamachi_close(struct net_device *dev)
static struct net_device_stats *hamachi_get_stats(struct net_device *dev)
static void set_rx_mode(struct net_device *dev)
static int check_if_running(struct net_device *dev)
static void hamachi_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int hamachi_get_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int hamachi_set_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int hamachi_nway_reset(struct net_device *dev)
static u32 hamachi_get_link(struct net_device *dev)
static const struct ethtool_ops ethtool_ops = ;
static const struct ethtool_ops ethtool_ops_no_mii = ;
static int netdev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void __devexit hamachi_remove_one (struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(hamachi_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, hamachi_pci_tbl);
static struct pci_driver hamachi_driver = ;
static int __init hamachi_init (void)
static void __exit hamachi_exit (void)
module_init(hamachi_init);
module_exit(hamachi_exit);
