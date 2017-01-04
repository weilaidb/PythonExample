#define LINUX_PCI_ATS_H
struct pci_ats ;
extern int pci_enable_ats(struct pci_dev *dev, int ps);
extern void pci_disable_ats(struct pci_dev *dev);
extern int pci_ats_queue_depth(struct pci_dev *dev);
static inline int pci_ats_enabled(struct pci_dev *dev)
static inline int pci_enable_ats(struct pci_dev *dev, int ps)
static inline void pci_disable_ats(struct pci_dev *dev)
static inline int pci_ats_queue_depth(struct pci_dev *dev)
static inline int pci_ats_enabled(struct pci_dev *dev)
