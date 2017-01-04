struct ux500_glue ;
#define glue_to_musb(g)	platform_get_drvdata(g->musb)
static int ux500_musb_init(struct musb *musb)
static int ux500_musb_exit(struct musb *musb)
static const struct musb_platform_ops ux500_ops = ;
static int __init ux500_probe(struct platform_device *pdev)
static int __exit ux500_remove(struct platform_device *pdev)
static int ux500_suspend(struct device *dev)
static int ux500_resume(struct device *dev)
static const struct dev_pm_ops ux500_pm_ops = ;
#define DEV_PM_OPS	(&ux500_pm_ops)
#define DEV_PM_OPS	NULL
static struct platform_driver ux500_driver = ;
MODULE_DESCRIPTION("UX500 MUSB Glue Layer");
MODULE_AUTHOR("Mian Yousaf Kaukab <mian.yousaf.kaukab@stericsson.com>");
MODULE_LICENSE("GPL v2");
static int __init ux500_init(void)
subsys_initcall(ux500_init);
static void __exit ux500_exit(void)
module_exit(ux500_exit);
