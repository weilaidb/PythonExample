#define DRV_NAME "alim15x3"
static u8 m5229_revision;
static u8 chip_is_1543c_e;
static struct pci_dev *isa_dev;
static void ali_fifo_control(ide_hwif_t *hwif, ide_drive_t *drive, int on)
static void ali_program_timings(ide_hwif_t *hwif, ide_drive_t *drive,
struct ide_timing *t, u8 ultra)
static void ali_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static u8 ali_udma_filter(ide_drive_t *drive)
static void ali_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static int ali_dma_check(ide_drive_t *drive, struct ide_cmd *cmd)
static int init_chipset_ali15x3(struct pci_dev *dev)
static const struct dmi_system_id cable_dmi_table[] = ;
static int ali_cable_override(struct pci_dev *pdev)
static u8 ali_cable_detect(ide_hwif_t *hwif)
static void __devinit init_hwif_ali15x3 (ide_hwif_t *hwif)
#define init_hwif_ali15x3 NULL
static int __devinit init_dma_ali15x3(ide_hwif_t *hwif,
const struct ide_port_info *d)
static const struct ide_port_ops ali_port_ops = ;
static const struct ide_dma_ops ali_dma_ops = ;
static const struct ide_port_info ali15x3_chipset __devinitdata = ;
static int __devinit alim15x3_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id alim15x3_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, alim15x3_pci_tbl);
static struct pci_driver alim15x3_pci_driver = ;
static int __init ali15x3_ide_init(void)
static void __exit ali15x3_ide_exit(void)
module_init(ali15x3_ide_init);
module_exit(ali15x3_ide_exit);
MODULE_AUTHOR("Michael Aubry, Andrzej Krzysztofowicz, CJ, Andre Hedrick, Alan Cox, Bartlomiej Zolnierkiewicz");
MODULE_DESCRIPTION("PCI driver module for ALi 15x3 IDE");
MODULE_LICENSE("GPL");
