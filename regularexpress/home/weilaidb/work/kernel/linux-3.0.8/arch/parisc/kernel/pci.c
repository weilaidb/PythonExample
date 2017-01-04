#define DEBUG_RESOURCES 0
#define DEBUG_CONFIG 0
#if DEBUG_CONFIG
# define DBGC(x...)	printk(KERN_DEBUG x)
# define DBGC(x...)
#if DEBUG_RESOURCES
#define DBG_RES(x...)	printk(KERN_DEBUG x)
#define DBG_RES(x...)
struct pci_port_ops *pci_port __read_mostly;
struct pci_bios_ops *pci_bios __read_mostly;
static int pci_hba_count __read_mostly;
#define PCI_HBA_MAX 32
static struct pci_hba_data *parisc_pci_hba[PCI_HBA_MAX] __read_mostly;
#define EISA_IN(size) if (EISA_bus && (b == 0)) return eisa_in##size(addr)
#define EISA_OUT(size) if (EISA_bus && (b == 0)) return eisa_out##size(d, addr)
#define EISA_IN(size)
#define EISA_OUT(size)
#define PCI_PORT_IN(type, size) \
u##size in##type (int addr) \
\
EXPORT_SYMBOL(in##type);
PCI_PORT_IN(b,  8)
PCI_PORT_IN(w, 16)
PCI_PORT_IN(l, 32)
#define PCI_PORT_OUT(type, size) \
void out##type (u##size d, int addr) \
\
EXPORT_SYMBOL(out##type);
PCI_PORT_OUT(b,  8)
PCI_PORT_OUT(w, 16)
PCI_PORT_OUT(l, 32)
static int __init pcibios_init(void)
void pcibios_fixup_bus(struct pci_bus *bus)
char *pcibios_setup(char *str)
void pcibios_set_master(struct pci_dev *dev)
void __init pcibios_init_bus(struct pci_bus *bus)
void __devinit pcibios_resource_to_bus(struct pci_dev *dev,
struct pci_bus_region *region, struct resource *res)
void pcibios_bus_to_resource(struct pci_dev *dev, struct resource *res,
struct pci_bus_region *region)
EXPORT_SYMBOL(pcibios_resource_to_bus);
EXPORT_SYMBOL(pcibios_bus_to_resource);
resource_size_t pcibios_align_resource(void *data, const struct resource *res,
resource_size_t size, resource_size_t alignment)
int pcibios_enable_device(struct pci_dev *dev, int mask)
void pcibios_register_hba(struct pci_hba_data *hba)
subsys_initcall(pcibios_init);
