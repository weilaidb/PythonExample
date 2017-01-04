MODULE_AUTHOR("Simon Kelley");
MODULE_DESCRIPTION("Support for Atmel at76c50x 802.11 wireless ethernet cards.");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("Atmel at76c506 PCI wireless cards");
static DEFINE_PCI_DEVICE_TABLE(card_ids) = ;
MODULE_DEVICE_TABLE(pci, card_ids);
static int atmel_pci_probe(struct pci_dev *, const struct pci_device_id *);
static void atmel_pci_remove(struct pci_dev *);
static struct pci_driver atmel_driver = ;
static int __devinit atmel_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *pent)
static void __devexit atmel_pci_remove(struct pci_dev *pdev)
static int __init atmel_init_module(void)
static void __exit atmel_cleanup_module(void)
module_init(atmel_init_module);
module_exit(atmel_cleanup_module);
