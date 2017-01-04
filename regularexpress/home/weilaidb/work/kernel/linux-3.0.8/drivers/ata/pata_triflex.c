#define DRV_NAME "pata_triflex"
#define DRV_VERSION "0.2.8"
static int triflex_prereset(struct ata_link *link, unsigned long deadline)
static void triflex_load_timing(struct ata_port *ap, struct ata_device *adev, int speed)
static void triflex_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void triflex_bmdma_start(struct ata_queued_cmd *qc)
static void triflex_bmdma_stop(struct ata_queued_cmd *qc)
static struct scsi_host_template triflex_sht = ;
static struct ata_port_operations triflex_port_ops = ;
static int triflex_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id triflex[] = ;
static int triflex_ata_pci_device_suspend(struct pci_dev *pdev, pm_message_t mesg)
static struct pci_driver triflex_pci_driver = ;
static int __init triflex_init(void)
static void __exit triflex_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for Compaq Triflex");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, triflex);
MODULE_VERSION(DRV_VERSION);
module_init(triflex_init);
module_exit(triflex_exit);
