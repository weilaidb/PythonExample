static DEFINE_MUTEX(pci_acpi_pm_notify_mtx);
static void pci_acpi_wake_bus(acpi_handle handle, u32 event, void *context)
static void pci_acpi_wake_dev(acpi_handle handle, u32 event, void *context)
static acpi_status add_pm_notifier(struct acpi_device *dev,
acpi_notify_handler handler,
void *context)
static acpi_status remove_pm_notifier(struct acpi_device *dev,
acpi_notify_handler handler)
acpi_status pci_acpi_add_bus_pm_notifier(struct acpi_device *dev,
struct pci_bus *pci_bus)
acpi_status pci_acpi_remove_bus_pm_notifier(struct acpi_device *dev)
acpi_status pci_acpi_add_pm_notifier(struct acpi_device *dev,
struct pci_dev *pci_dev)
acpi_status pci_acpi_remove_pm_notifier(struct acpi_device *dev)
static pci_power_t acpi_pci_choose_state(struct pci_dev *pdev)
static bool acpi_pci_power_manageable(struct pci_dev *dev)
static int acpi_pci_set_power_state(struct pci_dev *dev, pci_power_t state)
static bool acpi_pci_can_wakeup(struct pci_dev *dev)
static void acpi_pci_propagate_wakeup_enable(struct pci_bus *bus, bool enable)
static int acpi_pci_sleep_wake(struct pci_dev *dev, bool enable)
static int acpi_dev_run_wake(struct device *phys_dev, bool enable)
static void acpi_pci_propagate_run_wake(struct pci_bus *bus, bool enable)
static int acpi_pci_run_wake(struct pci_dev *dev, bool enable)
static struct pci_platform_pm_ops acpi_pci_platform_pm = ;
static int acpi_pci_find_device(struct device *dev, acpi_handle *handle)
static int acpi_pci_find_root_bridge(struct device *dev, acpi_handle *handle)
static struct acpi_bus_type acpi_pci_bus = ;
static int __init acpi_pci_init(void)
arch_initcall(acpi_pci_init);
