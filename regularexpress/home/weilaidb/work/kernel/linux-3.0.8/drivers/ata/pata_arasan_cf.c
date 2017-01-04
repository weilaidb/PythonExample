#define DRIVER_NAME	"arasan_cf"
#define TIMEOUT		msecs_to_jiffies(3000)
#define CFI_STS			0x000
#define STS_CHG				(1)
#define BIN_AUDIO_OUT			(1 << 1)
#define CARD_DETECT1			(1 << 2)
#define CARD_DETECT2			(1 << 3)
#define INP_ACK				(1 << 4)
#define CARD_READY			(1 << 5)
#define IO_READY			(1 << 6)
#define B16_IO_PORT_SEL			(1 << 7)
#define IRQ_STS			0x004
#define IRQ_EN			0x008
#define CARD_DETECT_IRQ			(1)
#define STATUS_CHNG_IRQ			(1 << 1)
#define MEM_MODE_IRQ			(1 << 2)
#define IO_MODE_IRQ			(1 << 3)
#define TRUE_IDE_MODE_IRQ		(1 << 8)
#define PIO_XFER_ERR_IRQ		(1 << 9)
#define BUF_AVAIL_IRQ			(1 << 10)
#define XFER_DONE_IRQ			(1 << 11)
#define IGNORED_IRQS	(STATUS_CHNG_IRQ | MEM_MODE_IRQ | IO_MODE_IRQ |\
TRUE_IDE_MODE_IRQ)
#define TRUE_IDE_IRQS	(CARD_DETECT_IRQ | PIO_XFER_ERR_IRQ |\
BUF_AVAIL_IRQ | XFER_DONE_IRQ)
#define OP_MODE			0x00C
#define CARD_MODE_MASK			(0x3)
#define MEM_MODE			(0x0)
#define IO_MODE				(0x1)
#define TRUE_IDE_MODE			(0x2)
#define CARD_TYPE_MASK			(1 << 2)
#define CF_CARD				(0)
#define CF_PLUS_CARD			(1 << 2)
#define CARD_RESET			(1 << 3)
#define CFHOST_ENB			(1 << 4)
#define OUTPUTS_TRISTATE		(1 << 5)
#define ULTRA_DMA_ENB			(1 << 8)
#define MULTI_WORD_DMA_ENB		(1 << 9)
#define DRQ_BLOCK_SIZE_MASK		(0x3 << 11)
#define DRQ_BLOCK_SIZE_512		(0)
#define DRQ_BLOCK_SIZE_1024		(1 << 11)
#define DRQ_BLOCK_SIZE_2048		(2 << 11)
#define DRQ_BLOCK_SIZE_4096		(3 << 11)
#define CLK_CFG			0x010
#define CF_IF_CLK_MASK			(0XF)
#define TM_CFG			0x014
#define MEM_MODE_TIMING_MASK		(0x3)
#define MEM_MODE_TIMING_250NS		(0x0)
#define MEM_MODE_TIMING_120NS		(0x1)
#define MEM_MODE_TIMING_100NS		(0x2)
#define MEM_MODE_TIMING_80NS		(0x3)
#define IO_MODE_TIMING_MASK		(0x3 << 2)
#define IO_MODE_TIMING_250NS		(0x0 << 2)
#define IO_MODE_TIMING_120NS		(0x1 << 2)
#define IO_MODE_TIMING_100NS		(0x2 << 2)
#define IO_MODE_TIMING_80NS		(0x3 << 2)
#define TRUEIDE_PIO_TIMING_MASK		(0x7 << 4)
#define TRUEIDE_PIO_TIMING_SHIFT	4
#define TRUEIDE_MWORD_DMA_TIMING_MASK	(0x7 << 7)
#define TRUEIDE_MWORD_DMA_TIMING_SHIFT	7
#define ULTRA_DMA_TIMING_MASK		(0x7 << 10)
#define ULTRA_DMA_TIMING_SHIFT		10
#define XFER_ADDR		0x014
#define XFER_ADDR_MASK			(0x7FF)
#define MAX_XFER_COUNT			0x20000u
#define XFER_CTR		0x01C
#define XFER_COUNT_MASK			(0x3FFFF)
#define ADDR_INC_DISABLE		(1 << 24)
#define XFER_WIDTH_MASK			(1 << 25)
#define XFER_WIDTH_8B			(0)
#define XFER_WIDTH_16B			(1 << 25)
#define MEM_TYPE_MASK			(1 << 26)
#define MEM_TYPE_COMMON			(0)
#define MEM_TYPE_ATTRIBUTE		(1 << 26)
#define MEM_IO_XFER_MASK		(1 << 27)
#define MEM_XFER			(0)
#define IO_XFER				(1 << 27)
#define DMA_XFER_MODE			(1 << 28)
#define AHB_BUS_NORMAL_PIO_OPRTN	(~(1 << 29))
#define XFER_DIR_MASK			(1 << 30)
#define XFER_READ			(0)
#define XFER_WRITE			(1 << 30)
#define XFER_START			(1 << 31)
#define WRITE_PORT		0x024
#define READ_PORT		0x028
#define ATA_DATA_PORT		0x030
#define ATA_DATA_PORT_MASK		(0xFFFF)
#define ATA_ERR_FTR		0x034
#define ATA_SC			0x038
#define ATA_SN			0x03C
#define ATA_CL			0x040
#define ATA_CH			0x044
#define ATA_SH			0x048
#define ATA_STS_CMD		0x04C
#define ATA_ASTS_DCTR		0x050
#define EXT_WRITE_PORT		0x200
#define EXT_READ_PORT		0x400
#define FIFO_SIZE	0x200u
#define GIRQ_STS		0x800
#define GIRQ_STS_EN		0x804
#define GIRQ_SGN_EN		0x808
#define GIRQ_CF		(1)
#define GIRQ_XD		(1 << 1)
struct arasan_cf_dev ;
static struct scsi_host_template arasan_cf_sht = ;
static void cf_dumpregs(struct arasan_cf_dev *acdev)
static void cf_ginterrupt_enable(struct arasan_cf_dev *acdev, bool enable)
static inline void
cf_interrupt_enable(struct arasan_cf_dev *acdev, u32 mask, bool enable)
static inline void cf_card_reset(struct arasan_cf_dev *acdev)
static inline void cf_ctrl_reset(struct arasan_cf_dev *acdev)
static void cf_card_detect(struct arasan_cf_dev *acdev, bool hotplugged)
static int cf_init(struct arasan_cf_dev *acdev)
static void cf_exit(struct arasan_cf_dev *acdev)
static void dma_callback(void *dev)
static bool filter(struct dma_chan *chan, void *slave)
static inline void dma_complete(struct arasan_cf_dev *acdev)
static inline int wait4buf(struct arasan_cf_dev *acdev)
static int
dma_xfer(struct arasan_cf_dev *acdev, dma_addr_t src, dma_addr_t dest, u32 len)
static int sg_xfer(struct arasan_cf_dev *acdev, struct scatterlist *sg)
static void data_xfer(struct work_struct *work)
static void delayed_finish(struct work_struct *work)
static irqreturn_t arasan_cf_interrupt(int irq, void *dev)
static void arasan_cf_freeze(struct ata_port *ap)
void arasan_cf_error_handler(struct ata_port *ap)
static void arasan_cf_dma_start(struct arasan_cf_dev *acdev)
unsigned int arasan_cf_qc_issue(struct ata_queued_cmd *qc)
static void arasan_cf_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void arasan_cf_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static struct ata_port_operations arasan_cf_ops = ;
static int __devinit arasan_cf_probe(struct platform_device *pdev)
static int __devexit arasan_cf_remove(struct platform_device *pdev)
static int arasan_cf_suspend(struct device *dev)
static int arasan_cf_resume(struct device *dev)
static const struct dev_pm_ops arasan_cf_pm_ops = ;
static struct platform_driver arasan_cf_driver = ;
static int __init arasan_cf_init(void)
module_init(arasan_cf_init);
static void __exit arasan_cf_exit(void)
module_exit(arasan_cf_exit);
MODULE_AUTHOR("Viresh Kumar <viresh.kumar@st.com>");
MODULE_DESCRIPTION("Arasan ATA Compact Flash driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRIVER_NAME);
