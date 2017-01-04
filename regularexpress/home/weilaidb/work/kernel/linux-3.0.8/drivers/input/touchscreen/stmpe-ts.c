#define STMPE_REG_INT_STA		0x0B
#define STMPE_REG_ADC_CTRL1		0x20
#define STMPE_REG_ADC_CTRL2		0x21
#define STMPE_REG_TSC_CTRL		0x40
#define STMPE_REG_TSC_CFG		0x41
#define STMPE_REG_FIFO_TH		0x4A
#define STMPE_REG_FIFO_STA		0x4B
#define STMPE_REG_FIFO_SIZE		0x4C
#define STMPE_REG_TSC_DATA_XYZ		0x52
#define STMPE_REG_TSC_FRACTION_Z	0x56
#define STMPE_REG_TSC_I_DRIVE		0x58
#define OP_MOD_XYZ			0
#define STMPE_TSC_CTRL_TSC_EN		(1<<0)
#define STMPE_FIFO_STA_RESET		(1<<0)
#define STMPE_IRQ_TOUCH_DET		0
#define SAMPLE_TIME(x)			((x & 0xf) << 4)
#define MOD_12B(x)			((x & 0x1) << 3)
#define REF_SEL(x)			((x & 0x1) << 1)
#define ADC_FREQ(x)			(x & 0x3)
#define AVE_CTRL(x)			((x & 0x3) << 6)
#define DET_DELAY(x)			((x & 0x7) << 3)
#define SETTLING(x)			(x & 0x7)
#define FRACTION_Z(x)			(x & 0x7)
#define I_DRIVE(x)			(x & 0x1)
#define OP_MODE(x)			((x & 0x7) << 1)
#define STMPE_TS_NAME			"stmpe-ts"
#define XY_MASK				0xfff
struct stmpe_touch ;
static int __stmpe_reset_fifo(struct stmpe *stmpe)
static void stmpe_work(struct work_struct *work)
static irqreturn_t stmpe_ts_handler(int irq, void *data)
static int __devinit stmpe_init_hw(struct stmpe_touch *ts)
static int stmpe_ts_open(struct input_dev *dev)
static void stmpe_ts_close(struct input_dev *dev)
static int __devinit stmpe_input_probe(struct platform_device *pdev)
static int __devexit stmpe_ts_remove(struct platform_device *pdev)
static struct platform_driver stmpe_ts_driver = ;
static int __init stmpe_ts_init(void)
module_init(stmpe_ts_init);
static void __exit stmpe_ts_exit(void)
module_exit(stmpe_ts_exit);
MODULE_AUTHOR("Luotao Fu <l.fu@pengutronix.de>");
MODULE_DESCRIPTION("STMPEXXX touchscreen driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" STMPE_TS_NAME);
