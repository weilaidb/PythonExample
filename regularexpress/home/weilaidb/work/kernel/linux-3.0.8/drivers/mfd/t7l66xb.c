enum ;
static const struct resource t7l66xb_mmc_resources[] = ;
#define SCR_REVID	0x08
#define SCR_IMR		0x42
#define SCR_DEV_CTL	0xe0
#define SCR_ISR		0xe1
#define SCR_GPO_OC	0xf0
#define SCR_GPO_OS	0xf1
#define SCR_GPI_S	0xf2
#define SCR_APDC	0xf8
#define SCR_DEV_CTL_USB		BIT(0)
#define SCR_DEV_CTL_MMC		BIT(1)
struct t7l66xb ;
static int t7l66xb_mmc_enable(struct platform_device *mmc)
static int t7l66xb_mmc_disable(struct platform_device *mmc)
static void t7l66xb_mmc_pwr(struct platform_device *mmc, int state)
static void t7l66xb_mmc_clk_div(struct platform_device *mmc, int state)
static struct tmio_mmc_data t7166xb_mmc_data = ;
static const struct resource t7l66xb_nand_resources[] = ;
static struct mfd_cell t7l66xb_cells[] = ;
static void t7l66xb_irq(unsigned int irq, struct irq_desc *desc)
static void t7l66xb_irq_mask(struct irq_data *data)
static void t7l66xb_irq_unmask(struct irq_data *data)
static struct irq_chip t7l66xb_chip = ;
static void t7l66xb_attach_irq(struct platform_device *dev)
static void t7l66xb_detach_irq(struct platform_device *dev)
static int t7l66xb_suspend(struct platform_device *dev, pm_message_t state)
static int t7l66xb_resume(struct platform_device *dev)
#define t7l66xb_suspend NULL
#define t7l66xb_resume	NULL
static int t7l66xb_probe(struct platform_device *dev)
static int t7l66xb_remove(struct platform_device *dev)
static struct platform_driver t7l66xb_platform_driver = ;
static int __init t7l66xb_init(void)
static void __exit t7l66xb_exit(void)
module_init(t7l66xb_init);
module_exit(t7l66xb_exit);
MODULE_DESCRIPTION("Toshiba T7L66XB core driver");
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Ian Molton");
MODULE_ALIAS("platform:t7l66xb");
