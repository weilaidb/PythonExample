void devm_ioremap_release(struct device *dev, void *res)
static int devm_ioremap_match(struct device *dev, void *res, void *match_data)
void __iomem *devm_ioremap(struct device *dev, resource_size_t offset,
unsigned long size)
EXPORT_SYMBOL(devm_ioremap);
void __iomem *devm_ioremap_nocache(struct device *dev, resource_size_t offset,
unsigned long size)
EXPORT_SYMBOL(devm_ioremap_nocache);
void devm_iounmap(struct device *dev, void __iomem *addr)
EXPORT_SYMBOL(devm_iounmap);
static void devm_ioport_map_release(struct device *dev, void *res)
static int devm_ioport_map_match(struct device *dev, void *res,
void *match_data)
void __iomem * devm_ioport_map(struct device *dev, unsigned long port,
unsigned int nr)
EXPORT_SYMBOL(devm_ioport_map);
void devm_ioport_unmap(struct device *dev, void __iomem *addr)
EXPORT_SYMBOL(devm_ioport_unmap);
#define PCIM_IOMAP_MAX	PCI_ROM_RESOURCE
struct pcim_iomap_devres ;
static void pcim_iomap_release(struct device *gendev, void *res)
void __iomem * const * pcim_iomap_table(struct pci_dev *pdev)
EXPORT_SYMBOL(pcim_iomap_table);
void __iomem * pcim_iomap(struct pci_dev *pdev, int bar, unsigned long maxlen)
EXPORT_SYMBOL(pcim_iomap);
void pcim_iounmap(struct pci_dev *pdev, void __iomem *addr)
EXPORT_SYMBOL(pcim_iounmap);
int pcim_iomap_regions(struct pci_dev *pdev, u16 mask, const char *name)
EXPORT_SYMBOL(pcim_iomap_regions);
int pcim_iomap_regions_request_all(struct pci_dev *pdev, u16 mask,
const char *name)
EXPORT_SYMBOL(pcim_iomap_regions_request_all);
void pcim_iounmap_regions(struct pci_dev *pdev, u16 mask)
EXPORT_SYMBOL(pcim_iounmap_regions);
