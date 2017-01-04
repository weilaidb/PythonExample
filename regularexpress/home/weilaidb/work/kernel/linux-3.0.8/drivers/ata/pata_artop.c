#define DRV_NAME	"pata_artop"
#define DRV_VERSION	"0.4.5"
static int clock = 0;
static int artop6210_pre_reset(struct ata_link *link, unsigned long deadline)
static int artop6260_pre_reset(struct ata_link *link, unsigned long deadline)
static int artop6260_cable_detect(struct ata_port *ap)
static void artop6210_load_piomode(struct ata_port *ap, struct ata_device *adev, unsigned int pio)
static void artop6210_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void artop6260_load_piomode (struct ata_port *ap, struct ata_device *adev, unsigned int pio)
static void artop6260_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void artop6210_set_dmamode (struct ata_port *ap, struct ata_device *adev)
static void artop6260_set_dmamode (struct ata_port *ap, struct ata_device *adev)
static int artop6210_qc_defer(struct ata_queued_cmd *qc)
static struct scsi_host_template artop_sht = ;
static struct ata_port_operations artop6210_ops = ;
static struct ata_port_operations artop6260_ops = ;
static int artop_init_one (struct pci_dev *pdev, const struct pci_device_id *id)
static const struct pci_device_id artop_pci_tbl[] = ;
static struct pci_driver artop_pci_driver = ;
static int __init artop_init(void)
static void __exit artop_exit(void)
module_init(artop_init);
module_exit(artop_exit);
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("SCSI low-level driver for ARTOP PATA");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, artop_pci_tbl);
MODULE_VERSION(DRV_VERSION);
