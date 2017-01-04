static void __init smsc_config(int index, int data)
static void __init smsc_setup(char **cmdline_p)
static struct resource cf_ide_resources[] = ;
static struct platform_device cf_ide_device  = ;
static unsigned char heartbeat_bit_pos[] = ;
static struct heartbeat_data heartbeat_data = ;
static struct resource heartbeat_resource = ;
static struct platform_device heartbeat_device = ;
#if defined(CONFIG_CPU_SUBTYPE_SH7710) ||\
defined(CONFIG_CPU_SUBTYPE_SH7712)
static struct resource sh_eth0_resources[] = ;
static struct platform_device sh_eth0_device = ;
static struct resource sh_eth1_resources[] = ;
static struct platform_device sh_eth1_device = ;
static struct platform_device *se_devices[] __initdata = ;
static int __init se_devices_setup(void)
device_initcall(se_devices_setup);
static struct sh_machine_vector mv_se __initmv = ;
