#undef DEBUG_PKT
#define DEBUG_RINGS
#define PCI200SYN_PLX_SIZE	0x80
#define PCI200SYN_SCA_SIZE	0x400
#define MAX_TX_BUFFERS		10
static int pci_clock_freq = 33000000;
#define CLOCK_BASE pci_clock_freq
typedef struct plx9052;
typedef struct port_s port_t;
typedef struct card_s card_t;
#define get_port(card, port)	     (&card->ports[port])
#define sca_flush(card)		     (sca_in(IER0, card));
static inline void new_memcpy_toio(char __iomem *dest, char *src, int length)
#undef memcpy_toio
#define memcpy_toio new_memcpy_toio
static void pci200_set_iface(port_t *port)
static int pci200_open(struct net_device *dev)
static int pci200_close(struct net_device *dev)
static int pci200_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static void pci200_pci_remove_one(struct pci_dev *pdev)
static const struct net_device_ops pci200_ops = ;
static int __devinit pci200_pci_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static DEFINE_PCI_DEVICE_TABLE(pci200_pci_tbl) = ;
static struct pci_driver pci200_pci_driver = ;
static int __init pci200_init_module(void)
static void __exit pci200_cleanup_module(void)
MODULE_AUTHOR("Krzysztof Halasa <khc@pm.waw.pl>");
MODULE_DESCRIPTION("Goramo PCI200SYN serial port driver");
MODULE_LICENSE("GPL v2");
MODULE_DEVICE_TABLE(pci, pci200_pci_tbl);
module_param(pci_clock_freq, int, 0444);
MODULE_PARM_DESC(pci_clock_freq, "System PCI clock frequency in Hz");
module_init(pci200_init_module);
module_exit(pci200_cleanup_module);
