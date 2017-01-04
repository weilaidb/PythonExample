#define DRV_NAME "sl82c105"
#define CTRL_IDE_IRQB   (1 << 30)
#define CTRL_IDE_IRQA   (1 << 28)
#define CTRL_LEGIRQ     (1 << 11)
#define CTRL_P1F16      (1 << 5)
#define CTRL_P1EN       (1 << 4)
#define CTRL_P0F16      (1 << 1)
#define CTRL_P0EN       (1 << 0)
static unsigned int get_pio_timings(ide_drive_t *drive, u8 pio)
static void sl82c105_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void sl82c105_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static int sl82c105_test_irq(ide_hwif_t *hwif)
static inline void sl82c105_reset_host(struct pci_dev *dev)
static void sl82c105_dma_lost_irq(ide_drive_t *drive)
static void sl82c105_dma_start(ide_drive_t *drive)
static void sl82c105_dma_clear(ide_drive_t *drive)
static int sl82c105_dma_end(ide_drive_t *drive)
static void sl82c105_resetproc(ide_drive_t *drive)
static u8 sl82c105_bridge_revision(struct pci_dev *dev)
static int init_chipset_sl82c105(struct pci_dev *dev)
static const struct ide_port_ops sl82c105_port_ops = ;
static const struct ide_dma_ops sl82c105_dma_ops = ;
static const struct ide_port_info sl82c105_chipset __devinitdata = ;
static int __devinit sl82c105_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id sl82c105_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, sl82c105_pci_tbl);
static struct pci_driver sl82c105_pci_driver = ;
static int __init sl82c105_ide_init(void)
static void __exit sl82c105_ide_exit(void)
module_init(sl82c105_ide_init);
module_exit(sl82c105_ide_exit);
MODULE_DESCRIPTION("PCI driver module for W82C105 IDE");
MODULE_LICENSE("GPL");
