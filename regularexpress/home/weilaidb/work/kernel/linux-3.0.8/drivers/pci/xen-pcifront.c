#define INVALID_GRANT_REF (0)
#define INVALID_EVTCHN    (-1)
struct pci_bus_entry ;
#define _PDEVB_op_active		(0)
#define PDEVB_op_active			(1 << (_PDEVB_op_active))
struct pcifront_device ;
struct pcifront_sd ;
static inline struct pcifront_device *
pcifront_get_pdev(struct pcifront_sd *sd)
static inline void pcifront_init_sd(struct pcifront_sd *sd,
unsigned int domain, unsigned int bus,
struct pcifront_device *pdev)
static DEFINE_SPINLOCK(pcifront_dev_lock);
static struct pcifront_device *pcifront_dev;
static int verbose_request;
module_param(verbose_request, int, 0644);
static int errno_to_pcibios_err(int errno)
static inline void schedule_pcifront_aer_op(struct pcifront_device *pdev)
static int do_pci_op(struct pcifront_device *pdev, struct xen_pci_op *op)
static int pcifront_bus_read(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *val)
static int pcifront_bus_write(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
struct pci_ops pcifront_bus_ops = ;
static int pci_frontend_enable_msix(struct pci_dev *dev,
int vector[], int nvec)
static void pci_frontend_disable_msix(struct pci_dev *dev)
static int pci_frontend_enable_msi(struct pci_dev *dev, int vector[])
static void pci_frontend_disable_msi(struct pci_dev *dev)
static struct xen_pci_frontend_ops pci_frontend_ops = ;
static void pci_frontend_registrar(int enable)
;
static inline void pci_frontend_registrar(int enable) ;
static int pcifront_claim_resource(struct pci_dev *dev, void *data)
static int __devinit pcifront_scan_bus(struct pcifront_device *pdev,
unsigned int domain, unsigned int bus,
struct pci_bus *b)
static int __devinit pcifront_scan_root(struct pcifront_device *pdev,
unsigned int domain, unsigned int bus)
static int __devinit pcifront_rescan_root(struct pcifront_device *pdev,
unsigned int domain, unsigned int bus)
static void free_root_bus_devs(struct pci_bus *bus)
static void pcifront_free_roots(struct pcifront_device *pdev)
static pci_ers_result_t pcifront_common_process(int cmd,
struct pcifront_device *pdev,
pci_channel_state_t state)
static void pcifront_do_aer(struct work_struct *data)
static irqreturn_t pcifront_handler_aer(int irq, void *dev)
static int pcifront_connect(struct pcifront_device *pdev)
static void pcifront_disconnect(struct pcifront_device *pdev)
static struct pcifront_device *alloc_pdev(struct xenbus_device *xdev)
static void free_pdev(struct pcifront_device *pdev)
static int pcifront_publish_info(struct pcifront_device *pdev)
static int __devinit pcifront_try_connect(struct pcifront_device *pdev)
static int pcifront_try_disconnect(struct pcifront_device *pdev)
static int __devinit pcifront_attach_devices(struct pcifront_device *pdev)
static int pcifront_detach_devices(struct pcifront_device *pdev)
static void __init_refok pcifront_backend_changed(struct xenbus_device *xdev,
enum xenbus_state be_state)
static int pcifront_xenbus_probe(struct xenbus_device *xdev,
const struct xenbus_device_id *id)
static int pcifront_xenbus_remove(struct xenbus_device *xdev)
static const struct xenbus_device_id xenpci_ids[] = ;
static struct xenbus_driver xenbus_pcifront_driver = ;
static int __init pcifront_init(void)
static void __exit pcifront_cleanup(void)
module_init(pcifront_init);
module_exit(pcifront_cleanup);
MODULE_DESCRIPTION("Xen PCI passthrough frontend.");
MODULE_LICENSE("GPL");
MODULE_ALIAS("xen:pci");
