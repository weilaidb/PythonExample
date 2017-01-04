#undef DEBUG
#define DBG(x...) printk(x)
#define DBG(x...)
static struct pci_controller *u3_agp, *u3_ht, *u4_pcie;
static int __init fixup_one_level_bus_range(struct device_node *node, int higher)
static void __init fixup_bus_range(struct device_node *bridge)
static unsigned long u3_agp_cfa0(u8 devfn, u8 off)
static unsigned long u3_agp_cfa1(u8 bus, u8 devfn, u8 off)
static volatile void __iomem *u3_agp_cfg_access(struct pci_controller* hose,
u8 bus, u8 dev_fn, u8 offset)
static int u3_agp_read_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 *val)
static int u3_agp_write_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 val)
static struct pci_ops u3_agp_pci_ops =
;
static unsigned long u3_ht_cfa0(u8 devfn, u8 off)
static unsigned long u3_ht_cfa1(u8 bus, u8 devfn, u8 off)
static volatile void __iomem *u3_ht_cfg_access(struct pci_controller* hose,
u8 bus, u8 devfn, u8 offset)
static int u3_ht_read_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 *val)
static int u3_ht_write_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 val)
static struct pci_ops u3_ht_pci_ops =
;
static unsigned int u4_pcie_cfa0(unsigned int devfn, unsigned int off)
static unsigned int u4_pcie_cfa1(unsigned int bus, unsigned int devfn,
unsigned int off)
static volatile void __iomem *u4_pcie_cfg_access(struct pci_controller* hose,
u8 bus, u8 dev_fn, int offset)
static int u4_pcie_read_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 *val)
static int u4_pcie_write_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 val)
static struct pci_ops u4_pcie_pci_ops =
;
static void __init setup_u3_agp(struct pci_controller* hose)
static void __init setup_u4_pcie(struct pci_controller* hose)
static void __init setup_u3_ht(struct pci_controller* hose)
static int __init maple_add_bridge(struct device_node *dev)
void __devinit maple_pci_irq_fixup(struct pci_dev *dev)
void __init maple_pci_init(void)
int maple_pci_get_legacy_ide_irq(struct pci_dev *pdev, int channel)
static void __devinit quirk_ipr_msi(struct pci_dev *dev)
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_IBM, PCI_DEVICE_ID_IBM_OBSIDIAN,
quirk_ipr_msi);
