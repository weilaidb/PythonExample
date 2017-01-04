#define DRV_NAME "ns87415"
#define SUPERIO_IDE_MAX_RETRIES 25
static u8 superio_ide_inb (unsigned long port)
static u8 superio_read_status(ide_hwif_t *hwif)
static u8 superio_dma_sff_read_status(ide_hwif_t *hwif)
static void superio_tf_read(ide_drive_t *drive, struct ide_taskfile *tf,
u8 valid)
static void ns87415_dev_select(ide_drive_t *drive);
static const struct ide_tp_ops superio_tp_ops = ;
static void __devinit superio_init_iops(struct hwif_s *hwif)
#define superio_dma_sff_read_status ide_dma_sff_read_status
static unsigned int ns87415_count = 0, ns87415_control[MAX_HWIFS] = ;
static void ns87415_prepare_drive (ide_drive_t *drive, unsigned int use_dma)
static void ns87415_dev_select(ide_drive_t *drive)
static void ns87415_dma_start(ide_drive_t *drive)
static int ns87415_dma_end(ide_drive_t *drive)
static void __devinit init_hwif_ns87415 (ide_hwif_t *hwif)
static const struct ide_tp_ops ns87415_tp_ops = ;
static const struct ide_dma_ops ns87415_dma_ops = ;
static const struct ide_port_info ns87415_chipset __devinitdata = ;
static int __devinit ns87415_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id ns87415_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, ns87415_pci_tbl);
static struct pci_driver ns87415_pci_driver = ;
static int __init ns87415_ide_init(void)
static void __exit ns87415_ide_exit(void)
module_init(ns87415_ide_init);
module_exit(ns87415_ide_exit);
MODULE_AUTHOR("Mark Lord, Eddie Dost, Andre Hedrick");
MODULE_DESCRIPTION("PCI driver module for NS87415 IDE");
MODULE_LICENSE("GPL");
