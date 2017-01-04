static void __init cpu9krea_init_early(void)
static void __init cpu9krea_init_irq(void)
static struct at91_usbh_data __initdata cpu9krea_usbh_data = ;
static struct at91_udc_data __initdata cpu9krea_udc_data = ;
static struct at91_eth_data __initdata cpu9krea_macb_data = ;
static struct atmel_nand_data __initdata cpu9krea_nand_data = ;
static struct sam9_smc_config __initdata cpu9krea_nand_smc_config = ;
static struct sam9_smc_config __initdata cpu9krea_nand_smc_config = ;
static void __init cpu9krea_add_device_nand(void)
static struct physmap_flash_data cpuat9260_nor_data = ;
#define NOR_BASE	AT91_CHIPSELECT_0
#define NOR_SIZE	SZ_64M
static struct resource nor_flash_resources[] = ;
static struct platform_device cpu9krea_nor_flash = ;
static struct sam9_smc_config __initdata cpu9krea_nor_smc_config = ;
static struct sam9_smc_config __initdata cpu9krea_nor_smc_config = ;
static __init void cpu9krea_add_device_nor(void)
static struct gpio_led cpu9krea_leds[] = ;
static struct i2c_board_info __initdata cpu9krea_i2c_devices[] = ;
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button cpu9krea_buttons[] = ;
static struct gpio_keys_platform_data cpu9krea_button_data = ;
static struct platform_device cpu9krea_button_device = ;
static void __init cpu9krea_add_device_buttons(void)
static void __init cpu9krea_add_device_buttons(void)
static struct at91_mmc_data __initdata cpu9krea_mmc_data = ;
static void __init cpu9krea_board_init(void)
MACHINE_START(CPUAT9260, "Eukrea CPU9260")
MACHINE_START(CPUAT9G20, "Eukrea CPU9G20")
.timer		= &at91sam926x_timer,
.map_io		= at91sam9260_map_io,
.init_early	= cpu9krea_init_early,
.init_irq	= cpu9krea_init_irq,
.init_machine	= cpu9krea_board_init,
MACHINE_END
