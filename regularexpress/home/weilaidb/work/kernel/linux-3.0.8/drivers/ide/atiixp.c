#define DRV_NAME "atiixp"
#define ATIIXP_IDE_PIO_TIMING		0x40
#define ATIIXP_IDE_MDMA_TIMING		0x44
#define ATIIXP_IDE_PIO_CONTROL		0x48
#define ATIIXP_IDE_PIO_MODE		0x4a
#define ATIIXP_IDE_UDMA_CONTROL		0x54
#define ATIIXP_IDE_UDMA_MODE		0x56
typedef struct  atiixp_ide_timing;
static atiixp_ide_timing pio_timing[] = ;
static atiixp_ide_timing mdma_timing[] = ;
static DEFINE_SPINLOCK(atiixp_lock);
static void atiixp_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void atiixp_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static u8 atiixp_cable_detect(ide_hwif_t *hwif)
static const struct ide_port_ops atiixp_port_ops = ;
static const struct ide_port_info atiixp_pci_info[] __devinitdata = ;
static int __devinit atiixp_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id atiixp_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, atiixp_pci_tbl);
static struct pci_driver atiixp_pci_driver = ;
static int __init atiixp_ide_init(void)
static void __exit atiixp_ide_exit(void)
module_init(atiixp_ide_init);
module_exit(atiixp_ide_exit);
MODULE_AUTHOR("HUI YU");
MODULE_DESCRIPTION("PCI driver module for ATI IXP IDE");
MODULE_LICENSE("GPL");
