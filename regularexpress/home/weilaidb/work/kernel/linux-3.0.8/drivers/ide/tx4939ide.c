#define MODNAME	"tx4939ide"
#define TX4939IDE_Data			0x000
#define TX4939IDE_Error_Feature		0x001
#define TX4939IDE_Sec			0x002
#define TX4939IDE_LBA0			0x003
#define TX4939IDE_LBA1			0x004
#define TX4939IDE_LBA2			0x005
#define TX4939IDE_DevHead		0x006
#define TX4939IDE_Stat_Cmd		0x007
#define TX4939IDE_AltStat_DevCtl	0x402
#define TX4939IDE_DMA_Cmd	0x800
#define TX4939IDE_DMA_Stat	0x802
#define TX4939IDE_PRD_Ptr	0x804
#define TX4939IDE_Sys_Ctl	0xc00
#define TX4939IDE_Xfer_Cnt_1	0xc08
#define TX4939IDE_Xfer_Cnt_2	0xc0a
#define TX4939IDE_Sec_Cnt	0xc10
#define TX4939IDE_Start_Lo_Addr	0xc18
#define TX4939IDE_Start_Up_Addr	0xc20
#define TX4939IDE_Add_Ctl	0xc28
#define TX4939IDE_Lo_Burst_Cnt	0xc30
#define TX4939IDE_Up_Burst_Cnt	0xc38
#define TX4939IDE_PIO_Addr	0xc88
#define TX4939IDE_H_Rst_Tim	0xc90
#define TX4939IDE_Int_Ctl	0xc98
#define TX4939IDE_Pkt_Cmd	0xcb8
#define TX4939IDE_Bxfer_Cnt_Hi	0xcc0
#define TX4939IDE_Bxfer_Cnt_Lo	0xcc8
#define TX4939IDE_Dev_TErr	0xcd0
#define TX4939IDE_Pkt_Xfer_Ctl	0xcd8
#define TX4939IDE_Start_TAddr	0xce0
#define TX4939IDE_INT_ADDRERR	0x80
#define TX4939IDE_INT_REACHMUL	0x40
#define TX4939IDE_INT_DEVTIMING	0x20
#define TX4939IDE_INT_UDMATERM	0x10
#define TX4939IDE_INT_TIMER	0x08
#define TX4939IDE_INT_BUSERR	0x04
#define TX4939IDE_INT_XFEREND	0x02
#define TX4939IDE_INT_HOST	0x01
#define TX4939IDE_IGNORE_INTS	\
(TX4939IDE_INT_ADDRERR | TX4939IDE_INT_REACHMUL | \
TX4939IDE_INT_DEVTIMING | TX4939IDE_INT_UDMATERM | \
TX4939IDE_INT_TIMER | TX4939IDE_INT_XFEREND)
#define tx4939ide_swizzlel(a)	((a) ^ 4)
#define tx4939ide_swizzlew(a)	((a) ^ 6)
#define tx4939ide_swizzleb(a)	((a) ^ 7)
#define tx4939ide_swizzlel(a)	(a)
#define tx4939ide_swizzlew(a)	(a)
#define tx4939ide_swizzleb(a)	(a)
static u16 tx4939ide_readw(void __iomem *base, u32 reg)
static u8 tx4939ide_readb(void __iomem *base, u32 reg)
static void tx4939ide_writel(u32 val, void __iomem *base, u32 reg)
static void tx4939ide_writew(u16 val, void __iomem *base, u32 reg)
static void tx4939ide_writeb(u8 val, void __iomem *base, u32 reg)
#define TX4939IDE_BASE(hwif)	((void __iomem *)(hwif)->extra_base)
static void tx4939ide_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void tx4939ide_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static u16 tx4939ide_check_error_ints(ide_hwif_t *hwif)
static void tx4939ide_clear_irq(ide_drive_t *drive)
static u8 tx4939ide_cable_detect(ide_hwif_t *hwif)
static void tx4939ide_dma_host_set(ide_drive_t *drive, int on)
#define tx4939ide_dma_host_set	ide_dma_host_set
static u8 tx4939ide_clear_dma_status(void __iomem *base)
static int tx4939ide_build_dmatable(ide_drive_t *drive, struct ide_cmd *cmd)
#define tx4939ide_build_dmatable	ide_build_dmatable
static int tx4939ide_dma_setup(ide_drive_t *drive, struct ide_cmd *cmd)
static int tx4939ide_dma_end(ide_drive_t *drive)
static int tx4939ide_dma_test_irq(ide_drive_t *drive)
static u8 tx4939ide_dma_sff_read_status(ide_hwif_t *hwif)
#define tx4939ide_dma_sff_read_status ide_dma_sff_read_status
static void tx4939ide_init_hwif(ide_hwif_t *hwif)
static int tx4939ide_init_dma(ide_hwif_t *hwif, const struct ide_port_info *d)
static void tx4939ide_tf_load_fixup(ide_drive_t *drive)
static void tx4939ide_tf_load(ide_drive_t *drive, struct ide_taskfile *tf,
u8 valid)
static void tx4939ide_input_data_swap(ide_drive_t *drive, struct ide_cmd *cmd,
void *buf, unsigned int len)
static void tx4939ide_output_data_swap(ide_drive_t *drive, struct ide_cmd *cmd,
void *buf, unsigned int len)
static const struct ide_tp_ops tx4939ide_tp_ops = ;
static const struct ide_tp_ops tx4939ide_tp_ops = ;
static const struct ide_port_ops tx4939ide_port_ops = ;
static const struct ide_dma_ops tx4939ide_dma_ops = ;
static const struct ide_port_info tx4939ide_port_info __initdata = ;
static int __init tx4939ide_probe(struct platform_device *pdev)
static int __exit tx4939ide_remove(struct platform_device *pdev)
static int tx4939ide_resume(struct platform_device *dev)
#define tx4939ide_resume	NULL
static struct platform_driver tx4939ide_driver = ;
static int __init tx4939ide_init(void)
static void __exit tx4939ide_exit(void)
module_init(tx4939ide_init);
module_exit(tx4939ide_exit);
MODULE_DESCRIPTION("TX4939 internal IDE driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:tx4939ide");
