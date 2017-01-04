#define PCI_BCM63XX_H_
#define CARDBUS_PCI_IDSEL	0x8
extern struct pci_ops bcm63xx_pci_ops;
extern struct pci_ops bcm63xx_cb_ops;
extern void __iomem *pci_iospace_start;
