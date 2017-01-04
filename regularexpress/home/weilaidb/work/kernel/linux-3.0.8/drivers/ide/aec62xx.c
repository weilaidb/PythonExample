#define DRV_NAME "aec62xx"
struct chipset_bus_clock_list_entry ;
static const struct chipset_bus_clock_list_entry aec6xxx_33_base [] = ;
static const struct chipset_bus_clock_list_entry aec6xxx_34_base [] = ;
static u8 pci_bus_clock_list (u8 speed, struct chipset_bus_clock_list_entry * chipset_table)
static u8 pci_bus_clock_list_ultra (u8 speed, struct chipset_bus_clock_list_entry * chipset_table)
static void aec6210_set_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void aec6260_set_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void aec_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static int init_chipset_aec62xx(struct pci_dev *dev)
static u8 atp86x_cable_detect(ide_hwif_t *hwif)
static const struct ide_port_ops atp850_port_ops = ;
static const struct ide_port_ops atp86x_port_ops = ;
static const struct ide_port_info aec62xx_chipsets[] __devinitdata = ;
static int __devinit aec62xx_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit aec62xx_remove(struct pci_dev *dev)
static const struct pci_device_id aec62xx_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, aec62xx_pci_tbl);
static struct pci_driver aec62xx_pci_driver = ;
static int __init aec62xx_ide_init(void)
static void __exit aec62xx_ide_exit(void)
module_init(aec62xx_ide_init);
module_exit(aec62xx_ide_exit);
MODULE_AUTHOR("Andre Hedrick");
MODULE_DESCRIPTION("PCI driver module for ARTOP AEC62xx IDE");
MODULE_LICENSE("GPL");
