#define VERSION "arcnet: COM20020 PCI support\n"
static int node;
static char device[9];
static int timeout = 3;
static int backplane;
static int clockp;
static int clockm;
module_param(node, int, 0);
module_param_string(device, device, sizeof(device), 0);
module_param(timeout, int, 0);
module_param(backplane, int, 0);
module_param(clockp, int, 0);
module_param(clockm, int, 0);
MODULE_LICENSE("GPL");
static int __devinit com20020pci_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void __devexit com20020pci_remove(struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(com20020pci_id_table) = ;
MODULE_DEVICE_TABLE(pci, com20020pci_id_table);
static struct pci_driver com20020pci_driver = ;
static int __init com20020pci_init(void)
static void __exit com20020pci_cleanup(void)
module_init(com20020pci_init)
module_exit(com20020pci_cleanup)
