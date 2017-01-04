#define DRIVER_VERSION	"0.01.0"
#define DRIVER_AUTHOR	"Michael S. Tsirkin <mst@redhat.com>"
#define DRIVER_DESC	"Generic UIO driver for PCI 2.3 devices"
struct uio_pci_generic_dev ;
static inline struct uio_pci_generic_dev *
to_uio_pci_generic_dev(struct uio_info *info)
static irqreturn_t irqhandler(int irq, struct uio_info *info)
static int __devinit verify_pci_2_3(struct pci_dev *pdev)
static int __devinit probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void remove(struct pci_dev *pdev)
static struct pci_driver driver = ;
static int __init init(void)
static void __exit cleanup(void)
module_init(init);
module_exit(cleanup);
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
