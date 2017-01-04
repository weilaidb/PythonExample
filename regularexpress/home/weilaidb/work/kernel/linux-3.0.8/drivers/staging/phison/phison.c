#define PHISON_DEBUG
#define DRV_NAME		"phison_e-box"
#define DRV_VERSION		"0.91"
#define PCI_VENDOR_ID_PHISON	0x1987
#define PCI_DEVICE_ID_PS5000	0x5000
static int phison_pre_reset(struct ata_link *link, unsigned long deadline)
static struct scsi_host_template phison_sht = ;
static struct ata_port_operations phison_ops = ;
static int phison_init_one(struct pci_dev *pdev, const struct pci_device_id *id)
static DEFINE_PCI_DEVICE_TABLE(phison_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, phison_pci_tbl);
static struct pci_driver phison_pci_driver = ;
static int __init phison_ide_init(void)
static void __exit phison_ide_exit(void)
module_init(phison_ide_init);
module_exit(phison_ide_exit);
MODULE_AUTHOR("Evan Ko");
MODULE_DESCRIPTION("PCIE driver module for PHISON PS5000 E-BOX");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
