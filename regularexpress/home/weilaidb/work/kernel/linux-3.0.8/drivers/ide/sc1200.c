#define DRV_NAME "sc1200"
#define SC1200_REV_A	0x00
#define SC1200_REV_B1	0x01
#define SC1200_REV_B3	0x02
#define SC1200_REV_C1	0x03
#define SC1200_REV_D1	0x04
#define PCI_CLK_33	0x00
#define PCI_CLK_48	0x01
#define PCI_CLK_66	0x02
#define PCI_CLK_33A	0x03
static unsigned short sc1200_get_pci_clock (void)
static const unsigned int sc1200_pio_timings[4][5] =
;
static void sc1200_tunepio(ide_drive_t *drive, u8 pio)
static u8 sc1200_udma_filter(ide_drive_t *drive)
static void sc1200_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static int sc1200_dma_end(ide_drive_t *drive)
static void sc1200_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
struct sc1200_saved_state ;
static int sc1200_suspend (struct pci_dev *dev, pm_message_t state)
static int sc1200_resume (struct pci_dev *dev)
static const struct ide_port_ops sc1200_port_ops = ;
static const struct ide_dma_ops sc1200_dma_ops = ;
static const struct ide_port_info sc1200_chipset __devinitdata = ;
static int __devinit sc1200_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id sc1200_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, sc1200_pci_tbl);
static struct pci_driver sc1200_pci_driver = ;
static int __init sc1200_ide_init(void)
static void __exit sc1200_ide_exit(void)
module_init(sc1200_ide_init);
module_exit(sc1200_ide_exit);
MODULE_AUTHOR("Mark Lord");
MODULE_DESCRIPTION("PCI driver module for NS SC1200 IDE");
MODULE_LICENSE("GPL");
