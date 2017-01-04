#define LPC32XX_TSC_STAT			0x00
#define LPC32XX_TSC_SEL				0x04
#define LPC32XX_TSC_CON				0x08
#define LPC32XX_TSC_FIFO			0x0C
#define LPC32XX_TSC_DTR				0x10
#define LPC32XX_TSC_RTR				0x14
#define LPC32XX_TSC_UTR				0x18
#define LPC32XX_TSC_TTR				0x1C
#define LPC32XX_TSC_DXP				0x20
#define LPC32XX_TSC_MIN_X			0x24
#define LPC32XX_TSC_MAX_X			0x28
#define LPC32XX_TSC_MIN_Y			0x2C
#define LPC32XX_TSC_MAX_Y			0x30
#define LPC32XX_TSC_AUX_UTR			0x34
#define LPC32XX_TSC_AUX_MIN			0x38
#define LPC32XX_TSC_AUX_MAX			0x3C
#define LPC32XX_TSC_STAT_FIFO_OVRRN		(1 << 8)
#define LPC32XX_TSC_STAT_FIFO_EMPTY		(1 << 7)
#define LPC32XX_TSC_SEL_DEFVAL			0x0284
#define LPC32XX_TSC_ADCCON_IRQ_TO_FIFO_4	(0x1 << 11)
#define LPC32XX_TSC_ADCCON_X_SAMPLE_SIZE(s)	((10 - (s)) << 7)
#define LPC32XX_TSC_ADCCON_Y_SAMPLE_SIZE(s)	((10 - (s)) << 4)
#define LPC32XX_TSC_ADCCON_POWER_UP		(1 << 2)
#define LPC32XX_TSC_ADCCON_AUTO_EN		(1 << 0)
#define LPC32XX_TSC_FIFO_TS_P_LEVEL		(1 << 31)
#define LPC32XX_TSC_FIFO_NORMALIZE_X_VAL(x)	(((x) & 0x03FF0000) >> 16)
#define LPC32XX_TSC_FIFO_NORMALIZE_Y_VAL(y)	((y) & 0x000003FF)
#define LPC32XX_TSC_ADCDAT_VALUE_MASK		0x000003FF
#define LPC32XX_TSC_MIN_XY_VAL			0x0
#define LPC32XX_TSC_MAX_XY_VAL			0x3FF
#define MOD_NAME "ts-lpc32xx"
#define tsc_readl(dev, reg) \
__raw_readl((dev)->tsc_base + (reg))
#define tsc_writel(dev, reg, val) \
__raw_writel((val), (dev)->tsc_base + (reg))
struct lpc32xx_tsc ;
static void lpc32xx_fifo_clear(struct lpc32xx_tsc *tsc)
static irqreturn_t lpc32xx_ts_interrupt(int irq, void *dev_id)
static void lpc32xx_stop_tsc(struct lpc32xx_tsc *tsc)
static void lpc32xx_setup_tsc(struct lpc32xx_tsc *tsc)
static int lpc32xx_ts_open(struct input_dev *dev)
static void lpc32xx_ts_close(struct input_dev *dev)
static int __devinit lpc32xx_ts_probe(struct platform_device *pdev)
static int __devexit lpc32xx_ts_remove(struct platform_device *pdev)
static int lpc32xx_ts_suspend(struct device *dev)
static int lpc32xx_ts_resume(struct device *dev)
static const struct dev_pm_ops lpc32xx_ts_pm_ops = ;
#define LPC32XX_TS_PM_OPS (&lpc32xx_ts_pm_ops)
#define LPC32XX_TS_PM_OPS NULL
static struct platform_driver lpc32xx_ts_driver = ;
static int __init lpc32xx_ts_init(void)
module_init(lpc32xx_ts_init);
static void __exit lpc32xx_ts_exit(void)
module_exit(lpc32xx_ts_exit);
MODULE_AUTHOR("Kevin Wells <kevin.wells@nxp.com");
MODULE_DESCRIPTION("LPC32XX TSC Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:lpc32xx_ts");
