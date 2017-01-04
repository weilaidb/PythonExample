#define DRV_NAME "pata_atiixp"
#define DRV_VERSION "0.4.6"
enum ;
static int atiixp_cable_detect(struct ata_port *ap)
static DEFINE_SPINLOCK(atiixp_lock);
static void atiixp_set_pio_timing(struct ata_port *ap, struct ata_device *adev, int pio)
static void atiixp_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void atiixp_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static void atiixp_bmdma_start(struct ata_queued_cmd *qc)
static void atiixp_bmdma_stop(struct ata_queued_cmd *qc)
static struct scsi_host_template atiixp_sht = ;
static struct ata_port_operations atiixp_port_ops = ;
static int atiixp_init_one(struct pci_dev *pdev, const struct pci_device_id *id)
static const struct pci_device_id atiixp[] = ;
static struct pci_driver atiixp_pci_driver = ;
static int __init atiixp_init(void)
static void __exit atiixp_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for ATI IXP200/300/400");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, atiixp);
MODULE_VERSION(DRV_VERSION);
module_init(atiixp_init);
module_exit(atiixp_exit);
