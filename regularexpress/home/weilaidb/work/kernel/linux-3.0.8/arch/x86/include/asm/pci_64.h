#define _ASM_X86_PCI_64_H
static inline void *pci_iommu(struct pci_bus *bus)
static inline void set_pci_iommu(struct pci_bus *bus, void *val)
extern int (*pci_config_read)(int seg, int bus, int dev, int fn,
int reg, int len, u32 *value);
extern int (*pci_config_write)(int seg, int bus, int dev, int fn,
int reg, int len, u32 value);
