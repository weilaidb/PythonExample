static char *sram_size;
static char *sram_offset;
struct mpc85xx_l2ctlr __iomem *l2ctlr;
static long get_cache_sram_size(void)
static long get_cache_sram_offset(void)
static int __init get_size_from_cmdline(char *str)
static int __init get_offset_from_cmdline(char *str)
__setup("cache-sram-size=", get_size_from_cmdline);
__setup("cache-sram-offset=", get_offset_from_cmdline);
static int __devinit mpc85xx_l2ctlr_of_probe(struct platform_device *dev)
static int __devexit mpc85xx_l2ctlr_of_remove(struct platform_device *dev)
static struct of_device_id mpc85xx_l2ctlr_of_match[] = ;
static struct platform_driver mpc85xx_l2ctlr_of_platform_driver = ;
static __init int mpc85xx_l2ctlr_of_init(void)
static void __exit mpc85xx_l2ctlr_of_exit(void)
subsys_initcall(mpc85xx_l2ctlr_of_init);
module_exit(mpc85xx_l2ctlr_of_exit);
MODULE_DESCRIPTION("Freescale MPC85xx L2 controller init");
MODULE_LICENSE("GPL v2");
