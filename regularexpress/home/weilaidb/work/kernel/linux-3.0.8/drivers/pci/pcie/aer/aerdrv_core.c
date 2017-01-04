static int forceload;
static int nosourceid;
module_param(forceload, bool, 0);
module_param(nosourceid, bool, 0);
int pci_enable_pcie_error_reporting(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(pci_enable_pcie_error_reporting);
int pci_disable_pcie_error_reporting(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(pci_disable_pcie_error_reporting);
int pci_cleanup_aer_uncorrect_error_status(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(pci_cleanup_aer_uncorrect_error_status);
static int add_error_device(struct aer_err_info *e_info, struct pci_dev *dev)
#define	PCI_BUS(x)	(((x) >> 8) & 0xff)
static bool is_error_source(struct pci_dev *dev, struct aer_err_info *e_info)
static int find_device_iter(struct pci_dev *dev, void *data)
static bool find_source_device(struct pci_dev *parent,
struct aer_err_info *e_info)
static int report_error_detected(struct pci_dev *dev, void *data)
static int report_mmio_enabled(struct pci_dev *dev, void *data)
static int report_slot_reset(struct pci_dev *dev, void *data)
static int report_resume(struct pci_dev *dev, void *data)
static pci_ers_result_t broadcast_error_message(struct pci_dev *dev,
enum pci_channel_state state,
char *error_mesg,
int (*cb)(struct pci_dev *, void *))
void aer_do_secondary_bus_reset(struct pci_dev *dev)
static pci_ers_result_t default_downstream_reset_link(struct pci_dev *dev)
static int find_aer_service_iter(struct device *device, void *data)
static struct pcie_port_service_driver *find_aer_service(struct pci_dev *dev)
static pci_ers_result_t reset_link(struct pcie_device *aerdev,
struct pci_dev *dev)
static void do_recovery(struct pcie_device *aerdev, struct pci_dev *dev,
int severity)
static void handle_error_source(struct pcie_device *aerdev,
struct pci_dev *dev,
struct aer_err_info *info)
static int get_device_error_info(struct pci_dev *dev, struct aer_err_info *info)
static inline void aer_process_err_devices(struct pcie_device *p_device,
struct aer_err_info *e_info)
static void aer_isr_one_error(struct pcie_device *p_device,
struct aer_err_source *e_src)
static int get_e_source(struct aer_rpc *rpc, struct aer_err_source *e_src)
void aer_isr(struct work_struct *work)
int aer_init(struct pcie_device *dev)
