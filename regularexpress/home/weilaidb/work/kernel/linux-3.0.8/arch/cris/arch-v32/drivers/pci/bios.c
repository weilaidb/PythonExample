void __devinit  pcibios_fixup_bus(struct pci_bus *b)
char * __devinit  pcibios_setup(char *str)
void pcibios_set_master(struct pci_dev *dev)
int pci_mmap_page_range(struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state, int write_combine)
resource_size_t
pcibios_align_resource(void *data, const struct resource *res,
resource_size_t size, resource_size_t align)
int pcibios_enable_resources(struct pci_dev *dev, int mask)
int pcibios_enable_irq(struct pci_dev *dev)
int pcibios_enable_device(struct pci_dev *dev, int mask)
int pcibios_assign_resources(void)
EXPORT_SYMBOL(pcibios_assign_resources);
