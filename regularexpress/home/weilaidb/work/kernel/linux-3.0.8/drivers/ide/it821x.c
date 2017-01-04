#define DRV_NAME "it821x"
#define QUIRK_VORTEX86 1
struct it821x_dev
;
#define ATA_66		0
#define ATA_50		1
#define ATA_ANY		2
#define UDMA_OFF	0
#define MWDMA_OFF	0
static int it8212_noraid;
static void it821x_program(ide_drive_t *drive, u16 timing)
static void it821x_program_udma(ide_drive_t *drive, u16 timing)
static void it821x_clock_strategy(ide_drive_t *drive)
static void it821x_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void it821x_tune_mwdma(ide_drive_t *drive, u8 mode_wanted)
static void it821x_tune_udma(ide_drive_t *drive, u8 mode_wanted)
static void it821x_dma_start(ide_drive_t *drive)
static int it821x_dma_end(ide_drive_t *drive)
static void it821x_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static u8 it821x_cable_detect(ide_hwif_t *hwif)
static void it821x_quirkproc(ide_drive_t *drive)
static struct ide_dma_ops it821x_pass_through_dma_ops = ;
static void __devinit init_hwif_it821x(ide_hwif_t *hwif)
static void it8212_disable_raid(struct pci_dev *dev)
static int init_chipset_it821x(struct pci_dev *dev)
static const struct ide_port_ops it821x_port_ops = ;
static const struct ide_port_info it821x_chipset __devinitdata = ;
static int __devinit it821x_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit it821x_remove(struct pci_dev *dev)
static const struct pci_device_id it821x_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, it821x_pci_tbl);
static struct pci_driver it821x_pci_driver = ;
static int __init it821x_ide_init(void)
static void __exit it821x_ide_exit(void)
module_init(it821x_ide_init);
module_exit(it821x_ide_exit);
module_param_named(noraid, it8212_noraid, int, S_IRUGO);
MODULE_PARM_DESC(noraid, "Force card into bypass mode");
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("PCI driver module for the ITE 821x");
MODULE_LICENSE("GPL");
