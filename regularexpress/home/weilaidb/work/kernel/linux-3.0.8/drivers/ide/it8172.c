#define DRV_NAME "IT8172"
static void it8172_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void it8172_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static const struct ide_port_ops it8172_port_ops = ;
static const struct ide_port_info it8172_port_info __devinitdata = ;
static int __devinit it8172_init_one(struct pci_dev *dev,
const struct pci_device_id *id)
static struct pci_device_id it8172_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, it8172_pci_tbl);
static struct pci_driver it8172_pci_driver = ;
static int __init it8172_ide_init(void)
static void __exit it8172_ide_exit(void)
module_init(it8172_ide_init);
module_exit(it8172_ide_exit);
MODULE_AUTHOR("Steve Longerbeam");
MODULE_DESCRIPTION("PCI driver module for ITE 8172 IDE");
MODULE_LICENSE("GPL");
