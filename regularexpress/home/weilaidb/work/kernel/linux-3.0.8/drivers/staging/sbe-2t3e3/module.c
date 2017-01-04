static void check_leds(unsigned long arg)
static void t3e3_remove_channel(struct channel *channel)
static int __devinit t3e3_init_channel(struct channel *channel, struct pci_dev *pdev, struct card *card)
static void __devexit t3e3_remove_card(struct pci_dev *pdev)
static int __devinit t3e3_init_card(struct pci_dev *pdev, const struct pci_device_id *ent)
static struct pci_device_id t3e3_pci_tbl[] __devinitdata = ;
static struct pci_driver t3e3_pci_driver = ;
static int __init t3e3_init_module(void)
static void __exit t3e3_cleanup_module(void)
module_init(t3e3_init_module);
module_exit(t3e3_cleanup_module);
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, t3e3_pci_tbl);
