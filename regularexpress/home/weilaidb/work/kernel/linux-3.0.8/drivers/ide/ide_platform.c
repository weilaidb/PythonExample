static void __devinit plat_ide_setup_ports(struct ide_hw *hw,
void __iomem *base,
void __iomem *ctrl,
struct pata_platform_info *pdata,
int irq)
static const struct ide_port_info platform_ide_port_info = ;
static int __devinit plat_ide_probe(struct platform_device *pdev)
static int __devexit plat_ide_remove(struct platform_device *pdev)
static struct platform_driver platform_ide_driver = ;
static int __init platform_ide_init(void)
static void __exit platform_ide_exit(void)
MODULE_DESCRIPTION("Platform IDE driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pata_platform");
module_init(platform_ide_init);
module_exit(platform_ide_exit);
