static int use_msr;
module_param_named(msr, use_msr, int, 0644);
MODULE_PARM_DESC(msr, "Force using MSR to configure IDE function (Default: 0)");
#undef rdmsr
#undef wrmsr
#define rdmsr(x, y, z) do  while (0)
#define wrmsr(x, y, z) do  while (0)
#define use_msr 0
#define DRV_NAME	"pata_cs5536"
#define DRV_VERSION	"0.0.8"
enum ;
static const u32 msr_reg[4] = ;
static const u8 pci_reg[4] = ;
static inline int cs5536_read(struct pci_dev *pdev, int reg, u32 *val)
static inline int cs5536_write(struct pci_dev *pdev, int reg, int val)
static int cs5536_cable_detect(struct ata_port *ap)
static void cs5536_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void cs5536_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static struct scsi_host_template cs5536_sht = ;
static struct ata_port_operations cs5536_port_ops = ;
static int cs5536_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id cs5536[] = ;
static struct pci_driver cs5536_pci_driver = ;
static int __init cs5536_init(void)
static void __exit cs5536_exit(void)
MODULE_AUTHOR("Martin K. Petersen");
MODULE_DESCRIPTION("low-level driver for the CS5536 IDE controller");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, cs5536);
MODULE_VERSION(DRV_VERSION);
module_init(cs5536_init);
module_exit(cs5536_exit);
