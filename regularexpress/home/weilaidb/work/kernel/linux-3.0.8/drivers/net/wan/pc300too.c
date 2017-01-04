#undef DEBUG_PKT
#define DEBUG_RINGS
#define PC300_PLX_SIZE		0x80
#define PC300_SCA_SIZE		0x400
#define MAX_TX_BUFFERS		10
static int pci_clock_freq = 33000000;
static int use_crystal_clock = 0;
static unsigned int CLOCK_BASE;
#define PC300_CLKSEL_MASK	 (0x00000004UL)
#define PC300_CHMEDIA_MASK(port) (0x00000020UL << ((port) * 3))
#define PC300_CTYPE_MASK	 (0x00000800UL)
enum ;
typedef struct plx9050;
typedef struct port_s port_t;
typedef struct card_s card_t;
#define get_port(card, port)	     ((port) < (card)->n_ports ? \
(&(card)->ports[port]) : (NULL))
static void pc300_set_iface(port_t *port)
static int pc300_open(struct net_device *dev)
static int pc300_close(struct net_device *dev)
static int pc300_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static void pc300_pci_remove_one(struct pci_dev *pdev)
static const struct net_device_ops pc300_ops = ;
static int __devinit pc300_pci_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static DEFINE_PCI_DEVICE_TABLE(pc300_pci_tbl) = ;
static struct pci_driver pc300_pci_driver = ;
static int __init pc300_init_module(void)
static void __exit pc300_cleanup_module(void)
MODULE_AUTHOR("Krzysztof Halasa <khc@pm.waw.pl>");
MODULE_DESCRIPTION("Cyclades PC300 serial port driver");
MODULE_LICENSE("GPL v2");
MODULE_DEVICE_TABLE(pci, pc300_pci_tbl);
module_param(pci_clock_freq, int, 0444);
MODULE_PARM_DESC(pci_clock_freq, "System PCI clock frequency in Hz");
module_param(use_crystal_clock, int, 0444);
MODULE_PARM_DESC(use_crystal_clock,
"Use 24.576 MHz clock instead of PCI clock");
module_init(pc300_init_module);
module_exit(pc300_cleanup_module);
