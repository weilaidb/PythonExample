static unsigned long palmt5_pin_config[] __initdata = ;
#if defined(CONFIG_KEYBOARD_PXA27x) || defined(CONFIG_KEYBOARD_PXA27x_MODULE)
static unsigned int palmt5_matrix_keys[] = ;
static struct pxa27x_keypad_platform_data palmt5_keypad_platform_data = ;
static void __init palmt5_kpc_init(void)
static inline void palmt5_kpc_init(void)
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button palmt5_pxa_buttons[] = ;
static struct gpio_keys_platform_data palmt5_pxa_keys_data = ;
static struct platform_device palmt5_pxa_keys = ;
static void __init palmt5_keys_init(void)
static inline void palmt5_keys_init(void)
static void __init palmt5_reserve(void)
static void __init palmt5_init(void)
MACHINE_START(PALMT5, "Palm Tungsten|T5")
.boot_params	= 0xa0000100,
.map_io		= pxa27x_map_io,
.reserve	= palmt5_reserve,
.init_irq	= pxa27x_init_irq,
.timer		= &pxa_timer,
.init_machine	= palmt5_init
MACHINE_END
