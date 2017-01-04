#undef CONFIG_T1PCI_DEBUG
#undef CONFIG_T1PCI_POLLDEBUG
static char *revision = "$Revision: 1.1.2.2 $";
static struct pci_device_id t1pci_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, t1pci_pci_tbl);
MODULE_DESCRIPTION("CAPI4Linux: Driver for AVM T1 PCI card");
MODULE_AUTHOR("Carsten Paeth");
MODULE_LICENSE("GPL");
static char *t1pci_procinfo(struct capi_ctr *ctrl);
static int t1pci_add_card(struct capicardparams *p, struct pci_dev *pdev)
static void t1pci_remove(struct pci_dev *pdev)
static char *t1pci_procinfo(struct capi_ctr *ctrl)
static int __devinit t1pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static struct pci_driver t1pci_pci_driver = ;
static struct capi_driver capi_driver_t1pci = ;
static int __init t1pci_init(void)
static void __exit t1pci_exit(void)
module_init(t1pci_init);
module_exit(t1pci_exit);
