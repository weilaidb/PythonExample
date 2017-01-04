#define DRV_NAME	"starfire"
#define DRV_VERSION	"2.1"
#define DRV_RELDATE	"July  6, 2008"
#define HAS_BROKEN_FIRMWARE
#define PADDING_MASK 3
#define ZEROCOPY
#if defined(CONFIG_VLAN_8021Q) || defined(CONFIG_VLAN_8021Q_MODULE)
#define VLAN_SUPPORT
static int intr_latency;
static int small_frames;
static int debug = 1;
static int max_interrupt_work = 20;
static int mtu;
static const int multicast_filter_limit = 512;
static int enable_hw_cksum = 1;
#define PKT_BUF_SZ	1536
#if defined(__ia64__) || defined(__alpha__) || defined(__sparc__)
static int rx_copybreak = PKT_BUF_SZ;
static int rx_copybreak;
#define DMA_BURST_SIZE 64
#define DMA_BURST_SIZE 128
#define MAX_UNITS 8
static int options[MAX_UNITS] = ;
static int full_duplex[MAX_UNITS] = ;
#define RX_RING_SIZE	256
#define TX_RING_SIZE	32
#define DONE_Q_SIZE	1024
#define QUEUE_ALIGN	256
#if RX_RING_SIZE > 256
#define RX_Q_ENTRIES Rx2048QEntries
#define RX_Q_ENTRIES Rx256QEntries
#define TX_TIMEOUT	(2 * HZ)
#define ADDR_64BITS
#define netdrv_addr_t __le64
#define cpu_to_dma(x) cpu_to_le64(x)
#define dma_to_cpu(x) le64_to_cpu(x)
#define RX_DESC_Q_ADDR_SIZE RxDescQAddr64bit
#define TX_DESC_Q_ADDR_SIZE TxDescQAddr64bit
#define RX_COMPL_Q_ADDR_SIZE RxComplQAddr64bit
#define TX_COMPL_Q_ADDR_SIZE TxComplQAddr64bit
#define RX_DESC_ADDR_SIZE RxDescAddr64bit
#define netdrv_addr_t __le32
#define cpu_to_dma(x) cpu_to_le32(x)
#define dma_to_cpu(x) le32_to_cpu(x)
#define RX_DESC_Q_ADDR_SIZE RxDescQAddr32bit
#define TX_DESC_Q_ADDR_SIZE TxDescQAddr32bit
#define RX_COMPL_Q_ADDR_SIZE RxComplQAddr32bit
#define TX_COMPL_Q_ADDR_SIZE TxComplQAddr32bit
#define RX_DESC_ADDR_SIZE RxDescAddr32bit
#define skb_first_frag_len(skb)	skb_headlen(skb)
#define skb_num_frags(skb) (skb_shinfo(skb)->nr_frags + 1)
#define FIRMWARE_RX	"adaptec/starfire_rx.bin"
#define FIRMWARE_TX	"adaptec/starfire_tx.bin"
static const char version[] __devinitconst =
KERN_INFO "starfire.c:v1.03 7/26/2000  Written by Donald Becker <becker@scyld.com>\n"
" (unofficial 2.2/2.4 kernel port, version " DRV_VERSION ", " DRV_RELDATE ")\n";
MODULE_AUTHOR("Donald Becker <becker@scyld.com>");
MODULE_DESCRIPTION("Adaptec Starfire Ethernet driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_FIRMWARE(FIRMWARE_RX);
MODULE_FIRMWARE(FIRMWARE_TX);
module_param(max_interrupt_work, int, 0);
module_param(mtu, int, 0);
module_param(debug, int, 0);
module_param(rx_copybreak, int, 0);
module_param(intr_latency, int, 0);
module_param(small_frames, int, 0);
module_param_array(options, int, NULL, 0);
module_param_array(full_duplex, int, NULL, 0);
module_param(enable_hw_cksum, int, 0);
MODULE_PARM_DESC(max_interrupt_work, "Maximum events handled per interrupt");
MODULE_PARM_DESC(mtu, "MTU (all boards)");
MODULE_PARM_DESC(debug, "Debug level (0-6)");
MODULE_PARM_DESC(rx_copybreak, "Copy breakpoint for copy-only-tiny-frames");
MODULE_PARM_DESC(intr_latency, "Maximum interrupt latency, in microseconds");
MODULE_PARM_DESC(small_frames, "Maximum size of receive frames that bypass interrupt latency (0,64,128,256,512)");
MODULE_PARM_DESC(options, "Deprecated: Bits 0-3: media type, bit 17: full duplex");
MODULE_PARM_DESC(full_duplex, "Deprecated: Forced full-duplex setting (0/1)");
MODULE_PARM_DESC(enable_hw_cksum, "Enable/disable hardware cksum support (0/1)");
enum chip_capability_flags ;
enum chipset ;
static DEFINE_PCI_DEVICE_TABLE(starfire_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, starfire_pci_tbl);
static const struct chip_info  netdrv_tbl[] __devinitdata = ;
enum register_offsets ;
enum intr_status_bits ;
enum rx_mode_bits ;
enum tx_mode_bits ;
enum tx_ctrl_bits ;
enum rx_ctrl_bits ;
enum rx_dmactrl_bits ;
enum rx_compl_bits ;
enum tx_compl_bits ;
enum gen_ctrl_bits ;
enum intr_ctrl_bits ;
struct starfire_rx_desc ;
enum rx_desc_bits ;
struct short_rx_done_desc ;
struct basic_rx_done_desc ;
struct csum_rx_done_desc ;
struct full_rx_done_desc ;
typedef struct full_rx_done_desc rx_done_desc;
#define RxComplType RxComplType3
typedef struct csum_rx_done_desc rx_done_desc;
#define RxComplType RxComplType2
enum rx_done_bits ;
struct starfire_tx_desc_1 ;
struct starfire_tx_desc_2 ;
typedef struct starfire_tx_desc_2 starfire_tx_desc;
#define TX_DESC_TYPE TxDescType2
typedef struct starfire_tx_desc_1 starfire_tx_desc;
#define TX_DESC_TYPE TxDescType1
#define TX_DESC_SPACING TxDescSpaceUnlim
enum tx_desc_bits ;
struct tx_done_desc ;
struct rx_ring_info ;
struct tx_ring_info ;
#define PHY_CNT		2
struct netdev_private ;
static int	mdio_read(struct net_device *dev, int phy_id, int location);
static void	mdio_write(struct net_device *dev, int phy_id, int location, int value);
static int	netdev_open(struct net_device *dev);
static void	check_duplex(struct net_device *dev);
static void	tx_timeout(struct net_device *dev);
static void	init_ring(struct net_device *dev);
static netdev_tx_t start_tx(struct sk_buff *skb, struct net_device *dev);
static irqreturn_t intr_handler(int irq, void *dev_instance);
static void	netdev_error(struct net_device *dev, int intr_status);
static int	__netdev_rx(struct net_device *dev, int *quota);
static int	netdev_poll(struct napi_struct *napi, int budget);
static void	refill_rx_ring(struct net_device *dev);
static void	netdev_error(struct net_device *dev, int intr_status);
static void	set_rx_mode(struct net_device *dev);
static struct net_device_stats *get_stats(struct net_device *dev);
static int	netdev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static int	netdev_close(struct net_device *dev);
static void	netdev_media_change(struct net_device *dev);
static const struct ethtool_ops ethtool_ops;
static void netdev_vlan_rx_register(struct net_device *dev, struct vlan_group *grp)
static void netdev_vlan_rx_add_vid(struct net_device *dev, unsigned short vid)
static void netdev_vlan_rx_kill_vid(struct net_device *dev, unsigned short vid)
static const struct net_device_ops netdev_ops = ;
static int __devinit starfire_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static int mdio_read(struct net_device *dev, int phy_id, int location)
static void mdio_write(struct net_device *dev, int phy_id, int location, int value)
static int netdev_open(struct net_device *dev)
static void check_duplex(struct net_device *dev)
static void tx_timeout(struct net_device *dev)
static void init_ring(struct net_device *dev)
static netdev_tx_t start_tx(struct sk_buff *skb, struct net_device *dev)
static irqreturn_t intr_handler(int irq, void *dev_instance)
static int __netdev_rx(struct net_device *dev, int *quota)
static int netdev_poll(struct napi_struct *napi, int budget)
static void refill_rx_ring(struct net_device *dev)
static void netdev_media_change(struct net_device *dev)
static void netdev_error(struct net_device *dev, int intr_status)
static struct net_device_stats *get_stats(struct net_device *dev)
static void set_rx_mode(struct net_device *dev)
static int check_if_running(struct net_device *dev)
static void get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int get_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int set_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int nway_reset(struct net_device *dev)
static u32 get_link(struct net_device *dev)
static u32 get_msglevel(struct net_device *dev)
static void set_msglevel(struct net_device *dev, u32 val)
static const struct ethtool_ops ethtool_ops = ;
static int netdev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int netdev_close(struct net_device *dev)
static int starfire_suspend(struct pci_dev *pdev, pm_message_t state)
static int starfire_resume(struct pci_dev *pdev)
static void __devexit starfire_remove_one (struct pci_dev *pdev)
static struct pci_driver starfire_driver = ;
static int __init starfire_init (void)
static void __exit starfire_cleanup (void)
module_init(starfire_init);
module_exit(starfire_cleanup);
