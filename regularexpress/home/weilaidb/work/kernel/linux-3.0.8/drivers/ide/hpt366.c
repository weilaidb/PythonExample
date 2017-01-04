#define DRV_NAME "hpt366"
#undef	HPT_RESET_STATE_ENGINE
#undef	HPT_DELAY_INTERRUPT
static const char *bad_ata100_5[] = ;
static const char *bad_ata66_4[] = ;
static const char *bad_ata66_3[] = ;
static const char *bad_ata33[] = ;
static u8 xfer_speeds[] = ;
static u32 forty_base_hpt36x[] = ;
static u32 thirty_three_base_hpt36x[] = ;
static u32 twenty_five_base_hpt36x[] = ;
static u32 thirty_three_base_hpt37x[] = ;
static u32 fifty_base_hpt37x[] = ;
static u32 sixty_six_base_hpt37x[] = ;
#define HPT371_ALLOW_ATA133_6		1
#define HPT302_ALLOW_ATA133_6		1
#define HPT372_ALLOW_ATA133_6		1
#define HPT370_ALLOW_ATA100_5		0
#define HPT366_ALLOW_ATA66_4		1
#define HPT366_ALLOW_ATA66_3		1
enum ata_clock ;
struct hpt_timings ;
struct hpt_info ;
enum ;
static struct hpt_timings hpt36x_timings = ;
static struct hpt_timings hpt37x_timings = ;
static const struct hpt_info hpt36x __devinitdata = ;
static const struct hpt_info hpt370 __devinitdata = ;
static const struct hpt_info hpt370a __devinitdata = ;
static const struct hpt_info hpt374 __devinitdata = ;
static const struct hpt_info hpt372 __devinitdata = ;
static const struct hpt_info hpt372a __devinitdata = ;
static const struct hpt_info hpt302 __devinitdata = ;
static const struct hpt_info hpt371 __devinitdata = ;
static const struct hpt_info hpt372n __devinitdata = ;
static const struct hpt_info hpt302n __devinitdata = ;
static const struct hpt_info hpt371n __devinitdata = ;
static int check_in_drive_list(ide_drive_t *drive, const char **list)
static struct hpt_info *hpt3xx_get_info(struct device *dev)
static u8 hpt3xx_udma_filter(ide_drive_t *drive)
static u8 hpt3xx_mdma_filter(ide_drive_t *drive)
static u32 get_speed_setting(u8 speed, struct hpt_info *info)
static void hpt3xx_set_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void hpt3xx_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void hpt3xx_maskproc(ide_drive_t *drive, int mask)
static void hpt366_dma_lost_irq(ide_drive_t *drive)
static void hpt370_clear_engine(ide_drive_t *drive)
static void hpt370_irq_timeout(ide_drive_t *drive)
static void hpt370_dma_start(ide_drive_t *drive)
static int hpt370_dma_end(ide_drive_t *drive)
static int hpt374_dma_test_irq(ide_drive_t *drive)
static int hpt374_dma_end(ide_drive_t *drive)
static void hpt3xxn_set_clock(ide_hwif_t *hwif, u8 mode)
static void hpt3xxn_rw_disk(ide_drive_t *drive, struct request *rq)
static int hpt37x_calibrate_dpll(struct pci_dev *dev, u16 f_low, u16 f_high)
static void hpt3xx_disable_fast_irq(struct pci_dev *dev, u8 mcr_addr)
static int init_chipset_hpt366(struct pci_dev *dev)
static u8 hpt3xx_cable_detect(ide_hwif_t *hwif)
static void __devinit init_hwif_hpt366(ide_hwif_t *hwif)
static int __devinit init_dma_hpt366(ide_hwif_t *hwif,
const struct ide_port_info *d)
static void __devinit hpt374_init(struct pci_dev *dev, struct pci_dev *dev2)
static void __devinit hpt371_init(struct pci_dev *dev)
static int __devinit hpt36x_init(struct pci_dev *dev, struct pci_dev *dev2)
#define IDE_HFLAGS_HPT3XX \
(IDE_HFLAG_NO_ATAPI_DMA | \
IDE_HFLAG_OFF_BOARD)
static const struct ide_port_ops hpt3xx_port_ops = ;
static const struct ide_dma_ops hpt37x_dma_ops = ;
static const struct ide_dma_ops hpt370_dma_ops = ;
static const struct ide_dma_ops hpt36x_dma_ops = ;
static const struct ide_port_info hpt366_chipsets[] __devinitdata = ;
static int __devinit hpt366_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit hpt366_remove(struct pci_dev *dev)
static const struct pci_device_id hpt366_pci_tbl[] __devinitconst = ;
MODULE_DEVICE_TABLE(pci, hpt366_pci_tbl);
static struct pci_driver hpt366_pci_driver = ;
static int __init hpt366_ide_init(void)
static void __exit hpt366_ide_exit(void)
module_init(hpt366_ide_init);
module_exit(hpt366_ide_exit);
MODULE_AUTHOR("Andre Hedrick");
MODULE_DESCRIPTION("PCI driver module for Highpoint HPT366 IDE");
MODULE_LICENSE("GPL");
