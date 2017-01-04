static void __init pcontrol_g20_init_early(void)
static void __init init_irq(void)
static struct sam9_smc_config __initdata pcontrol_smc_config[2] = ;
static void __init add_device_pcontrol(void)
static struct at91_usbh_data __initdata usbh_data = ;
static struct at91_udc_data __initdata pcontrol_g20_udc_data = ;
static struct at91_eth_data __initdata macb_data = ;
static struct i2c_board_info __initdata pcontrol_g20_i2c_devices[] = ;
static struct gpio_led pcontrol_g20_leds[] = ;
static struct spi_board_info pcontrol_g20_spi_devices[] = ;
static void __init pcontrol_g20_board_init(void)
MACHINE_START(PCONTROL_G20, "PControl G20")
.timer		= &at91sam926x_timer,
.map_io		= at91sam9260_map_io,
.init_early	= pcontrol_g20_init_early,
.init_irq	= init_irq,
.init_machine	= pcontrol_g20_board_init,
MACHINE_END
