static struct resource heartbeat_resource = ;
static struct platform_device heartbeat_device = ;
static struct resource smc91x_eth_resources[] = ;
static struct platform_device smc91x_eth_device = ;
static struct platform_device *se7780_devices[] __initdata = ;
static int __init se7780_devices_setup(void)
device_initcall(se7780_devices_setup);
#define GPIO_PHCR        0xFFEA000E
#define GPIO_PMSELR      0xFFEA0080
#define GPIO_PECR        0xFFEA0008
static void __init se7780_setup(char **cmdline_p)
static struct sh_machine_vector mv_se7780 __initmv = ;
