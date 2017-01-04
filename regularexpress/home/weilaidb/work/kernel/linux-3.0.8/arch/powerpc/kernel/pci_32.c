#undef DEBUG
unsigned long isa_io_base     = 0;
unsigned long pci_dram_offset = 0;
int pcibios_assign_bus_offset = 1;
void pcibios_make_OF_bus_map(void);
static void fixup_cpc710_pci64(struct pci_dev* dev);
static u8* pci_to_OF_bus_map;
static int pci_assign_all_buses;
static int pci_bus_count;
struct pci_dev *isa_bridge_pcidev;
EXPORT_SYMBOL_GPL(isa_bridge_pcidev);
static void
fixup_hide_host_resource_fsl(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_MOTOROLA, PCI_ANY_ID, fixup_hide_host_resource_fsl);
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_FREESCALE, PCI_ANY_ID, fixup_hide_host_resource_fsl);
static void
fixup_cpc710_pci64(struct pci_dev* dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_IBM,	PCI_DEVICE_ID_IBM_CPC710_PCI64,	fixup_cpc710_pci64);
static void
make_one_node_map(struct device_node* node, u8 pci_bus)
void
pcibios_make_OF_bus_map(void)
typedef int (*pci_OF_scan_iterator)(struct device_node* node, void* data);
static struct device_node*
scan_OF_pci_childs(struct device_node *parent, pci_OF_scan_iterator filter, void* data)
static struct device_node *scan_OF_for_pci_dev(struct device_node *parent,
unsigned int devfn)
static struct device_node *scan_OF_for_pci_bus(struct pci_bus *bus)
struct device_node *
pci_busdev_to_OF_node(struct pci_bus *bus, int devfn)
EXPORT_SYMBOL(pci_busdev_to_OF_node);
struct device_node*
pci_device_to_OF_node(struct pci_dev *dev)
EXPORT_SYMBOL(pci_device_to_OF_node);
static int
find_OF_pci_device_filter(struct device_node* node, void* data)
int
pci_device_from_OF_node(struct device_node* node, u8* bus, u8* devfn)
EXPORT_SYMBOL(pci_device_from_OF_node);
void __init
pci_create_OF_bus_map(void)
void __devinit pcibios_setup_phb_io_space(struct pci_controller *hose)
static int __init pcibios_init(void)
subsys_initcall(pcibios_init);
static struct pci_controller*
pci_bus_to_hose(int bus)
long sys_pciconfig_iobase(long which, unsigned long bus, unsigned long devfn)
