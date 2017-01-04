#define DRV_NAME "amd74xx"
enum ;
static unsigned int amd_80w;
static unsigned int amd_clock;
static char *amd_dma[] = ;
static unsigned char amd_cyc2udma[] = ;
static inline u8 amd_offset(struct pci_dev *dev)
static void amd_set_speed(struct pci_dev *dev, u8 dn, u8 udma_mask,
struct ide_timing *timing)
static void amd_set_drive(ide_hwif_t *hwif, ide_drive_t *drive)
static void amd_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void amd7409_cable_detect(struct pci_dev *dev)
static void amd7411_cable_detect(struct pci_dev *dev)
static int init_chipset_amd74xx(struct pci_dev *dev)
static u8 amd_cable_detect(ide_hwif_t *hwif)
static const struct ide_port_ops amd_port_ops = ;
#define IDE_HFLAGS_AMD \
(IDE_HFLAG_PIO_NO_BLACKLIST | \
IDE_HFLAG_POST_SET_MODE | \
IDE_HFLAG_IO_32BIT | \
IDE_HFLAG_UNMASK_IRQS)
#define DECLARE_AMD_DEV(swdma, udma)				\
#define DECLARE_NV_DEV(udma)					\
static const struct ide_port_info amd74xx_chipsets[] __devinitdata = ;
static int __devinit amd74xx_probe(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id amd74xx_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, amd74xx_pci_tbl);
static struct pci_driver amd74xx_pci_driver = ;
static int __init amd74xx_ide_init(void)
static void __exit amd74xx_ide_exit(void)
module_init(amd74xx_ide_init);
module_exit(amd74xx_ide_exit);
MODULE_AUTHOR("Vojtech Pavlik, Bartlomiej Zolnierkiewicz");
MODULE_DESCRIPTION("AMD PCI IDE driver");
MODULE_LICENSE("GPL");
