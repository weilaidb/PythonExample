#define DRV_NAME	"pata_radisys"
#define DRV_VERSION	"0.4.4"
static void radisys_set_piomode (struct ata_port *ap, struct ata_device *adev)
static void radisys_set_dmamode (struct ata_port *ap, struct ata_device *adev)
static unsigned int radisys_qc_issue(struct ata_queued_cmd *qc)
static struct scsi_host_template radisys_sht = ;
static struct ata_port_operations radisys_pata_ops = ;
static int radisys_init_one (struct pci_dev *pdev, const struct pci_device_id *ent)
static const struct pci_device_id radisys_pci_tbl[] = ;
static struct pci_driver radisys_pci_driver = ;
static int __init radisys_init(void)
static void __exit radisys_exit(void)
module_init(radisys_init);
module_exit(radisys_exit);
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("SCSI low-level driver for Radisys R82600 controllers");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, radisys_pci_tbl);
MODULE_VERSION(DRV_VERSION);
