#define STATUS_LEDS_ON_STUART_PINS 1
static unsigned long trizeps4_pin_config[] __initdata = ;
static unsigned long trizeps4wl_pin_config[] __initdata = ;
static struct mtd_partition trizeps4_partitions[] = ;
static struct physmap_flash_data trizeps4_flash_data[] = ;
static struct resource flash_resource = ;
static struct platform_device flash_device = ;
static struct resource dm9000_resources[] = ;
static struct dm9000_plat_data tri_dm9000_platdata = ;
static struct platform_device dm9000_device = ;
static struct gpio_led trizeps4_led[] = ;
static struct gpio_led_platform_data trizeps4_led_data = ;
static struct platform_device leds_devices = ;
static struct platform_device *trizeps4_devices[] __initdata = ;
static struct platform_device *trizeps4wl_devices[] __initdata = ;
static short trizeps_conxs_bcr;
void board_pcmcia_power(int power)
EXPORT_SYMBOL(board_pcmcia_power);
static void board_backlight_power(int on)
static struct i2c_board_info trizeps4_i2c_devices[] __initdata = ;
static int trizeps4_mci_init(struct device *dev, irq_handler_t mci_detect_int,
void *data)
static void trizeps4_mci_exit(struct device *dev, void *data)
static struct pxamci_platform_data trizeps4_mci_platform_data = ;
static short trizeps_conxs_ircr;
static int trizeps4_irda_startup(struct device *dev)
static void trizeps4_irda_shutdown(struct device *dev)
static void trizeps4_irda_transceiver_mode(struct device *dev, int mode)
static struct pxaficp_platform_data trizeps4_ficp_platform_data = ;
static struct pxaohci_platform_data trizeps4_ohci_platform_data = ;
static struct map_desc trizeps4_io_desc[] __initdata = ;
static struct pxafb_mode_info sharp_lcd_mode = ;
static struct pxafb_mach_info sharp_lcd = ;
static struct pxafb_mode_info toshiba_lcd_mode = ;
static struct pxafb_mach_info toshiba_lcd = ;
static void __init trizeps4_init(void)
static void __init trizeps4_map_io(void)
MACHINE_START(TRIZEPS4, "Keith und Koep Trizeps IV module")
.boot_params	= TRIZEPS4_SDRAM_BASE + 0x100,
.init_machine	= trizeps4_init,
.map_io		= trizeps4_map_io,
.init_irq	= pxa27x_init_irq,
.timer		= &pxa_timer,
MACHINE_END
MACHINE_START(TRIZEPS4WL, "Keith und Koep Trizeps IV-WL module")
.boot_params	= TRIZEPS4_SDRAM_BASE + 0x100,
.init_machine	= trizeps4_init,
.map_io		= trizeps4_map_io,
.init_irq	= pxa27x_init_irq,
.timer		= &pxa_timer,
MACHINE_END
