#define	DRIVER_NAME "mcfqspi"
#define	MCFQSPI_BUSCLK			(MCF_BUSCLK / 2)
#define	MCFQSPI_QMR			0x00
#define		MCFQSPI_QMR_MSTR	0x8000
#define		MCFQSPI_QMR_CPOL	0x0200
#define		MCFQSPI_QMR_CPHA	0x0100
#define	MCFQSPI_QDLYR			0x04
#define		MCFQSPI_QDLYR_SPE	0x8000
#define	MCFQSPI_QWR			0x08
#define		MCFQSPI_QWR_HALT	0x8000
#define		MCFQSPI_QWR_WREN	0x4000
#define		MCFQSPI_QWR_CSIV	0x1000
#define	MCFQSPI_QIR			0x0C
#define		MCFQSPI_QIR_WCEFB	0x8000
#define		MCFQSPI_QIR_ABRTB	0x4000
#define		MCFQSPI_QIR_ABRTL	0x1000
#define		MCFQSPI_QIR_WCEFE	0x0800
#define		MCFQSPI_QIR_ABRTE	0x0400
#define		MCFQSPI_QIR_SPIFE	0x0100
#define		MCFQSPI_QIR_WCEF	0x0008
#define		MCFQSPI_QIR_ABRT	0x0004
#define		MCFQSPI_QIR_SPIF	0x0001
#define	MCFQSPI_QAR			0x010
#define		MCFQSPI_QAR_TXBUF	0x00
#define		MCFQSPI_QAR_RXBUF	0x10
#define		MCFQSPI_QAR_CMDBUF	0x20
#define	MCFQSPI_QDR			0x014
#define	MCFQSPI_QCR			0x014
#define		MCFQSPI_QCR_CONT	0x8000
#define		MCFQSPI_QCR_BITSE	0x4000
#define		MCFQSPI_QCR_DT		0x2000
struct mcfqspi ;
static void mcfqspi_wr_qmr(struct mcfqspi *mcfqspi, u16 val)
static void mcfqspi_wr_qdlyr(struct mcfqspi *mcfqspi, u16 val)
static u16 mcfqspi_rd_qdlyr(struct mcfqspi *mcfqspi)
static void mcfqspi_wr_qwr(struct mcfqspi *mcfqspi, u16 val)
static void mcfqspi_wr_qir(struct mcfqspi *mcfqspi, u16 val)
static void mcfqspi_wr_qar(struct mcfqspi *mcfqspi, u16 val)
static void mcfqspi_wr_qdr(struct mcfqspi *mcfqspi, u16 val)
static u16 mcfqspi_rd_qdr(struct mcfqspi *mcfqspi)
static void mcfqspi_cs_select(struct mcfqspi *mcfqspi, u8 chip_select,
bool cs_high)
static void mcfqspi_cs_deselect(struct mcfqspi *mcfqspi, u8 chip_select,
bool cs_high)
static int mcfqspi_cs_setup(struct mcfqspi *mcfqspi)
static void mcfqspi_cs_teardown(struct mcfqspi *mcfqspi)
static u8 mcfqspi_qmr_baud(u32 speed_hz)
static bool mcfqspi_qdlyr_spe(struct mcfqspi *mcfqspi)
static irqreturn_t mcfqspi_irq_handler(int this_irq, void *dev_id)
static void mcfqspi_transfer_msg8(struct mcfqspi *mcfqspi, unsigned count,
const u8 *txbuf, u8 *rxbuf)
static void mcfqspi_transfer_msg16(struct mcfqspi *mcfqspi, unsigned count,
const u16 *txbuf, u16 *rxbuf)
static void mcfqspi_work(struct work_struct *work)
static int mcfqspi_transfer(struct spi_device *spi, struct spi_message *msg)
static int mcfqspi_setup(struct spi_device *spi)
static int __devinit mcfqspi_probe(struct platform_device *pdev)
static int __devexit mcfqspi_remove(struct platform_device *pdev)
static int mcfqspi_suspend(struct device *dev)
static int mcfqspi_resume(struct device *dev)
static struct dev_pm_ops mcfqspi_dev_pm_ops = ;
#define	MCFQSPI_DEV_PM_OPS	(&mcfqspi_dev_pm_ops)
#define	MCFQSPI_DEV_PM_OPS	NULL
static struct platform_driver mcfqspi_driver = ;
static int __init mcfqspi_init(void)
module_init(mcfqspi_init);
static void __exit mcfqspi_exit(void)
module_exit(mcfqspi_exit);
MODULE_AUTHOR("Steven King <sfking@fdwdc.com>");
MODULE_DESCRIPTION("Coldfire QSPI Controller Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRIVER_NAME);
