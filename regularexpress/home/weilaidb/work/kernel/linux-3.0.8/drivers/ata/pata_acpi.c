#define DRV_NAME	"pata_acpi"
#define DRV_VERSION	"0.2.3"
struct pata_acpi ;
static int pacpi_pre_reset(struct ata_link *link, unsigned long deadline)
static int pacpi_cable_detect(struct ata_port *ap)
static unsigned long pacpi_discover_modes(struct ata_port *ap, struct ata_device *adev)
static unsigned long pacpi_mode_filter(struct ata_device *adev, unsigned long mask)
static void pacpi_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void pacpi_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static unsigned int pacpi_qc_issue(struct ata_queued_cmd *qc)
static int pacpi_port_start(struct ata_port *ap)
static struct scsi_host_template pacpi_sht = ;
static struct ata_port_operations pacpi_ops = ;
static int pacpi_init_one (struct pci_dev *pdev, const struct pci_device_id *id)
static const struct pci_device_id pacpi_pci_tbl[] = ;
static struct pci_driver pacpi_pci_driver = ;
static int __init pacpi_init(void)
static void __exit pacpi_exit(void)
module_init(pacpi_init);
module_exit(pacpi_exit);
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("SCSI low-level driver for ATA in ACPI mode");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, pacpi_pci_tbl);
MODULE_VERSION(DRV_VERSION);
