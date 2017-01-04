#define DRV_NAME "pata_ns87410"
#define DRV_VERSION "0.4.6"
static int ns87410_pre_reset(struct ata_link *link, unsigned long deadline)
static void ns87410_set_piomode(struct ata_port *ap, struct ata_device *adev)
static unsigned int ns87410_qc_issue(struct ata_queued_cmd *qc)
static struct scsi_host_template ns87410_sht = ;
static struct ata_port_operations ns87410_port_ops = ;
static int ns87410_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id ns87410[] = ;
static struct pci_driver ns87410_pci_driver = ;
static int __init ns87410_init(void)
static void __exit ns87410_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for Nat Semi 87410");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, ns87410);
MODULE_VERSION(DRV_VERSION);
module_init(ns87410_init);
module_exit(ns87410_exit);
