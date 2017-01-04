static const u8 setup[] = ;
static const struct ide_port_ops delkin_cb_port_ops = ;
static int delkin_cb_init_chipset(struct pci_dev *dev)
static const struct ide_port_info delkin_cb_port_info = ;
static int __devinit
delkin_cb_probe (struct pci_dev *dev, const struct pci_device_id *id)
static void
delkin_cb_remove (struct pci_dev *dev)
static int delkin_cb_suspend(struct pci_dev *dev, pm_message_t state)
static int delkin_cb_resume(struct pci_dev *dev)
#define delkin_cb_suspend NULL
#define delkin_cb_resume NULL
static struct pci_device_id delkin_cb_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, delkin_cb_pci_tbl);
static struct pci_driver delkin_cb_pci_driver = ;
static int __init delkin_cb_init(void)
static void __exit delkin_cb_exit(void)
module_init(delkin_cb_init);
module_exit(delkin_cb_exit);
MODULE_AUTHOR("Mark Lord");
MODULE_DESCRIPTION("Basic support for Delkin/ASKA/Workbit Cardbus IDE");
MODULE_LICENSE("GPL");
