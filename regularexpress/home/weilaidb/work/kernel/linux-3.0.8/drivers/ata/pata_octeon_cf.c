#define DRV_NAME	"pata_octeon_cf"
#define DRV_VERSION	"2.1"
struct octeon_cf_port ;
static struct scsi_host_template octeon_cf_sht = ;
static unsigned int ns_to_tim_reg(unsigned int tim_mult, unsigned int nsecs)
static void octeon_cf_set_boot_reg_cfg(int cs)
static void octeon_cf_set_piomode(struct ata_port *ap, struct ata_device *dev)
static void octeon_cf_set_dmamode(struct ata_port *ap, struct ata_device *dev)
static unsigned int octeon_cf_data_xfer8(struct ata_device *dev,
unsigned char *buffer,
unsigned int buflen,
int rw)
static unsigned int octeon_cf_data_xfer16(struct ata_device *dev,
unsigned char *buffer,
unsigned int buflen,
int rw)
static void octeon_cf_tf_read16(struct ata_port *ap, struct ata_taskfile *tf)
static u8 octeon_cf_check_status16(struct ata_port *ap)
static int octeon_cf_softreset16(struct ata_link *link, unsigned int *classes,
unsigned long deadline)
static void octeon_cf_tf_load16(struct ata_port *ap,
const struct ata_taskfile *tf)
static void octeon_cf_dev_select(struct ata_port *ap, unsigned int device)
static void octeon_cf_exec_command16(struct ata_port *ap,
const struct ata_taskfile *tf)
static void octeon_cf_irq_on(struct ata_port *ap)
static void octeon_cf_irq_clear(struct ata_port *ap)
static void octeon_cf_dma_setup(struct ata_queued_cmd *qc)
static void octeon_cf_dma_start(struct ata_queued_cmd *qc)
static unsigned int octeon_cf_dma_finished(struct ata_port *ap,
struct ata_queued_cmd *qc)
static irqreturn_t octeon_cf_interrupt(int irq, void *dev_instance)
static void octeon_cf_delayed_finish(struct work_struct *work)
static void octeon_cf_dev_config(struct ata_device *dev)
static int octeon_cf_check_atapi_dma(struct ata_queued_cmd *qc)
static unsigned int octeon_cf_qc_issue(struct ata_queued_cmd *qc)
static struct ata_port_operations octeon_cf_ops = ;
static int __devinit octeon_cf_probe(struct platform_device *pdev)
static struct platform_driver octeon_cf_driver = ;
static int __init octeon_cf_init(void)
MODULE_AUTHOR("David Daney <ddaney@caviumnetworks.com>");
MODULE_DESCRIPTION("low-level driver for Cavium OCTEON Compact Flash PATA");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_ALIAS("platform:" DRV_NAME);
module_init(octeon_cf_init);
