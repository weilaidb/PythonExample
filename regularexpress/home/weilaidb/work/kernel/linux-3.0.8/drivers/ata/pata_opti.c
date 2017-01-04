#define DRV_NAME "pata_opti"
#define DRV_VERSION "0.2.9"
enum ;
static int opti_pre_reset(struct ata_link *link, unsigned long deadline)
static void opti_write_reg(struct ata_port *ap, u8 val, int reg)
static void opti_set_piomode(struct ata_port *ap, struct ata_device *adev)
static struct scsi_host_template opti_sht = ;
static struct ata_port_operations opti_port_ops = ;
static int opti_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id opti[] = ;
static struct pci_driver opti_pci_driver = ;
static int __init opti_init(void)
static void __exit opti_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for Opti 621/621X");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, opti);
MODULE_VERSION(DRV_VERSION);
module_init(opti_init);
module_exit(opti_exit);
