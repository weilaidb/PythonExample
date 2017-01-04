#define DRV_NAME "triflex"
static void triflex_set_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void triflex_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static const struct ide_port_ops triflex_port_ops = ;
static const struct ide_port_info triflex_device __devinitdata = ;
static int __devinit triflex_init_one(struct pci_dev *dev,
const struct pci_device_id *id)
static const struct pci_device_id triflex_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, triflex_pci_tbl);
static struct pci_driver triflex_pci_driver = ;
static int __init triflex_ide_init(void)
static void __exit triflex_ide_exit(void)
module_init(triflex_ide_init);
module_exit(triflex_ide_exit);
MODULE_AUTHOR("Torben Mathiasen");
MODULE_DESCRIPTION("PCI driver module for Compaq Triflex IDE");
MODULE_LICENSE("GPL");
