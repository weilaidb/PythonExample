#define TRM290_NO_DMA_WRITES
#define DRV_NAME "trm290"
static void trm290_prepare_drive (ide_drive_t *drive, unsigned int use_dma)
static void trm290_dev_select(ide_drive_t *drive)
static int trm290_dma_check(ide_drive_t *drive, struct ide_cmd *cmd)
static int trm290_dma_setup(ide_drive_t *drive, struct ide_cmd *cmd)
static void trm290_dma_start(ide_drive_t *drive)
static int trm290_dma_end(ide_drive_t *drive)
static int trm290_dma_test_irq(ide_drive_t *drive)
static void trm290_dma_host_set(ide_drive_t *drive, int on)
static void __devinit init_hwif_trm290(ide_hwif_t *hwif)
static const struct ide_tp_ops trm290_tp_ops = ;
static struct ide_dma_ops trm290_dma_ops = ;
static const struct ide_port_info trm290_chipset __devinitdata = ;
static int __devinit trm290_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id trm290_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, trm290_pci_tbl);
static struct pci_driver trm290_pci_driver = ;
static int __init trm290_ide_init(void)
static void __exit trm290_ide_exit(void)
module_init(trm290_ide_init);
module_exit(trm290_ide_exit);
MODULE_AUTHOR("Mark Lord");
MODULE_DESCRIPTION("PCI driver module for Tekram TRM290 IDE");
MODULE_LICENSE("GPL");
