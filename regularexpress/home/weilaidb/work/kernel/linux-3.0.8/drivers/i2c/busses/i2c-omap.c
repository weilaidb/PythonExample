#define OMAP_I2C_REV_2			0x20
#define OMAP_I2C_REV_ON_2430		0x36
#define OMAP_I2C_REV_ON_3430		0x3C
#define OMAP_I2C_REV_ON_4430		0x40
#define OMAP_I2C_TIMEOUT (msecs_to_jiffies(1000))
enum ;
#define OMAP_I2C_IE_XDR		(1 << 14)
#define OMAP_I2C_IE_RDR		(1 << 13)
#define OMAP_I2C_IE_XRDY	(1 << 4)
#define OMAP_I2C_IE_RRDY	(1 << 3)
#define OMAP_I2C_IE_ARDY	(1 << 2)
#define OMAP_I2C_IE_NACK	(1 << 1)
#define OMAP_I2C_IE_AL		(1 << 0)
#define OMAP_I2C_STAT_XDR	(1 << 14)
#define OMAP_I2C_STAT_RDR	(1 << 13)
#define OMAP_I2C_STAT_BB	(1 << 12)
#define OMAP_I2C_STAT_ROVR	(1 << 11)
#define OMAP_I2C_STAT_XUDF	(1 << 10)
#define OMAP_I2C_STAT_AAS	(1 << 9)
#define OMAP_I2C_STAT_AD0	(1 << 8)
#define OMAP_I2C_STAT_XRDY	(1 << 4)
#define OMAP_I2C_STAT_RRDY	(1 << 3)
#define OMAP_I2C_STAT_ARDY	(1 << 2)
#define OMAP_I2C_STAT_NACK	(1 << 1)
#define OMAP_I2C_STAT_AL	(1 << 0)
#define OMAP_I2C_WE_XDR_WE	(1 << 14)
#define OMAP_I2C_WE_RDR_WE	(1 << 13)
#define OMAP_I2C_WE_AAS_WE	(1 << 9)
#define OMAP_I2C_WE_BF_WE	(1 << 8)
#define OMAP_I2C_WE_STC_WE	(1 << 6)
#define OMAP_I2C_WE_GC_WE	(1 << 5)
#define OMAP_I2C_WE_DRDY_WE	(1 << 3)
#define OMAP_I2C_WE_ARDY_WE	(1 << 2)
#define OMAP_I2C_WE_NACK_WE	(1 << 1)
#define OMAP_I2C_WE_AL_WE	(1 << 0)
#define OMAP_I2C_WE_ALL		(OMAP_I2C_WE_XDR_WE | OMAP_I2C_WE_RDR_WE | \
OMAP_I2C_WE_AAS_WE | OMAP_I2C_WE_BF_WE | \
OMAP_I2C_WE_STC_WE | OMAP_I2C_WE_GC_WE | \
OMAP_I2C_WE_DRDY_WE | OMAP_I2C_WE_ARDY_WE | \
OMAP_I2C_WE_NACK_WE | OMAP_I2C_WE_AL_WE)
#define OMAP_I2C_BUF_RDMA_EN	(1 << 15)
#define OMAP_I2C_BUF_RXFIF_CLR	(1 << 14)
#define OMAP_I2C_BUF_XDMA_EN	(1 << 7)
#define OMAP_I2C_BUF_TXFIF_CLR	(1 << 6)
#define OMAP_I2C_CON_EN		(1 << 15)
#define OMAP_I2C_CON_BE		(1 << 14)
#define OMAP_I2C_CON_OPMODE_HS	(1 << 12)
#define OMAP_I2C_CON_STB	(1 << 11)
#define OMAP_I2C_CON_MST	(1 << 10)
#define OMAP_I2C_CON_TRX	(1 << 9)
#define OMAP_I2C_CON_XA		(1 << 8)
#define OMAP_I2C_CON_RM		(1 << 2)
#define OMAP_I2C_CON_STP	(1 << 1)
#define OMAP_I2C_CON_STT	(1 << 0)
#define OMAP_I2C_SCLL_HSSCLL	8
#define OMAP_I2C_SCLH_HSSCLH	8
#define OMAP_I2C_SYSTEST_ST_EN		(1 << 15)
#define OMAP_I2C_SYSTEST_FREE		(1 << 14)
#define OMAP_I2C_SYSTEST_TMODE_MASK	(3 << 12)
#define OMAP_I2C_SYSTEST_TMODE_SHIFT	(12)
#define OMAP_I2C_SYSTEST_SCL_I		(1 << 3)
#define OMAP_I2C_SYSTEST_SCL_O		(1 << 2)
#define OMAP_I2C_SYSTEST_SDA_I		(1 << 1)
#define OMAP_I2C_SYSTEST_SDA_O		(1 << 0)
#define SYSS_RESETDONE_MASK		(1 << 0)
#define SYSC_CLOCKACTIVITY_MASK		(0x3 << 8)
#define SYSC_SIDLEMODE_MASK		(0x3 << 3)
#define SYSC_ENAWAKEUP_MASK		(1 << 2)
#define SYSC_SOFTRESET_MASK		(1 << 1)
#define SYSC_AUTOIDLE_MASK		(1 << 0)
#define SYSC_IDLEMODE_SMART		0x2
#define SYSC_CLOCKACTIVITY_FCLK		0x2
#define I2C_OMAP_ERRATA_I207		(1 << 0)
#define I2C_OMAP3_1P153			(1 << 1)
struct omap_i2c_dev ;
const static u8 reg_map[] = ;
const static u8 omap4_reg_map[] = ;
static inline void omap_i2c_write_reg(struct omap_i2c_dev *i2c_dev,
int reg, u16 val)
static inline u16 omap_i2c_read_reg(struct omap_i2c_dev *i2c_dev, int reg)
static void omap_i2c_unidle(struct omap_i2c_dev *dev)
static void omap_i2c_idle(struct omap_i2c_dev *dev)
static int omap_i2c_init(struct omap_i2c_dev *dev)
static int omap_i2c_wait_for_bb(struct omap_i2c_dev *dev)
static int omap_i2c_xfer_msg(struct i2c_adapter *adap,
struct i2c_msg *msg, int stop)
static int
omap_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg msgs[], int num)
static u32
omap_i2c_func(struct i2c_adapter *adap)
static inline void
omap_i2c_complete_cmd(struct omap_i2c_dev *dev, u16 err)
static inline void
omap_i2c_ack_stat(struct omap_i2c_dev *dev, u16 stat)
static inline void i2c_omap_errata_i207(struct omap_i2c_dev *dev, u16 stat)
static irqreturn_t
omap_i2c_rev1_isr(int this_irq, void *dev_id)
#define omap_i2c_rev1_isr		NULL
static int errata_omap3_1p153(struct omap_i2c_dev *dev, u16 *stat, int *err)
static irqreturn_t
omap_i2c_isr(int this_irq, void *dev_id)
static const struct i2c_algorithm omap_i2c_algo = ;
static int __devinit
omap_i2c_probe(struct platform_device *pdev)
static int
omap_i2c_remove(struct platform_device *pdev)
static int omap_i2c_suspend(struct device *dev)
static int omap_i2c_resume(struct device *dev)
static struct dev_pm_ops omap_i2c_pm_ops = ;
#define OMAP_I2C_PM_OPS (&omap_i2c_pm_ops)
#define OMAP_I2C_PM_OPS NULL
static struct platform_driver omap_i2c_driver = ;
static int __init
omap_i2c_init_driver(void)
subsys_initcall(omap_i2c_init_driver);
static void __exit omap_i2c_exit_driver(void)
module_exit(omap_i2c_exit_driver);
MODULE_AUTHOR("MontaVista Software, Inc. (and others)");
MODULE_DESCRIPTION("TI OMAP I2C bus adapter");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:omap_i2c");
