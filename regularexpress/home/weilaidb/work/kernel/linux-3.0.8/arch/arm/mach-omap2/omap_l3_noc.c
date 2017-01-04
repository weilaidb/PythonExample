static irqreturn_t l3_interrupt_handler(int irq, void *_l3)
static int __init omap4_l3_probe(struct platform_device *pdev)
static int __exit omap4_l3_remove(struct platform_device *pdev)
static struct platform_driver omap4_l3_driver = ;
static int __init omap4_l3_init(void)
postcore_initcall_sync(omap4_l3_init);
static void __exit omap4_l3_exit(void)
module_exit(omap4_l3_exit);
