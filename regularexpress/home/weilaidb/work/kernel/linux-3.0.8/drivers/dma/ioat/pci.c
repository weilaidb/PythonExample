MODULE_VERSION(IOAT_DMA_VERSION);
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Intel Corporation");
static struct pci_device_id ioat_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, ioat_pci_tbl);
static int __devinit ioat_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *id);
static void __devexit ioat_remove(struct pci_dev *pdev);
static int ioat_dca_enabled = 1;
module_param(ioat_dca_enabled, int, 0644);
MODULE_PARM_DESC(ioat_dca_enabled, "control support of dca service (default: 1)");
struct kmem_cache *ioat2_cache;
#define DRV_NAME "ioatdma"
static struct pci_driver ioat_pci_driver = ;
static struct ioatdma_device *
alloc_ioatdma(struct pci_dev *pdev, void __iomem *iobase)
static int __devinit ioat_pci_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void __devexit ioat_remove(struct pci_dev *pdev)
static int __init ioat_init_module(void)
module_init(ioat_init_module);
static void __exit ioat_exit_module(void)
module_exit(ioat_exit_module);
