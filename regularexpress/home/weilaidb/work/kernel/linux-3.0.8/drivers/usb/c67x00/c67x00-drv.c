static void c67x00_probe_sie(struct c67x00_sie *sie,
struct c67x00_device *dev, int sie_num)
static void c67x00_remove_sie(struct c67x00_sie *sie)
static irqreturn_t c67x00_irq(int irq, void *__dev)
static int __devinit c67x00_drv_probe(struct platform_device *pdev)
static int __devexit c67x00_drv_remove(struct platform_device *pdev)
static struct platform_driver c67x00_driver = ;
MODULE_ALIAS("platform:c67x00");
static int __init c67x00_init(void)
static void __exit c67x00_exit(void)
module_init(c67x00_init);
module_exit(c67x00_exit);
MODULE_AUTHOR("Peter Korsgaard, Jan Veldeman, Grant Likely");
MODULE_DESCRIPTION("Cypress C67X00 USB Controller Driver");
MODULE_LICENSE("GPL");
