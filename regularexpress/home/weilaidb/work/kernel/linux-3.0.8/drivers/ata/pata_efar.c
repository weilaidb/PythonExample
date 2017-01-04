#define DRV_NAME	"pata_efar"
#define DRV_VERSION	"0.4.5"
static int efar_pre_reset(struct ata_link *link, unsigned long deadline)
static int efar_cable_detect(struct ata_port *ap)
static DEFINE_SPINLOCK(efar_lock);
static void efar_set_piomode (struct ata_port *ap, struct ata_device *adev)
static void efar_set_dmamode (struct ata_port *ap, struct ata_device *adev)
static struct scsi_host_template efar_sht = ;
static struct ata_port_operations efar_ops = ;
static int efar_init_one (struct pci_dev *pdev, const struct pci_device_id *ent)
static const struct pci_device_id efar_pci_tbl[] = ;
static struct pci_driver efar_pci_driver = ;
static int __init efar_init(void)
static void __exit efar_exit(void)
module_init(efar_init);
module_exit(efar_exit);
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("SCSI low-level driver for EFAR PIIX clones");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, efar_pci_tbl);
MODULE_VERSION(DRV_VERSION);
