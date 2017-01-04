#define DRV_NAME "jmicron"
typedef enum  port_type;
static u8 jmicron_cable_detect(ide_hwif_t *hwif)
static void jmicron_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void jmicron_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static const struct ide_port_ops jmicron_port_ops = ;
static const struct ide_port_info jmicron_chipset __devinitdata = ;
static int __devinit jmicron_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static struct pci_device_id jmicron_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, jmicron_pci_tbl);
static struct pci_driver jmicron_pci_driver = ;
static int __init jmicron_ide_init(void)
static void __exit jmicron_ide_exit(void)
module_init(jmicron_ide_init);
module_exit(jmicron_ide_exit);
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("PCI driver module for the JMicron in legacy modes");
MODULE_LICENSE("GPL");
