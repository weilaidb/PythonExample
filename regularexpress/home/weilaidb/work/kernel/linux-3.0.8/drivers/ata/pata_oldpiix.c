#define DRV_NAME	"pata_oldpiix"
#define DRV_VERSION	"0.5.5"
static int oldpiix_pre_reset(struct ata_link *link, unsigned long deadline)
static void oldpiix_set_piomode (struct ata_port *ap, struct ata_device *adev)
static void oldpiix_set_dmamode (struct ata_port *ap, struct ata_device *adev)
static unsigned int oldpiix_qc_issue(struct ata_queued_cmd *qc)
static struct scsi_host_template oldpiix_sht = ;
static struct ata_port_operations oldpiix_pata_ops = ;
static int oldpiix_init_one (struct pci_dev *pdev, const struct pci_device_id *ent)
static const struct pci_device_id oldpiix_pci_tbl[] = ;
static struct pci_driver oldpiix_pci_driver = ;
static int __init oldpiix_init(void)
static void __exit oldpiix_exit(void)
module_init(oldpiix_init);
module_exit(oldpiix_exit);
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("SCSI low-level driver for early PIIX series controllers");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, oldpiix_pci_tbl);
MODULE_VERSION(DRV_VERSION);
