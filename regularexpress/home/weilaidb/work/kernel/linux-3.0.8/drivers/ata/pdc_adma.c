#define DRV_NAME	"pdc_adma"
#define DRV_VERSION	"1.0"
#define ADMA_ATA_REGS(base, port_no)	((base) + ((port_no) * 0x40))
#define ADMA_REGS(base, port_no)	((base) + 0x80 + ((port_no) * 0x20))
#define ADMA_PORT_REGS(ap) \
ADMA_REGS((ap)->host->iomap[ADMA_MMIO_BAR], ap->port_no)
enum ;
typedef enum  adma_state_t;
struct adma_port_priv ;
static int adma_ata_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent);
static int adma_port_start(struct ata_port *ap);
static void adma_port_stop(struct ata_port *ap);
static void adma_qc_prep(struct ata_queued_cmd *qc);
static unsigned int adma_qc_issue(struct ata_queued_cmd *qc);
static int adma_check_atapi_dma(struct ata_queued_cmd *qc);
static void adma_freeze(struct ata_port *ap);
static void adma_thaw(struct ata_port *ap);
static int adma_prereset(struct ata_link *link, unsigned long deadline);
static struct scsi_host_template adma_ata_sht = ;
static struct ata_port_operations adma_ata_ops = ;
static struct ata_port_info adma_port_info[] = ;
static const struct pci_device_id adma_ata_pci_tbl[] = ;
static struct pci_driver adma_ata_pci_driver = ;
static int adma_check_atapi_dma(struct ata_queued_cmd *qc)
static void adma_reset_engine(struct ata_port *ap)
static void adma_reinit_engine(struct ata_port *ap)
static inline void adma_enter_reg_mode(struct ata_port *ap)
static void adma_freeze(struct ata_port *ap)
static void adma_thaw(struct ata_port *ap)
static int adma_prereset(struct ata_link *link, unsigned long deadline)
static int adma_fill_sg(struct ata_queued_cmd *qc)
static void adma_qc_prep(struct ata_queued_cmd *qc)
static inline void adma_packet_start(struct ata_queued_cmd *qc)
static unsigned int adma_qc_issue(struct ata_queued_cmd *qc)
static inline unsigned int adma_intr_pkt(struct ata_host *host)
static inline unsigned int adma_intr_mmio(struct ata_host *host)
static irqreturn_t adma_intr(int irq, void *dev_instance)
static void adma_ata_setup_port(struct ata_ioports *port, void __iomem *base)
static int adma_port_start(struct ata_port *ap)
static void adma_port_stop(struct ata_port *ap)
static void adma_host_init(struct ata_host *host, unsigned int chip_id)
static int adma_set_dma_masks(struct pci_dev *pdev, void __iomem *mmio_base)
static int adma_ata_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static int __init adma_ata_init(void)
static void __exit adma_ata_exit(void)
MODULE_AUTHOR("Mark Lord");
MODULE_DESCRIPTION("Pacific Digital Corporation ADMA low-level driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, adma_ata_pci_tbl);
MODULE_VERSION(DRV_VERSION);
module_init(adma_ata_init);
module_exit(adma_ata_exit);
