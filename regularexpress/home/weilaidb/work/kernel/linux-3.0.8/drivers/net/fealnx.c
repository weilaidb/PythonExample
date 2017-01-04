#define DRV_NAME	"fealnx"
#define DRV_VERSION	"2.52"
#define DRV_RELDATE	"Sep-11-2006"
static int debug;
static int max_interrupt_work = 20;
static int multicast_filter_limit = 32;
static int rx_copybreak;
#define MAX_UNITS 8
static int options[MAX_UNITS] = ;
static int full_duplex[MAX_UNITS] = ;
#define TX_RING_SIZE    6
#define RX_RING_SIZE    12
#define TX_TOTAL_SIZE	TX_RING_SIZE*sizeof(struct fealnx_desc)
#define RX_TOTAL_SIZE	RX_RING_SIZE*sizeof(struct fealnx_desc)
#define TX_TIMEOUT      (2*HZ)
#define PKT_BUF_SZ      1536
static const char version[] __devinitconst =
KERN_INFO DRV_NAME ".c:v" DRV_VERSION " " DRV_RELDATE "\n";
#define USE_IO_OPS
#define RUN_AT(x) (jiffies + (x))
MODULE_AUTHOR("Myson or whoever");
MODULE_DESCRIPTION("Myson MTD-8xx 100/10M Ethernet PCI Adapter Driver");
MODULE_LICENSE("GPL");
module_param(max_interrupt_work, int, 0);
module_param(debug, int, 0);
module_param(rx_copybreak, int, 0);
module_param(multicast_filter_limit, int, 0);
module_param_array(options, int, NULL, 0);
module_param_array(full_duplex, int, NULL, 0);
MODULE_PARM_DESC(max_interrupt_work, "fealnx maximum events handled per interrupt");
MODULE_PARM_DESC(debug, "fealnx enable debugging (0-1)");
MODULE_PARM_DESC(rx_copybreak, "fealnx copy breakpoint for copy-only-tiny-frames");
MODULE_PARM_DESC(multicast_filter_limit, "fealnx maximum number of filtered multicast addresses");
MODULE_PARM_DESC(options, "fealnx: Bits 0-3: media type, bit 17: full duplex");
MODULE_PARM_DESC(full_duplex, "fealnx full duplex setting(s) (1)");
enum ;
enum chip_capability_flags ;
enum phy_type_flags ;
struct chip_info ;
static const struct chip_info skel_netdrv_tbl[] __devinitdata = ;
enum fealnx_offsets ;
enum intr_status_bits ;
enum rx_mode_bits ;
struct fealnx_desc ;
enum rx_desc_status_bits ;
enum rx_desc_control_bits ;
enum tx_desc_status_bits ;
enum tx_desc_control_bits ;
#define MASK_MIIR_MII_READ       0x00000000
#define MASK_MIIR_MII_WRITE      0x00000008
#define MASK_MIIR_MII_MDO        0x00000004
#define MASK_MIIR_MII_MDI        0x00000002
#define MASK_MIIR_MII_MDC        0x00000001
#define OP_READ             0x6000
#define OP_WRITE            0x5002
#define MysonPHYID      0xd0000302
#define MysonPHYID0     0x0302
#define StatusRegister  18
#define SPEED100        0x0400
#define FULLMODE        0x0800
#define SeeqPHYID0      0x0016
#define MIIRegister18   18
#define SPD_DET_100     0x80
#define DPLX_DET_FULL   0x40
#define AhdocPHYID0     0x0022
#define DiagnosticReg   18
#define DPLX_FULL       0x0800
#define Speed_100       0x0400
#define MarvellPHYID0           0x0141
#define LevelOnePHYID0		0x0013
#define MII1000BaseTControlReg  9
#define MII1000BaseTStatusReg   10
#define SpecificReg		17
#define PHYAbletoPerform1000FullDuplex  0x0200
#define PHYAbletoPerform1000HalfDuplex  0x0100
#define PHY1000AbilityMask              0x300
#define SpeedMask       0x0c000
#define Speed_1000M     0x08000
#define Speed_100M      0x4000
#define Speed_10M       0
#define Full_Duplex     0x2000
#define LXT1000_100M    0x08000
#define LXT1000_1000M   0x0c000
#define LXT1000_Full    0x200
#define LinkIsUp2	0x00040000
#define LinkIsUp        0x0004
struct netdev_private ;
static int mdio_read(struct net_device *dev, int phy_id, int location);
static void mdio_write(struct net_device *dev, int phy_id, int location, int value);
static int netdev_open(struct net_device *dev);
static void getlinktype(struct net_device *dev);
static void getlinkstatus(struct net_device *dev);
static void netdev_timer(unsigned long data);
static void reset_timer(unsigned long data);
static void fealnx_tx_timeout(struct net_device *dev);
static void init_ring(struct net_device *dev);
static netdev_tx_t start_tx(struct sk_buff *skb, struct net_device *dev);
static irqreturn_t intr_handler(int irq, void *dev_instance);
static int netdev_rx(struct net_device *dev);
static void set_rx_mode(struct net_device *dev);
static void __set_rx_mode(struct net_device *dev);
static struct net_device_stats *get_stats(struct net_device *dev);
static int mii_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static const struct ethtool_ops netdev_ethtool_ops;
static int netdev_close(struct net_device *dev);
static void reset_rx_descriptors(struct net_device *dev);
static void reset_tx_descriptors(struct net_device *dev);
static void stop_nic_rx(void __iomem *ioaddr, long crvalue)
static void stop_nic_rxtx(void __iomem *ioaddr, long crvalue)
static const struct net_device_ops netdev_ops = ;
static int __devinit fealnx_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit fealnx_remove_one(struct pci_dev *pdev)
static ulong m80x_send_cmd_to_phy(void __iomem *miiport, int opcode, int phyad, int regad)
static int mdio_read(struct net_device *dev, int phyad, int regad)
static void mdio_write(struct net_device *dev, int phyad, int regad, int data)
static int netdev_open(struct net_device *dev)
static void getlinkstatus(struct net_device *dev)
static void getlinktype(struct net_device *dev)
static void allocate_rx_buffers(struct net_device *dev)
static void netdev_timer(unsigned long data)
static void reset_and_disable_rxtx(struct net_device *dev)
static void enable_rxtx(struct net_device *dev)
static void reset_timer(unsigned long data)
static void fealnx_tx_timeout(struct net_device *dev)
static void init_ring(struct net_device *dev)
static netdev_tx_t start_tx(struct sk_buff *skb, struct net_device *dev)
static void reset_tx_descriptors(struct net_device *dev)
static void reset_rx_descriptors(struct net_device *dev)
static irqreturn_t intr_handler(int irq, void *dev_instance)
static int netdev_rx(struct net_device *dev)
static struct net_device_stats *get_stats(struct net_device *dev)
static void set_rx_mode(struct net_device *dev)
static void __set_rx_mode(struct net_device *dev)
static void netdev_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int netdev_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int netdev_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int netdev_nway_reset(struct net_device *dev)
static u32 netdev_get_link(struct net_device *dev)
static u32 netdev_get_msglevel(struct net_device *dev)
static void netdev_set_msglevel(struct net_device *dev, u32 value)
static const struct ethtool_ops netdev_ethtool_ops = ;
static int mii_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int netdev_close(struct net_device *dev)
static DEFINE_PCI_DEVICE_TABLE(fealnx_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, fealnx_pci_tbl);
static struct pci_driver fealnx_driver = ;
static int __init fealnx_init(void)
static void __exit fealnx_exit(void)
module_init(fealnx_init);
module_exit(fealnx_exit);
