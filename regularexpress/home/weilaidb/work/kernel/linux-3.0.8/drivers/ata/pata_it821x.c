#define DRV_NAME "pata_it821x"
#define DRV_VERSION "0.4.2"
struct it821x_dev
;
#define ATA_66		0
#define ATA_50		1
#define ATA_ANY		2
#define UDMA_OFF	0
#define MWDMA_OFF	0
static int it8212_noraid;
static void it821x_program(struct ata_port *ap, struct ata_device *adev, u16 timing)
static void it821x_program_udma(struct ata_port *ap, struct ata_device *adev, u16 timing)
static void it821x_clock_strategy(struct ata_port *ap, struct ata_device *adev)
static void it821x_passthru_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void it821x_passthru_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static void it821x_passthru_bmdma_start(struct ata_queued_cmd *qc)
static void it821x_passthru_bmdma_stop(struct ata_queued_cmd *qc)
static void it821x_passthru_dev_select(struct ata_port *ap,
unsigned int device)
static unsigned int it821x_smart_qc_issue(struct ata_queued_cmd *qc)
static unsigned int it821x_passthru_qc_issue(struct ata_queued_cmd *qc)
static int it821x_smart_set_mode(struct ata_link *link, struct ata_device **unused)
static void it821x_dev_config(struct ata_device *adev)
static unsigned int it821x_read_id(struct ata_device *adev,
struct ata_taskfile *tf, u16 *id)
static int it821x_check_atapi_dma(struct ata_queued_cmd *qc)
static void it821x_display_disk(int n, u8 *buf)
static u8 *it821x_firmware_command(struct ata_port *ap, u8 cmd, int len)
static void it821x_probe_firmware(struct ata_port *ap)
static int it821x_port_start(struct ata_port *ap)
static int it821x_rdc_cable(struct ata_port *ap)
static struct scsi_host_template it821x_sht = ;
static struct ata_port_operations it821x_smart_port_ops = ;
static struct ata_port_operations it821x_passthru_port_ops = ;
static struct ata_port_operations it821x_rdc_port_ops = ;
static void it821x_disable_raid(struct pci_dev *pdev)
static int it821x_init_one(struct pci_dev *pdev, const struct pci_device_id *id)
static int it821x_reinit_one(struct pci_dev *pdev)
static const struct pci_device_id it821x[] = ;
static struct pci_driver it821x_pci_driver = ;
static int __init it821x_init(void)
static void __exit it821x_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for the IT8211/IT8212 IDE RAID controller");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, it821x);
MODULE_VERSION(DRV_VERSION);
module_param_named(noraid, it8212_noraid, int, S_IRUGO);
MODULE_PARM_DESC(noraid, "Force card into bypass mode");
module_init(it821x_init);
module_exit(it821x_exit);
