#define DRV_NAME "it8213"
static void it8213_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void it8213_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static u8 it8213_cable_detect(ide_hwif_t *hwif)
static const struct ide_port_ops it8213_port_ops = ;
static const struct ide_port_info it8213_chipset __devinitdata = ;
static int __devinit it8213_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id it8213_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, it8213_pci_tbl);
static struct pci_driver it8213_pci_driver = ;
static int __init it8213_ide_init(void)
static void __exit it8213_ide_exit(void)
module_init(it8213_ide_init);
module_exit(it8213_ide_exit);
MODULE_AUTHOR("Jack Lee, Alan Cox");
MODULE_DESCRIPTION("PCI driver module for the ITE 8213");
MODULE_LICENSE("GPL");
