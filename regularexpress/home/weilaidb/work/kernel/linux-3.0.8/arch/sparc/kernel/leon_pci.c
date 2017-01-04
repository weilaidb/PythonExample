void leon_pci_init(struct platform_device *ofdev, struct leon_pci_info *info)
void pcibios_resource_to_bus(struct pci_dev *dev, struct pci_bus_region *region,
struct resource *res)
EXPORT_SYMBOL(pcibios_resource_to_bus);
void pcibios_bus_to_resource(struct pci_dev *dev, struct resource *res,
struct pci_bus_region *region)
EXPORT_SYMBOL(pcibios_bus_to_resource);
void __devinit pcibios_fixup_bus(struct pci_bus *pbus)
char * __devinit pcibios_setup(char *str)
resource_size_t pcibios_align_resource(void *data, const struct resource *res,
resource_size_t size, resource_size_t align)
int pcibios_enable_device(struct pci_dev *dev, int mask)
struct device_node *pci_device_to_OF_node(struct pci_dev *pdev)
EXPORT_SYMBOL(pci_device_to_OF_node);
void __devinit pcibios_update_irq(struct pci_dev *dev, int irq)
void outsb(unsigned long addr, const void *src, unsigned long count)
EXPORT_SYMBOL(outsb);
void outsw(unsigned long addr, const void *src, unsigned long count)
EXPORT_SYMBOL(outsw);
void outsl(unsigned long addr, const void *src, unsigned long count)
EXPORT_SYMBOL(outsl);
void insb(unsigned long addr, void *dst, unsigned long count)
EXPORT_SYMBOL(insb);
void insw(unsigned long addr, void *dst, unsigned long count)
EXPORT_SYMBOL(insw);
void insl(unsigned long addr, void *dst, unsigned long count)
EXPORT_SYMBOL(insl);
