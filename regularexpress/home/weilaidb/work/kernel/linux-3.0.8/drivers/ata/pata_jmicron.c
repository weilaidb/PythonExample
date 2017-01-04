#define DRV_NAME	"pata_jmicron"
#define DRV_VERSION	"0.1.5"
typedef enum  port_type;
static int jmicron_pre_reset(struct ata_link *link, unsigned long deadline)
static struct scsi_host_template jmicron_sht = ;
static struct ata_port_operations jmicron_ops = ;
static int jmicron_init_one (struct pci_dev *pdev, const struct pci_device_id *id)
static const struct pci_device_id jmicron_pci_tbl[] = ;
static struct pci_driver jmicron_pci_driver = ;
static int __init jmicron_init(void)
static void __exit jmicron_exit(void)
module_init(jmicron_init);
module_exit(jmicron_exit);
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("SCSI low-level driver for Jmicron PATA ports");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, jmicron_pci_tbl);
MODULE_VERSION(DRV_VERSION);
