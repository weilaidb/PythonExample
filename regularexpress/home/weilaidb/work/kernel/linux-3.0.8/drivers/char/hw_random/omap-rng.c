#define RNG_OUT_REG		0x00
#define RNG_STAT_REG		0x04
#define RNG_ALARM_REG		0x24
#define RNG_CONFIG_REG		0x28
#define RNG_REV_REG		0x3c
#define RNG_MASK_REG		0x40
#define RNG_SYSSTATUS		0x44
static void __iomem *rng_base;
static struct clk *rng_ick;
static struct platform_device *rng_dev;
static inline u32 omap_rng_read_reg(int reg)
static inline void omap_rng_write_reg(int reg, u32 val)
static int omap_rng_data_present(struct hwrng *rng, int wait)
static int omap_rng_data_read(struct hwrng *rng, u32 *data)
static struct hwrng omap_rng_ops = ;
static int __devinit omap_rng_probe(struct platform_device *pdev)
static int __exit omap_rng_remove(struct platform_device *pdev)
static int omap_rng_suspend(struct platform_device *pdev, pm_message_t message)
static int omap_rng_resume(struct platform_device *pdev)
#define	omap_rng_suspend	NULL
#define	omap_rng_resume		NULL
MODULE_ALIAS("platform:omap_rng");
static struct platform_driver omap_rng_driver = ;
static int __init omap_rng_init(void)
static void __exit omap_rng_exit(void)
module_init(omap_rng_init);
module_exit(omap_rng_exit);
MODULE_AUTHOR("Deepak Saxena (and others)");
MODULE_LICENSE("GPL");
