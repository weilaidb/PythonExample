#define DRV_NAME "cs5530"
static unsigned int cs5530_pio_timings[2][5] = ;
#define CS5530_BAD_PIO(timings) (((timings)&~0x80000000)==0x0000e132)
#define CS5530_BASEREG(hwif)	(((hwif)->dma_base & ~0xf) + ((hwif)->channel ? 0x30 : 0x20))
static void cs5530_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static u8 cs5530_udma_filter(ide_drive_t *drive)
static void cs5530_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static int init_chipset_cs5530(struct pci_dev *dev)
static void __devinit init_hwif_cs5530 (ide_hwif_t *hwif)
static const struct ide_port_ops cs5530_port_ops = ;
static const struct ide_port_info cs5530_chipset __devinitdata = ;
static int __devinit cs5530_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id cs5530_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, cs5530_pci_tbl);
static struct pci_driver cs5530_pci_driver = ;
static int __init cs5530_ide_init(void)
static void __exit cs5530_ide_exit(void)
module_init(cs5530_ide_init);
module_exit(cs5530_ide_exit);
MODULE_AUTHOR("Mark Lord");
MODULE_DESCRIPTION("PCI driver module for Cyrix/NS 5530 IDE");
MODULE_LICENSE("GPL");
