#define DRIVER_VERSION "v1.0"
#define DRIVER_AUTHOR "tom.l.nguyen@intel.com"
#define DRIVER_DESC "PCIe Port Bus Driver"
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
bool pcie_ports_disabled;
bool pcie_ports_auto = true;
static int __init pcie_port_setup(char *str)
__setup("pcie_ports=", pcie_port_setup);
void pcie_clear_root_pme_status(struct pci_dev *dev)
static int pcie_portdrv_restore_config(struct pci_dev *dev)
static int pcie_port_resume_noirq(struct device *dev)
static const struct dev_pm_ops pcie_portdrv_pm_ops = ;
#define PCIE_PORTDRV_PM_OPS	(&pcie_portdrv_pm_ops)
#define PCIE_PORTDRV_PM_OPS	NULL
static int __devinit pcie_portdrv_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void pcie_portdrv_remove(struct pci_dev *dev)
static int error_detected_iter(struct device *device, void *data)
static pci_ers_result_t pcie_portdrv_error_detected(struct pci_dev *dev,
enum pci_channel_state error)
static int mmio_enabled_iter(struct device *device, void *data)
static pci_ers_result_t pcie_portdrv_mmio_enabled(struct pci_dev *dev)
static int slot_reset_iter(struct device *device, void *data)
static pci_ers_result_t pcie_portdrv_slot_reset(struct pci_dev *dev)
static int resume_iter(struct device *device, void *data)
static void pcie_portdrv_err_resume(struct pci_dev *dev)
static const struct pci_device_id port_pci_ids[] = ;
MODULE_DEVICE_TABLE(pci, port_pci_ids);
static struct pci_error_handlers pcie_portdrv_err_handler = ;
static struct pci_driver pcie_portdriver = ;
static int __init dmi_pcie_pme_disable_msi(const struct dmi_system_id *d)
static struct dmi_system_id __initdata pcie_portdrv_dmi_table[] = ;
static int __init pcie_portdrv_init(void)
module_init(pcie_portdrv_init);
