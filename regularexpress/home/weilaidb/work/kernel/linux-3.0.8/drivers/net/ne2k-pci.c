#define DRV_NAME	"ne2k-pci"
#define DRV_VERSION	"1.03"
#define DRV_RELDATE	"9/22/2003"
static int debug = 1;
#define MAX_UNITS 8
static int full_duplex[MAX_UNITS];
static int options[MAX_UNITS];
static const char version[] __devinitconst =
KERN_INFO DRV_NAME ".c:v" DRV_VERSION " " DRV_RELDATE
" D. Becker/P. Gortmaker\n";
#if defined(__powerpc__)
#define inl_le(addr)  le32_to_cpu(inl(addr))
#define inw_le(addr)  le16_to_cpu(inw(addr))
#define PFX DRV_NAME ": "
MODULE_AUTHOR("Donald Becker / Paul Gortmaker");
MODULE_DESCRIPTION("PCI NE2000 clone driver");
MODULE_LICENSE("GPL");
module_param(debug, int, 0);
module_param_array(options, int, NULL, 0);
module_param_array(full_duplex, int, NULL, 0);
MODULE_PARM_DESC(debug, "debug level (1-2)");
MODULE_PARM_DESC(options, "Bit 5: full duplex");
MODULE_PARM_DESC(full_duplex, "full duplex setting(s) (1)");
#define USE_LONGIO
#define ne2k_flags reg0
enum ;
enum ne2k_pci_chipsets ;
static struct  pci_clone_list[] __devinitdata = ;
static DEFINE_PCI_DEVICE_TABLE(ne2k_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, ne2k_pci_tbl);
#define NE_BASE	 (dev->base_addr)
#define NE_CMD	 	0x00
#define NE_DATAPORT	0x10
#define NE_RESET	0x1f
#define NE_IO_EXTENT	0x20
#define NESM_START_PG	0x40
#define NESM_STOP_PG	0x80
static int ne2k_pci_open(struct net_device *dev);
static int ne2k_pci_close(struct net_device *dev);
static void ne2k_pci_reset_8390(struct net_device *dev);
static void ne2k_pci_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr,
int ring_page);
static void ne2k_pci_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void ne2k_pci_block_output(struct net_device *dev, const int count,
const unsigned char *buf, const int start_page);
static const struct ethtool_ops ne2k_pci_ethtool_ops;
struct ne2k_pci_card ;
static const struct net_device_ops ne2k_netdev_ops = ;
static int __devinit ne2k_pci_init_one (struct pci_dev *pdev,
const struct pci_device_id *ent)
static inline int set_realtek_fdx(struct net_device *dev)
static inline int set_holtek_fdx(struct net_device *dev)
static int ne2k_pci_set_fdx(struct net_device *dev)
static int ne2k_pci_open(struct net_device *dev)
static int ne2k_pci_close(struct net_device *dev)
static void ne2k_pci_reset_8390(struct net_device *dev)
static void ne2k_pci_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page)
static void ne2k_pci_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset)
static void ne2k_pci_block_output(struct net_device *dev, int count,
const unsigned char *buf, const int start_page)
static void ne2k_pci_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static const struct ethtool_ops ne2k_pci_ethtool_ops = ;
static void __devexit ne2k_pci_remove_one (struct pci_dev *pdev)
static int ne2k_pci_suspend (struct pci_dev *pdev, pm_message_t state)
static int ne2k_pci_resume (struct pci_dev *pdev)
static struct pci_driver ne2k_driver = ;
static int __init ne2k_pci_init(void)
static void __exit ne2k_pci_cleanup(void)
module_init(ne2k_pci_init);
module_exit(ne2k_pci_cleanup);
