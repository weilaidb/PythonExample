bool pcie_pme_msi_disabled;
static int __init pcie_pme_setup(char *str)
__setup("pcie_pme=", pcie_pme_setup);
struct pcie_pme_service_data ;
void pcie_pme_interrupt_enable(struct pci_dev *dev, bool enable)
static bool pcie_pme_walk_bus(struct pci_bus *bus)
static bool pcie_pme_from_pci_bridge(struct pci_bus *bus, u8 devfn)
static void pcie_pme_handle_request(struct pci_dev *port, u16 req_id)
static void pcie_pme_work_fn(struct work_struct *work)
static irqreturn_t pcie_pme_irq(int irq, void *context)
static int pcie_pme_set_native(struct pci_dev *dev, void *ign)
static void pcie_pme_mark_devices(struct pci_dev *port)
static int pcie_pme_probe(struct pcie_device *srv)
static int pcie_pme_suspend(struct pcie_device *srv)
static int pcie_pme_resume(struct pcie_device *srv)
static void pcie_pme_remove(struct pcie_device *srv)
static struct pcie_port_service_driver pcie_pme_driver = ;
static int __init pcie_pme_service_init(void)
module_init(pcie_pme_service_init);
