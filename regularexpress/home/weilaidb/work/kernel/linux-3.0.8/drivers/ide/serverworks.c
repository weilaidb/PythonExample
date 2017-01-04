#define DRV_NAME "serverworks"
#define SVWKS_CSB5_REVISION_NEW	0x92
#define SVWKS_CSB6_REVISION	0xa0
static const char *svwks_bad_ata100[] = ;
static int check_in_drive_lists (ide_drive_t *drive, const char **list)
static u8 svwks_udma_filter(ide_drive_t *drive)
static u8 svwks_csb_check (struct pci_dev *dev)
static void svwks_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void svwks_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static int init_chipset_svwks(struct pci_dev *dev)
static u8 ata66_svwks_svwks(ide_hwif_t *hwif)
static u8 ata66_svwks_dell(ide_hwif_t *hwif)
static u8 ata66_svwks_cobalt(ide_hwif_t *hwif)
static u8 svwks_cable_detect(ide_hwif_t *hwif)
static const struct ide_port_ops osb4_port_ops = ;
static const struct ide_port_ops svwks_port_ops = ;
static const struct ide_port_info serverworks_chipsets[] __devinitdata = ;
static int __devinit svwks_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id svwks_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, svwks_pci_tbl);
static struct pci_driver svwks_pci_driver = ;
static int __init svwks_ide_init(void)
static void __exit svwks_ide_exit(void)
module_init(svwks_ide_init);
module_exit(svwks_ide_exit);
MODULE_AUTHOR("Michael Aubry. Andrzej Krzysztofowicz, Andre Hedrick, Bartlomiej Zolnierkiewicz");
MODULE_DESCRIPTION("PCI driver module for Serverworks OSB4/CSB5/CSB6 IDE");
MODULE_LICENSE("GPL");
