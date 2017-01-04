struct plat_nand_data ;
static int __devinit plat_nand_probe(struct platform_device *pdev)
static int __devexit plat_nand_remove(struct platform_device *pdev)
static struct platform_driver plat_nand_driver = ;
static int __init plat_nand_init(void)
static void __exit plat_nand_exit(void)
module_init(plat_nand_init);
module_exit(plat_nand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vitaly Wool");
MODULE_DESCRIPTION("Simple generic NAND driver");
MODULE_ALIAS("platform:gen_nand");
