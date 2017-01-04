static struct resource smsc911x_resources[] = ;
static struct smsc911x_platform_config smsc911x_config = ;
static struct platform_device smsc911x_device = ;
static struct platform_device *apsh4ad0a_devices[] __initdata = ;
static int __init apsh4ad0a_devices_setup(void)
device_initcall(apsh4ad0a_devices_setup);
static int apsh4ad0a_mode_pins(void)
static int apsh4ad0a_clk_init(void)
static void __init apsh4ad0a_setup(char **cmdline_p)
static void __init apsh4ad0a_init_irq(void)
static struct sh_machine_vector mv_apsh4ad0a __initmv = ;
