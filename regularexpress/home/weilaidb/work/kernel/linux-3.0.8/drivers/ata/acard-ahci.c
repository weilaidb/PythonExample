#define DRV_NAME	"acard-ahci"
#define DRV_VERSION	"1.0"
#define ACARD_AHCI_RX_FIS_SZ 128
enum ;
enum board_ids ;
struct acard_sg ;
static void acard_ahci_qc_prep(struct ata_queued_cmd *qc);
static bool acard_ahci_qc_fill_rtf(struct ata_queued_cmd *qc);
static int acard_ahci_port_start(struct ata_port *ap);
static int acard_ahci_init_one(struct pci_dev *pdev, const struct pci_device_id *ent);
static int acard_ahci_pci_device_suspend(struct pci_dev *pdev, pm_message_t mesg);
static int acard_ahci_pci_device_resume(struct pci_dev *pdev);
static struct scsi_host_template acard_ahci_sht = ;
static struct ata_port_operations acard_ops = ;
#define AHCI_HFLAGS(flags)	.private_data	= (void *)(flags)
static const struct ata_port_info acard_ahci_port_info[] = ;
static const struct pci_device_id acard_ahci_pci_tbl[] = ;
static struct pci_driver acard_ahci_pci_driver = ;
static int acard_ahci_pci_device_suspend(struct pci_dev *pdev, pm_message_t mesg)
static int acard_ahci_pci_device_resume(struct pci_dev *pdev)
static int acard_ahci_configure_dma_masks(struct pci_dev *pdev, int using_dac)
static void acard_ahci_pci_print_info(struct ata_host *host)
static unsigned int acard_ahci_fill_sg(struct ata_queued_cmd *qc, void *cmd_tbl)
static void acard_ahci_qc_prep(struct ata_queued_cmd *qc)
static bool acard_ahci_qc_fill_rtf(struct ata_queued_cmd *qc)
static int acard_ahci_port_start(struct ata_port *ap)
static int acard_ahci_init_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static int __init acard_ahci_init(void)
static void __exit acard_ahci_exit(void)
MODULE_AUTHOR("Jeff Garzik");
MODULE_DESCRIPTION("ACard AHCI SATA low-level driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, acard_ahci_pci_tbl);
MODULE_VERSION(DRV_VERSION);
module_init(acard_ahci_init);
module_exit(acard_ahci_exit);
