#define DRV_NAME "ide-pmac"
#undef IDE_PMAC_DEBUG
#define DMA_WAIT_TIMEOUT	50
typedef struct pmac_ide_hwif  pmac_ide_hwif_t;
enum ;
static const char* model_name[] = ;
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
#define TR_100_PIOREG_PIO_MASK		0xff000fff
#define TR_100_PIOREG_MDMA_MASK		0x00fff000
#define TR_100_UDMAREG_UDMA_MASK	0x0000ffff
#define TR_100_UDMAREG_UDMA_EN		0x00000001
#define TR_66_UDMA_MASK			0xfff00000
#define TR_66_UDMA_EN			0x00100000
#define TR_66_UDMA_ADDRSETUP_MASK	0xe0000000
#define TR_66_UDMA_ADDRSETUP_SHIFT	29
#define TR_66_UDMA_RDY2PAUS_MASK	0x1e000000
#define TR_66_UDMA_RDY2PAUS_SHIFT	25
#define TR_66_UDMA_WRDATASETUP_MASK	0x01e00000
#define TR_66_UDMA_WRDATASETUP_SHIFT	21
#define TR_66_MDMA_MASK			0x000ffc00
#define TR_66_MDMA_RECOVERY_MASK	0x000f8000
#define TR_66_MDMA_RECOVERY_SHIFT	15
#define TR_66_MDMA_ACCESS_MASK		0x00007c00
#define TR_66_MDMA_ACCESS_SHIFT		10
#define TR_66_PIO_MASK			0x000003ff
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
struct mdma_timings_t ;
struct mdma_timings_t mdma_timings_33[] =
;
struct mdma_timings_t mdma_timings_33k[] =
;
struct mdma_timings_t mdma_timings_66[] =
;
struct  kl66_udma_timings[] =
;
struct kauai_timing ;
static struct kauai_timing	kauai_pio_timings[] =
;
static struct kauai_timing	kauai_mdma_timings[] =
;
static struct kauai_timing	kauai_udma_timings[] =
;
static struct kauai_timing	shasta_pio_timings[] =
;
static struct kauai_timing	shasta_mdma_timings[] =
;
static struct kauai_timing	shasta_udma133_timings[] =
;
static inline u32
kauai_lookup_timing(struct kauai_timing* table, int cycle_time)
#define MAX_DCMDS		256
#define IDE_WAKEUP_DELAY	(1*HZ)
static int pmac_ide_init_dma(ide_hwif_t *, const struct ide_port_info *);
#define PMAC_IDE_REG(x) \
((void __iomem *)((drive)->hwif->io_ports.data_addr + (x)))
static void pmac_ide_apply_timings(ide_drive_t *drive)
static void pmac_ide_kauai_apply_timings(ide_drive_t *drive)
static void
pmac_ide_do_update_timings(ide_drive_t *drive)
static void pmac_dev_select(ide_drive_t *drive)
static void pmac_kauai_dev_select(ide_drive_t *drive)
static void pmac_exec_command(ide_hwif_t *hwif, u8 cmd)
static void pmac_write_devctl(ide_hwif_t *hwif, u8 ctl)
static void pmac_ide_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static int
set_timings_udma_ata4(u32 *timings, u8 speed)
static int
set_timings_udma_ata6(u32 *pio_timings, u32 *ultra_timings, u8 speed)
static int
set_timings_udma_shasta(u32 *pio_timings, u32 *ultra_timings, u8 speed)
static void
set_timings_mdma(ide_drive_t *drive, int intf_type, u32 *timings, u32 *timings2,
u8 speed)
static void pmac_ide_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void
sanitize_timings(pmac_ide_hwif_t *pmif)
static int on_media_bay(pmac_ide_hwif_t *pmif)
static int pmac_ide_do_suspend(pmac_ide_hwif_t *pmif)
static int pmac_ide_do_resume(pmac_ide_hwif_t *pmif)
static u8 pmac_ide_cable_detect(ide_hwif_t *hwif)
static void pmac_ide_init_dev(ide_drive_t *drive)
static const struct ide_tp_ops pmac_tp_ops = ;
static const struct ide_tp_ops pmac_ata6_tp_ops = ;
static const struct ide_port_ops pmac_ide_ata4_port_ops = ;
static const struct ide_port_ops pmac_ide_port_ops = ;
static const struct ide_dma_ops pmac_dma_ops;
static const struct ide_port_info pmac_port_info = ;
static int __devinit pmac_ide_setup_device(pmac_ide_hwif_t *pmif,
struct ide_hw *hw)
static void __devinit pmac_ide_init_ports(struct ide_hw *hw, unsigned long base)
static int __devinit
pmac_ide_macio_attach(struct macio_dev *mdev, const struct of_device_id *match)
static int
pmac_ide_macio_suspend(struct macio_dev *mdev, pm_message_t mesg)
static int
pmac_ide_macio_resume(struct macio_dev *mdev)
static int __devinit
pmac_ide_pci_attach(struct pci_dev *pdev, const struct pci_device_id *id)
static int
pmac_ide_pci_suspend(struct pci_dev *pdev, pm_message_t mesg)
static int
pmac_ide_pci_resume(struct pci_dev *pdev)
static void pmac_ide_macio_mb_event(struct macio_dev* mdev, int mb_state)
static struct of_device_id pmac_ide_macio_match[] =
;
static struct macio_driver pmac_ide_macio_driver =
;
static const struct pci_device_id pmac_ide_pci_match[] = ;
static struct pci_driver pmac_ide_pci_driver = ;
MODULE_DEVICE_TABLE(pci, pmac_ide_pci_match);
int __init pmac_ide_probe(void)
static int pmac_ide_build_dmatable(ide_drive_t *drive, struct ide_cmd *cmd)
static int pmac_ide_dma_setup(ide_drive_t *drive, struct ide_cmd *cmd)
static void
pmac_ide_dma_start(ide_drive_t *drive)
static int
pmac_ide_dma_end (ide_drive_t *drive)
static int
pmac_ide_dma_test_irq (ide_drive_t *drive)
static void pmac_ide_dma_host_set(ide_drive_t *drive, int on)
static void
pmac_ide_dma_lost_irq (ide_drive_t *drive)
static const struct ide_dma_ops pmac_dma_ops = ;
static int __devinit pmac_ide_init_dma(ide_hwif_t *hwif,
const struct ide_port_info *d)
module_init(pmac_ide_probe);
MODULE_LICENSE("GPL");
