#define DRV_NAME "pdc202xx_old"
static void pdc202xx_set_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void pdc202xx_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static int pdc202xx_test_irq(ide_hwif_t *hwif)
static u8 pdc2026x_cable_detect(ide_hwif_t *hwif)
static void pdc_old_enable_66MHz_clock(ide_hwif_t *hwif)
static void pdc_old_disable_66MHz_clock(ide_hwif_t *hwif)
static void pdc2026x_init_hwif(ide_hwif_t *hwif)
static void pdc202xx_dma_start(ide_drive_t *drive)
static int pdc202xx_dma_end(ide_drive_t *drive)
static int init_chipset_pdc202xx(struct pci_dev *dev)
static void __devinit pdc202ata4_fixup_irq(struct pci_dev *dev,
const char *name)
#define IDE_HFLAGS_PDC202XX \
(IDE_HFLAG_ERROR_STOPS_FIFO | \
IDE_HFLAG_OFF_BOARD)
static const struct ide_port_ops pdc20246_port_ops = ;
static const struct ide_port_ops pdc2026x_port_ops = ;
static const struct ide_dma_ops pdc2026x_dma_ops = ;
#define DECLARE_PDC2026X_DEV(udma, sectors) \
static const struct ide_port_info pdc202xx_chipsets[] __devinitdata = ;
static int __devinit pdc202xx_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id pdc202xx_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, pdc202xx_pci_tbl);
static struct pci_driver pdc202xx_pci_driver = ;
static int __init pdc202xx_ide_init(void)
static void __exit pdc202xx_ide_exit(void)
module_init(pdc202xx_ide_init);
module_exit(pdc202xx_ide_exit);
MODULE_AUTHOR("Andre Hedrick, Frank Tiernan, Bartlomiej Zolnierkiewicz");
MODULE_DESCRIPTION("PCI driver module for older Promise IDE");
MODULE_LICENSE("GPL");
