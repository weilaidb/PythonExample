static struct eisa_root_device pci_eisa_root;
static int __init pci_eisa_init(struct pci_dev *pdev,
const struct pci_device_id *ent)
static struct pci_device_id pci_eisa_pci_tbl[] = ;
static struct pci_driver pci_eisa_driver = ;
static int __init pci_eisa_init_module (void)
device_initcall(pci_eisa_init_module);
MODULE_DEVICE_TABLE(pci, pci_eisa_pci_tbl);
