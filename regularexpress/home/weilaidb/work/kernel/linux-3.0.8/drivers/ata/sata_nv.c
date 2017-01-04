#define DRV_NAME			"sata_nv"
#define DRV_VERSION			"3.5"
#define NV_ADMA_DMA_BOUNDARY		0xffffffffUL
enum ;
struct nv_adma_prd ;
enum nv_adma_regbits ;
struct nv_adma_cpb ;
struct nv_adma_port_priv ;
struct nv_host_priv ;
struct defer_queue ;
enum ncq_saw_flag_list ;
struct nv_swncq_port_priv ;
#define NV_ADMA_CHECK_INTR(GCTL, PORT) ((GCTL) & (1 << (19 + (12 * (PORT)))))
static int nv_init_one(struct pci_dev *pdev, const struct pci_device_id *ent);
static int nv_pci_device_resume(struct pci_dev *pdev);
static void nv_ck804_host_stop(struct ata_host *host);
static irqreturn_t nv_generic_interrupt(int irq, void *dev_instance);
static irqreturn_t nv_nf2_interrupt(int irq, void *dev_instance);
static irqreturn_t nv_ck804_interrupt(int irq, void *dev_instance);
static int nv_scr_read(struct ata_link *link, unsigned int sc_reg, u32 *val);
static int nv_scr_write(struct ata_link *link, unsigned int sc_reg, u32 val);
static int nv_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline);
static void nv_nf2_freeze(struct ata_port *ap);
static void nv_nf2_thaw(struct ata_port *ap);
static void nv_ck804_freeze(struct ata_port *ap);
static void nv_ck804_thaw(struct ata_port *ap);
static int nv_adma_slave_config(struct scsi_device *sdev);
static int nv_adma_check_atapi_dma(struct ata_queued_cmd *qc);
static void nv_adma_qc_prep(struct ata_queued_cmd *qc);
static unsigned int nv_adma_qc_issue(struct ata_queued_cmd *qc);
static irqreturn_t nv_adma_interrupt(int irq, void *dev_instance);
static void nv_adma_irq_clear(struct ata_port *ap);
static int nv_adma_port_start(struct ata_port *ap);
static void nv_adma_port_stop(struct ata_port *ap);
static int nv_adma_port_suspend(struct ata_port *ap, pm_message_t mesg);
static int nv_adma_port_resume(struct ata_port *ap);
static void nv_adma_freeze(struct ata_port *ap);
static void nv_adma_thaw(struct ata_port *ap);
static void nv_adma_error_handler(struct ata_port *ap);
static void nv_adma_host_stop(struct ata_host *host);
static void nv_adma_post_internal_cmd(struct ata_queued_cmd *qc);
static void nv_adma_tf_read(struct ata_port *ap, struct ata_taskfile *tf);
static void nv_mcp55_thaw(struct ata_port *ap);
static void nv_mcp55_freeze(struct ata_port *ap);
static void nv_swncq_error_handler(struct ata_port *ap);
static int nv_swncq_slave_config(struct scsi_device *sdev);
static int nv_swncq_port_start(struct ata_port *ap);
static void nv_swncq_qc_prep(struct ata_queued_cmd *qc);
static void nv_swncq_fill_sg(struct ata_queued_cmd *qc);
static unsigned int nv_swncq_qc_issue(struct ata_queued_cmd *qc);
static void nv_swncq_irq_clear(struct ata_port *ap, u16 fis);
static irqreturn_t nv_swncq_interrupt(int irq, void *dev_instance);
static int nv_swncq_port_suspend(struct ata_port *ap, pm_message_t mesg);
static int nv_swncq_port_resume(struct ata_port *ap);
enum nv_host_type
;
static const struct pci_device_id nv_pci_tbl[] = ;
static struct pci_driver nv_pci_driver = ;
static struct scsi_host_template nv_sht = ;
static struct scsi_host_template nv_adma_sht = ;
static struct scsi_host_template nv_swncq_sht = ;
static struct ata_port_operations nv_generic_ops = ;
static struct ata_port_operations nv_nf2_ops = ;
static struct ata_port_operations nv_ck804_ops = ;
static struct ata_port_operations nv_adma_ops = ;
static struct ata_port_operations nv_swncq_ops = ;
struct nv_pi_priv ;
#define NV_PI_PRIV(_irq_handler, _sht) \
&(struct nv_pi_priv)
static const struct ata_port_info nv_port_info[] = ;
MODULE_AUTHOR("NVIDIA");
MODULE_DESCRIPTION("low-level driver for NVIDIA nForce SATA controller");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, nv_pci_tbl);
MODULE_VERSION(DRV_VERSION);
static int adma_enabled;
static int swncq_enabled = 1;
static int msi_enabled;
static void nv_adma_register_mode(struct ata_port *ap)
static void nv_adma_mode(struct ata_port *ap)
static int nv_adma_slave_config(struct scsi_device *sdev)
static int nv_adma_check_atapi_dma(struct ata_queued_cmd *qc)
static void nv_adma_tf_read(struct ata_port *ap, struct ata_taskfile *tf)
static unsigned int nv_adma_tf_to_cpb(struct ata_taskfile *tf, __le16 *cpb)
static int nv_adma_check_cpb(struct ata_port *ap, int cpb_num, int force_err)
static int nv_host_intr(struct ata_port *ap, u8 irq_stat)
static irqreturn_t nv_adma_interrupt(int irq, void *dev_instance)
static void nv_adma_freeze(struct ata_port *ap)
static void nv_adma_thaw(struct ata_port *ap)
static void nv_adma_irq_clear(struct ata_port *ap)
static void nv_adma_post_internal_cmd(struct ata_queued_cmd *qc)
static int nv_adma_port_start(struct ata_port *ap)
static void nv_adma_port_stop(struct ata_port *ap)
static int nv_adma_port_suspend(struct ata_port *ap, pm_message_t mesg)
static int nv_adma_port_resume(struct ata_port *ap)
static void nv_adma_setup_port(struct ata_port *ap)
static int nv_adma_host_init(struct ata_host *host)
static void nv_adma_fill_aprd(struct ata_queued_cmd *qc,
struct scatterlist *sg,
int idx,
struct nv_adma_prd *aprd)
static void nv_adma_fill_sg(struct ata_queued_cmd *qc, struct nv_adma_cpb *cpb)
static int nv_adma_use_reg_mode(struct ata_queued_cmd *qc)
static void nv_adma_qc_prep(struct ata_queued_cmd *qc)
static unsigned int nv_adma_qc_issue(struct ata_queued_cmd *qc)
static irqreturn_t nv_generic_interrupt(int irq, void *dev_instance)
static irqreturn_t nv_do_interrupt(struct ata_host *host, u8 irq_stat)
static irqreturn_t nv_nf2_interrupt(int irq, void *dev_instance)
static irqreturn_t nv_ck804_interrupt(int irq, void *dev_instance)
static int nv_scr_read(struct ata_link *link, unsigned int sc_reg, u32 *val)
static int nv_scr_write(struct ata_link *link, unsigned int sc_reg, u32 val)
static int nv_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static void nv_nf2_freeze(struct ata_port *ap)
static void nv_nf2_thaw(struct ata_port *ap)
static void nv_ck804_freeze(struct ata_port *ap)
static void nv_ck804_thaw(struct ata_port *ap)
static void nv_mcp55_freeze(struct ata_port *ap)
static void nv_mcp55_thaw(struct ata_port *ap)
static void nv_adma_error_handler(struct ata_port *ap)
static void nv_swncq_qc_to_dq(struct ata_port *ap, struct ata_queued_cmd *qc)
static struct ata_queued_cmd *nv_swncq_qc_from_dq(struct ata_port *ap)
static void nv_swncq_fis_reinit(struct ata_port *ap)
static void nv_swncq_pp_reinit(struct ata_port *ap)
static void nv_swncq_irq_clear(struct ata_port *ap, u16 fis)
static void __ata_bmdma_stop(struct ata_port *ap)
static void nv_swncq_ncq_stop(struct ata_port *ap)
static void nv_swncq_error_handler(struct ata_port *ap)
static int nv_swncq_port_suspend(struct ata_port *ap, pm_message_t mesg)
static int nv_swncq_port_resume(struct ata_port *ap)
static void nv_swncq_host_init(struct ata_host *host)
static int nv_swncq_slave_config(struct scsi_device *sdev)
static int nv_swncq_port_start(struct ata_port *ap)
static void nv_swncq_qc_prep(struct ata_queued_cmd *qc)
static void nv_swncq_fill_sg(struct ata_queued_cmd *qc)
static unsigned int nv_swncq_issue_atacmd(struct ata_port *ap,
struct ata_queued_cmd *qc)
static unsigned int nv_swncq_qc_issue(struct ata_queued_cmd *qc)
static void nv_swncq_hotplug(struct ata_port *ap, u32 fis)
static int nv_swncq_sdbfis(struct ata_port *ap)
static inline u32 nv_swncq_tag(struct ata_port *ap)
static void nv_swncq_dmafis(struct ata_port *ap)
static void nv_swncq_host_interrupt(struct ata_port *ap, u16 fis)
static irqreturn_t nv_swncq_interrupt(int irq, void *dev_instance)
static int nv_init_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static int nv_pci_device_resume(struct pci_dev *pdev)
static void nv_ck804_host_stop(struct ata_host *host)
static void nv_adma_host_stop(struct ata_host *host)
static int __init nv_init(void)
static void __exit nv_exit(void)
module_init(nv_init);
module_exit(nv_exit);
module_param_named(adma, adma_enabled, bool, 0444);
MODULE_PARM_DESC(adma, "Enable use of ADMA (Default: false)");
module_param_named(swncq, swncq_enabled, bool, 0444);
MODULE_PARM_DESC(swncq, "Enable use of SWNCQ (Default: true)");
module_param_named(msi, msi_enabled, bool, 0444);
MODULE_PARM_DESC(msi, "Enable use of MSI (Default: false)");
