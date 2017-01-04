#define DRV_NAME	"pata_marvell"
#define DRV_VERSION	"0.1.6"
static int marvell_pata_active(struct pci_dev *pdev)
static int marvell_pre_reset(struct ata_link *link, unsigned long deadline)
static int marvell_cable_detect(struct ata_port *ap)
static struct scsi_host_template marvell_sht = ;
static struct ata_port_operations marvell_ops = ;
static int marvell_init_one (struct pci_dev *pdev, const struct pci_device_id *id)
static const struct pci_device_id marvell_pci_tbl[] = ;
static struct pci_driver marvell_pci_driver = ;
static int __init marvell_init(void)
static void __exit marvell_exit(void)
module_init(marvell_init);
module_exit(marvell_exit);
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("SCSI low-level driver for Marvell ATA in legacy mode");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, marvell_pci_tbl);
MODULE_VERSION(DRV_VERSION);
