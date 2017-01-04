static int __init vmic_init(void);
static int vmic_probe(struct pci_dev *, const struct pci_device_id *);
static void vmic_remove(struct pci_dev *);
static void __exit vmic_exit(void);
static void *vmic_base;
static char driver_name[] = "vmivme_7805";
static struct pci_device_id vmic_ids[] = ;
static struct pci_driver vmic_driver = ;
static int __init vmic_init(void)
static int vmic_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void vmic_remove(struct pci_dev *pdev)
static void __exit vmic_exit(void)
MODULE_DESCRIPTION("VMIVME-7805 board support driver");
MODULE_AUTHOR("Arthur Benilov <arthur.benilov@iba-group.com>");
MODULE_LICENSE("GPL");
module_init(vmic_init);
module_exit(vmic_exit);
