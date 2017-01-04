#define DRV_NAME	"sata_promise"
#define DRV_VERSION	"2.12"
enum ;
struct pdc_port_priv ;
static int pdc_sata_scr_read(struct ata_link *link, unsigned int sc_reg, u32 *val);
static int pdc_sata_scr_write(struct ata_link *link, unsigned int sc_reg, u32 val);
static int pdc_ata_init_one(struct pci_dev *pdev, const struct pci_device_id *ent);
static int pdc_common_port_start(struct ata_port *ap);
static int pdc_sata_port_start(struct ata_port *ap);
static void pdc_qc_prep(struct ata_queued_cmd *qc);
static void pdc_tf_load_mmio(struct ata_port *ap, const struct ata_taskfile *tf);
static void pdc_exec_command_mmio(struct ata_port *ap, const struct ata_taskfile *tf);
static int pdc_check_atapi_dma(struct ata_queued_cmd *qc);
static int pdc_old_sata_check_atapi_dma(struct ata_queued_cmd *qc);
static void pdc_irq_clear(struct ata_port *ap);
static unsigned int pdc_qc_issue(struct ata_queued_cmd *qc);
static void pdc_freeze(struct ata_port *ap);
static void pdc_sata_freeze(struct ata_port *ap);
static void pdc_thaw(struct ata_port *ap);
static void pdc_sata_thaw(struct ata_port *ap);
static int pdc_pata_softreset(struct ata_link *link, unsigned int *class,
unsigned long deadline);
static int pdc_sata_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline);
static void pdc_error_handler(struct ata_port *ap);
static void pdc_post_internal_cmd(struct ata_queued_cmd *qc);
static int pdc_pata_cable_detect(struct ata_port *ap);
static int pdc_sata_cable_detect(struct ata_port *ap);
static struct scsi_host_template pdc_ata_sht = ;
static const struct ata_port_operations pdc_common_ops = ;
static struct ata_port_operations pdc_sata_ops = ;
static struct ata_port_operations pdc_old_sata_ops = ;
static struct ata_port_operations pdc_pata_ops = ;
static const struct ata_port_info pdc_port_info[] = ;
static const struct pci_device_id pdc_ata_pci_tbl[] = ;
static struct pci_driver pdc_ata_pci_driver = ;
static int pdc_common_port_start(struct ata_port *ap)
static int pdc_sata_port_start(struct ata_port *ap)
static void pdc_fpdma_clear_interrupt_flag(struct ata_port *ap)
static void pdc_fpdma_reset(struct ata_port *ap)
static void pdc_not_at_command_packet_phase(struct ata_port *ap)
static void pdc_clear_internal_debug_record_error_register(struct ata_port *ap)
static void pdc_reset_port(struct ata_port *ap)
static int pdc_pata_cable_detect(struct ata_port *ap)
static int pdc_sata_cable_detect(struct ata_port *ap)
static int pdc_sata_scr_read(struct ata_link *link,
unsigned int sc_reg, u32 *val)
static int pdc_sata_scr_write(struct ata_link *link,
unsigned int sc_reg, u32 val)
static void pdc_atapi_pkt(struct ata_queued_cmd *qc)
static void pdc_fill_sg(struct ata_queued_cmd *qc)
static void pdc_qc_prep(struct ata_queued_cmd *qc)
static int pdc_is_sataii_tx4(unsigned long flags)
static unsigned int pdc_port_no_to_ata_no(unsigned int port_no,
int is_sataii_tx4)
static unsigned int pdc_sata_nr_ports(const struct ata_port *ap)
static unsigned int pdc_sata_ata_port_to_ata_no(const struct ata_port *ap)
static void pdc_freeze(struct ata_port *ap)
static void pdc_sata_freeze(struct ata_port *ap)
static void pdc_thaw(struct ata_port *ap)
static void pdc_sata_thaw(struct ata_port *ap)
static int pdc_pata_softreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static unsigned int pdc_ata_port_to_ata_no(const struct ata_port *ap)
static void pdc_hard_reset_port(struct ata_port *ap)
static int pdc_sata_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static void pdc_error_handler(struct ata_port *ap)
static void pdc_post_internal_cmd(struct ata_queued_cmd *qc)
static void pdc_error_intr(struct ata_port *ap, struct ata_queued_cmd *qc,
u32 port_status, u32 err_mask)
static unsigned int pdc_host_intr(struct ata_port *ap,
struct ata_queued_cmd *qc)
static void pdc_irq_clear(struct ata_port *ap)
static irqreturn_t pdc_interrupt(int irq, void *dev_instance)
static void pdc_packet_start(struct ata_queued_cmd *qc)
static unsigned int pdc_qc_issue(struct ata_queued_cmd *qc)
static void pdc_tf_load_mmio(struct ata_port *ap, const struct ata_taskfile *tf)
static void pdc_exec_command_mmio(struct ata_port *ap,
const struct ata_taskfile *tf)
static int pdc_check_atapi_dma(struct ata_queued_cmd *qc)
static int pdc_old_sata_check_atapi_dma(struct ata_queued_cmd *qc)
static void pdc_ata_setup_port(struct ata_port *ap,
void __iomem *base, void __iomem *scr_addr)
static void pdc_host_init(struct ata_host *host)
static int pdc_ata_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static int __init pdc_ata_init(void)
static void __exit pdc_ata_exit(void)
MODULE_AUTHOR("Jeff Garzik");
MODULE_DESCRIPTION("Promise ATA TX2/TX4/TX4000 low-level driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, pdc_ata_pci_tbl);
MODULE_VERSION(DRV_VERSION);
module_init(pdc_ata_init);
module_exit(pdc_ata_exit);
