static int pre_init = 1;
static LIST_HEAD(ide_pci_drivers);
int __ide_pci_register_driver(struct pci_driver *driver, struct module *module,
const char *mod_name)
EXPORT_SYMBOL_GPL(__ide_pci_register_driver);
static int __init ide_scan_pcidev(struct pci_dev *dev)
static int __init ide_scan_pcibus(void)
module_init(ide_scan_pcibus);
