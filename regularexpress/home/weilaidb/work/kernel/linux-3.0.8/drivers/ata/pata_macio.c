#undef DEBUG
#undef DEBUG_DMA
#define dev_dbgdma(dev, format, arg...)		\
dev_printk(KERN_DEBUG , dev , format , ## arg)
#define dev_dbgdma(dev, format, arg...)		\
()
#define DRV_NAME	"pata_macio"
#define DRV_VERSION	"0.9"
enum ;
static const char* macio_ata_names[] = ;
#define IDE_TIMING_CONFIG	0x200
#define IDE_INTERRUPT		0x300
#define IDE_KAUAI_PIO_CONFIG	0x200
#define IDE_KAUAI_ULTRA_CONFIG	0x210
#define IDE_KAUAI_POLL_CONFIG	0x220
#define SYSCLK_TICKS(t)		(((t) + IDE_SYSCLK_NS - 1) / IDE_SYSCLK_NS)
#define SYSCLK_TICKS_66(t)	(((t) + IDE_SYSCLK_66_NS - 1) / IDE_SYSCLK_66_NS)
#define IDE_SYSCLK_NS		30
#define IDE_SYSCLK_66_NS	15
#define TR_133_PIOREG_PIO_MASK		0xff000fff
#define TR_133_PIOREG_MDMA_MASK		0x00fff800
#define TR_133_UDMAREG_UDMA_MASK	0x0003ffff
#define TR_133_UDMAREG_UDMA_EN		0x00000001
#define TR_100_PIO_ADDRSETUP_MASK	0xff000000
#define TR_100_PIO_ADDRSETUP_SHIFT	24
#define TR_100_MDMA_MASK		0x00fff000
#define TR_100_MDMA_RECOVERY_MASK	0x00fc0000
#define TR_100_MDMA_RECOVERY_SHIFT	18
#define TR_100_MDMA_ACCESS_MASK		0x0003f000
#define TR_100_MDMA_ACCESS_SHIFT	12
#define TR_100_PIO_MASK			0xff000fff
#define TR_100_PIO_RECOVERY_MASK	0x00000fc0
#define TR_100_PIO_RECOVERY_SHIFT	6
#define TR_100_PIO_ACCESS_MASK		0x0000003f
#define TR_100_PIO_ACCESS_SHIFT		0
#define TR_100_UDMAREG_UDMA_MASK	0x0000ffff
#define TR_100_UDMAREG_UDMA_EN		0x00000001
#define TR_66_UDMA_MASK			0xfff00000
#define TR_66_UDMA_EN			0x00100000
#define TR_66_PIO_ADDRSETUP_MASK	0xe0000000
#define TR_66_PIO_ADDRSETUP_SHIFT	29
#define TR_66_UDMA_RDY2PAUS_MASK	0x1e000000
#define TR_66_UDMA_RDY2PAUS_SHIFT	25
#define TR_66_UDMA_WRDATASETUP_MASK	0x01e00000
#define TR_66_UDMA_WRDATASETUP_SHIFT	21
#define TR_66_MDMA_MASK			0x000ffc00
#define TR_66_MDMA_RECOVERY_MASK	0x000f8000
#define TR_66_MDMA_RECOVERY_SHIFT	15
#define TR_66_MDMA_ACCESS_MASK		0x00007c00
#define TR_66_MDMA_ACCESS_SHIFT		10
#define TR_66_PIO_MASK			0xe00003ff
#define TR_66_PIO_RECOVERY_MASK		0x000003e0
#define TR_66_PIO_RECOVERY_SHIFT	5
#define TR_66_PIO_ACCESS_MASK		0x0000001f
#define TR_66_PIO_ACCESS_SHIFT		0
#define TR_33_MDMA_MASK			0x003ff800
#define TR_33_MDMA_RECOVERY_MASK	0x001f0000
#define TR_33_MDMA_RECOVERY_SHIFT	16
#define TR_33_MDMA_ACCESS_MASK		0x0000f800
#define TR_33_MDMA_ACCESS_SHIFT		11
#define TR_33_MDMA_HALFTICK		0x00200000
#define TR_33_PIO_MASK			0x000007ff
#define TR_33_PIO_E			0x00000400
#define TR_33_PIO_RECOVERY_MASK		0x000003e0
#define TR_33_PIO_RECOVERY_SHIFT	5
#define TR_33_PIO_ACCESS_MASK		0x0000001f
#define TR_33_PIO_ACCESS_SHIFT		0
#define IDE_INTR_DMA			0x80000000
#define IDE_INTR_DEVICE			0x40000000
#define KAUAI_FCR_UATA_MAGIC		0x00000004
#define KAUAI_FCR_UATA_RESET_N		0x00000002
#define KAUAI_FCR_UATA_ENABLE		0x00000001
#define MAX_DCMDS		256
#define MAX_DBDMA_SEG		0xff00
#define IDE_WAKEUP_DELAY_MS	1000
struct pata_macio_timing;
struct pata_macio_priv ;
struct pata_macio_timing ;
static const struct pata_macio_timing pata_macio_ohare_timings[] = ;
static const struct pata_macio_timing pata_macio_heathrow_timings[] = ;
static const struct pata_macio_timing pata_macio_kl33_timings[] = ;
static const struct pata_macio_timing pata_macio_kl66_timings[] = ;
static const struct pata_macio_timing pata_macio_kauai_timings[] = ;
static const struct pata_macio_timing pata_macio_shasta_timings[] = ;
static const struct pata_macio_timing *pata_macio_find_timing(
struct pata_macio_priv *priv,
int mode)
static void pata_macio_apply_timings(struct ata_port *ap, unsigned int device)
static void pata_macio_dev_select(struct ata_port *ap, unsigned int device)
static void pata_macio_set_timings(struct ata_port *ap,
struct ata_device *adev)
static void pata_macio_default_timings(struct pata_macio_priv *priv)
static int pata_macio_cable_detect(struct ata_port *ap)
static void pata_macio_qc_prep(struct ata_queued_cmd *qc)
static void pata_macio_freeze(struct ata_port *ap)
static void pata_macio_bmdma_setup(struct ata_queued_cmd *qc)
static void pata_macio_bmdma_start(struct ata_queued_cmd *qc)
static void pata_macio_bmdma_stop(struct ata_queued_cmd *qc)
static u8 pata_macio_bmdma_status(struct ata_port *ap)
static int pata_macio_port_start(struct ata_port *ap)
static void pata_macio_irq_clear(struct ata_port *ap)
static void pata_macio_reset_hw(struct pata_macio_priv *priv, int resume)
static int pata_macio_slave_config(struct scsi_device *sdev)
static int pata_macio_do_suspend(struct pata_macio_priv *priv, pm_message_t mesg)
static int pata_macio_do_resume(struct pata_macio_priv *priv)
static struct scsi_host_template pata_macio_sht = ;
static struct ata_port_operations pata_macio_ops = ;
static void __devinit pata_macio_invariants(struct pata_macio_priv *priv)
static void __devinit pata_macio_setup_ios(struct ata_ioports *ioaddr,
void __iomem * base,
void __iomem * dma)
static void __devinit pmac_macio_calc_timing_masks(struct pata_macio_priv *priv,
struct ata_port_info   *pinfo)
static int __devinit pata_macio_common_init(struct pata_macio_priv	*priv,
resource_size_t		tfregs,
resource_size_t		dmaregs,
resource_size_t		fcregs,
unsigned long		irq)
static int __devinit pata_macio_attach(struct macio_dev *mdev,
const struct of_device_id *match)
static int __devexit pata_macio_detach(struct macio_dev *mdev)
static int pata_macio_suspend(struct macio_dev *mdev, pm_message_t mesg)
static int pata_macio_resume(struct macio_dev *mdev)
static void pata_macio_mb_event(struct macio_dev* mdev, int mb_state)
static int __devinit pata_macio_pci_attach(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit pata_macio_pci_detach(struct pci_dev *pdev)
static int pata_macio_pci_suspend(struct pci_dev *pdev, pm_message_t mesg)
static int pata_macio_pci_resume(struct pci_dev *pdev)
static struct of_device_id pata_macio_match[] =
;
static struct macio_driver pata_macio_driver =
;
static const struct pci_device_id pata_macio_pci_match[] = ;
static struct pci_driver pata_macio_pci_driver = ;
MODULE_DEVICE_TABLE(pci, pata_macio_pci_match);
static int __init pata_macio_init(void)
static void __exit pata_macio_exit(void)
module_init(pata_macio_init);
module_exit(pata_macio_exit);
MODULE_AUTHOR("Benjamin Herrenschmidt");
MODULE_DESCRIPTION("Apple MacIO PATA driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
