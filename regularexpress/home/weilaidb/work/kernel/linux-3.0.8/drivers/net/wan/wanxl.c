static const char* version = "wanXL serial card driver version: 0.48";
#define PLX_CTL_RESET   0x40000000
#undef DEBUG_PKT
#undef DEBUG_PCI
#define MBX1_CMD_ABORTJ 0x85000000
#define MBX1_CMD_BSWAP  0x8C000001
#define MBX1_CMD_BSWAP  0x8C000000
#define MBX2_MEMSZ_MASK 0xFFFF0000
typedef struct port_t;
typedef struct card_status_t;
typedef struct card_t card_t;
static inline port_t* dev_to_port(struct net_device *dev)
static inline port_status_t* get_status(port_t *port)
static inline dma_addr_t pci_map_single_debug(struct pci_dev *pdev, void *ptr,
size_t size, int direction)
#undef pci_map_single
#define pci_map_single pci_map_single_debug
static inline void wanxl_cable_intr(port_t *port)
static inline void wanxl_tx_intr(port_t *port)
static inline void wanxl_rx_intr(card_t *card)
static irqreturn_t wanxl_intr(int irq, void* dev_id)
static netdev_tx_t wanxl_xmit(struct sk_buff *skb, struct net_device *dev)
static int wanxl_attach(struct net_device *dev, unsigned short encoding,
unsigned short parity)
static int wanxl_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int wanxl_open(struct net_device *dev)
static int wanxl_close(struct net_device *dev)
static struct net_device_stats *wanxl_get_stats(struct net_device *dev)
static int wanxl_puts_command(card_t *card, u32 cmd)
static void wanxl_reset(card_t *card)
static void wanxl_pci_remove_one(struct pci_dev *pdev)
static const struct net_device_ops wanxl_ops = ;
static int __devinit wanxl_pci_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static DEFINE_PCI_DEVICE_TABLE(wanxl_pci_tbl) = ;
static struct pci_driver wanxl_pci_driver = ;
static int __init wanxl_init_module(void)
static void __exit wanxl_cleanup_module(void)
MODULE_AUTHOR("Krzysztof Halasa <khc@pm.waw.pl>");
MODULE_DESCRIPTION("SBE Inc. wanXL serial port driver");
MODULE_LICENSE("GPL v2");
MODULE_DEVICE_TABLE(pci, wanxl_pci_tbl);
module_init(wanxl_init_module);
module_exit(wanxl_cleanup_module);
