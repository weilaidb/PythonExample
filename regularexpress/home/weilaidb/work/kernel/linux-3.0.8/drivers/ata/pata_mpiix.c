#define DRV_NAME "pata_mpiix"
#define DRV_VERSION "0.7.7"
enum ;
static int mpiix_pre_reset(struct ata_link *link, unsigned long deadline)
static void mpiix_set_piomode(struct ata_port *ap, struct ata_device *adev)
static unsigned int mpiix_qc_issue(struct ata_queued_cmd *qc)
static struct scsi_host_template mpiix_sht = ;
static struct ata_port_operations mpiix_port_ops = ;
static int mpiix_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id mpiix[] = ;
static struct pci_driver mpiix_pci_driver = ;
static int __init mpiix_init(void)
static void __exit mpiix_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for Intel MPIIX");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, mpiix);
MODULE_VERSION(DRV_VERSION);
module_init(mpiix_init);
module_exit(mpiix_exit);
