static unsigned long pcm027_pin_config[] __initdata = ;
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
static struct pxa2xx_spi_master pxa_ssp_master_info = ;
static struct max7301_platform_data max7301_info = ;
static struct spi_board_info spi_board_info[] __initdata = ;
static struct physmap_flash_data pcm027_flash_data = ;
static struct resource pcm027_flash_resource = ;
static struct platform_device pcm027_flash = ;
static struct gpio_led pcm027_led[] = ;
static struct gpio_led_platform_data pcm027_led_data = ;
static struct platform_device pcm027_led_dev = ;
static struct platform_device *devices[] __initdata = ;
static void __init pcm027_init(void)
static void __init pcm027_map_io(void)
MACHINE_START(PCM027, "Phytec Messtechnik GmbH phyCORE-PXA270")
.boot_params	= 0xa0000100,
.map_io		= pcm027_map_io,
.nr_irqs	= PCM027_NR_IRQS,
.init_irq	= pxa27x_init_irq,
.timer		= &pxa_timer,
.init_machine	= pcm027_init,
MACHINE_END
