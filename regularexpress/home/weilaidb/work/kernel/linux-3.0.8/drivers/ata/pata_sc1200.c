#define DRV_NAME	"sc1200"
#define DRV_VERSION	"0.2.6"
#define SC1200_REV_A	0x00
#define SC1200_REV_B1	0x01
#define SC1200_REV_B3	0x02
#define SC1200_REV_C1	0x03
#define SC1200_REV_D1	0x04
static int sc1200_clock(void)
static void sc1200_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void sc1200_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static unsigned int sc1200_qc_issue(struct ata_queued_cmd *qc)
static int sc1200_qc_defer(struct ata_queued_cmd *qc)
static struct scsi_host_template sc1200_sht = ;
static struct ata_port_operations sc1200_port_ops = ;
static int sc1200_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id sc1200[] = ;
static struct pci_driver sc1200_pci_driver = ;
static int __init sc1200_init(void)
static void __exit sc1200_exit(void)
MODULE_AUTHOR("Alan Cox, Mark Lord");
MODULE_DESCRIPTION("low-level driver for the NS/AMD SC1200");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, sc1200);
MODULE_VERSION(DRV_VERSION);
module_init(sc1200_init);
module_exit(sc1200_exit);
