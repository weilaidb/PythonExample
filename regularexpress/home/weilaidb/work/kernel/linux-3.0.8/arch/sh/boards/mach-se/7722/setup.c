static struct resource heartbeat_resource = ;
static struct platform_device heartbeat_device = ;
static struct smc91x_platdata smc91x_info = ;
static struct resource smc91x_eth_resources[] = ;
static struct platform_device smc91x_eth_device = ;
static struct resource cf_ide_resources[] = ;
static struct platform_device cf_ide_device  = ;
static struct sh_keysc_info sh_keysc_info = ;
static struct resource sh_keysc_resources[] = ;
static struct platform_device sh_keysc_device = ;
static struct platform_device *se7722_devices[] __initdata = ;
static int __init se7722_devices_setup(void)
device_initcall(se7722_devices_setup);
static void __init se7722_setup(char **cmdline_p)
static struct sh_machine_vector mv_se7722 __initmv = ;
