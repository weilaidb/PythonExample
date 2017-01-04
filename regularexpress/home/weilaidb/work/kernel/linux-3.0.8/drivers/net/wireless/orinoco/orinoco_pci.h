#define _ORINOCO_PCI_H
struct orinoco_pci_card ;
static int orinoco_pci_suspend(struct pci_dev *pdev, pm_message_t state)
static int orinoco_pci_resume(struct pci_dev *pdev)
#define orinoco_pci_suspend NULL
#define orinoco_pci_resume NULL
