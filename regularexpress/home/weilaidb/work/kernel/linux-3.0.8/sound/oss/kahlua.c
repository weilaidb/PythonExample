static u8 __devinit mixer_read(unsigned long io, u8 reg)
static int __devinit probe_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit remove_one(struct pci_dev *pdev)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("Kahlua VSA1 PCI Audio");
MODULE_LICENSE("GPL");
static DEFINE_PCI_DEVICE_TABLE(id_tbl) = ;
MODULE_DEVICE_TABLE(pci, id_tbl);
static struct pci_driver kahlua_driver = ;
static int __init kahlua_init_module(void)
static void __devexit kahlua_cleanup_module(void)
module_init(kahlua_init_module);
module_exit(kahlua_cleanup_module);
