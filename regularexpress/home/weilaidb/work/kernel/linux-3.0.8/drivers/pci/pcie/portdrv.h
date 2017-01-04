#define _PORTDRV_H_
#define PCIE_PORT_DEVICE_MAXSERVICES   4
#define PCIE_PORT_MAX_MSIX_ENTRIES	32
#define get_descriptor_id(type, service) (((type - 4) << 4) | service)
extern struct bus_type pcie_port_bus_type;
extern int pcie_port_device_register(struct pci_dev *dev);
extern int pcie_port_device_suspend(struct device *dev);
extern int pcie_port_device_resume(struct device *dev);
extern void pcie_port_device_remove(struct pci_dev *dev);
extern int __must_check pcie_port_bus_register(void);
extern void pcie_port_bus_unregister(void);
struct pci_dev;
extern void pcie_clear_root_pme_status(struct pci_dev *dev);
extern bool pcie_pme_msi_disabled;
static inline void pcie_pme_disable_msi(void)
static inline bool pcie_pme_no_msi(void)
extern void pcie_pme_interrupt_enable(struct pci_dev *dev, bool enable);
static inline void pcie_pme_disable_msi(void)
static inline bool pcie_pme_no_msi(void)
static inline void pcie_pme_interrupt_enable(struct pci_dev *dev, bool en)
extern int pcie_port_acpi_setup(struct pci_dev *port, int *mask);
static inline int pcie_port_platform_notify(struct pci_dev *port, int *mask)
static inline int pcie_port_platform_notify(struct pci_dev *port, int *mask)
