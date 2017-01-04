#define DRV_NAME "tc86c001"
static void tc86c001_set_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void tc86c001_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static int tc86c001_timer_expiry(ide_drive_t *drive)
static void tc86c001_dma_start(ide_drive_t *drive)
static u8 tc86c001_cable_detect(ide_hwif_t *hwif)
static void __devinit init_hwif_tc86c001(ide_hwif_t *hwif)
static const struct ide_port_ops tc86c001_port_ops = ;
static const struct ide_dma_ops tc86c001_dma_ops = ;
static const struct ide_port_info tc86c001_chipset __devinitdata = ;
static int __devinit tc86c001_init_one(struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit tc86c001_remove(struct pci_dev *dev)
static const struct pci_device_id tc86c001_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, tc86c001_pci_tbl);
static struct pci_driver tc86c001_pci_driver = ;
static int __init tc86c001_ide_init(void)
static void __exit tc86c001_ide_exit(void)
module_init(tc86c001_ide_init);
module_exit(tc86c001_ide_exit);
MODULE_AUTHOR("MontaVista Software, Inc. <source@mvista.com>");
MODULE_DESCRIPTION("PCI driver module for TC86C001 IDE");
MODULE_LICENSE("GPL");
