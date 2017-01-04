static struct resource heartbeat_resource = ;
static struct platform_device heartbeat_device = ;
static struct smc91x_platdata smc91x_info = ;
static struct resource smc91x_eth_resources[] = ;
static struct platform_device smc91x_eth_device = ;
static struct mtd_partition nor_flash_partitions[] = ;
static struct physmap_flash_data nor_flash_data = ;
static struct resource nor_flash_resources[] = ;
static struct platform_device nor_flash_device = ;
static struct platform_device *urquell_devices[] __initdata = ;
static int __init urquell_devices_setup(void)
device_initcall(urquell_devices_setup);
static void urquell_power_off(void)
static void __init urquell_init_irq(void)
static int urquell_mode_pins(void)
static int urquell_clk_init(void)
static void __init urquell_setup(char **cmdline_p)
static struct sh_machine_vector mv_urquell __initmv = ;
