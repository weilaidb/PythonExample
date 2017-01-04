#define DRV_NAME	"sata_sil24"
#define DRV_VERSION	"1.1"
struct sil24_prb ;
struct sil24_sge ;
enum ;
struct sil24_ata_block ;
struct sil24_atapi_block ;
union sil24_cmd_block ;
static struct sil24_cerr_info  sil24_cerr_db[] = ;
struct sil24_port_priv ;
static void sil24_dev_config(struct ata_device *dev);
static int sil24_scr_read(struct ata_link *link, unsigned sc_reg, u32 *val);
static int sil24_scr_write(struct ata_link *link, unsigned sc_reg, u32 val);
static int sil24_qc_defer(struct ata_queued_cmd *qc);
static void sil24_qc_prep(struct ata_queued_cmd *qc);
static unsigned int sil24_qc_issue(struct ata_queued_cmd *qc);
static bool sil24_qc_fill_rtf(struct ata_queued_cmd *qc);
static void sil24_pmp_attach(struct ata_port *ap);
static void sil24_pmp_detach(struct ata_port *ap);
static void sil24_freeze(struct ata_port *ap);
static void sil24_thaw(struct ata_port *ap);
static int sil24_softreset(struct ata_link *link, unsigned int *class,
unsigned long deadline);
static int sil24_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline);
static int sil24_pmp_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline);
static void sil24_error_handler(struct ata_port *ap);
static void sil24_post_internal_cmd(struct ata_queued_cmd *qc);
static int sil24_port_start(struct ata_port *ap);
static int sil24_init_one(struct pci_dev *pdev, const struct pci_device_id *ent);
static int sil24_pci_device_resume(struct pci_dev *pdev);
static int sil24_port_resume(struct ata_port *ap);
static const struct pci_device_id sil24_pci_tbl[] = ;
static struct pci_driver sil24_pci_driver = ;
static struct scsi_host_template sil24_sht = ;
static struct ata_port_operations sil24_ops = ;
static int sata_sil24_msi;
module_param_named(msi, sata_sil24_msi, bool, S_IRUGO);
MODULE_PARM_DESC(msi, "Enable MSI (Default: false)");
#define SIL24_NPORTS2FLAG(nports)	((((unsigned)(nports) - 1) & 0x3) << 30)
#define SIL24_FLAG2NPORTS(flag)		((((flag) >> 30) & 0x3) + 1)
static const struct ata_port_info sil24_port_info[] = ;
static int sil24_tag(int tag)
static unsigned long sil24_port_offset(struct ata_port *ap)
static void __iomem *sil24_port_base(struct ata_port *ap)
static void sil24_dev_config(struct ata_device *dev)
static void sil24_read_tf(struct ata_port *ap, int tag, struct ata_taskfile *tf)
static int sil24_scr_map[] = ;
static int sil24_scr_read(struct ata_link *link, unsigned sc_reg, u32 *val)
static int sil24_scr_write(struct ata_link *link, unsigned sc_reg, u32 val)
static void sil24_config_port(struct ata_port *ap)
static void sil24_config_pmp(struct ata_port *ap, int attached)
static void sil24_clear_pmp(struct ata_port *ap)
static int sil24_init_port(struct ata_port *ap)
static int sil24_exec_polled_cmd(struct ata_port *ap, int pmp,
const struct ata_taskfile *tf,
int is_cmd, u32 ctrl,
unsigned long timeout_msec)
static int sil24_softreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static int sil24_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static inline void sil24_fill_sg(struct ata_queued_cmd *qc,
struct sil24_sge *sge)
static int sil24_qc_defer(struct ata_queued_cmd *qc)
static void sil24_qc_prep(struct ata_queued_cmd *qc)
static unsigned int sil24_qc_issue(struct ata_queued_cmd *qc)
static bool sil24_qc_fill_rtf(struct ata_queued_cmd *qc)
static void sil24_pmp_attach(struct ata_port *ap)
static void sil24_pmp_detach(struct ata_port *ap)
static int sil24_pmp_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static void sil24_freeze(struct ata_port *ap)
static void sil24_thaw(struct ata_port *ap)
static void sil24_error_intr(struct ata_port *ap)
static inline void sil24_host_intr(struct ata_port *ap)
static irqreturn_t sil24_interrupt(int irq, void *dev_instance)
static void sil24_error_handler(struct ata_port *ap)
static void sil24_post_internal_cmd(struct ata_queued_cmd *qc)
static int sil24_port_start(struct ata_port *ap)
static void sil24_init_controller(struct ata_host *host)
static int sil24_init_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static int sil24_pci_device_resume(struct pci_dev *pdev)
static int sil24_port_resume(struct ata_port *ap)
static int __init sil24_init(void)
static void __exit sil24_exit(void)
MODULE_AUTHOR("Tejun Heo");
MODULE_DESCRIPTION("Silicon Image 3124/3132 SATA low-level driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, sil24_pci_tbl);
module_init(sil24_init);
module_exit(sil24_exit);
