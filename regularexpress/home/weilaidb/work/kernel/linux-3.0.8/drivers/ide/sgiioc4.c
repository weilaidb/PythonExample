#define DRV_NAME "SGIIOC4"
#define IOC4_CMD_OFFSET		0x100
#define IOC4_CTRL_OFFSET	0x120
#define IOC4_DMA_OFFSET		0x140
#define IOC4_INTR_OFFSET	0x0
#define IOC4_TIMING		0x00
#define IOC4_DMA_PTR_L		0x01
#define IOC4_DMA_PTR_H		0x02
#define IOC4_DMA_ADDR_L		0x03
#define IOC4_DMA_ADDR_H		0x04
#define IOC4_BC_DEV		0x05
#define IOC4_BC_MEM		0x06
#define	IOC4_DMA_CTRL		0x07
#define	IOC4_DMA_END_ADDR	0x08
#define	IOC4_S_DMA_START	0x01
#define	IOC4_S_DMA_STOP		0x02
#define	IOC4_S_DMA_DIR		0x04
#define	IOC4_S_DMA_ACTIVE	0x08
#define	IOC4_S_DMA_ERROR	0x10
#define	IOC4_ATA_MEMERR		0x02
#define	IOC4_DMA_WRITE		0x04
#define	IOC4_DMA_READ		0x00
#define IOC4_INTR_REG		0x03
#define	IOC4_INTR_SET		0x05
#define	IOC4_INTR_CLEAR		0x07
#define IOC4_IDE_CACHELINE_SIZE	128
#define IOC4_CMD_CTL_BLK_SIZE	0x20
#define IOC4_SUPPORTED_FIRMWARE_REV 46
struct ioc4_dma_regs ;
#define IOC4_PRD_BYTES		16
#define IOC4_PRD_ENTRIES	(PAGE_SIZE / (4 * IOC4_PRD_BYTES))
static void sgiioc4_init_hwif_ports(struct ide_hw *hw,
unsigned long data_port,
unsigned long ctrl_port,
unsigned long irq_port)
static int sgiioc4_checkirq(ide_hwif_t *hwif)
static u8 sgiioc4_read_status(ide_hwif_t *);
static int sgiioc4_clearirq(ide_drive_t *drive)
static void sgiioc4_dma_start(ide_drive_t *drive)
static u32 sgiioc4_ide_dma_stop(ide_hwif_t *hwif, u64 dma_base)
static int sgiioc4_dma_end(ide_drive_t *drive)
static void sgiioc4_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static int sgiioc4_dma_test_irq(ide_drive_t *drive)
static void sgiioc4_dma_host_set(ide_drive_t *drive, int on)
static void sgiioc4_resetproc(ide_drive_t *drive)
static void sgiioc4_dma_lost_irq(ide_drive_t *drive)
static u8 sgiioc4_read_status(ide_hwif_t *hwif)
static int __devinit ide_dma_sgiioc4(ide_hwif_t *hwif,
const struct ide_port_info *d)
static void sgiioc4_configure_for_dma(int dma_direction, ide_drive_t *drive)
static int sgiioc4_build_dmatable(ide_drive_t *drive, struct ide_cmd *cmd)
static int sgiioc4_dma_setup(ide_drive_t *drive, struct ide_cmd *cmd)
static const struct ide_tp_ops sgiioc4_tp_ops = ;
static const struct ide_port_ops sgiioc4_port_ops = ;
static const struct ide_dma_ops sgiioc4_dma_ops = ;
static const struct ide_port_info sgiioc4_port_info __devinitconst = ;
static int __devinit sgiioc4_ide_setup_pci_device(struct pci_dev *dev)
static unsigned int __devinit pci_init_sgiioc4(struct pci_dev *dev)
int __devinit ioc4_ide_attach_one(struct ioc4_driver_data *idd)
static struct ioc4_submodule __devinitdata ioc4_ide_submodule = ;
static int __init ioc4_ide_init(void)
late_initcall(ioc4_ide_init);
MODULE_AUTHOR("Aniket Malatpure/Jeremy Higdon");
MODULE_DESCRIPTION("IDE PCI driver module for SGI IOC4 Base-IO Card");
MODULE_LICENSE("GPL");
