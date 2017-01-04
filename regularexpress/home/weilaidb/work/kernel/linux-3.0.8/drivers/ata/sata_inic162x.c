#define DRV_NAME	"sata_inic162x"
#define DRV_VERSION	"0.4"
enum ;
struct inic_cpb  __packed;
struct inic_prd  __packed;
struct inic_pkt  __packed;
struct inic_host_priv ;
struct inic_port_priv ;
static struct scsi_host_template inic_sht = ;
static const int scr_map[] = ;
static void __iomem *inic_port_base(struct ata_port *ap)
static void inic_reset_port(void __iomem *port_base)
static int inic_scr_read(struct ata_link *link, unsigned sc_reg, u32 *val)
static int inic_scr_write(struct ata_link *link, unsigned sc_reg, u32 val)
static void inic_stop_idma(struct ata_port *ap)
static void inic_host_err_intr(struct ata_port *ap, u8 irq_stat, u16 idma_stat)
static void inic_host_intr(struct ata_port *ap)
static irqreturn_t inic_interrupt(int irq, void *dev_instance)
static int inic_check_atapi_dma(struct ata_queued_cmd *qc)
static void inic_fill_sg(struct inic_prd *prd, struct ata_queued_cmd *qc)
static void inic_qc_prep(struct ata_queued_cmd *qc)
static unsigned int inic_qc_issue(struct ata_queued_cmd *qc)
static void inic_tf_read(struct ata_port *ap, struct ata_taskfile *tf)
static bool inic_qc_fill_rtf(struct ata_queued_cmd *qc)
static void inic_freeze(struct ata_port *ap)
static void inic_thaw(struct ata_port *ap)
static int inic_check_ready(struct ata_link *link)
static int inic_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static void inic_error_handler(struct ata_port *ap)
static void inic_post_internal_cmd(struct ata_queued_cmd *qc)
static void init_port(struct ata_port *ap)
static int inic_port_resume(struct ata_port *ap)
static int inic_port_start(struct ata_port *ap)
static struct ata_port_operations inic_port_ops = ;
static struct ata_port_info inic_port_info = ;
static int init_controller(void __iomem *mmio_base, u16 hctl)
static int inic_pci_device_resume(struct pci_dev *pdev)
static int inic_init_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static const struct pci_device_id inic_pci_tbl[] = ;
static struct pci_driver inic_pci_driver = ;
static int __init inic_init(void)
static void __exit inic_exit(void)
MODULE_AUTHOR("Tejun Heo");
MODULE_DESCRIPTION("low-level driver for Initio 162x SATA");
MODULE_LICENSE("GPL v2");
MODULE_DEVICE_TABLE(pci, inic_pci_tbl);
MODULE_VERSION(DRV_VERSION);
module_init(inic_init);
module_exit(inic_exit);
