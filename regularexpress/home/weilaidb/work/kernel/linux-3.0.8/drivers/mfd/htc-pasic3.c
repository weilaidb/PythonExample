struct pasic3_data ;
#define REG_ADDR  5
#define REG_DATA  6
#define READ_MODE 0x80
void pasic3_write_register(struct device *dev, u32 reg, u8 val)
EXPORT_SYMBOL(pasic3_write_register);
u8 pasic3_read_register(struct device *dev, u32 reg)
EXPORT_SYMBOL(pasic3_read_register);
static struct mfd_cell led_cell __initdata = ;
static int ds1wm_enable(struct platform_device *pdev)
static int ds1wm_disable(struct platform_device *pdev)
static struct ds1wm_driver_data ds1wm_pdata = ;
static struct resource ds1wm_resources[] __initdata = ;
static struct mfd_cell ds1wm_cell __initdata = ;
static int __init pasic3_probe(struct platform_device *pdev)
static int pasic3_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:pasic3");
static struct platform_driver pasic3_driver = ;
static int __init pasic3_base_init(void)
static void __exit pasic3_base_exit(void)
module_init(pasic3_base_init);
module_exit(pasic3_base_exit);
MODULE_AUTHOR("Philipp Zabel <philipp.zabel@gmail.com>");
MODULE_DESCRIPTION("Core driver for HTC PASIC3");
MODULE_LICENSE("GPL");
