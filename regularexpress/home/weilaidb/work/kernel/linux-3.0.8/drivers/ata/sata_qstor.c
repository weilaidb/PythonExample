#define DRV_NAME	"sata_qstor"
#define DRV_VERSION	"0.09"
enum ;
enum ;
typedef enum  qs_state_t;
struct qs_port_priv ;
static int qs_scr_read(struct ata_link *link, unsigned int sc_reg, u32 *val);
static int qs_scr_write(struct ata_link *link, unsigned int sc_reg, u32 val);
static int qs_ata_init_one(struct pci_dev *pdev, const struct pci_device_id *ent);
static int qs_port_start(struct ata_port *ap);
static void qs_host_stop(struct ata_host *host);
static void qs_qc_prep(struct ata_queued_cmd *qc);
static unsigned int qs_qc_issue(struct ata_queued_cmd *qc);
static int qs_check_atapi_dma(struct ata_queued_cmd *qc);
static void qs_freeze(struct ata_port *ap);
static void qs_thaw(struct ata_port *ap);
static int qs_prereset(struct ata_link *link, unsigned long deadline);
static void qs_error_handler(struct ata_port *ap);
static struct scsi_host_template qs_ata_sht = ;
static struct ata_port_operations qs_ata_ops = ;
static const struct ata_port_info qs_port_info[] = ;
static const struct pci_device_id qs_ata_pci_tbl[] = ;
static struct pci_driver qs_ata_pci_driver = ;
static void __iomem *qs_mmio_base(struct ata_host *host)
static int qs_check_atapi_dma(struct ata_queued_cmd *qc)
static inline void qs_enter_reg_mode(struct ata_port *ap)
static inline void qs_reset_channel_logic(struct ata_port *ap)
static void qs_freeze(struct ata_port *ap)
static void qs_thaw(struct ata_port *ap)
static int qs_prereset(struct ata_link *link, unsigned long deadline)
static int qs_scr_read(struct ata_link *link, unsigned int sc_reg, u32 *val)
static void qs_error_handler(struct ata_port *ap)
static int qs_scr_write(struct ata_link *link, unsigned int sc_reg, u32 val)
static unsigned int qs_fill_sg(struct ata_queued_cmd *qc)
static void qs_qc_prep(struct ata_queued_cmd *qc)
static inline void qs_packet_start(struct ata_queued_cmd *qc)
static unsigned int qs_qc_issue(struct ata_queued_cmd *qc)
static void qs_do_or_die(struct ata_queued_cmd *qc, u8 status)
static inline unsigned int qs_intr_pkt(struct ata_host *host)
static inline unsigned int qs_intr_mmio(struct ata_host *host)
static irqreturn_t qs_intr(int irq, void *dev_instance)
static void qs_ata_setup_port(struct ata_ioports *port, void __iomem *base)
static int qs_port_start(struct ata_port *ap)
static void qs_host_stop(struct ata_host *host)
static void qs_host_init(struct ata_host *host, unsigned int chip_id)
static int qs_set_dma_masks(struct pci_dev *pdev, void __iomem *mmio_base)
static int qs_ata_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static int __init qs_ata_init(void)
static void __exit qs_ata_exit(void)
MODULE_AUTHOR("Mark Lord");
MODULE_DESCRIPTION("Pacific Digital Corporation QStor SATA low-level driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, qs_ata_pci_tbl);
MODULE_VERSION(DRV_VERSION);
module_init(qs_ata_init);
module_exit(qs_ata_exit);
