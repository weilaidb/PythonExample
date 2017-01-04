static void __init init_sh03_IRQ(void)
void sh03_time_init(void);
static void __init sh03_setup(char **cmdline_p)
static struct resource cf_ide_resources[] = ;
static struct platform_device cf_ide_device = ;
static struct resource heartbeat_resources[] = ;
static struct platform_device heartbeat_device = ;
static struct platform_device *sh03_devices[] __initdata = ;
static int __init sh03_devices_setup(void)
device_initcall(sh03_devices_setup);
static struct sh_machine_vector mv_sh03 __initmv = ;
