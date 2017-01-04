#define TSC2005_CMD			0x80
#define TSC2005_CMD_NORMAL		0x00
#define TSC2005_CMD_STOP		0x01
#define TSC2005_CMD_12BIT		0x04
#define TSC2005_REG_READ		0x0001
#define TSC2005_REG_PND0		0x0002
#define TSC2005_REG_X			0x0000
#define TSC2005_REG_Y			0x0008
#define TSC2005_REG_Z1			0x0010
#define TSC2005_REG_Z2			0x0018
#define TSC2005_REG_TEMP_HIGH		0x0050
#define TSC2005_REG_CFR0		0x0060
#define TSC2005_REG_CFR1		0x0068
#define TSC2005_REG_CFR2		0x0070
#define TSC2005_CFR0_PRECHARGE_276US	0x0040
#define TSC2005_CFR0_STABTIME_1MS	0x0300
#define TSC2005_CFR0_CLOCK_1MHZ		0x1000
#define TSC2005_CFR0_RESOLUTION12	0x2000
#define TSC2005_CFR0_PENMODE		0x8000
#define TSC2005_CFR0_INITVALUE		(TSC2005_CFR0_STABTIME_1MS    | \
TSC2005_CFR0_CLOCK_1MHZ      | \
TSC2005_CFR0_RESOLUTION12    | \
TSC2005_CFR0_PRECHARGE_276US | \
TSC2005_CFR0_PENMODE)
#define	TSC2005_CFR0_RW_MASK		0x3fff
#define TSC2005_CFR1_BATCHDELAY_4MS	0x0003
#define TSC2005_CFR1_INITVALUE		TSC2005_CFR1_BATCHDELAY_4MS
#define TSC2005_CFR2_MAVE_Z		0x0004
#define TSC2005_CFR2_MAVE_Y		0x0008
#define TSC2005_CFR2_MAVE_X		0x0010
#define TSC2005_CFR2_AVG_7		0x0800
#define TSC2005_CFR2_MEDIUM_15		0x3000
#define TSC2005_CFR2_INITVALUE		(TSC2005_CFR2_MAVE_X	| \
TSC2005_CFR2_MAVE_Y	| \
TSC2005_CFR2_MAVE_Z	| \
TSC2005_CFR2_MEDIUM_15	| \
TSC2005_CFR2_AVG_7)
#define MAX_12BIT			0xfff
#define TSC2005_SPI_MAX_SPEED_HZ	10000000
#define TSC2005_PENUP_TIME_MS		40
struct tsc2005_spi_rd ;
struct tsc2005 ;
static int tsc2005_cmd(struct tsc2005 *ts, u8 cmd)
static int tsc2005_write(struct tsc2005 *ts, u8 reg, u16 value)
static void tsc2005_setup_read(struct tsc2005_spi_rd *rd, u8 reg, bool last)
static int tsc2005_read(struct tsc2005 *ts, u8 reg, u16 *value)
static void tsc2005_update_pen_state(struct tsc2005 *ts,
int x, int y, int pressure)
static irqreturn_t tsc2005_irq_thread(int irq, void *_ts)
static void tsc2005_penup_timer(unsigned long data)
static void tsc2005_start_scan(struct tsc2005 *ts)
static void tsc2005_stop_scan(struct tsc2005 *ts)
static void __tsc2005_disable(struct tsc2005 *ts)
static void __tsc2005_enable(struct tsc2005 *ts)
static ssize_t tsc2005_selftest_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(selftest, S_IRUGO, tsc2005_selftest_show, NULL);
static struct attribute *tsc2005_attrs[] = ;
static mode_t tsc2005_attr_is_visible(struct kobject *kobj,
struct attribute *attr, int n)
static const struct attribute_group tsc2005_attr_group = ;
static void tsc2005_esd_work(struct work_struct *work)
static int tsc2005_open(struct input_dev *input)
static void tsc2005_close(struct input_dev *input)
static void __devinit tsc2005_setup_spi_xfer(struct tsc2005 *ts)
static int __devinit tsc2005_probe(struct spi_device *spi)
static int __devexit tsc2005_remove(struct spi_device *spi)
static int tsc2005_suspend(struct device *dev)
static int tsc2005_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(tsc2005_pm_ops, tsc2005_suspend, tsc2005_resume);
static struct spi_driver tsc2005_driver = ;
static int __init tsc2005_init(void)
module_init(tsc2005_init);
static void __exit tsc2005_exit(void)
module_exit(tsc2005_exit);
MODULE_AUTHOR("Lauri Leukkunen <lauri.leukkunen@nokia.com>");
MODULE_DESCRIPTION("TSC2005 Touchscreen Driver");
MODULE_LICENSE("GPL");
