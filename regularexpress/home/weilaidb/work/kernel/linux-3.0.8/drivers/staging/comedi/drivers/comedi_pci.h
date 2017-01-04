#define _COMEDI_PCI_H_
static inline int comedi_pci_enable(struct pci_dev *pdev, const char *res_name)
static inline void comedi_pci_disable(struct pci_dev *pdev)
