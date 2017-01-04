#define DRV_NAME "slc90e66"
static DEFINE_SPINLOCK(slc90e66_lock);
static void slc90e66_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void slc90e66_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static u8 slc90e66_cable_detect(ide_hwif_t *hwif)
static const struct ide_port_ops slc90e66_port_ops = ;
static const struct ide_port_info slc90e66_chipset __devinitdata = ;
static int __devinit slc90e66_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id slc90e66_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, slc90e66_pci_tbl);
static struct pci_driver slc90e66_pci_driver = ;
static int __init slc90e66_ide_init(void)
static void __exit slc90e66_ide_exit(void)
module_init(slc90e66_ide_init);
module_exit(slc90e66_ide_exit);
MODULE_AUTHOR("Andre Hedrick");
MODULE_DESCRIPTION("PCI driver module for SLC90E66 IDE");
MODULE_LICENSE("GPL");
