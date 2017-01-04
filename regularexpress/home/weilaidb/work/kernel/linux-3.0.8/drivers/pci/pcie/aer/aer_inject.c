static int aer_mask_override;
module_param(aer_mask_override, bool, 0);
struct aer_error_inj ;
struct aer_error ;
struct pci_bus_ops ;
static LIST_HEAD(einjected);
static LIST_HEAD(pci_bus_ops_list);
static DEFINE_SPINLOCK(inject_lock);
static void aer_error_init(struct aer_error *err, u16 domain,
unsigned int bus, unsigned int devfn,
int pos_cap_err)
static struct aer_error *__find_aer_error(u16 domain, unsigned int bus,
unsigned int devfn)
static struct aer_error *__find_aer_error_by_dev(struct pci_dev *dev)
static struct pci_ops *__find_pci_bus_ops(struct pci_bus *bus)
static struct pci_bus_ops *pci_bus_ops_pop(void)
static u32 *find_pci_config_dword(struct aer_error *err, int where,
int *prw1cs)
static int pci_read_aer(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *val)
int pci_write_aer(struct pci_bus *bus, unsigned int devfn, int where, int size,
u32 val)
static struct pci_ops pci_ops_aer = ;
static void pci_bus_ops_init(struct pci_bus_ops *bus_ops,
struct pci_bus *bus,
struct pci_ops *ops)
static int pci_bus_set_aer_ops(struct pci_bus *bus)
static struct pci_dev *pcie_find_root_port(struct pci_dev *dev)
static int find_aer_device_iter(struct device *device, void *data)
static int find_aer_device(struct pci_dev *dev, struct pcie_device **result)
static int aer_inject(struct aer_error_inj *einj)
static ssize_t aer_inject_write(struct file *filp, const char __user *ubuf,
size_t usize, loff_t *off)
static const struct file_operations aer_inject_fops = ;
static struct miscdevice aer_inject_device = ;
static int __init aer_inject_init(void)
static void __exit aer_inject_exit(void)
module_init(aer_inject_init);
module_exit(aer_inject_exit);
MODULE_DESCRIPTION("PCIe AER software error injector");
MODULE_LICENSE("GPL");
