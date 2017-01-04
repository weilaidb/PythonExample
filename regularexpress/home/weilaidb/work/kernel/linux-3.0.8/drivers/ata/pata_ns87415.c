#define DRV_NAME	"pata_ns87415"
#define DRV_VERSION	"0.0.1"
static void ns87415_set_mode(struct ata_port *ap, struct ata_device *adev, u8 mode)
static void ns87415_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void ns87415_bmdma_setup(struct ata_queued_cmd *qc)
static void ns87415_bmdma_start(struct ata_queued_cmd *qc)
static void ns87415_bmdma_stop(struct ata_queued_cmd *qc)
static void ns87415_irq_clear(struct ata_port *ap)
static int ns87415_check_atapi_dma(struct ata_queued_cmd *qc)
#if defined(CONFIG_SUPERIO)
#define SUPERIO_IDE_MAX_RETRIES 25
static u8 ns87560_read_buggy(void __iomem *port)
static u8 ns87560_check_status(struct ata_port *ap)
void ns87560_tf_read(struct ata_port *ap, struct ata_taskfile *tf)
static u8 ns87560_bmdma_status(struct ata_port *ap)
static struct ata_port_operations ns87415_pata_ops = ;
#if defined(CONFIG_SUPERIO)
static struct ata_port_operations ns87560_pata_ops = ;
static struct scsi_host_template ns87415_sht = ;
static void ns87415_fixup(struct pci_dev *pdev)
static int ns87415_init_one (struct pci_dev *pdev, const struct pci_device_id *ent)
static const struct pci_device_id ns87415_pci_tbl[] = ;
static int ns87415_reinit_one(struct pci_dev *pdev)
static struct pci_driver ns87415_pci_driver = ;
static int __init ns87415_init(void)
static void __exit ns87415_exit(void)
module_init(ns87415_init);
module_exit(ns87415_exit);
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("ATA low-level driver for NS87415 controllers");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, ns87415_pci_tbl);
MODULE_VERSION(DRV_VERSION);
