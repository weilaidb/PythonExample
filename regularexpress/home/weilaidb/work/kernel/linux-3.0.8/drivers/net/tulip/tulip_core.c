#define pr_fmt(fmt) "tulip: " fmt
#define DRV_NAME	"tulip"
#define DRV_VERSION    "1.1.15-NAPI"
#define DRV_VERSION	"1.1.15"
#define DRV_RELDATE	"Feb 27, 2007"
static char version[] __devinitdata =
"Linux Tulip driver version " DRV_VERSION " (" DRV_RELDATE ")\n";
static unsigned int max_interrupt_work = 25;
#define MAX_UNITS 8
static int full_duplex[MAX_UNITS];
static int options[MAX_UNITS];
static int mtu[MAX_UNITS];
const char * const medianame[32] = ;
#if defined(__alpha__) || defined(__arm__) || defined(__hppa__) || \
defined(CONFIG_SPARC) || defined(__ia64__) || \
defined(__sh__) || defined(__mips__)
static int rx_copybreak = 1518;
static int rx_copybreak = 100;
#if defined(__alpha__) || defined(__ia64__)
static int csr0 = 0x01A00000 | 0xE000;
#elif defined(__i386__) || defined(__powerpc__) || defined(__x86_64__)
static int csr0 = 0x01A00000 | 0x8000;
#elif defined(CONFIG_SPARC) || defined(__hppa__)
static int csr0 = 0x01A00000 | 0x9000;
#elif defined(__arm__) || defined(__sh__)
static int csr0 = 0x01A00000 | 0x4800;
#elif defined(__mips__)
static int csr0 = 0x00200000 | 0x4000;
#warning Processor architecture undefined!
static int csr0 = 0x00A00000 | 0x4800;
#define TX_TIMEOUT  (4*HZ)
MODULE_AUTHOR("The Linux Kernel Team");
MODULE_DESCRIPTION("Digital 21*4* Tulip ethernet driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_param(tulip_debug, int, 0);
module_param(max_interrupt_work, int, 0);
module_param(rx_copybreak, int, 0);
module_param(csr0, int, 0);
module_param_array(options, int, NULL, 0);
module_param_array(full_duplex, int, NULL, 0);
int tulip_debug = TULIP_DEBUG;
int tulip_debug = 1;
static void tulip_timer(unsigned long data)
struct tulip_chip_table tulip_tbl[] = ;
static DEFINE_PCI_DEVICE_TABLE(tulip_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, tulip_pci_tbl);
const char tulip_media_cap[32] =
;
static void tulip_tx_timeout(struct net_device *dev);
static void tulip_init_ring(struct net_device *dev);
static void tulip_free_ring(struct net_device *dev);
static netdev_tx_t tulip_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static int tulip_open(struct net_device *dev);
static int tulip_close(struct net_device *dev);
static void tulip_up(struct net_device *dev);
static void tulip_down(struct net_device *dev);
static struct net_device_stats *tulip_get_stats(struct net_device *dev);
static int private_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static void set_rx_mode(struct net_device *dev);
static void tulip_set_wolopts(struct pci_dev *pdev, u32 wolopts);
static void poll_tulip(struct net_device *dev);
static void tulip_set_power_state (struct tulip_private *tp,
int sleep, int snooze)
static void tulip_up(struct net_device *dev)
static int
tulip_open(struct net_device *dev)
static void tulip_tx_timeout(struct net_device *dev)
static void tulip_init_ring(struct net_device *dev)
static netdev_tx_t
tulip_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void tulip_clean_tx_ring(struct tulip_private *tp)
static void tulip_down (struct net_device *dev)
static void tulip_free_ring (struct net_device *dev)
static int tulip_close (struct net_device *dev)
static struct net_device_stats *tulip_get_stats(struct net_device *dev)
static void tulip_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int tulip_ethtool_set_wol(struct net_device *dev,
struct ethtool_wolinfo *wolinfo)
static void tulip_ethtool_get_wol(struct net_device *dev,
struct ethtool_wolinfo *wolinfo)
static const struct ethtool_ops ops = ;
static int private_ioctl (struct net_device *dev, struct ifreq *rq, int cmd)
#undef set_bit_le
#define set_bit_le(i,p) do  while(0)
static void build_setup_frame_hash(u16 *setup_frm, struct net_device *dev)
static void build_setup_frame_perfect(u16 *setup_frm, struct net_device *dev)
static void set_rx_mode(struct net_device *dev)
static void __devinit tulip_mwi_config (struct pci_dev *pdev,
struct net_device *dev)
static int tulip_uli_dm_quirk(struct pci_dev *pdev)
static const struct net_device_ops tulip_netdev_ops = ;
DEFINE_PCI_DEVICE_TABLE(early_486_chipsets) = ;
static int __devinit tulip_init_one (struct pci_dev *pdev,
const struct pci_device_id *ent)
static void tulip_set_wolopts (struct pci_dev *pdev, u32 wolopts)
static int tulip_suspend (struct pci_dev *pdev, pm_message_t state)
static int tulip_resume(struct pci_dev *pdev)
static void __devexit tulip_remove_one (struct pci_dev *pdev)
static void poll_tulip (struct net_device *dev)
static struct pci_driver tulip_driver = ;
static int __init tulip_init (void)
static void __exit tulip_cleanup (void)
module_init(tulip_init);
module_exit(tulip_cleanup);
