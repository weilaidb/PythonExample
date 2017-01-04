struct omap2430_glue ;
#define glue_to_musb(g)		platform_get_drvdata(g->musb)
static struct timer_list musb_idle_timer;
static void musb_do_idle(unsigned long _musb)
static void omap2430_musb_try_idle(struct musb *musb, unsigned long timeout)
static void omap2430_musb_set_vbus(struct musb *musb, int is_on)
static int omap2430_musb_set_mode(struct musb *musb, u8 musb_mode)
static inline void omap2430_low_level_exit(struct musb *musb)
static inline void omap2430_low_level_init(struct musb *musb)
static int musb_otg_notifications(struct notifier_block *nb,
unsigned long event, void *unused)
static int omap2430_musb_init(struct musb *musb)
static void omap2430_musb_enable(struct musb *musb)
static void omap2430_musb_disable(struct musb *musb)
static int omap2430_musb_exit(struct musb *musb)
static const struct musb_platform_ops omap2430_ops = ;
static u64 omap2430_dmamask = DMA_BIT_MASK(32);
static int __init omap2430_probe(struct platform_device *pdev)
static int __exit omap2430_remove(struct platform_device *pdev)
static int omap2430_runtime_suspend(struct device *dev)
static int omap2430_runtime_resume(struct device *dev)
static struct dev_pm_ops omap2430_pm_ops = ;
#define DEV_PM_OPS	(&omap2430_pm_ops)
#define DEV_PM_OPS	NULL
static struct platform_driver omap2430_driver = ;
MODULE_DESCRIPTION("OMAP2PLUS MUSB Glue Layer");
MODULE_AUTHOR("Felipe Balbi <balbi@ti.com>");
MODULE_LICENSE("GPL v2");
static int __init omap2430_init(void)
subsys_initcall(omap2430_init);
static void __exit omap2430_exit(void)
module_exit(omap2430_exit);
