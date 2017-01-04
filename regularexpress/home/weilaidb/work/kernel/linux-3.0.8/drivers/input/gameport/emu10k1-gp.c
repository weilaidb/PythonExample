MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("EMU10k1 gameport driver");
MODULE_LICENSE("GPL");
struct emu ;
static const struct pci_device_id emu_tbl[] = ;
MODULE_DEVICE_TABLE(pci, emu_tbl);
static int __devinit emu_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit emu_remove(struct pci_dev *pdev)
static struct pci_driver emu_driver = ;
static int __init emu_init(void)
static void __exit emu_exit(void)
module_init(emu_init);
module_exit(emu_exit);
