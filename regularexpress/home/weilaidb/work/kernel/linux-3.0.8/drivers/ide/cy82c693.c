#define DRV_NAME "cy82c693"
#define BUSMASTER_TIMEOUT	0x50
#define CY82_IDE_CMDREG		0x04
#define CY82_IDE_ADDRSETUP	0x48
#define CY82_IDE_MASTER_IOR	0x4C
#define CY82_IDE_MASTER_IOW	0x4D
#define CY82_IDE_SLAVE_IOR	0x4E
#define CY82_IDE_SLAVE_IOW	0x4F
#define CY82_IDE_MASTER_8BIT	0x50
#define CY82_IDE_SLAVE_8BIT	0x51
#define CY82_INDEX_PORT		0x22
#define CY82_DATA_PORT		0x23
#define CY82_INDEX_CHANNEL0	0x30
#define CY82_INDEX_CHANNEL1	0x31
#define CY82_INDEX_TIMEOUT	0x32
static void cy82c693_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void cy82c693_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void __devinit init_iops_cy82c693(ide_hwif_t *hwif)
static const struct ide_port_ops cy82c693_port_ops = ;
static const struct ide_port_info cy82c693_chipset __devinitdata = ;
static int __devinit cy82c693_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit cy82c693_remove(struct pci_dev *dev)
static const struct pci_device_id cy82c693_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, cy82c693_pci_tbl);
static struct pci_driver cy82c693_pci_driver = ;
static int __init cy82c693_ide_init(void)
static void __exit cy82c693_ide_exit(void)
module_init(cy82c693_ide_init);
module_exit(cy82c693_ide_exit);
MODULE_AUTHOR("Andreas Krebs, Andre Hedrick, Bartlomiej Zolnierkiewicz");
MODULE_DESCRIPTION("PCI driver module for the Cypress CY82C693 IDE");
MODULE_LICENSE("GPL");
