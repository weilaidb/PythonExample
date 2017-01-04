#define RX51_GPIO_SLEEP_IND 162
extern void rx51_video_mem_init(void);
static struct gpio_led gpio_leds[] = ;
static struct gpio_led_platform_data gpio_led_info = ;
static struct platform_device leds_gpio = ;
static struct cpuidle_params rx51_cpuidle_params[] = ;
static struct omap_lcd_config rx51_lcd_config = ;
static struct omap_fbmem_config rx51_fbmem0_config = ;
static struct omap_fbmem_config rx51_fbmem1_config = ;
static struct omap_fbmem_config rx51_fbmem2_config = ;
static struct omap_board_config_kernel rx51_config[] = ;
static void __init rx51_init_early(void)
extern void __init rx51_peripherals_init(void);
static struct omap_board_mux board_mux[] __initdata = ;
static struct omap_musb_board_data musb_board_data = ;
static void __init rx51_init(void)
static void __init rx51_map_io(void)
static void __init rx51_reserve(void)
MACHINE_START(NOKIA_RX51, "Nokia RX-51 board")
.boot_params	= 0x80000100,
.reserve	= rx51_reserve,
.map_io		= rx51_map_io,
.init_early	= rx51_init_early,
.init_irq	= omap_init_irq,
.init_machine	= rx51_init,
.timer		= &omap_timer,
MACHINE_END
