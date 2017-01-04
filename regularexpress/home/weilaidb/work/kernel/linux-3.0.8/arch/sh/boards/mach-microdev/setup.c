static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
static struct s1d13xxxfb_regval s1d13806_initregs[] = ;
static struct s1d13xxxfb_pdata s1d13806_platform_data = ;
static struct resource s1d13806_resources[] = ;
static struct platform_device s1d13806_device = ;
static struct platform_device *microdev_devices[] __initdata = ;
static int __init microdev_devices_setup(void)
device_initcall(microdev_devices_setup);
static struct sh_machine_vector mv_sh4202_microdev __initmv = ;
