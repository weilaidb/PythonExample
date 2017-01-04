#define _AER_H_
struct aer_header_log_regs ;
struct aer_capability_regs ;
#if defined(CONFIG_PCIEAER)
extern int pci_enable_pcie_error_reporting(struct pci_dev *dev);
extern int pci_disable_pcie_error_reporting(struct pci_dev *dev);
extern int pci_cleanup_aer_uncorrect_error_status(struct pci_dev *dev);
static inline int pci_enable_pcie_error_reporting(struct pci_dev *dev)
static inline int pci_disable_pcie_error_reporting(struct pci_dev *dev)
static inline int pci_cleanup_aer_uncorrect_error_status(struct pci_dev *dev)
extern void cper_print_aer(const char *prefix, int cper_severity,
struct aer_capability_regs *aer);
