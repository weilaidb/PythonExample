#undef SERIAL_DEBUG_PCI
struct pci_serial_quirk ;
#define PCI_NUM_BAR_RESOURCES	6
struct serial_private ;
static void moan_device(const char *str, struct pci_dev *dev)
static int
setup_port(struct serial_private *priv, struct uart_port *port,
int bar, int offset, int regshift)
static int addidata_apci7800_setup(struct serial_private *priv,
const struct pciserial_board *board,
struct uart_port *port, int idx)
static int
afavlab_setup(struct serial_private *priv, const struct pciserial_board *board,
struct uart_port *port, int idx)
static int pci_hp_diva_init(struct pci_dev *dev)
static int
pci_hp_diva_setup(struct serial_private *priv,
const struct pciserial_board *board,
struct uart_port *port, int idx)
static int pci_inteli960ni_init(struct pci_dev *dev)
static int pci_plx9050_init(struct pci_dev *dev)
static void __devexit pci_plx9050_exit(struct pci_dev *dev)
#define NI8420_INT_ENABLE_REG	0x38
#define NI8420_INT_ENABLE_BIT	0x2000
static void __devexit pci_ni8420_exit(struct pci_dev *dev)
#define MITE_IOWBSR1	0xc4
#define MITE_IOWCR1	0xf4
#define MITE_LCIMR1	0x08
#define MITE_LCIMR2	0x10
#define MITE_LCIMR2_CLR_CPU_IE	(1 << 30)
static void __devexit pci_ni8430_exit(struct pci_dev *dev)
static int
sbs_setup(struct serial_private *priv, const struct pciserial_board *board,
struct uart_port *port, int idx)
#define OCT_REG_CR_OFF		0x500
static int sbs_init(struct pci_dev *dev)
static void __devexit sbs_exit(struct pci_dev *dev)
#define PCI_DEVICE_ID_SIIG_1S_10x (PCI_DEVICE_ID_SIIG_1S_10x_550 & 0xfffc)
#define PCI_DEVICE_ID_SIIG_2S_10x (PCI_DEVICE_ID_SIIG_2S_10x_550 & 0xfff8)
static int pci_siig10x_init(struct pci_dev *dev)
#define PCI_DEVICE_ID_SIIG_2S_20x (PCI_DEVICE_ID_SIIG_2S_20x_550 & 0xfffc)
#define PCI_DEVICE_ID_SIIG_2S1P_20x (PCI_DEVICE_ID_SIIG_2S1P_20x_550 & 0xfffc)
static int pci_siig20x_init(struct pci_dev *dev)
static int pci_siig_init(struct pci_dev *dev)
static int pci_siig_setup(struct serial_private *priv,
const struct pciserial_board *board,
struct uart_port *port, int idx)
static const unsigned short timedia_single_port[] = ;
static const unsigned short timedia_dual_port[] = ;
static const unsigned short timedia_quad_port[] = ;
static const unsigned short timedia_eight_port[] = ;
static const struct timedia_struct  timedia_data[] = ;
static int pci_timedia_init(struct pci_dev *dev)
static int
pci_timedia_setup(struct serial_private *priv,
const struct pciserial_board *board,
struct uart_port *port, int idx)
static int
titan_400l_800l_setup(struct serial_private *priv,
const struct pciserial_board *board,
struct uart_port *port, int idx)
static int pci_xircom_init(struct pci_dev *dev)
static int pci_ni8420_init(struct pci_dev *dev)
#define MITE_IOWBSR1_WSIZE	0xa
#define MITE_IOWBSR1_WIN_OFFSET	0x800
#define MITE_IOWBSR1_WENAB	(1 << 7)
#define MITE_LCIMR1_IO_IE_0	(1 << 24)
#define MITE_LCIMR2_SET_CPU_IE	(1 << 31)
#define MITE_IOWCR1_RAMSEL_MASK	0xfffffffe
static int pci_ni8430_init(struct pci_dev *dev)
#define NI8430_PORTCON	0x0f
#define NI8430_PORTCON_TXVR_ENABLE	(1 << 3)
static int
pci_ni8430_setup(struct serial_private *priv,
const struct pciserial_board *board,
struct uart_port *port, int idx)
static int pci_netmos_init(struct pci_dev *dev)
#define ITE_887x_MISCR		0x9c
#define ITE_887x_INTCBAR	0x78
#define ITE_887x_UARTBAR	0x7c
#define ITE_887x_PS0BAR		0x10
#define ITE_887x_POSIO0		0x60
#define ITE_887x_IOSIZE		32
#define ITE_887x_POSIO_IOSIZE_8		(3 << 24)
#define ITE_887x_POSIO_IOSIZE_32	(5 << 24)
#define ITE_887x_POSIO_SPEED		(3 << 29)
#define ITE_887x_POSIO_ENABLE		(1 << 31)
static int pci_ite887x_init(struct pci_dev *dev)
static void __devexit pci_ite887x_exit(struct pci_dev *dev)
static int pci_oxsemi_tornado_init(struct pci_dev *dev)
static int
pci_default_setup(struct serial_private *priv,
const struct pciserial_board *board,
struct uart_port *port, int idx)
static int
ce4100_serial_setup(struct serial_private *priv,
const struct pciserial_board *board,
struct uart_port *port, int idx)
static int
pci_omegapci_setup(struct serial_private *priv,
const struct pciserial_board *board,
struct uart_port *port, int idx)
static int skip_tx_en_setup(struct serial_private *priv,
const struct pciserial_board *board,
struct uart_port *port, int idx)
static int pci_eg20t_init(struct pci_dev *dev)
#define PCI_VENDOR_ID_SBSMODULARIO	0x124B
#define PCI_SUBVENDOR_ID_SBSMODULARIO	0x124B
#define PCI_DEVICE_ID_OCTPRO		0x0001
#define PCI_SUBDEVICE_ID_OCTPRO232	0x0108
#define PCI_SUBDEVICE_ID_OCTPRO422	0x0208
#define PCI_SUBDEVICE_ID_POCTAL232	0x0308
#define PCI_SUBDEVICE_ID_POCTAL422	0x0408
#define PCI_VENDOR_ID_ADVANTECH		0x13fe
#define PCI_DEVICE_ID_INTEL_CE4100_UART 0x2e66
#define PCI_DEVICE_ID_ADVANTECH_PCI3620	0x3620
#define PCI_DEVICE_ID_TITAN_200I	0x8028
#define PCI_DEVICE_ID_TITAN_400I	0x8048
#define PCI_DEVICE_ID_TITAN_800I	0x8088
#define PCI_DEVICE_ID_TITAN_800EH	0xA007
#define PCI_DEVICE_ID_TITAN_800EHB	0xA008
#define PCI_DEVICE_ID_TITAN_400EH	0xA009
#define PCI_DEVICE_ID_TITAN_100E	0xA010
#define PCI_DEVICE_ID_TITAN_200E	0xA012
#define PCI_DEVICE_ID_TITAN_400E	0xA013
#define PCI_DEVICE_ID_TITAN_800E	0xA014
#define PCI_DEVICE_ID_TITAN_200EI	0xA016
#define PCI_DEVICE_ID_TITAN_200EISI	0xA017
#define PCI_DEVICE_ID_OXSEMI_16PCI958	0x9538
#define PCIE_DEVICE_ID_NEO_2_OX_IBM	0x00F6
#define PCI_DEVICE_ID_PLX_CRONYX_OMEGA	0xc001
#define PCI_SUBDEVICE_ID_UNKNOWN_0x1584	0x1584
static struct pci_serial_quirk pci_serial_quirks[] __refdata = ;
static inline int quirk_id_matches(u32 quirk_id, u32 dev_id)
static struct pci_serial_quirk *find_quirk(struct pci_dev *dev)
static inline int get_pci_irq(struct pci_dev *dev,
const struct pciserial_board *board)
enum pci_board_num_t ;
static struct pciserial_board pci_boards[] __devinitdata = ;
static const struct pci_device_id softmodem_blacklist[] = ;
static int __devinit
serial_pci_guess_board(struct pci_dev *dev, struct pciserial_board *board)
static inline int
serial_pci_matches(const struct pciserial_board *board,
const struct pciserial_board *guessed)
struct serial_private *
pciserial_init_ports(struct pci_dev *dev, const struct pciserial_board *board)
EXPORT_SYMBOL_GPL(pciserial_init_ports);
void pciserial_remove_ports(struct serial_private *priv)
EXPORT_SYMBOL_GPL(pciserial_remove_ports);
void pciserial_suspend_ports(struct serial_private *priv)
EXPORT_SYMBOL_GPL(pciserial_suspend_ports);
void pciserial_resume_ports(struct serial_private *priv)
EXPORT_SYMBOL_GPL(pciserial_resume_ports);
static int __devinit
pciserial_init_one(struct pci_dev *dev, const struct pci_device_id *ent)
static void __devexit pciserial_remove_one(struct pci_dev *dev)
static int pciserial_suspend_one(struct pci_dev *dev, pm_message_t state)
static int pciserial_resume_one(struct pci_dev *dev)
static struct pci_device_id serial_pci_tbl[] = ;
static struct pci_driver serial_pci_driver = ;
static int __init serial8250_pci_init(void)
static void __exit serial8250_pci_exit(void)
module_init(serial8250_pci_init);
module_exit(serial8250_pci_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Generic 8250/16x50 PCI serial probe module");
MODULE_DEVICE_TABLE(pci, serial_pci_tbl);
