#define DRV_NAME "pata_cypress"
#define DRV_VERSION "0.1.5"
enum ;
static void cy82c693_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void cy82c693_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static struct scsi_host_template cy82c693_sht = ;
static struct ata_port_operations cy82c693_port_ops = ;
static int cy82c693_init_one(struct pci_dev *pdev, const struct pci_device_id *id)
static const struct pci_device_id cy82c693[] = ;
static struct pci_driver cy82c693_pci_driver = ;
static int __init cy82c693_init(void)
static void __exit cy82c693_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for the CY82C693 PATA controller");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, cy82c693);
MODULE_VERSION(DRV_VERSION);
module_init(cy82c693_init);
module_exit(cy82c693_exit);
