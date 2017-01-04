enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
struct cmdhdr_tbl_entry ;
enum ;
struct command_desc ;
struct prde ;
struct sata_fsl_port_priv ;
struct sata_fsl_host_priv ;
static inline unsigned int sata_fsl_tag(unsigned int tag,
void __iomem *hcr_base)
static void sata_fsl_setup_cmd_hdr_entry(struct sata_fsl_port_priv *pp,
unsigned int tag, u32 desc_info,
u32 data_xfer_len, u8 num_prde,
u8 fis_len)
static unsigned int sata_fsl_fill_sg(struct ata_queued_cmd *qc, void *cmd_desc,
u32 *ttl, dma_addr_t cmd_desc_paddr,
int data_snoop)
static void sata_fsl_qc_prep(struct ata_queued_cmd *qc)
static unsigned int sata_fsl_qc_issue(struct ata_queued_cmd *qc)
static bool sata_fsl_qc_fill_rtf(struct ata_queued_cmd *qc)
static int sata_fsl_scr_write(struct ata_link *link,
unsigned int sc_reg_in, u32 val)
static int sata_fsl_scr_read(struct ata_link *link,
unsigned int sc_reg_in, u32 *val)
static void sata_fsl_freeze(struct ata_port *ap)
static void sata_fsl_thaw(struct ata_port *ap)
static void sata_fsl_pmp_attach(struct ata_port *ap)
static void sata_fsl_pmp_detach(struct ata_port *ap)
static int sata_fsl_port_start(struct ata_port *ap)
static void sata_fsl_port_stop(struct ata_port *ap)
static unsigned int sata_fsl_dev_classify(struct ata_port *ap)
static int sata_fsl_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static int sata_fsl_softreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static void sata_fsl_error_handler(struct ata_port *ap)
static void sata_fsl_post_internal_cmd(struct ata_queued_cmd *qc)
static void sata_fsl_error_intr(struct ata_port *ap)
static void sata_fsl_host_intr(struct ata_port *ap)
static irqreturn_t sata_fsl_interrupt(int irq, void *dev_instance)
static int sata_fsl_init_controller(struct ata_host *host)
static struct scsi_host_template sata_fsl_sht = ;
static struct ata_port_operations sata_fsl_ops = ;
static const struct ata_port_info sata_fsl_port_info[] = ;
static int sata_fsl_probe(struct platform_device *ofdev)
static int sata_fsl_remove(struct platform_device *ofdev)
static int sata_fsl_suspend(struct platform_device *op, pm_message_t state)
static int sata_fsl_resume(struct platform_device *op)
static struct of_device_id fsl_sata_match[] = ;
MODULE_DEVICE_TABLE(of, fsl_sata_match);
static struct platform_driver fsl_sata_driver = ;
static int __init sata_fsl_init(void)
static void __exit sata_fsl_exit(void)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ashish Kalra, Freescale Semiconductor");
MODULE_DESCRIPTION("Freescale 3.0Gbps SATA controller low level driver");
MODULE_VERSION("1.10");
module_init(sata_fsl_init);
module_exit(sata_fsl_exit);
