static unsigned char heartbeat_bit_pos[] = ;
static struct heartbeat_data heartbeat_data = ;
static struct resource heartbeat_resource = ;
static struct platform_device heartbeat_device = ;
static struct resource cf_ide_resources[] = ;
static struct platform_device cf_ide_device = ;
static struct platform_device *se7721_devices[] __initdata = ;
static int __init se7721_devices_setup(void)
device_initcall(se7721_devices_setup);
static void __init se7721_setup(char **cmdline_p)
struct sh_machine_vector mv_se7721 __initmv = ;
