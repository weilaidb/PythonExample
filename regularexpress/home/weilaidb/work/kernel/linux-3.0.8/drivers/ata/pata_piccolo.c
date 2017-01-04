#define DRV_NAME "pata_piccolo"
#define DRV_VERSION "0.0.1"
static void tosh_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void tosh_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static struct scsi_host_template tosh_sht = ;
static struct ata_port_operations tosh_port_ops = ;
static int ata_tosh_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static struct pci_device_id ata_tosh[] = ;
static struct pci_driver ata_tosh_pci_driver = ;
static int __init ata_tosh_init(void)
static void __exit ata_tosh_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("Low level driver for Toshiba Piccolo ATA");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, ata_tosh);
MODULE_VERSION(DRV_VERSION);
module_init(ata_tosh_init);
module_exit(ata_tosh_exit);
