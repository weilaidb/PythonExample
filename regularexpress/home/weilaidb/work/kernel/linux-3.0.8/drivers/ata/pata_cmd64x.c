#define DRV_NAME "pata_cmd64x"
#define DRV_VERSION "0.2.5"
enum ;
static int cmd648_cable_detect(struct ata_port *ap)
static void cmd64x_set_timing(struct ata_port *ap, struct ata_device *adev, u8 mode)
static void cmd64x_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void cmd64x_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static void cmd648_bmdma_stop(struct ata_queued_cmd *qc)
static void cmd646r1_bmdma_stop(struct ata_queued_cmd *qc)
static struct scsi_host_template cmd64x_sht = ;
static const struct ata_port_operations cmd64x_base_ops = ;
static struct ata_port_operations cmd64x_port_ops = ;
static struct ata_port_operations cmd646r1_port_ops = ;
static struct ata_port_operations cmd648_port_ops = ;
static int cmd64x_init_one(struct pci_dev *pdev, const struct pci_device_id *id)
static int cmd64x_reinit_one(struct pci_dev *pdev)
static const struct pci_device_id cmd64x[] = ;
static struct pci_driver cmd64x_pci_driver = ;
static int __init cmd64x_init(void)
static void __exit cmd64x_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for CMD64x series PATA controllers");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, cmd64x);
MODULE_VERSION(DRV_VERSION);
module_init(cmd64x_init);
module_exit(cmd64x_exit);
