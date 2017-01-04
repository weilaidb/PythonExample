#define DRV_NAME "cs5535"
#define MSR_ATAC_BASE		0x51300000
#define ATAC_GLD_MSR_CAP	(MSR_ATAC_BASE+0)
#define ATAC_GLD_MSR_CONFIG	(MSR_ATAC_BASE+0x01)
#define ATAC_GLD_MSR_SMI	(MSR_ATAC_BASE+0x02)
#define ATAC_GLD_MSR_ERROR	(MSR_ATAC_BASE+0x03)
#define ATAC_GLD_MSR_PM		(MSR_ATAC_BASE+0x04)
#define ATAC_GLD_MSR_DIAG	(MSR_ATAC_BASE+0x05)
#define ATAC_IO_BAR		(MSR_ATAC_BASE+0x08)
#define ATAC_RESET		(MSR_ATAC_BASE+0x10)
#define ATAC_CH0D0_PIO		(MSR_ATAC_BASE+0x20)
#define ATAC_CH0D0_DMA		(MSR_ATAC_BASE+0x21)
#define ATAC_CH0D1_PIO		(MSR_ATAC_BASE+0x22)
#define ATAC_CH0D1_DMA		(MSR_ATAC_BASE+0x23)
#define ATAC_PCI_ABRTERR	(MSR_ATAC_BASE+0x24)
#define ATAC_BM0_CMD_PRIM	0x00
#define ATAC_BM0_STS_PRIM	0x02
#define ATAC_BM0_PRD		0x04
#define CS5535_CABLE_DETECT	0x48
static unsigned int cs5535_pio_cmd_timings[5] =
;
static unsigned int cs5535_pio_dta_timings[5] =
;
static unsigned int cs5535_mwdma_timings[3] =
;
static unsigned int cs5535_udma_timings[5] =
;
#define CS5535_BAD_PIO(timings) ( (timings&~0x80000000UL) == 0x00009172 )
#define CS5535_BAD_DMA(timings) ( (timings & 0x000FFFFF) == 0x00077771 )
static void cs5535_set_speed(ide_drive_t *drive, const u8 speed)
static void cs5535_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void cs5535_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static u8 cs5535_cable_detect(ide_hwif_t *hwif)
static const struct ide_port_ops cs5535_port_ops = ;
static const struct ide_port_info cs5535_chipset __devinitdata = ;
static int __devinit cs5535_init_one(struct pci_dev *dev,
const struct pci_device_id *id)
static const struct pci_device_id cs5535_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, cs5535_pci_tbl);
static struct pci_driver cs5535_pci_driver = ;
static int __init cs5535_ide_init(void)
static void __exit cs5535_ide_exit(void)
module_init(cs5535_ide_init);
module_exit(cs5535_ide_exit);
MODULE_AUTHOR("AMD");
MODULE_DESCRIPTION("PCI driver module for AMD/NS CS5535 IDE");
MODULE_LICENSE("GPL");
