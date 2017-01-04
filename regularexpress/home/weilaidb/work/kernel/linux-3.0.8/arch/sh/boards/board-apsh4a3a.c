static struct mtd_partition nor_flash_partitions[] = ;
static struct physmap_flash_data nor_flash_data = ;
static struct resource nor_flash_resources[] = ;
static struct platform_device nor_flash_device = ;
static struct resource smsc911x_resources[] = ;
static struct smsc911x_platform_config smsc911x_config = ;
static struct platform_device smsc911x_device = ;
static struct platform_device *apsh4a3a_devices[] __initdata = ;
static int __init apsh4a3a_devices_setup(void)
device_initcall(apsh4a3a_devices_setup);
static int apsh4a3a_clk_init(void)
static void __init apsh4a3a_setup(char **cmdline_p)
static void __init apsh4a3a_init_irq(void)
static int apsh4a3a_mode_pins(void)
static struct sh_machine_vector mv_apsh4a3a __initmv = ;
