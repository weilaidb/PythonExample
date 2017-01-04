#define DRV_NAME	"cs5536"
enum ;
static int use_msr;
static int cs5536_read(struct pci_dev *pdev, int reg, u32 *val)
static int cs5536_write(struct pci_dev *pdev, int reg, int val)
static void cs5536_program_dtc(ide_drive_t *drive, u8 tim)
static u8 cs5536_cable_detect(ide_hwif_t *hwif)
static void cs5536_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void cs5536_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void cs5536_dma_start(ide_drive_t *drive)
static int cs5536_dma_end(ide_drive_t *drive)
static const struct ide_port_ops cs5536_port_ops = ;
static const struct ide_dma_ops cs5536_dma_ops = ;
static const struct ide_port_info cs5536_info = ;
static int cs5536_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id cs5536_pci_tbl[] = ;
static struct pci_driver cs5536_pci_driver = ;
static int __init cs5536_init(void)
static void __exit cs5536_exit(void)
MODULE_AUTHOR("Martin K. Petersen, Bartlomiej Zolnierkiewicz");
MODULE_DESCRIPTION("low-level driver for the CS5536 IDE controller");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, cs5536_pci_tbl);
module_param_named(msr, use_msr, int, 0644);
MODULE_PARM_DESC(msr, "Force using MSR to configure IDE function (Default: 0)");
module_init(cs5536_init);
module_exit(cs5536_exit);
