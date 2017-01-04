#define DRV_NAME "piix"
static int no_piix_dma;
static void piix_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void piix_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static int init_chipset_ich(struct pci_dev *dev)
static void ich_clear_irq(ide_drive_t *drive)
struct ich_laptop ;
static const struct ich_laptop ich_laptop[] = ;
static u8 piix_cable_detect(ide_hwif_t *hwif)
static void __devinit init_hwif_piix(ide_hwif_t *hwif)
static const struct ide_port_ops piix_port_ops = ;
static const struct ide_port_ops ich_port_ops = ;
#define DECLARE_PIIX_DEV(udma) \
#define DECLARE_ICH_DEV(udma) \
static const struct ide_port_info piix_pci_info[] __devinitdata = ;
static int __devinit piix_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static void __devinit piix_check_450nx(void)
static const struct pci_device_id piix_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, piix_pci_tbl);
static struct pci_driver piix_pci_driver = ;
static int __init piix_ide_init(void)
static void __exit piix_ide_exit(void)
module_init(piix_ide_init);
module_exit(piix_ide_exit);
MODULE_AUTHOR("Andre Hedrick, Andrzej Krzysztofowicz");
MODULE_DESCRIPTION("PCI driver module for Intel PIIX IDE");
MODULE_LICENSE("GPL");
