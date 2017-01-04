#define _ASM_X86_XEN_PCI_H
#if defined(CONFIG_PCI_XEN)
extern int __init pci_xen_init(void);
extern int __init pci_xen_hvm_init(void);
#define pci_xen 1
#define pci_xen 0
#define pci_xen_init (0)
static inline int pci_xen_hvm_init(void)
#if defined(CONFIG_XEN_DOM0)
void __init xen_setup_pirqs(void);
int xen_find_device_domain_owner(struct pci_dev *dev);
int xen_register_device_domain_owner(struct pci_dev *dev, uint16_t domain);
int xen_unregister_device_domain_owner(struct pci_dev *dev);
static inline void __init xen_setup_pirqs(void)
static inline int xen_find_device_domain_owner(struct pci_dev *dev)
static inline int xen_register_device_domain_owner(struct pci_dev *dev,
uint16_t domain)
static inline int xen_unregister_device_domain_owner(struct pci_dev *dev)
#if defined(CONFIG_PCI_MSI)
#if defined(CONFIG_PCI_XEN)
struct xen_pci_frontend_ops ;
extern struct xen_pci_frontend_ops *xen_pci_frontend;
static inline int xen_pci_frontend_enable_msi(struct pci_dev *dev,
int vectors[])
static inline void xen_pci_frontend_disable_msi(struct pci_dev *dev)
static inline int xen_pci_frontend_enable_msix(struct pci_dev *dev,
int vectors[], int nvec)
static inline void xen_pci_frontend_disable_msix(struct pci_dev *dev)
