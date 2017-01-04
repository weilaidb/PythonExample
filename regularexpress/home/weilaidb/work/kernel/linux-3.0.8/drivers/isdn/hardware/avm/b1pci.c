static char *revision = "$Revision: 1.1.2.2 $";
static struct pci_device_id b1pci_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, b1pci_pci_tbl);
MODULE_DESCRIPTION("CAPI4Linux: Driver for AVM B1 PCI card");
MODULE_AUTHOR("Carsten Paeth");
MODULE_LICENSE("GPL");
static char *b1pci_procinfo(struct capi_ctr *ctrl)
static int b1pci_probe(struct capicardparams *p, struct pci_dev *pdev)
static void b1pci_remove(struct pci_dev *pdev)
static char *b1pciv4_procinfo(struct capi_ctr *ctrl)
static int b1pciv4_probe(struct capicardparams *p, struct pci_dev *pdev)
static void b1pciv4_remove(struct pci_dev *pdev)
static int __devinit b1pci_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit b1pci_pci_remove(struct pci_dev *pdev)
static struct pci_driver b1pci_pci_driver = ;
static struct capi_driver capi_driver_b1pci = ;
static struct capi_driver capi_driver_b1pciv4 = ;
static int __init b1pci_init(void)
static void __exit b1pci_exit(void)
module_init(b1pci_init);
module_exit(b1pci_exit);
