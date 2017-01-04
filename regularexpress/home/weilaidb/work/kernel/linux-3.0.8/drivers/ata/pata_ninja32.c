#define DRV_NAME "pata_ninja32"
#define DRV_VERSION "0.1.5"
static void ninja32_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void ninja32_dev_select(struct ata_port *ap, unsigned int device)
static struct scsi_host_template ninja32_sht = ;
static struct ata_port_operations ninja32_port_ops = ;
static void ninja32_program(void __iomem *base)
static int ninja32_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static int ninja32_reinit_one(struct pci_dev *pdev)
static const struct pci_device_id ninja32[] = ;
static struct pci_driver ninja32_pci_driver = ;
static int __init ninja32_init(void)
static void __exit ninja32_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for Ninja32 ATA");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, ninja32);
MODULE_VERSION(DRV_VERSION);
module_init(ninja32_init);
module_exit(ninja32_exit);
