#define DRV_NAME	"pata_sch"
#define DRV_VERSION	"0.2"
enum ;
static int sch_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent);
static void sch_set_piomode(struct ata_port *ap, struct ata_device *adev);
static void sch_set_dmamode(struct ata_port *ap, struct ata_device *adev);
static const struct pci_device_id sch_pci_tbl[] = ;
static struct pci_driver sch_pci_driver = ;
static struct scsi_host_template sch_sht = ;
static struct ata_port_operations sch_pata_ops = ;
static struct ata_port_info sch_port_info = ;
MODULE_AUTHOR("Alek Du <alek.du@intel.com>");
MODULE_DESCRIPTION("SCSI low-level driver for Intel SCH PATA controllers");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, sch_pci_tbl);
MODULE_VERSION(DRV_VERSION);
static void sch_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void sch_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static int __devinit sch_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static int __init sch_init(void)
static void __exit sch_exit(void)
module_init(sch_init);
module_exit(sch_exit);
