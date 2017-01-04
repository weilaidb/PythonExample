#define _ASM_LEON_PCI_H_
struct leon_pci_info ;
extern void leon_pci_init(struct platform_device *ofdev,
struct leon_pci_info *info);
