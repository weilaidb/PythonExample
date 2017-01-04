#define DRV_NAME		"pata-bf54x"
#define DRV_VERSION		"0.9"
#define ATA_REG_CTRL		0x0E
#define ATA_REG_ALTSTATUS	ATA_REG_CTRL
#define ATAPI_OFFSET_CONTROL		0x00
#define ATAPI_OFFSET_STATUS		0x04
#define ATAPI_OFFSET_DEV_ADDR		0x08
#define ATAPI_OFFSET_DEV_TXBUF		0x0c
#define ATAPI_OFFSET_DEV_RXBUF		0x10
#define ATAPI_OFFSET_INT_MASK		0x14
#define ATAPI_OFFSET_INT_STATUS		0x18
#define ATAPI_OFFSET_XFER_LEN		0x1c
#define ATAPI_OFFSET_LINE_STATUS	0x20
#define ATAPI_OFFSET_SM_STATE		0x24
#define ATAPI_OFFSET_TERMINATE		0x28
#define ATAPI_OFFSET_PIO_TFRCNT		0x2c
#define ATAPI_OFFSET_DMA_TFRCNT		0x30
#define ATAPI_OFFSET_UMAIN_TFRCNT	0x34
#define ATAPI_OFFSET_UDMAOUT_TFRCNT	0x38
#define ATAPI_OFFSET_REG_TIM_0		0x40
#define ATAPI_OFFSET_PIO_TIM_0		0x44
#define ATAPI_OFFSET_PIO_TIM_1		0x48
#define ATAPI_OFFSET_MULTI_TIM_0	0x50
#define ATAPI_OFFSET_MULTI_TIM_1	0x54
#define ATAPI_OFFSET_MULTI_TIM_2	0x58
#define ATAPI_OFFSET_ULTRA_TIM_0	0x60
#define ATAPI_OFFSET_ULTRA_TIM_1	0x64
#define ATAPI_OFFSET_ULTRA_TIM_2	0x68
#define ATAPI_OFFSET_ULTRA_TIM_3	0x6c
#define ATAPI_GET_CONTROL(base)\
bfin_read16(base + ATAPI_OFFSET_CONTROL)
#define ATAPI_SET_CONTROL(base, val)\
bfin_write16(base + ATAPI_OFFSET_CONTROL, val)
#define ATAPI_GET_STATUS(base)\
bfin_read16(base + ATAPI_OFFSET_STATUS)
#define ATAPI_GET_DEV_ADDR(base)\
bfin_read16(base + ATAPI_OFFSET_DEV_ADDR)
#define ATAPI_SET_DEV_ADDR(base, val)\
bfin_write16(base + ATAPI_OFFSET_DEV_ADDR, val)
#define ATAPI_GET_DEV_TXBUF(base)\
bfin_read16(base + ATAPI_OFFSET_DEV_TXBUF)
#define ATAPI_SET_DEV_TXBUF(base, val)\
bfin_write16(base + ATAPI_OFFSET_DEV_TXBUF, val)
#define ATAPI_GET_DEV_RXBUF(base)\
bfin_read16(base + ATAPI_OFFSET_DEV_RXBUF)
#define ATAPI_SET_DEV_RXBUF(base, val)\
bfin_write16(base + ATAPI_OFFSET_DEV_RXBUF, val)
#define ATAPI_GET_INT_MASK(base)\
bfin_read16(base + ATAPI_OFFSET_INT_MASK)
#define ATAPI_SET_INT_MASK(base, val)\
bfin_write16(base + ATAPI_OFFSET_INT_MASK, val)
#define ATAPI_GET_INT_STATUS(base)\
bfin_read16(base + ATAPI_OFFSET_INT_STATUS)
#define ATAPI_SET_INT_STATUS(base, val)\
bfin_write16(base + ATAPI_OFFSET_INT_STATUS, val)
#define ATAPI_GET_XFER_LEN(base)\
bfin_read16(base + ATAPI_OFFSET_XFER_LEN)
#define ATAPI_SET_XFER_LEN(base, val)\
bfin_write16(base + ATAPI_OFFSET_XFER_LEN, val)
#define ATAPI_GET_LINE_STATUS(base)\
bfin_read16(base + ATAPI_OFFSET_LINE_STATUS)
#define ATAPI_GET_SM_STATE(base)\
bfin_read16(base + ATAPI_OFFSET_SM_STATE)
#define ATAPI_GET_TERMINATE(base)\
bfin_read16(base + ATAPI_OFFSET_TERMINATE)
#define ATAPI_SET_TERMINATE(base, val)\
bfin_write16(base + ATAPI_OFFSET_TERMINATE, val)
#define ATAPI_GET_PIO_TFRCNT(base)\
bfin_read16(base + ATAPI_OFFSET_PIO_TFRCNT)
#define ATAPI_GET_DMA_TFRCNT(base)\
bfin_read16(base + ATAPI_OFFSET_DMA_TFRCNT)
#define ATAPI_GET_UMAIN_TFRCNT(base)\
bfin_read16(base + ATAPI_OFFSET_UMAIN_TFRCNT)
#define ATAPI_GET_UDMAOUT_TFRCNT(base)\
bfin_read16(base + ATAPI_OFFSET_UDMAOUT_TFRCNT)
#define ATAPI_GET_REG_TIM_0(base)\
bfin_read16(base + ATAPI_OFFSET_REG_TIM_0)
#define ATAPI_SET_REG_TIM_0(base, val)\
bfin_write16(base + ATAPI_OFFSET_REG_TIM_0, val)
#define ATAPI_GET_PIO_TIM_0(base)\
bfin_read16(base + ATAPI_OFFSET_PIO_TIM_0)
#define ATAPI_SET_PIO_TIM_0(base, val)\
bfin_write16(base + ATAPI_OFFSET_PIO_TIM_0, val)
#define ATAPI_GET_PIO_TIM_1(base)\
bfin_read16(base + ATAPI_OFFSET_PIO_TIM_1)
#define ATAPI_SET_PIO_TIM_1(base, val)\
bfin_write16(base + ATAPI_OFFSET_PIO_TIM_1, val)
#define ATAPI_GET_MULTI_TIM_0(base)\
bfin_read16(base + ATAPI_OFFSET_MULTI_TIM_0)
#define ATAPI_SET_MULTI_TIM_0(base, val)\
bfin_write16(base + ATAPI_OFFSET_MULTI_TIM_0, val)
#define ATAPI_GET_MULTI_TIM_1(base)\
bfin_read16(base + ATAPI_OFFSET_MULTI_TIM_1)
#define ATAPI_SET_MULTI_TIM_1(base, val)\
bfin_write16(base + ATAPI_OFFSET_MULTI_TIM_1, val)
#define ATAPI_GET_MULTI_TIM_2(base)\
bfin_read16(base + ATAPI_OFFSET_MULTI_TIM_2)
#define ATAPI_SET_MULTI_TIM_2(base, val)\
bfin_write16(base + ATAPI_OFFSET_MULTI_TIM_2, val)
#define ATAPI_GET_ULTRA_TIM_0(base)\
bfin_read16(base + ATAPI_OFFSET_ULTRA_TIM_0)
#define ATAPI_SET_ULTRA_TIM_0(base, val)\
bfin_write16(base + ATAPI_OFFSET_ULTRA_TIM_0, val)
#define ATAPI_GET_ULTRA_TIM_1(base)\
bfin_read16(base + ATAPI_OFFSET_ULTRA_TIM_1)
#define ATAPI_SET_ULTRA_TIM_1(base, val)\
bfin_write16(base + ATAPI_OFFSET_ULTRA_TIM_1, val)
#define ATAPI_GET_ULTRA_TIM_2(base)\
bfin_read16(base + ATAPI_OFFSET_ULTRA_TIM_2)
#define ATAPI_SET_ULTRA_TIM_2(base, val)\
bfin_write16(base + ATAPI_OFFSET_ULTRA_TIM_2, val)
#define ATAPI_GET_ULTRA_TIM_3(base)\
bfin_read16(base + ATAPI_OFFSET_ULTRA_TIM_3)
#define ATAPI_SET_ULTRA_TIM_3(base, val)\
bfin_write16(base + ATAPI_OFFSET_ULTRA_TIM_3, val)
static const u32 pio_fsclk[] =
;
static const u32 mdma_fsclk[] = ;
static const u32 udma_fsclk[] =
;
static const u32 reg_t0min[]   = ;
static const u32 reg_t2min[]   = ;
static const u32 reg_teocmin[] = ;
static const u32 pio_t0min[]   = ;
static const u32 pio_t1min[]   = ;
static const u32 pio_t2min[]   = ;
static const u32 pio_teocmin[] = ;
static const u32 pio_t4min[]   = ;
static const u32 mdma_t0min[]  = ;
static const u32 mdma_tdmin[]  = ;
static const u32 mdma_thmin[]  = ;
static const u32 mdma_tjmin[]  = ;
static const u32 mdma_tkrmin[] = ;
static const u32 mdma_tkwmin[] = ;
static const u32 mdma_tmmin[]  = ;
static const u32 mdma_tzmax[]  = ;
static const u32 udma_tcycmin[]  = ;
static const u32 udma_tdvsmin[]  = ;
static const u32 udma_tenvmax[]  = ;
static const u32 udma_trpmin[]   = ;
static const u32 udma_tmin[]     = ;
static const u32 udma_tmlimin = 20;
static const u32 udma_tzahmin = 20;
static const u32 udma_tenvmin = 20;
static const u32 udma_tackmin = 20;
static const u32 udma_tssmin = 50;
static unsigned short num_clocks_min(unsigned long tmin,
unsigned long fsclk)
static void bfin_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void bfin_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static inline void wait_complete(void __iomem *base, unsigned short mask)
static void write_atapi_register(void __iomem *base,
unsigned long ata_reg, unsigned short value)
static unsigned short read_atapi_register(void __iomem *base,
unsigned long ata_reg)
static void write_atapi_data(void __iomem *base,
int len, unsigned short *buf)
static void read_atapi_data(void __iomem *base,
int len, unsigned short *buf)
static void bfin_tf_load(struct ata_port *ap, const struct ata_taskfile *tf)
static u8 bfin_check_status(struct ata_port *ap)
static void bfin_tf_read(struct ata_port *ap, struct ata_taskfile *tf)
static void bfin_exec_command(struct ata_port *ap,
const struct ata_taskfile *tf)
static u8 bfin_check_altstatus(struct ata_port *ap)
static void bfin_dev_select(struct ata_port *ap, unsigned int device)
static void bfin_set_devctl(struct ata_port *ap, u8 ctl)
static void bfin_bmdma_setup(struct ata_queued_cmd *qc)
static void bfin_bmdma_start(struct ata_queued_cmd *qc)
static void bfin_bmdma_stop(struct ata_queued_cmd *qc)
static unsigned int bfin_devchk(struct ata_port *ap,
unsigned int device)
static void bfin_bus_post_reset(struct ata_port *ap, unsigned int devmask)
static unsigned int bfin_bus_softreset(struct ata_port *ap,
unsigned int devmask)
static int bfin_softreset(struct ata_link *link, unsigned int *classes,
unsigned long deadline)
static unsigned char bfin_bmdma_status(struct ata_port *ap)
static unsigned int bfin_data_xfer(struct ata_device *dev, unsigned char *buf,
unsigned int buflen, int rw)
static void bfin_irq_clear(struct ata_port *ap)
void bfin_thaw(struct ata_port *ap)
static void bfin_postreset(struct ata_link *link, unsigned int *classes)
static void bfin_port_stop(struct ata_port *ap)
static int bfin_port_start(struct ata_port *ap)
static unsigned int bfin_ata_host_intr(struct ata_port *ap,
struct ata_queued_cmd *qc)
static irqreturn_t bfin_ata_interrupt(int irq, void *dev_instance)
static struct scsi_host_template bfin_sht = ;
static struct ata_port_operations bfin_pata_ops = ;
static struct ata_port_info bfin_port_info[] = ;
static int bfin_reset_controller(struct ata_host *host)
static unsigned short atapi_io_port[] = ;
static int __devinit bfin_atapi_probe(struct platform_device *pdev)
static int __devexit bfin_atapi_remove(struct platform_device *pdev)
static int bfin_atapi_suspend(struct platform_device *pdev, pm_message_t state)
static int bfin_atapi_resume(struct platform_device *pdev)
#define bfin_atapi_suspend NULL
#define bfin_atapi_resume NULL
static struct platform_driver bfin_atapi_driver = ;
#define ATAPI_MODE_SIZE		10
static char bfin_atapi_mode[ATAPI_MODE_SIZE];
static int __init bfin_atapi_init(void)
static void __exit bfin_atapi_exit(void)
module_init(bfin_atapi_init);
module_exit(bfin_atapi_exit);
module_param_string(bfin_atapi_mode, bfin_atapi_mode, ATAPI_MODE_SIZE, 0);
MODULE_AUTHOR("Sonic Zhang <sonic.zhang@analog.com>");
MODULE_DESCRIPTION("PATA driver for blackfin 54x ATAPI controller");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_ALIAS("platform:" DRV_NAME);
