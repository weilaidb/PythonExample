#define DRV_NAME	"pata_rdc"
#define DRV_VERSION	"0.01"
struct rdc_host_priv ;
static int rdc_pata_cable_detect(struct ata_port *ap)
static int rdc_pata_prereset(struct ata_link *link, unsigned long deadline)
static void rdc_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void rdc_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static struct ata_port_operations rdc_pata_ops = ;
static struct ata_port_info rdc_port_info = ;
static struct scsi_host_template rdc_sht = ;
static int __devinit rdc_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void rdc_remove_one(struct pci_dev *pdev)
static const struct pci_device_id rdc_pci_tbl[] = ;
static struct pci_driver rdc_pci_driver = ;
static int __init rdc_init(void)
static void __exit rdc_exit(void)
module_init(rdc_init);
module_exit(rdc_exit);
MODULE_AUTHOR("Alan Cox (based on ata_piix)");
MODULE_DESCRIPTION("SCSI low-level driver for RDC PATA controllers");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, rdc_pci_tbl);
MODULE_VERSION(DRV_VERSION);
