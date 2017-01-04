static struct resource smc91x_resources[] = ;
static struct smc91x_platdata smc91x_info = ;
static struct platform_device smc91x_device = ;
static unsigned char heartbeat_bit_pos[] = ;
static struct heartbeat_data heartbeat_data = ;
static struct resource heartbeat_resource = ;
static struct platform_device heartbeat_device = ;
static struct platform_device *se7206_devices[] __initdata = ;
static int __init se7206_devices_setup(void)
device_initcall(se7206_devices_setup);
static int se7206_mode_pins(void)
static struct sh_machine_vector mv_se __initmv = ;
