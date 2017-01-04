#define DRV_NAME	"pata_sis"
#define DRV_VERSION	"0.5.2"
struct sis_chipset ;
struct sis_laptop ;
static const struct sis_laptop sis_laptop[] = ;
static int sis_short_ata40(struct pci_dev *dev)
static int sis_old_port_base(struct ata_device *adev)
static int sis_133_cable_detect(struct ata_port *ap)
static int sis_66_cable_detect(struct ata_port *ap)
static int sis_pre_reset(struct ata_link *link, unsigned long deadline)
static void sis_set_fifo(struct ata_port *ap, struct ata_device *adev)
static void sis_old_set_piomode (struct ata_port *ap, struct ata_device *adev)
static void sis_100_set_piomode (struct ata_port *ap, struct ata_device *adev)
static void sis_133_set_piomode (struct ata_port *ap, struct ata_device *adev)
static void sis_old_set_dmamode (struct ata_port *ap, struct ata_device *adev)
static void sis_66_set_dmamode (struct ata_port *ap, struct ata_device *adev)
static void sis_100_set_dmamode (struct ata_port *ap, struct ata_device *adev)
static void sis_133_early_set_dmamode (struct ata_port *ap, struct ata_device *adev)
static void sis_133_set_dmamode (struct ata_port *ap, struct ata_device *adev)
static struct scsi_host_template sis_sht = ;
static struct ata_port_operations sis_133_for_sata_ops = ;
static struct ata_port_operations sis_base_ops = ;
static struct ata_port_operations sis_133_ops = ;
static struct ata_port_operations sis_133_early_ops = ;
static struct ata_port_operations sis_100_ops = ;
static struct ata_port_operations sis_66_ops = ;
static struct ata_port_operations sis_old_ops = ;
static const struct ata_port_info sis_info = ;
static const struct ata_port_info sis_info33 = ;
static const struct ata_port_info sis_info66 = ;
static const struct ata_port_info sis_info100 = ;
static const struct ata_port_info sis_info100_early = ;
static const struct ata_port_info sis_info133 = ;
const struct ata_port_info sis_info133_for_sata = ;
static const struct ata_port_info sis_info133_early = ;
EXPORT_SYMBOL_GPL(sis_info133_for_sata);
static void sis_fixup(struct pci_dev *pdev, struct sis_chipset *sis)
static int sis_init_one (struct pci_dev *pdev, const struct pci_device_id *ent)
static int sis_reinit_one(struct pci_dev *pdev)
static const struct pci_device_id sis_pci_tbl[] = ;
static struct pci_driver sis_pci_driver = ;
static int __init sis_init(void)
static void __exit sis_exit(void)
module_init(sis_init);
module_exit(sis_exit);
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("SCSI low-level driver for SiS ATA");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, sis_pci_tbl);
MODULE_VERSION(DRV_VERSION);
