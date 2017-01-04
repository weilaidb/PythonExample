#define DRV_NAME "via82cxxx"
#define VIA_IDE_ENABLE		0x40
#define VIA_IDE_CONFIG		0x41
#define VIA_FIFO_CONFIG		0x43
#define VIA_MISC_1		0x44
#define VIA_MISC_2		0x45
#define VIA_MISC_3		0x46
#define VIA_DRIVE_TIMING	0x48
#define VIA_8BIT_TIMING		0x4e
#define VIA_ADDRESS_SETUP	0x4c
#define VIA_UDMA_TIMING		0x50
#define VIA_BAD_PREQ		0x01
#define VIA_BAD_CLK66		0x02
#define VIA_SET_FIFO		0x04
#define VIA_NO_UNMASK		0x08
#define VIA_BAD_ID		0x10
#define VIA_BAD_AST		0x20
#define VIA_SATA_PATA		0x80
enum ;
static struct via_isa_bridge  via_isa_bridges[] = ;
static unsigned int via_clock;
static char *via_dma[] = ;
struct via82cxxx_dev
;
static void via_set_speed(ide_hwif_t *hwif, u8 dn, struct ide_timing *timing)
static void via_set_drive(ide_hwif_t *hwif, ide_drive_t *drive)
static void via_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static struct via_isa_bridge *via_config_find(struct pci_dev **isa)
static void via_cable_detect(struct via82cxxx_dev *vdev, u32 u)
static int init_chipset_via82cxxx(struct pci_dev *dev)
static const struct dmi_system_id cable_dmi_table[] = ;
static int via_cable_override(struct pci_dev *pdev)
static u8 via82cxxx_cable_detect(ide_hwif_t *hwif)
static const struct ide_port_ops via_port_ops = ;
static const struct ide_port_info via82cxxx_chipset __devinitdata = ;
static int __devinit via_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit via_remove(struct pci_dev *dev)
static const struct pci_device_id via_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, via_pci_tbl);
static struct pci_driver via_pci_driver = ;
static int __init via_ide_init(void)
static void __exit via_ide_exit(void)
module_init(via_ide_init);
module_exit(via_ide_exit);
MODULE_AUTHOR("Vojtech Pavlik, Bartlomiej Zolnierkiewicz, Michel Aubry, Jeff Garzik, Andre Hedrick");
MODULE_DESCRIPTION("PCI driver module for VIA IDE");
MODULE_LICENSE("GPL");
