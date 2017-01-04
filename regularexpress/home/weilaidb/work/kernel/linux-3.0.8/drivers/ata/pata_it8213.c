#define DRV_NAME	"pata_it8213"
#define DRV_VERSION	"0.0.3"
static int it8213_pre_reset(struct ata_link *link, unsigned long deadline)
static int it8213_cable_detect(struct ata_port *ap)
static void it8213_set_piomode (struct ata_port *ap, struct ata_device *adev)
static void it8213_set_dmamode (struct ata_port *ap, struct ata_device *adev)
static struct scsi_host_template it8213_sht = ;
static struct ata_port_operations it8213_ops = ;
static int it8213_init_one (struct pci_dev *pdev, const struct pci_device_id *ent)
static const struct pci_device_id it8213_pci_tbl[] = ;
static struct pci_driver it8213_pci_driver = ;
static int __init it8213_init(void)
static void __exit it8213_exit(void)
module_init(it8213_init);
module_exit(it8213_exit);
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("SCSI low-level driver for the ITE 8213");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, it8213_pci_tbl);
MODULE_VERSION(DRV_VERSION);
