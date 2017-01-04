#define DRV_NAME "pata_cmd640"
#define DRV_VERSION "0.0.5"
struct cmd640_reg ;
enum ;
static void cmd640_set_piomode(struct ata_port *ap, struct ata_device *adev)
static unsigned int cmd640_qc_issue(struct ata_queued_cmd *qc)
static int cmd640_port_start(struct ata_port *ap)
static bool cmd640_sff_irq_check(struct ata_port *ap)
static struct scsi_host_template cmd640_sht = ;
static struct ata_port_operations cmd640_port_ops = ;
static void cmd640_hardware_init(struct pci_dev *pdev)
static int cmd640_init_one(struct pci_dev *pdev, const struct pci_device_id *id)
static int cmd640_reinit_one(struct pci_dev *pdev)
static const struct pci_device_id cmd640[] = ;
static struct pci_driver cmd640_pci_driver = ;
static int __init cmd640_init(void)
static void __exit cmd640_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for CMD640 PATA controllers");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, cmd640);
MODULE_VERSION(DRV_VERSION);
module_init(cmd640_init);
module_exit(cmd640_exit);
