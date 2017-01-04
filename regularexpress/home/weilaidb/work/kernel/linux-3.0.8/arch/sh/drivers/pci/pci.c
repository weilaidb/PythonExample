unsigned long PCIBIOS_MIN_IO = 0x0000;
unsigned long PCIBIOS_MIN_MEM = 0;
static struct pci_channel *hose_head, **hose_tail = &hose_head;
static int pci_initialized;
static void __devinit pcibios_scanbus(struct pci_channel *hose)
DEFINE_RAW_SPINLOCK(pci_config_lock);
static DEFINE_MUTEX(pci_scan_mutex);
int __devinit register_pci_controller(struct pci_channel *hose)
static int __init pcibios_init(void)
subsys_initcall(pcibios_init);
static void pcibios_fixup_device_resources(struct pci_dev *dev,
struct pci_bus *bus)
void __devinit pcibios_fixup_bus(struct pci_bus *bus)
resource_size_t pcibios_align_resource(void *data, const struct resource *res,
resource_size_t size, resource_size_t align)
void pcibios_resource_to_bus(struct pci_dev *dev, struct pci_bus_region *region,
struct resource *res)
void pcibios_bus_to_resource(struct pci_dev *dev, struct resource *res,
struct pci_bus_region *region)
int pcibios_enable_device(struct pci_dev *dev, int mask)
static unsigned int pcibios_max_latency = 255;
void pcibios_set_master(struct pci_dev *dev)
void __init pcibios_update_irq(struct pci_dev *dev, int irq)
char * __devinit __weak pcibios_setup(char *str)
static void __init
pcibios_bus_report_status_early(struct pci_channel *hose,
int top_bus, int current_bus,
unsigned int status_mask, int warn)
static void __init_refok
pcibios_bus_report_status(struct pci_bus *bus, unsigned int status_mask,
int warn)
void __init_refok pcibios_report_status(unsigned int status_mask, int warn)
int pci_mmap_page_range(struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state, int write_combine)
static void __iomem *ioport_map_pci(struct pci_dev *dev,
unsigned long port, unsigned int nr)
void __iomem *pci_iomap(struct pci_dev *dev, int bar, unsigned long maxlen)
EXPORT_SYMBOL(pci_iomap);
void pci_iounmap(struct pci_dev *dev, void __iomem *addr)
EXPORT_SYMBOL(pci_iounmap);
EXPORT_SYMBOL(pcibios_resource_to_bus);
EXPORT_SYMBOL(pcibios_bus_to_resource);
EXPORT_SYMBOL(PCIBIOS_MIN_IO);
EXPORT_SYMBOL(PCIBIOS_MIN_MEM);
