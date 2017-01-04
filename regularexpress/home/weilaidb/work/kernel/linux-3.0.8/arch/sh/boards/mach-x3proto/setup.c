static struct resource heartbeat_resources[] = ;
static struct platform_device heartbeat_device = ;
static struct smc91x_platdata smc91x_info = ;
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
static struct r8a66597_platdata r8a66597_data = ;
static struct resource r8a66597_usb_host_resources[] = ;
static struct platform_device r8a66597_usb_host_device = ;
static struct m66592_platdata usbf_platdata = ;
static struct resource m66592_usb_peripheral_resources[] = ;
static struct platform_device m66592_usb_peripheral_device = ;
static struct gpio_keys_button baseboard_buttons[NR_BASEBOARD_GPIOS] = ;
static struct gpio_keys_platform_data baseboard_buttons_data = ;
static struct platform_device baseboard_buttons_device = ;
static struct platform_device *x3proto_devices[] __initdata = ;
static void __init x3proto_init_irq(void)
static int __init x3proto_devices_setup(void)
device_initcall(x3proto_devices_setup);
static void __init x3proto_setup(char **cmdline_p)
static struct sh_machine_vector mv_x3proto __initmv = ;
