#define DRV_NAME	"pata_rz1000"
#define DRV_VERSION	"0.2.4"
static int rz1000_set_mode(struct ata_link *link, struct ata_device **unused)
static struct scsi_host_template rz1000_sht = ;
static struct ata_port_operations rz1000_port_ops = ;
static int rz1000_fifo_disable(struct pci_dev *pdev)
static int rz1000_init_one (struct pci_dev *pdev, const struct pci_device_id *ent)
static int rz1000_reinit_one(struct pci_dev *pdev)
static const struct pci_device_id pata_rz1000[] = ;
static struct pci_driver rz1000_pci_driver = ;
static int __init rz1000_init(void)
static void __exit rz1000_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for RZ1000 PCI ATA");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, pata_rz1000);
MODULE_VERSION(DRV_VERSION);
module_init(rz1000_init);
module_exit(rz1000_exit);
