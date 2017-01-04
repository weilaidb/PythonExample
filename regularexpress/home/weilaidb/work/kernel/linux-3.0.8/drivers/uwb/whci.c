struct whci_card ;
static
u64 whci_capdata_quirks(struct whci_card *card, u64 capdata)
int whci_wait_for(struct device *dev, u32 __iomem *reg, u32 mask, u32 result,
unsigned long max_ms, const char *tag)
EXPORT_SYMBOL_GPL(whci_wait_for);
static int whci_add_cap(struct whci_card *card, int n)
static void whci_del_cap(struct whci_card *card, int n)
static int whci_n_caps(struct pci_dev *pci)
static int whci_probe(struct pci_dev *pci, const struct pci_device_id *id)
static void whci_remove(struct pci_dev *pci)
static struct pci_device_id whci_id_table[] = ;
MODULE_DEVICE_TABLE(pci, whci_id_table);
static struct pci_driver whci_driver = ;
static int __init whci_init(void)
static void __exit whci_exit(void)
module_init(whci_init);
module_exit(whci_exit);
MODULE_DESCRIPTION("WHCI UWB Multi-interface Controller enumerator");
MODULE_AUTHOR("Cambridge Silicon Radio Ltd.");
MODULE_LICENSE("GPL");
