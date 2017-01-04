enum ;
struct tc6387xb ;
static struct resource tc6387xb_mmc_resources[] = ;
static int tc6387xb_suspend(struct platform_device *dev, pm_message_t state)
static int tc6387xb_resume(struct platform_device *dev)
#define tc6387xb_suspend  NULL
#define tc6387xb_resume   NULL
static void tc6387xb_mmc_pwr(struct platform_device *mmc, int state)
static void tc6387xb_mmc_clk_div(struct platform_device *mmc, int state)
static int tc6387xb_mmc_enable(struct platform_device *mmc)
static int tc6387xb_mmc_disable(struct platform_device *mmc)
static struct tmio_mmc_data tc6387xb_mmc_data = ;
static struct mfd_cell tc6387xb_cells[] = ;
static int __devinit tc6387xb_probe(struct platform_device *dev)
static int __devexit tc6387xb_remove(struct platform_device *dev)
static struct platform_driver tc6387xb_platform_driver = ;
static int __init tc6387xb_init(void)
static void __exit tc6387xb_exit(void)
module_init(tc6387xb_init);
module_exit(tc6387xb_exit);
MODULE_DESCRIPTION("Toshiba TC6387XB core driver");
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Ian Molton");
MODULE_ALIAS("platform:tc6387xb");
