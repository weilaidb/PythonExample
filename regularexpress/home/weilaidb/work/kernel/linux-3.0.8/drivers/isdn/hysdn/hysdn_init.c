static struct pci_device_id hysdn_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, hysdn_pci_tbl);
MODULE_DESCRIPTION("ISDN4Linux: Driver for HYSDN cards");
MODULE_AUTHOR("Werner Cornelius");
MODULE_LICENSE("GPL");
static int cardmax;
hysdn_card *card_root = NULL;
static hysdn_card *card_last = NULL;
static int __devinit hysdn_pci_init_one(struct pci_dev *akt_pcidev,
const struct pci_device_id *ent)
static void __devexit hysdn_pci_remove_one(struct pci_dev *akt_pcidev)
static struct pci_driver hysdn_pci_driver = ;
static int hysdn_have_procfs;
static int __init
hysdn_init(void)
static void __exit
hysdn_exit(void)
module_init(hysdn_init);
module_exit(hysdn_exit);
