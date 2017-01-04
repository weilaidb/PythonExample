struct smsc911x_platform_config smc911x_info = ;
static struct resource smsc9118_0_resources[] = ;
static struct resource smsc9118_1_resources[] = ;
static struct platform_device smsc9118_0_device = ;
static struct platform_device smsc9118_1_device = ;
static struct resource cf_resources[] = ;
static struct platform_device cf_device  = ;
static struct platform_device *sh2007_devices[] __initdata = ;
static int __init sh2007_io_init(void)
subsys_initcall(sh2007_io_init);
static void __init sh2007_init_irq(void)
static void __init sh2007_setup(char **cmdline_p)
struct sh_machine_vector mv_sh2007 __initmv = ;
