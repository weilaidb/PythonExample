#define DRV_NAME	"mpc52xx_ata"
struct mpc52xx_ata_timings ;
struct mpc52xx_ata_priv ;
static const u16 ataspec_t0[5]		= ;
static const u16 ataspec_t1[5]		= ;
static const u16 ataspec_t2_8[5]	= ;
static const u16 ataspec_t2_16[5]	= ;
static const u16 ataspec_t2i[5]		= ;
static const u16 ataspec_t4[5]		= ;
static const u16 ataspec_ta[5]		= ;
#define CALC_CLKCYC(c,v) ((((v)+(c)-1)/(c)))
struct mdmaspec ;
static const struct mdmaspec mdmaspec66[3] = ;
static const struct mdmaspec mdmaspec132[3] = ;
struct udmaspec ;
static const struct udmaspec udmaspec66[6] = ;
static const struct udmaspec udmaspec132[6] = ;
#define MPC52xx_ATA_HOSTCONF_SMR	0x80000000UL
#define MPC52xx_ATA_HOSTCONF_FR		0x40000000UL
#define MPC52xx_ATA_HOSTCONF_IE		0x02000000UL
#define MPC52xx_ATA_HOSTCONF_IORDY	0x01000000UL
#define MPC52xx_ATA_HOSTSTAT_TIP	0x80000000UL
#define MPC52xx_ATA_HOSTSTAT_UREP	0x40000000UL
#define MPC52xx_ATA_HOSTSTAT_RERR	0x02000000UL
#define MPC52xx_ATA_HOSTSTAT_WERR	0x01000000UL
#define MPC52xx_ATA_FIFOSTAT_EMPTY	0x01
#define MPC52xx_ATA_FIFOSTAT_ERROR	0x40
#define MPC52xx_ATA_DMAMODE_WRITE	0x01
#define MPC52xx_ATA_DMAMODE_READ	0x02
#define MPC52xx_ATA_DMAMODE_UDMA	0x04
#define MPC52xx_ATA_DMAMODE_IE		0x08
#define MPC52xx_ATA_DMAMODE_FE		0x10
#define MPC52xx_ATA_DMAMODE_FR		0x20
#define MPC52xx_ATA_DMAMODE_HUT		0x40
#define MAX_DMA_BUFFERS 128
#define MAX_DMA_BUFFER_SIZE 0x20000u
struct mpc52xx_ata ;
static int
mpc52xx_ata_compute_pio_timings(struct mpc52xx_ata_priv *priv, int dev, int pio)
static int
mpc52xx_ata_compute_mdma_timings(struct mpc52xx_ata_priv *priv, int dev,
int speed)
static int
mpc52xx_ata_compute_udma_timings(struct mpc52xx_ata_priv *priv, int dev,
int speed)
static void
mpc52xx_ata_apply_timings(struct mpc52xx_ata_priv *priv, int device)
static int
mpc52xx_ata_hw_init(struct mpc52xx_ata_priv *priv)
static void
mpc52xx_ata_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void
mpc52xx_ata_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static void
mpc52xx_ata_dev_select(struct ata_port *ap, unsigned int device)
static int
mpc52xx_ata_build_dmatable(struct ata_queued_cmd *qc)
static void
mpc52xx_bmdma_setup(struct ata_queued_cmd *qc)
static void
mpc52xx_bmdma_start(struct ata_queued_cmd *qc)
static void
mpc52xx_bmdma_stop(struct ata_queued_cmd *qc)
static u8
mpc52xx_bmdma_status(struct ata_port *ap)
static irqreturn_t
mpc52xx_ata_task_irq(int irq, void *vpriv)
static struct scsi_host_template mpc52xx_ata_sht = ;
static struct ata_port_operations mpc52xx_ata_port_ops = ;
static int __devinit
mpc52xx_ata_init_one(struct device *dev, struct mpc52xx_ata_priv *priv,
unsigned long raw_ata_regs, int mwdma_mask, int udma_mask)
static struct mpc52xx_ata_priv *
mpc52xx_ata_remove_one(struct device *dev)
static int __devinit
mpc52xx_ata_probe(struct platform_device *op)
static int
mpc52xx_ata_remove(struct platform_device *op)
static int
mpc52xx_ata_suspend(struct platform_device *op, pm_message_t state)
static int
mpc52xx_ata_resume(struct platform_device *op)
static struct of_device_id mpc52xx_ata_of_match[] = ;
static struct platform_driver mpc52xx_ata_of_platform_driver = ;
static int __init
mpc52xx_ata_init(void)
static void __exit
mpc52xx_ata_exit(void)
module_init(mpc52xx_ata_init);
module_exit(mpc52xx_ata_exit);
MODULE_AUTHOR("Sylvain Munaut <tnt@246tNt.com>");
MODULE_DESCRIPTION("Freescale MPC52xx IDE/ATA libata driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(of, mpc52xx_ata_of_match);
