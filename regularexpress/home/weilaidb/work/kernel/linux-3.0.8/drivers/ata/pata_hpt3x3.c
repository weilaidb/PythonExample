#define DRV_NAME	"pata_hpt3x3"
#define DRV_VERSION	"0.6.1"
static void hpt3x3_set_piomode(struct ata_port *ap, struct ata_device *adev)
#if defined(CONFIG_PATA_HPT3X3_DMA)
static void hpt3x3_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static void hpt3x3_freeze(struct ata_port *ap)
static void hpt3x3_bmdma_setup(struct ata_queued_cmd *qc)
static int hpt3x3_atapi_dma(struct ata_queued_cmd *qc)
static struct scsi_host_template hpt3x3_sht = ;
static struct ata_port_operations hpt3x3_port_ops = ;
static void hpt3x3_init_chipset(struct pci_dev *dev)
static int hpt3x3_init_one(struct pci_dev *pdev, const struct pci_device_id *id)
static int hpt3x3_reinit_one(struct pci_dev *dev)
static const struct pci_device_id hpt3x3[] = ;
static struct pci_driver hpt3x3_pci_driver = ;
static int __init hpt3x3_init(void)
static void __exit hpt3x3_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for the Highpoint HPT343/363");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, hpt3x3);
MODULE_VERSION(DRV_VERSION);
module_init(hpt3x3_init);
module_exit(hpt3x3_exit);
