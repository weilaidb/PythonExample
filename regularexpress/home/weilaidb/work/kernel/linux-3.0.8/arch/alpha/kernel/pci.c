const char *const pci_io_names[] = ;
const char *const pci_mem_names[] = ;
const char pci_hae0_name[] = "HAE0";
int pci_probe_only;
struct pci_controller *hose_head, **hose_tail = &hose_head;
struct pci_controller *pci_isa_hose;
static void __init
quirk_isa_bridge(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_82378, quirk_isa_bridge);
static void __init
quirk_cypress(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_CONTAQ, PCI_DEVICE_ID_CONTAQ_82C693, quirk_cypress);
static void __init
pcibios_fixup_final(struct pci_dev *dev)
DECLARE_PCI_FIXUP_FINAL(PCI_ANY_ID, PCI_ANY_ID, pcibios_fixup_final);
#define KB			1024
#define MB			(1024*KB)
#define GB			(1024*MB)
resource_size_t
pcibios_align_resource(void *data, const struct resource *res,
resource_size_t size, resource_size_t align)
#undef KB
#undef MB
#undef GB
static int __init
pcibios_init(void)
subsys_initcall(pcibios_init);
char * __devinit
pcibios_setup(char *str)
static struct pdev_srm_saved_conf *srm_saved_configs;
void __devinit
pdev_save_srm_config(struct pci_dev *dev)
void
pci_restore_srm_config(void)
void __devinit
pcibios_fixup_resource(struct resource *res, struct resource *root)
void __devinit
pcibios_fixup_device_resources(struct pci_dev *dev, struct pci_bus *bus)
void __devinit
pcibios_fixup_bus(struct pci_bus *bus)
void __init
pcibios_update_irq(struct pci_dev *dev, int irq)
void
pcibios_resource_to_bus(struct pci_dev *dev, struct pci_bus_region *region,
struct resource *res)
void pcibios_bus_to_resource(struct pci_dev *dev, struct resource *res,
struct pci_bus_region *region)
EXPORT_SYMBOL(pcibios_resource_to_bus);
EXPORT_SYMBOL(pcibios_bus_to_resource);
int
pcibios_enable_device(struct pci_dev *dev, int mask)
void
pcibios_set_master(struct pci_dev *dev)
void __init
pcibios_claim_one_bus(struct pci_bus *b)
static void __init
pcibios_claim_console_setup(void)
void __init
common_init_pci(void)
struct pci_controller * __init
alloc_pci_controller(void)
struct resource * __init
alloc_resource(void)
asmlinkage long
sys_pciconfig_iobase(long which, unsigned long bus, unsigned long dfn)
void __iomem *pci_iomap(struct pci_dev *dev, int bar, unsigned long maxlen)
void pci_iounmap(struct pci_dev *dev, void __iomem * addr)
EXPORT_SYMBOL(pci_iomap);
EXPORT_SYMBOL(pci_iounmap);
struct pci_dev *isa_bridge;
EXPORT_SYMBOL(isa_bridge);
