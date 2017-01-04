static int ssb_pcihost_suspend(struct pci_dev *dev, pm_message_t state)
static int ssb_pcihost_resume(struct pci_dev *dev)
# define ssb_pcihost_suspend	NULL
# define ssb_pcihost_resume	NULL
static int ssb_pcihost_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void ssb_pcihost_remove(struct pci_dev *dev)
int ssb_pcihost_register(struct pci_driver *driver)
EXPORT_SYMBOL(ssb_pcihost_register);
