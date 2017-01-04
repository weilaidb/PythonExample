#define DRV_NAME "siimage"
static int pdev_is_sata(struct pci_dev *pdev)
static inline int is_sata(ide_hwif_t *hwif)
static unsigned long siimage_selreg(ide_hwif_t *hwif, int r)
static inline unsigned long siimage_seldev(ide_drive_t *drive, int r)
static u8 sil_ioread8(struct pci_dev *dev, unsigned long addr)
static u16 sil_ioread16(struct pci_dev *dev, unsigned long addr)
static void sil_iowrite8(struct pci_dev *dev, u8 val, unsigned long addr)
static void sil_iowrite16(struct pci_dev *dev, u16 val, unsigned long addr)
static void sil_iowrite32(struct pci_dev *dev, u32 val, unsigned long addr)
static u8 sil_pata_udma_filter(ide_drive_t *drive)
static u8 sil_sata_udma_filter(ide_drive_t *drive)
static void sil_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void sil_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static int sil_test_irq(ide_hwif_t *hwif)
static int siimage_mmio_dma_test_irq(ide_drive_t *drive)
static int siimage_dma_test_irq(ide_drive_t *drive)
static int sil_sata_reset_poll(ide_drive_t *drive)
static void sil_sata_pre_reset(ide_drive_t *drive)
static int init_chipset_siimage(struct pci_dev *dev)
static void __devinit init_mmio_iops_siimage(ide_hwif_t *hwif)
static int is_dev_seagate_sata(ide_drive_t *drive)
static void sil_quirkproc(ide_drive_t *drive)
static void __devinit init_iops_siimage(ide_hwif_t *hwif)
static u8 sil_cable_detect(ide_hwif_t *hwif)
static const struct ide_port_ops sil_pata_port_ops = ;
static const struct ide_port_ops sil_sata_port_ops = ;
static const struct ide_dma_ops sil_dma_ops = ;
#define DECLARE_SII_DEV(p_ops)				\
static const struct ide_port_info siimage_chipsets[] __devinitdata = ;
static int __devinit siimage_init_one(struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit siimage_remove(struct pci_dev *dev)
static const struct pci_device_id siimage_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, siimage_pci_tbl);
static struct pci_driver siimage_pci_driver = ;
static int __init siimage_ide_init(void)
static void __exit siimage_ide_exit(void)
module_init(siimage_ide_init);
module_exit(siimage_ide_exit);
MODULE_AUTHOR("Andre Hedrick, Alan Cox");
MODULE_DESCRIPTION("PCI driver module for SiI IDE");
MODULE_LICENSE("GPL");
