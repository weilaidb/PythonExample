#define DRV_NAME "olpc-xo1"
#define PM_SCLK		0x10
#define PM_IN_SLPCTL	0x20
#define PM_WKXD		0x34
#define PM_WKD		0x30
#define PM_SSC		0x54
#define PM1_CNT		0x08
#define PM_GPE0_STS	0x18
static unsigned long acpi_base;
static unsigned long pms_base;
static void xo1_power_off(void)
static int __devinit olpc_xo1_probe(struct platform_device *pdev)
static int __devexit olpc_xo1_remove(struct platform_device *pdev)
static struct platform_driver cs5535_pms_drv = ;
static struct platform_driver cs5535_acpi_drv = ;
static int __init olpc_xo1_init(void)
static void __exit olpc_xo1_exit(void)
MODULE_AUTHOR("Daniel Drake <dsd@laptop.org>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:cs5535-pms");
module_init(olpc_xo1_init);
module_exit(olpc_xo1_exit);
