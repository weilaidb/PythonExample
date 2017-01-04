#define DRV_NAME  "kvaser_pci"
MODULE_AUTHOR("Per Dalen <per.dalen@cnw.se>");
MODULE_DESCRIPTION("Socket-CAN driver for KVASER PCAN PCI cards");
MODULE_SUPPORTED_DEVICE("KVASER PCAN PCI CAN card");
MODULE_LICENSE("GPL v2");
#define MAX_NO_OF_CHANNELS        4
struct kvaser_pci ;
#define KVASER_PCI_CAN_CLOCK      (16000000 / 2)
#define KVASER_PCI_OCR            (OCR_TX0_PUSHPULL | OCR_TX1_PUSHPULL)
#define KVASER_PCI_CDR            (CDR_CBP | CDR_CLKOUT_MASK)
#define XILINX_VERINT             7
#define XILINX_PRESUMED_VERSION   14
#define S5920_INTCSR              0x38
#define S5920_PTCR                0x60
#define INTCSR_ADDON_INTENABLE_M  0x2000
#define KVASER_PCI_PORT_BYTES     0x20
#define PCI_CONFIG_PORT_SIZE      0x80
#define PCI_PORT_SIZE             0x80
#define PCI_PORT_XILINX_SIZE      0x08
#define KVASER_PCI_VENDOR_ID1     0x10e8
#define KVASER_PCI_DEVICE_ID1     0x8406
#define KVASER_PCI_VENDOR_ID2     0x1a07
#define KVASER_PCI_DEVICE_ID2     0x0008
static DEFINE_PCI_DEVICE_TABLE(kvaser_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, kvaser_pci_tbl);
static u8 kvaser_pci_read_reg(const struct sja1000_priv *priv, int port)
static void kvaser_pci_write_reg(const struct sja1000_priv *priv,
int port, u8 val)
static void kvaser_pci_disable_irq(struct net_device *dev)
static void kvaser_pci_enable_irq(struct net_device *dev)
static int number_of_sja1000_chip(void __iomem *base_addr)
static void kvaser_pci_del_chan(struct net_device *dev)
static int kvaser_pci_add_chan(struct pci_dev *pdev, int channel,
struct net_device **master_dev,
void __iomem *conf_addr,
void __iomem *res_addr,
void __iomem *base_addr)
static int __devinit kvaser_pci_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit kvaser_pci_remove_one(struct pci_dev *pdev)
static struct pci_driver kvaser_pci_driver = ;
static int __init kvaser_pci_init(void)
static void __exit kvaser_pci_exit(void)
module_init(kvaser_pci_init);
module_exit(kvaser_pci_exit);
