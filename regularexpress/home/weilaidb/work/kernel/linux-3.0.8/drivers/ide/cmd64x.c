#define DRV_NAME "cmd64x"
#define CFR		0x50
#define   CFR_INTR_CH0		0x04
#define	CMDTIM		0x52
#define	ARTTIM0		0x53
#define	DRWTIM0		0x54
#define ARTTIM1 	0x55
#define DRWTIM1		0x56
#define ARTTIM23	0x57
#define   ARTTIM23_DIS_RA2	0x04
#define   ARTTIM23_DIS_RA3	0x08
#define   ARTTIM23_INTR_CH1	0x10
#define DRWTIM2		0x58
#define BRST		0x59
#define DRWTIM3		0x5b
#define BMIDECR0	0x70
#define MRDMODE		0x71
#define   MRDMODE_INTR_CH0	0x04
#define   MRDMODE_INTR_CH1	0x08
#define UDIDETCR0	0x73
#define DTPR0		0x74
#define BMIDECR1	0x78
#define BMIDECSR	0x79
#define UDIDETCR1	0x7B
#define DTPR1		0x7C
static void cmd64x_program_timings(ide_drive_t *drive, u8 mode)
static void cmd64x_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void cmd64x_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void cmd648_clear_irq(ide_drive_t *drive)
static void cmd64x_clear_irq(ide_drive_t *drive)
static int cmd648_test_irq(ide_hwif_t *hwif)
static int cmd64x_test_irq(ide_hwif_t *hwif)
static int cmd646_1_dma_end(ide_drive_t *drive)
static int init_chipset_cmd64x(struct pci_dev *dev)
static u8 cmd64x_cable_detect(ide_hwif_t *hwif)
static const struct ide_port_ops cmd64x_port_ops = ;
static const struct ide_port_ops cmd648_port_ops = ;
static const struct ide_dma_ops cmd646_rev1_dma_ops = ;
static const struct ide_port_info cmd64x_chipsets[] __devinitdata = ;
static int __devinit cmd64x_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id cmd64x_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, cmd64x_pci_tbl);
static struct pci_driver cmd64x_pci_driver = ;
static int __init cmd64x_ide_init(void)
static void __exit cmd64x_ide_exit(void)
module_init(cmd64x_ide_init);
module_exit(cmd64x_ide_exit);
MODULE_AUTHOR("Eddie Dost, David Miller, Andre Hedrick, Bartlomiej Zolnierkiewicz");
MODULE_DESCRIPTION("PCI driver module for CMD64x IDE");
MODULE_LICENSE("GPL");
