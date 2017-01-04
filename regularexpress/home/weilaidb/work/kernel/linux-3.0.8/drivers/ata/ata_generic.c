#define DRV_NAME "ata_generic"
#define DRV_VERSION "0.2.15"
enum ;
static int generic_set_mode(struct ata_link *link, struct ata_device **unused)
static struct scsi_host_template generic_sht = ;
static struct ata_port_operations generic_port_ops = ;
static int all_generic_ide;
static int is_intel_ider(struct pci_dev *dev)
static int ata_generic_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static struct pci_device_id ata_generic[] = ;
static struct pci_driver ata_generic_pci_driver = ;
static int __init ata_generic_init(void)
static void __exit ata_generic_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for generic ATA");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, ata_generic);
MODULE_VERSION(DRV_VERSION);
module_init(ata_generic_init);
module_exit(ata_generic_exit);
module_param(all_generic_ide, int, 0);
