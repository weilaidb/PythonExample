int pci_probe_only;
#define PCI_ASSIGN_ALL_BUSSES	1
unsigned int pci_probe = PCI_ASSIGN_ALL_BUSSES;
static struct pci_controller *hose_head, **hose_tail = &hose_head;
unsigned long PCIBIOS_MIN_IO;
unsigned long PCIBIOS_MIN_MEM;
static int pci_initialized;
resource_size_t
pcibios_align_resource(void *data, const struct resource *res,
resource_size_t size, resource_size_t align)
static void __devinit pcibios_scanbus(struct pci_controller *hose)
static DEFINE_MUTEX(pci_scan_mutex);
void __devinit register_pci_controller(struct pci_controller *hose)
static int __init pcibios_init(void)
subsys_initcall(pcibios_init);
static int pcibios_enable_resources(struct pci_dev *dev, int mask)
static unsigned int pcibios_max_latency = 255;
void pcibios_set_master(struct pci_dev *dev)
unsigned int pcibios_assign_all_busses(void)
int pcibios_enable_device(struct pci_dev *dev, int mask)
static void pcibios_fixup_device_resources(struct pci_dev *dev,
struct pci_bus *bus)
void __devinit pcibios_fixup_bus(struct pci_bus *bus)
void __init
pcibios_update_irq(struct pci_dev *dev, int irq)
void pcibios_resource_to_bus(struct pci_dev *dev, struct pci_bus_region *region,
struct resource *res)
void __devinit
pcibios_bus_to_resource(struct pci_dev *dev, struct resource *res,
struct pci_bus_region *region)
EXPORT_SYMBOL(pcibios_resource_to_bus);
EXPORT_SYMBOL(pcibios_bus_to_resource);
EXPORT_SYMBOL(PCIBIOS_MIN_IO);
EXPORT_SYMBOL(PCIBIOS_MIN_MEM);
int pci_mmap_page_range(struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state, int write_combine)
char * (*pcibios_plat_setup)(char *str) __devinitdata;
char *__devinit pcibios_setup(char *str)
