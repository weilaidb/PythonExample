#define DRV_NAME "cs5520"
struct pio_clocks
;
static struct pio_clocks cs5520_pio_clocks[]=;
static void cs5520_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void cs5520_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static const struct ide_port_ops cs5520_port_ops = ;
static const struct ide_port_info cyrix_chipset __devinitdata = ;
static int __devinit cs5520_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id cs5520_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, cs5520_pci_tbl);
static struct pci_driver cs5520_pci_driver = ;
static int __init cs5520_ide_init(void)
module_init(cs5520_ide_init);
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("PCI driver module for Cyrix 5510/5520 IDE");
MODULE_LICENSE("GPL");
