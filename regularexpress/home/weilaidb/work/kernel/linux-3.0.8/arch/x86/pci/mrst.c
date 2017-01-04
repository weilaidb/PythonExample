#define PCIE_CAP_OFFSET	0x100
#define PCIE_VNDR_CAP_ID_FIXED_BAR 0x00
#define PCI_FIXED_BAR_0_SIZE	0x04
#define PCI_FIXED_BAR_1_SIZE	0x08
#define PCI_FIXED_BAR_2_SIZE	0x0c
#define PCI_FIXED_BAR_3_SIZE	0x10
#define PCI_FIXED_BAR_4_SIZE	0x14
#define PCI_FIXED_BAR_5_SIZE	0x1c
static int fixed_bar_cap(struct pci_bus *bus, unsigned int devfn)
static int pci_device_update_fixed(struct pci_bus *bus, unsigned int devfn,
int reg, int len, u32 val, int offset)
static bool type1_access_ok(unsigned int bus, unsigned int devfn, int reg)
static int pci_read(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
static int pci_write(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 value)
static int mrst_pci_irq_enable(struct pci_dev *dev)
struct pci_ops pci_mrst_ops = ;
int __init pci_mrst_init(void)
static void __devinit pci_fixed_bar_fixup(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_INTEL, PCI_ANY_ID, pci_fixed_bar_fixup);
