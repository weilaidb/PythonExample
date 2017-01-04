static unsigned char heartbeat_bit_pos[] = ;
static struct heartbeat_data heartbeat_data = ;
static struct resource heartbeat_resources[] = ;
static struct platform_device heartbeat_device = ;
static struct platform_device *se7751_devices[] __initdata = ;
static int __init se7751_devices_setup(void)
device_initcall(se7751_devices_setup);
static struct sh_machine_vector mv_7751se __initmv = ;
