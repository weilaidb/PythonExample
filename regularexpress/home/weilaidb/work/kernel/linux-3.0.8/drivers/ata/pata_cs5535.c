#define DRV_NAME	"cs5535"
#define DRV_VERSION	"0.2.12"
#define MSR_ATAC_BASE    	0x51300000
#define ATAC_GLD_MSR_CAP 	(MSR_ATAC_BASE+0)
#define ATAC_GLD_MSR_CONFIG    (MSR_ATAC_BASE+0x01)
#define ATAC_GLD_MSR_SMI       (MSR_ATAC_BASE+0x02)
#define ATAC_GLD_MSR_ERROR     (MSR_ATAC_BASE+0x03)
#define ATAC_GLD_MSR_PM        (MSR_ATAC_BASE+0x04)
#define ATAC_GLD_MSR_DIAG      (MSR_ATAC_BASE+0x05)
#define ATAC_IO_BAR            (MSR_ATAC_BASE+0x08)
#define ATAC_RESET             (MSR_ATAC_BASE+0x10)
#define ATAC_CH0D0_PIO         (MSR_ATAC_BASE+0x20)
#define ATAC_CH0D0_DMA         (MSR_ATAC_BASE+0x21)
#define ATAC_CH0D1_PIO         (MSR_ATAC_BASE+0x22)
#define ATAC_CH0D1_DMA         (MSR_ATAC_BASE+0x23)
#define ATAC_PCI_ABRTERR       (MSR_ATAC_BASE+0x24)
#define ATAC_BM0_CMD_PRIM      0x00
#define ATAC_BM0_STS_PRIM      0x02
#define ATAC_BM0_PRD           0x04
#define CS5535_CABLE_DETECT    0x48
#define CS5535_BAD_PIO(timings) ( (timings&~0x80000000UL)==0x00009172 )
static int cs5535_cable_detect(struct ata_port *ap)
static void cs5535_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void cs5535_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static struct scsi_host_template cs5535_sht = ;
static struct ata_port_operations cs5535_port_ops = ;
static int cs5535_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id cs5535[] = ;
static struct pci_driver cs5535_pci_driver = ;
static int __init cs5535_init(void)
static void __exit cs5535_exit(void)
MODULE_AUTHOR("Alan Cox, Jens Altmann, Wolfgan Zuleger, Alexander Kiausch");
MODULE_DESCRIPTION("low-level driver for the NS/AMD 5530");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, cs5535);
MODULE_VERSION(DRV_VERSION);
module_init(cs5535_init);
module_exit(cs5535_exit);
