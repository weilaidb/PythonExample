static char ids[1024] __initdata;
module_param_string(ids, ids, sizeof(ids), 0);
MODULE_PARM_DESC(ids, "Initial PCI IDs to add to the stub driver, format is "
"\"vendor:device[:subvendor[:subdevice[:class[:class_mask]]]]\""
" and multiple comma separated entries can be specified");
static int pci_stub_probe(struct pci_dev *dev, const struct pci_device_id *id)
static struct pci_driver stub_driver = ;
static int __init pci_stub_init(void)
static void __exit pci_stub_exit(void)
module_init(pci_stub_init);
module_exit(pci_stub_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Chris Wright <chrisw@sous-sol.org>");
