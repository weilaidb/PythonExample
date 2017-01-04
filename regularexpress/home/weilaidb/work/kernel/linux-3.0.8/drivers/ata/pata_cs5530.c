#define DRV_NAME	"pata_cs5530"
#define DRV_VERSION	"0.7.4"
static void __iomem *cs5530_port_base(struct ata_port *ap)
static void cs5530_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void cs5530_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static unsigned int cs5530_qc_issue(struct ata_queued_cmd *qc)
static struct scsi_host_template cs5530_sht = ;
static struct ata_port_operations cs5530_port_ops = ;
static const struct dmi_system_id palmax_dmi_table[] = ;
static int cs5530_is_palmax(void)
static int cs5530_init_chip(void)
static int cs5530_init_one(struct pci_dev *pdev, const struct pci_device_id *id)
static int cs5530_reinit_one(struct pci_dev *pdev)
static const struct pci_device_id cs5530[] = ;
static struct pci_driver cs5530_pci_driver = ;
static int __init cs5530_init(void)
static void __exit cs5530_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for the Cyrix/NS/AMD 5530");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, cs5530);
MODULE_VERSION(DRV_VERSION);
module_init(cs5530_init);
module_exit(cs5530_exit);
