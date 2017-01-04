#define _PCI_ACPI_H_
extern acpi_status pci_acpi_add_bus_pm_notifier(struct acpi_device *dev,
struct pci_bus *pci_bus);
extern acpi_status pci_acpi_remove_bus_pm_notifier(struct acpi_device *dev);
extern acpi_status pci_acpi_add_pm_notifier(struct acpi_device *dev,
struct pci_dev *pci_dev);
extern acpi_status pci_acpi_remove_pm_notifier(struct acpi_device *dev);
static inline acpi_handle acpi_find_root_bridge_handle(struct pci_dev *pdev)
static inline acpi_handle acpi_pci_get_bridge_handle(struct pci_bus *pbus)
extern bool aer_acpi_firmware_first(void);
static inline bool aer_acpi_firmware_first(void)
