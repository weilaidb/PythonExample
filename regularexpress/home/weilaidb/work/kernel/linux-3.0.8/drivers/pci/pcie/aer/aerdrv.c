#define DRIVER_VERSION "v1.0"
#define DRIVER_AUTHOR "tom.l.nguyen@intel.com"
#define DRIVER_DESC "Root Port Advanced Error Reporting Driver"
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
static int __devinit aer_probe(struct pcie_device *dev);
static void aer_remove(struct pcie_device *dev);
static pci_ers_result_t aer_error_detected(struct pci_dev *dev,
enum pci_channel_state error);
static void aer_error_resume(struct pci_dev *dev);
static pci_ers_result_t aer_root_reset(struct pci_dev *dev);
static struct pci_error_handlers aer_error_handlers = ;
static struct pcie_port_service_driver aerdriver = ;
static int pcie_aer_disable;
void pci_no_aer(void)
bool pci_aer_available(void)
static int set_device_error_reporting(struct pci_dev *dev, void *data)
static void set_downstream_devices_error_reporting(struct pci_dev *dev,
bool enable)
static void aer_enable_rootport(struct aer_rpc *rpc)
static void aer_disable_rootport(struct aer_rpc *rpc)
irqreturn_t aer_irq(int irq, void *context)
EXPORT_SYMBOL_GPL(aer_irq);
static struct aer_rpc *aer_alloc_rpc(struct pcie_device *dev)
static void aer_remove(struct pcie_device *dev)
static int __devinit aer_probe(struct pcie_device *dev)
static pci_ers_result_t aer_root_reset(struct pci_dev *dev)
static pci_ers_result_t aer_error_detected(struct pci_dev *dev,
enum pci_channel_state error)
static void aer_error_resume(struct pci_dev *dev)
static int __init aer_service_init(void)
static void __exit aer_service_exit(void)
module_init(aer_service_init);
module_exit(aer_service_exit);
