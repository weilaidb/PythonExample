#define DRV_NAME "pata_sl82c105"
#define DRV_VERSION "0.3.3"
enum ;
static int sl82c105_pre_reset(struct ata_link *link, unsigned long deadline)
static void sl82c105_configure_piomode(struct ata_port *ap, struct ata_device *adev, int pio)
static void sl82c105_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void sl82c105_configure_dmamode(struct ata_port *ap, struct ata_device *adev)
static void sl82c105_reset_engine(struct ata_port *ap)
static void sl82c105_bmdma_start(struct ata_queued_cmd *qc)
static void sl82c105_bmdma_stop(struct ata_queued_cmd *qc)
static int sl82c105_qc_defer(struct ata_queued_cmd *qc)
static bool sl82c105_sff_irq_check(struct ata_port *ap)
static struct scsi_host_template sl82c105_sht = ;
static struct ata_port_operations sl82c105_port_ops = ;
static int sl82c105_bridge_revision(struct pci_dev *pdev)
static int sl82c105_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id sl82c105[] = ;
static struct pci_driver sl82c105_pci_driver = ;
static int __init sl82c105_init(void)
static void __exit sl82c105_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for Sl82c105");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, sl82c105);
MODULE_VERSION(DRV_VERSION);
module_init(sl82c105_init);
module_exit(sl82c105_exit);
