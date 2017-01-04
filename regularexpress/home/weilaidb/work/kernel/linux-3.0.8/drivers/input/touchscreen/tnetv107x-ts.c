#define TSC_PENUP_POLL		(HZ / 5)
#define IDLE_TIMEOUT		100
#define TSC_HEAD_SKIP		1
#define TSC_TAIL_SKIP		1
#define TSC_SKIP		(TSC_HEAD_SKIP + TSC_TAIL_SKIP + 1)
#define TSC_SAMPLES		(TSC_SKIP + 1)
struct tsc_regs ;
#define WMODE		BIT(0)
#define TSKIND		BIT(1)
#define ZMEASURE_EN	BIT(2)
#define IDLE		BIT(3)
#define TSC_EN		BIT(4)
#define STOP		BIT(5)
#define ONE_SHOT	BIT(6)
#define SINGLE		BIT(7)
#define AVG		BIT(8)
#define AVGNUM(x)	(((x) & 0x03) <<  9)
#define PVSTC(x)	(((x) & 0x07) << 11)
#define PON		BIT(14)
#define PONBG		BIT(15)
#define AFERST		BIT(16)
#define DATA_VALID	BIT(16)
#define tsc_read(ts, reg)		__raw_readl(&(ts)->regs->reg)
#define tsc_write(ts, reg, val)		__raw_writel(val, &(ts)->regs->reg);
#define tsc_set_bits(ts, reg, val)	\
tsc_write(ts, reg, tsc_read(ts, reg) | (val))
#define tsc_clr_bits(ts, reg, val)	\
tsc_write(ts, reg, tsc_read(ts, reg) & ~(val))
struct sample ;
struct tsc_data ;
static int tsc_read_sample(struct tsc_data *ts, struct sample* sample)
static void tsc_poll(unsigned long data)
static irqreturn_t tsc_irq(int irq, void *dev_id)
static int tsc_start(struct input_dev *dev)
static void tsc_stop(struct input_dev *dev)
static int __devinit tsc_probe(struct platform_device *pdev)
static int __devexit tsc_remove(struct platform_device *pdev)
static struct platform_driver tsc_driver = ;
static int __init tsc_init(void)
static void __exit tsc_exit(void)
module_init(tsc_init);
module_exit(tsc_exit);
MODULE_AUTHOR("Cyril Chemparathy");
MODULE_DESCRIPTION("TNETV107X Touchscreen Driver");
MODULE_ALIAS("platform: tnetv107x-ts");
MODULE_LICENSE("GPL");
