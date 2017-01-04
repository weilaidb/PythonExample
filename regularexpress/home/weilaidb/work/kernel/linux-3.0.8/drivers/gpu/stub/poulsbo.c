#define DRIVER_NAME "poulsbo"
enum ;
static DEFINE_PCI_DEVICE_TABLE(pciidlist) = ;
static int poulsbo_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void poulsbo_remove(struct pci_dev *pdev)
static struct pci_driver poulsbo_driver = ;
static int __init poulsbo_init(void)
static void __exit poulsbo_exit(void)
module_init(poulsbo_init);
module_exit(poulsbo_exit);
MODULE_AUTHOR("Lee, Chun-Yi <jlee@novell.com>");
MODULE_DESCRIPTION("Poulsbo Stub Driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, pciidlist);
